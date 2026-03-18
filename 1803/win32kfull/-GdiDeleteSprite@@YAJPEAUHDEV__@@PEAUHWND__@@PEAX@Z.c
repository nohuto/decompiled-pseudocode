/*
 * XREFs of ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0249E74
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00C40E8 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00AB63C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0250548 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C02505B0 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0252FA8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

__int64 __fastcall GdiDeleteSprite(HDEV a1, HWND a2, void *a3)
{
  HDEV v6; // rbp
  unsigned int v7; // ebx
  const struct _SPRITESTATE *v8; // rcx
  struct _METASPRITE *MetaSprite; // rdi
  unsigned int v10; // r9d
  unsigned int v11; // r15d
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rcx
  int v16; // eax
  _DWORD *v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rcx
  __int64 i; // rax
  struct SPRITE *Sprite; // rax
  struct SPRITE *v22; // rbp
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rdi
  __int64 v26; // rcx
  W32PIDLOCK *v27; // r14
  int v28; // eax
  HDEV v30; // [rsp+20h] [rbp-58h] BYREF
  __int64 v31; // [rsp+28h] [rbp-50h]
  W32PIDLOCK *v32; // [rsp+30h] [rbp-48h]
  _BYTE v33[64]; // [rsp+38h] [rbp-40h] BYREF
  int v36; // [rsp+98h] [rbp+20h]

  v30 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v33, (struct PDEVOBJ *)&v30);
  v6 = v30;
  v7 = 0;
  v8 = (const struct _SPRITESTATE *)(v30 + 20);
  if ( *((_DWORD *)v30 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v8, a2, a3);
    if ( MetaSprite )
    {
      v11 = 0;
      v36 = 1;
      v12 = 1;
      if ( !v10 )
        goto LABEL_15;
      do
      {
        v31 = *((_QWORD *)MetaSprite + v11 + 3);
        v13 = *(_QWORD *)(v31 + 128);
        if ( v13 )
        {
          v14 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
          if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v14) )
          {
            v32 = (W32PIDLOCK *)(v15 + 272);
            W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v15 + 272));
            if ( *(_DWORD *)(v14 + 324) )
            {
              v16 = *(_DWORD *)(v14 + 116);
              if ( (v16 & 2) == 0 )
              {
                *(_DWORD *)(v14 + 116) = v16 | 2;
                v17 = (_DWORD *)v31;
                *(_QWORD *)(v14 + 496) = a1;
                *(_QWORD *)(v14 + 504) = a2;
                *(_QWORD *)(v14 + 512) = a3;
                *(_DWORD *)(v14 + 520) = 1;
                *v17 |= 0x400u;
                *((_DWORD *)MetaSprite + 4) |= 0x400u;
              }
              v12 = 0;
              v36 = 0;
            }
            else
            {
              v12 = v36;
            }
            W32PIDLOCK::vUnlockSingleThread(v32);
          }
          else
          {
            v12 = v36;
          }
        }
        v10 = *((_DWORD *)v6 + 35);
        ++v11;
      }
      while ( v11 < v10 );
      if ( v12 )
      {
LABEL_15:
        v18 = 0;
        if ( v10 )
        {
          do
            vSpDeleteSprite(*((struct SPRITE **)MetaSprite + v18++ + 3));
          while ( v18 < *((_DWORD *)v6 + 35) );
        }
        v19 = *((_QWORD *)v6 + 19);
        if ( (struct _METASPRITE *)v19 == MetaSprite )
        {
          *((_QWORD *)v6 + 19) = *((_QWORD *)MetaSprite + 1);
        }
        else
        {
          for ( i = *(_QWORD *)(v19 + 8); (struct _METASPRITE *)i != MetaSprite; i = *(_QWORD *)(i + 8) )
            v19 = i;
          *(_QWORD *)(v19 + 8) = *((_QWORD *)MetaSprite + 1);
        }
        Win32FreePool(MetaSprite);
      }
      goto LABEL_34;
    }
LABEL_33:
    v7 = -2143354870;
    goto LABEL_34;
  }
  Sprite = pSpGetSprite(v8, a2, a3);
  v22 = Sprite;
  if ( !Sprite )
    goto LABEL_33;
  v23 = *((_QWORD *)Sprite + 16);
  v24 = 1;
  if ( !v23 )
    goto LABEL_32;
  v25 = SURFOBJ_TO_SURFACE_NOT_NULL(v23);
  if ( !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v25) )
    goto LABEL_32;
  v27 = (W32PIDLOCK *)(v26 + 272);
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v26 + 272));
  if ( *(_DWORD *)(v25 + 324) )
  {
    v28 = *(_DWORD *)(v25 + 116);
    if ( (v28 & 2) == 0 )
    {
      *(_QWORD *)(v25 + 496) = a1;
      *(_DWORD *)(v25 + 116) = v28 | 2;
      *(_QWORD *)(v25 + 504) = a2;
      *(_QWORD *)(v25 + 512) = a3;
      *(_DWORD *)(v25 + 520) = 1;
      *(_DWORD *)v22 |= 0x400u;
    }
    v24 = 0;
  }
  W32PIDLOCK::vUnlockSingleThread(v27);
  if ( v24 )
LABEL_32:
    vSpDeleteSprite(v22);
LABEL_34:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v33);
  return v7;
}
