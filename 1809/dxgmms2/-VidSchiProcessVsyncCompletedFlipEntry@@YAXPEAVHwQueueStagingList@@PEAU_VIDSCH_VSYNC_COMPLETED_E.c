/*
 * XREFs of ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C002AC24
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000AEB0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C000BB50 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C000CCE0 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_PRESENT_INFO@@KK@Z @ 0x1C000F06C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_PRESENT_INFO@.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C0016678 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 */

void __fastcall VidSchiProcessVsyncCompletedFlipEntry(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_VSYNC_COMPLETED_ENTRY_INFO *a2,
        unsigned __int64 *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6,
        bool a7)
{
  __int64 v7; // r11
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v11; // r10
  unsigned int v12; // r14d
  int v13; // edx
  __int64 v14; // r13
  unsigned int v15; // esi
  __int64 v16; // rbp
  unsigned int v17; // edi
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // r9d
  int v22; // edx
  unsigned int v23; // edi
  int v24; // r8d
  int v25; // r15d
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // [rsp+44h] [rbp-54h]
  unsigned __int64 v30; // [rsp+48h] [rbp-50h]
  __int64 v31; // [rsp+50h] [rbp-48h]
  unsigned int v33; // [rsp+A8h] [rbp+10h]

  v7 = *(_QWORD *)a2;
  v8 = 0LL;
  v9 = *((unsigned int *)a2 + 4);
  v11 = *((unsigned int *)a2 + 5);
  v12 = *((_DWORD *)a2 + 6);
  v13 = 4673;
  v31 = v7;
  v14 = *(_QWORD *)(v7 + 8 * v9 + 2576);
  v29 = v9;
  v33 = v11;
  v15 = ((_BYTE)v12 + 1) & 0x3F;
  v16 = *(_QWORD *)(v14 + 8 * v11 + 24);
  v30 = 0LL;
  v17 = *(_DWORD *)(v16 + 44);
  if ( v17 != v15 )
  {
    do
    {
      v18 = v16 + 1296LL * v17;
      v19 = *(_DWORD *)(v18 + 1108);
      if ( v19 > 0xC || !_bittest(&v13, v19) )
      {
        if ( !a7 )
          *(_DWORD *)(v18 + 1108) = 11;
        *(_QWORD *)(v18 + 1168) = *((_QWORD *)a2 + 4);
        *(_QWORD *)(v18 + 1152) = *((_QWORD *)a2 + 5);
        *(_QWORD *)(v18 + 1160) = *((_QWORD *)a2 + 6);
        if ( (*(_DWORD *)(v18 + 1176) & 0x10) != 0 )
          v20 = ((unsigned __int16)**(_DWORD **)(v18 + 1224) | (unsigned __int16)(**(_DWORD **)(v18 + 1224) >> 10)) & 0x3FF;
        else
          v20 = (unsigned int)((1 << *(_DWORD *)(v7 + 140)) - 1);
        LODWORD(v30) = v20;
        *(_DWORD *)(v14 + 2336) &= ~(_DWORD)v20;
        HIDWORD(v30) = *(_DWORD *)(v18 + 1104);
        VidSchiUnreferenceDisplayingAllocationsForThisEntry(a1, v20, v14, v18 + 56);
        VidSchiReferenceDisplayingAllocationsForThisEntry(a1, v31, (_WORD *)v14, v18 + 56);
        v7 = v31;
        v13 = 4673;
      }
      v17 = ((_BYTE)v17 + 1) & 0x3F;
    }
    while ( v17 != v15 );
    v8 = v30;
    LODWORD(v11) = v33;
  }
  if ( !a7 )
  {
    v21 = *(_DWORD *)(v16 + 48);
    v22 = ((_BYTE)v12 + 1) & 0x3F;
    v23 = *(_DWORD *)(v16 + 44);
    v24 = ((_BYTE)v21 + 1) & 0x3F;
    if ( v15 != v24 )
    {
      v25 = 4673;
      while ( 1 )
      {
        v26 = *(_DWORD *)(1296LL * v15 + v16 + 1108);
        if ( v26 > 0xC || !_bittest(&v25, v26) )
          break;
        v15 = ((_BYTE)v15 + 1) & 0x3F;
        if ( v15 == v24 )
          goto LABEL_20;
      }
      v22 = v15;
    }
LABEL_20:
    *(_DWORD *)(v16 + 44) = v22;
    if ( v21 == v12 )
      *(_DWORD *)(v16 + 48) = v22;
    v27 = VidSchiCompleteFlipEntry(a1, v7, v29, v11, v23, v12, 0, 0LL);
    *a5 = v27;
    if ( v27 )
    {
      v28 = *a4;
      a3[v28] = v8;
      *a4 = v28 + 1;
      *a6 = 1;
    }
    for ( ; v23 <= v12; ++v23 )
      VidSchiUpdateFlipQueueHistory(3u, v14, v33, v23);
  }
}
