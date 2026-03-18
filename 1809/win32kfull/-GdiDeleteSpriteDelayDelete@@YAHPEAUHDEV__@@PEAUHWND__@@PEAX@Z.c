/*
 * XREFs of ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0261F00
 * Callers:
 *     GreDeleteSpriteDelayDelete @ 0x1C025360C (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000B1F4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00106C4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0265B9C (-pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0265BD0 (-pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GdiDeleteSpriteDelayDelete(HDEV a1, HWND a2, void *a3)
{
  unsigned int v5; // edi
  HDEV v6; // rbp
  const struct _SPRITESTATE *v7; // rcx
  struct _METASPRITE *v8; // rsi
  int v9; // r9d
  unsigned int v10; // r14d
  __int64 v11; // r13
  __int64 v12; // rcx
  SURFACE *v13; // rax
  __int64 v14; // rcx
  W32PIDLOCK *v15; // rbx
  unsigned int v16; // r9d
  __int64 v17; // rcx
  __int64 i; // rax
  struct SPRITE *v19; // rax
  struct SPRITE *v20; // rsi
  __int64 v21; // rcx
  SURFACE *v22; // rax
  __int64 v23; // rcx
  W32PIDLOCK *v24; // rbx
  HDEV v26; // [rsp+50h] [rbp+8h] BYREF
  char v27; // [rsp+68h] [rbp+20h] BYREF

  v26 = a1;
  v5 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v27, (struct PDEVOBJ *)&v26);
  v6 = v26;
  v7 = (const struct _SPRITESTATE *)(v26 + 22);
  if ( *((_DWORD *)v26 + 37) )
  {
    v8 = pSpGetMetaSpriteDelayDelete(v7, a2, a3);
    if ( v8 )
    {
      v10 = 0;
      if ( v9 )
      {
        do
        {
          v11 = *((_QWORD *)v8 + v10 + 3);
          v12 = *(_QWORD *)(v11 + 128);
          if ( v12 )
          {
            v13 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v12);
            if ( (unsigned int)SURFACE::bRedirectionBitmap(v13) )
            {
              v15 = (W32PIDLOCK *)(v14 + 272);
              W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v14 + 272));
              *(_DWORD *)v11 &= ~0x400u;
              *((_DWORD *)v8 + 4) &= ~0x400u;
              W32PIDLOCK::vUnlockSingleThread(v15);
            }
          }
          v16 = *((_DWORD *)v6 + 37);
          ++v10;
        }
        while ( v10 < v16 );
        if ( v16 )
        {
          do
            vSpDeleteSprite(*((struct SPRITE **)v8 + v5++ + 3));
          while ( v5 < *((_DWORD *)v6 + 37) );
        }
      }
      v17 = *((_QWORD *)v6 + 20);
      if ( (struct _METASPRITE *)v17 == v8 )
      {
        *((_QWORD *)v6 + 20) = *((_QWORD *)v8 + 1);
      }
      else
      {
        for ( i = *(_QWORD *)(v17 + 8); (struct _METASPRITE *)i != v8; i = *(_QWORD *)(i + 8) )
          v17 = i;
        *(_QWORD *)(v17 + 8) = *((_QWORD *)v8 + 1);
      }
      Win32FreePool(v8);
LABEL_22:
      v5 = 1;
    }
  }
  else
  {
    v19 = pSpGetSpriteDelayDelete(v7, a2, a3);
    v20 = v19;
    if ( v19 )
    {
      v21 = *((_QWORD *)v19 + 16);
      if ( v21 )
      {
        v22 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v21);
        if ( (unsigned int)SURFACE::bRedirectionBitmap(v22) )
        {
          v24 = (W32PIDLOCK *)(v23 + 272);
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v23 + 272));
          *(_DWORD *)v20 &= ~0x400u;
          W32PIDLOCK::vUnlockSingleThread(v24);
        }
      }
      vSpDeleteSprite(v20);
      goto LABEL_22;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v27);
  return v5;
}
