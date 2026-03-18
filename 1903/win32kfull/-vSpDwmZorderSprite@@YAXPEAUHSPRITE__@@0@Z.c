/*
 * XREFs of ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C002AB10
 * Callers:
 *     GreZorderSprite @ 0x1C0029BEC (GreZorderSprite.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C012B954 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00296A4 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C002AC10 (DwmAsyncZorderSprite.c)
 */

void __fastcall vSpDwmZorderSprite(HSPRITE a1, HSPRITE a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  void *v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v13, a1);
  v14 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v14, a2);
  v3 = v13;
  v4 = v14;
  if ( v13 )
  {
    v5 = (_QWORD *)(v13 + 24);
    v6 = *(_QWORD *)(v13 + 24);
    if ( *(_QWORD *)(v6 + 8) == v13 + 24 )
    {
      v7 = *(_QWORD **)(v13 + 32);
      if ( (_QWORD *)*v7 == v5 )
      {
        *v7 = v6;
        *(_QWORD *)(v6 + 8) = v7;
        if ( v4 )
        {
          v8 = (_QWORD *)(v4 + 24);
          v9 = *(_QWORD *)(v4 + 24);
          if ( *(_QWORD *)(v9 + 8) == v4 + 24 )
          {
            *v5 = v9;
            *(_QWORD *)(v3 + 32) = v8;
            *(_QWORD *)(v9 + 8) = v5;
            *v8 = v5;
LABEL_7:
            v10 = (void *)UserReferenceDwmApiPort();
            DwmAsyncZorderSprite(v10);
            goto LABEL_8;
          }
        }
        else
        {
          v11 = (_QWORD *)((char *)g_pDwmState + 80);
          v12 = *((_QWORD *)g_pDwmState + 10);
          if ( *(struct DwmState **)(v12 + 8) == (struct DwmState *)((char *)g_pDwmState + 80) )
          {
            *v5 = v12;
            *(_QWORD *)(v3 + 32) = v11;
            *(_QWORD *)(v12 + 8) = v5;
            *v11 = v5;
            goto LABEL_7;
          }
        }
      }
    }
    __fastfail(3u);
  }
LABEL_8:
  if ( v4 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
    v3 = v13;
  }
  if ( v3 )
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
}
