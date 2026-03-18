/*
 * XREFs of ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C008144C
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0010634 (GreTransferSpriteStateToDwmState.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0089B78 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00816B4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C00830A4 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0087E70 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C027E6D4 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GdiDeleteSprite(HDEV a1, HWND a2, void *a3)
{
  HDEV v6; // rbp
  unsigned int v7; // ebx
  struct _SPRITESTATE *v8; // rcx
  struct SPRITE *Sprite; // rax
  struct SPRITE *v10; // rbp
  __int64 v11; // rcx
  int v12; // esi
  struct _METASPRITE *MetaSprite; // rdi
  unsigned int v15; // r9d
  unsigned int v16; // r15d
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rcx
  int v21; // eax
  _DWORD *v22; // rax
  unsigned int v23; // r14d
  __int64 v24; // rcx
  __int64 i; // rax
  __int64 v26; // rdi
  __int64 v27; // rcx
  W32PIDLOCK *v28; // r14
  int v29; // eax
  HDEV v30; // [rsp+20h] [rbp-58h] BYREF
  __int64 v31; // [rsp+28h] [rbp-50h]
  W32PIDLOCK *v32; // [rsp+30h] [rbp-48h]
  _BYTE v33[64]; // [rsp+38h] [rbp-40h] BYREF
  int v36; // [rsp+98h] [rbp+20h]

  v30 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v33, (struct PDEVOBJ *)&v30);
  v6 = v30;
  v7 = 0;
  v8 = (struct _SPRITESTATE *)(v30 + 22);
  if ( !*((_DWORD *)v30 + 37) )
  {
    Sprite = pSpGetSprite(v8, a2, a3);
    v10 = Sprite;
    if ( Sprite )
    {
      v11 = *((_QWORD *)Sprite + 16);
      v12 = 1;
      if ( !v11 )
        goto LABEL_4;
      v26 = SURFOBJ_TO_SURFACE_NOT_NULL(v11);
      if ( !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v26) )
        goto LABEL_4;
      v28 = (W32PIDLOCK *)(v27 + 272);
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v27 + 272));
      if ( *(_DWORD *)(v26 + 324) )
      {
        v29 = *(_DWORD *)(v26 + 116);
        if ( (v29 & 2) == 0 )
        {
          *(_QWORD *)(v26 + 496) = a1;
          *(_DWORD *)(v26 + 116) = v29 | 2;
          *(_QWORD *)(v26 + 504) = a2;
          *(_QWORD *)(v26 + 512) = a3;
          *(_DWORD *)(v26 + 520) = 1;
          *(_DWORD *)v10 |= 0x400u;
        }
        v12 = 0;
      }
      W32PIDLOCK::vUnlockSingleThread(v28);
      if ( v12 )
LABEL_4:
        vSpDeleteSprite(v10);
      goto LABEL_5;
    }
LABEL_6:
    v7 = -2143354870;
    goto LABEL_5;
  }
  MetaSprite = pSpGetMetaSprite(v8, a2, a3);
  if ( !MetaSprite )
    goto LABEL_6;
  v16 = 0;
  v36 = 1;
  v17 = 1;
  if ( !v15 )
    goto LABEL_20;
  do
  {
    v31 = *((_QWORD *)MetaSprite + v16 + 3);
    v18 = *(_QWORD *)(v31 + 128);
    if ( v18 )
    {
      v19 = SURFOBJ_TO_SURFACE_NOT_NULL(v18);
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v19) )
      {
        v32 = (W32PIDLOCK *)(v20 + 272);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v20 + 272));
        if ( *(_DWORD *)(v19 + 324) )
        {
          v21 = *(_DWORD *)(v19 + 116);
          if ( (v21 & 2) == 0 )
          {
            *(_DWORD *)(v19 + 116) = v21 | 2;
            v22 = (_DWORD *)v31;
            *(_QWORD *)(v19 + 496) = a1;
            *(_QWORD *)(v19 + 504) = a2;
            *(_QWORD *)(v19 + 512) = a3;
            *(_DWORD *)(v19 + 520) = 1;
            *v22 |= 0x400u;
            *((_DWORD *)MetaSprite + 4) |= 0x400u;
          }
          v17 = 0;
          v36 = 0;
        }
        else
        {
          v17 = v36;
        }
        W32PIDLOCK::vUnlockSingleThread(v32);
      }
      else
      {
        v17 = v36;
      }
    }
    v15 = *((_DWORD *)v6 + 37);
    ++v16;
  }
  while ( v16 < v15 );
  if ( v17 )
  {
LABEL_20:
    v23 = 0;
    if ( v15 )
    {
      do
        vSpDeleteSprite(*((struct SPRITE **)MetaSprite + v23++ + 3));
      while ( v23 < *((_DWORD *)v6 + 37) );
    }
    v24 = *((_QWORD *)v6 + 20);
    if ( (struct _METASPRITE *)v24 == MetaSprite )
    {
      *((_QWORD *)v6 + 20) = *((_QWORD *)MetaSprite + 1);
    }
    else
    {
      for ( i = *(_QWORD *)(v24 + 8); (struct _METASPRITE *)i != MetaSprite; i = *(_QWORD *)(i + 8) )
        v24 = i;
      *(_QWORD *)(v24 + 8) = *((_QWORD *)MetaSprite + 1);
    }
    Win32FreePool(MetaSprite);
  }
LABEL_5:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v33);
  return v7;
}
