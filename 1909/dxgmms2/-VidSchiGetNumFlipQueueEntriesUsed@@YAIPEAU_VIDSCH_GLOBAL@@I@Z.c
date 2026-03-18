/*
 * XREFs of ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003AE0C
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00CD510 (VidSchCollectDbgInfo.c)
 * Callees:
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C0029F14 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 */

__int64 __fastcall VidSchiGetNumFlipQueueEntriesUsed(struct _VIDSCH_GLOBAL *a1, int a2)
{
  int v2; // r11d
  unsigned int v3; // r10d
  int v4; // r9d
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  int v6; // r9d
  unsigned int *v7; // rcx
  __int64 v8; // r8
  int v9; // edx
  bool v10; // dl
  unsigned int v11; // eax
  struct _VIDSCH_GLOBAL *v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]
  int v15; // [rsp+2Ch] [rbp-Ch]

  v2 = *((_DWORD *)a1 + 35);
  v3 = 0;
  v4 = -1;
  v13 = a1;
  v14 = a2;
  while ( 1 )
  {
    v15 = v4;
    if ( v4 == v2 )
      break;
    FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v13);
    if ( FlipQueue )
    {
      v7 = (unsigned int *)((char *)FlipQueue + 1132);
      v8 = 64LL;
      do
      {
        v10 = 0;
        if ( *v7 <= 0xC )
        {
          v9 = 4673;
          if ( _bittest(&v9, *v7) )
            v10 = 1;
        }
        v11 = v3 + 1;
        if ( v10 )
          v11 = v3;
        v7 += 328;
        v3 = v11;
        --v8;
      }
      while ( v8 );
    }
    v4 = v6 + 1;
  }
  return v3;
}
