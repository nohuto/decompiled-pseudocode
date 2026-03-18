/*
 * XREFs of GreEnableMirrorRendering @ 0x1C02693D8
 * Callers:
 *     NtUserSetMirrorRendering @ 0x1C021CEA0 (NtUserSetMirrorRendering.c)
 * Callees:
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C000B1C8 (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C009693C (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0265B68 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreEnableMirrorRendering(__int64 a1, HWND a2)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  const struct _SPRITESTATE *v5; // rcx
  HWND *MetaSprite; // rax
  HWND *v7; // rbp
  __int64 v8; // rbx
  struct SPRITE *Sprite; // rbx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v11 = a1;
  v3 = 0;
  v13 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( v11 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v12, (struct PDEVOBJ *)&v11);
    v4 = v11;
    v5 = (const struct _SPRITESTATE *)(v11 + 88);
    if ( *(_DWORD *)(v11 + 148) )
    {
      MetaSprite = pSpGetMetaSprite(v5, a2, 0LL);
      v7 = MetaSprite;
      if ( MetaSprite )
      {
        *((_DWORD *)MetaSprite + 4) &= ~0x100u;
        if ( *(_DWORD *)(v4 + 148) )
        {
          do
          {
            v8 = v3;
            vSpDeleteExMirror(*(_QWORD **)(*(_QWORD *)(v4 + 152) + 8LL * v3++));
            *(_DWORD *)v7[v8 + 3] &= ~0x100u;
            *((_DWORD *)v7[v8 + 3] + 56) &= ~0x10000000u;
          }
          while ( v3 < *(_DWORD *)(v4 + 148) );
        }
        goto LABEL_9;
      }
    }
    else
    {
      Sprite = pSpGetSprite(v5, a2, 0LL);
      if ( Sprite )
      {
        vSpDeleteExMirror(*(_QWORD **)(v4 + 88));
        *(_DWORD *)Sprite &= ~0x100u;
        *((_DWORD *)Sprite + 56) &= ~0x10000000u;
LABEL_9:
        v3 = 1;
      }
    }
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v12);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v3;
}
