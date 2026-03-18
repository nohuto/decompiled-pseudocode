/*
 * XREFs of VidSchiProcessVsyncCompletedFlipEntry @ 0x1C002F47C
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000CF70 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002E490 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000D4C0 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000D7B0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C000E260 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C00159C8 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 */

_BYTE *__fastcall VidSchiProcessVsyncCompletedFlipEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6)
{
  unsigned int v6; // r15d
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned int v10; // r14d
  struct HwQueueStagingList *v11; // r10
  __int64 v12; // r13
  int v13; // r11d
  DWORD v14; // edi
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // r14
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // r9d
  unsigned int v23; // edx
  unsigned int v24; // eax
  _BYTE *result; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+40h] [rbp-58h]
  unsigned int v29; // [rsp+A8h] [rbp+10h]
  unsigned int v33; // [rsp+D0h] [rbp+38h]

  v6 = *(_DWORD *)(a2 + 32);
  v7 = 0LL;
  v8 = *(_QWORD *)(a2 + 24);
  v11 = a1;
  v12 = *(_QWORD *)a2;
  v13 = 4673;
  v29 = *(_DWORD *)(a2 + 16);
  v10 = v29;
  v14 = *(_DWORD *)(v8 + 44);
  v15 = ((_BYTE)v6 + 1) & 0x3F;
  v33 = v6;
  v16 = *(_QWORD *)(*(_QWORD *)a2 + 8LL * v29 + 2576);
  if ( v14 != v15 )
  {
    v17 = v16;
    do
    {
      v18 = v8 + 1312LL * v14;
      v19 = *(_DWORD *)(v18 + 1132);
      if ( v19 > 0xC || !_bittest(&v13, v19) )
      {
        *(_QWORD *)(v18 + 1208) = *(_QWORD *)(a2 + 40);
        *(_QWORD *)(v18 + 1192) = *(_QWORD *)(a2 + 48);
        *(_QWORD *)(v18 + 1200) = *(_QWORD *)(a2 + 56);
        v20 = *(_DWORD *)(v18 + 1216);
        *(_DWORD *)(v18 + 1132) = 11;
        if ( (v20 & 0x10) != 0 )
          v21 = ((unsigned __int16)**(_DWORD **)(v18 + 1264) | (unsigned __int16)(**(_DWORD **)(v18 + 1264) >> 10)) & 0x3FF;
        else
          v21 = (unsigned int)((1 << *(_DWORD *)(v12 + 140)) - 1);
        LODWORD(v27) = v21;
        *(_DWORD *)(v17 + 2344) &= ~(_DWORD)v21;
        HIDWORD(v27) = *(_DWORD *)(v18 + 1128);
        VidSchiUnreferenceDisplayingAllocationsForThisEntry(v11, v21, v17, v18 + 80);
        VidSchiReferenceDisplayingAllocationsForThisEntry(a1, v12, (_WORD *)v17, v18 + 80);
        v11 = a1;
        v13 = 4673;
        v7 = v27;
      }
      v14 = ((_BYTE)v14 + 1) & 0x3F;
    }
    while ( v14 != v15 );
    v14 = *(_DWORD *)(v8 + 44);
    v6 = v33;
    v10 = v29;
  }
  v22 = *(_DWORD *)(v8 + 48);
  v23 = v15;
  while ( v15 != (((_BYTE)v22 + 1) & 0x3F) )
  {
    v24 = *(_DWORD *)(1312LL * v15 + v8 + 1132);
    if ( v24 > 0xC || !_bittest(&v13, v24) )
    {
      v23 = v15;
      break;
    }
    v15 = ((_BYTE)v15 + 1) & 0x3F;
  }
  *(_DWORD *)(v8 + 44) = v23;
  if ( v22 == v6 )
    *(_DWORD *)(v8 + 48) = v23;
  result = (_BYTE *)VidSchiCompleteFlipEntry(v11, v12, v10, v8, v14, v6, 0, 0LL);
  *a5 = (_DWORD)result;
  if ( (_DWORD)result )
  {
    v26 = (unsigned int)*a4;
    *(_QWORD *)(a3 + 8 * v26) = v7;
    *a4 = v26 + 1;
    result = a6;
    *a6 = 1;
  }
  while ( v14 <= v6 )
    result = (_BYTE *)VidSchiUpdateFlipQueueHistory(3u, v12, v10, v8, v14++);
  return result;
}
