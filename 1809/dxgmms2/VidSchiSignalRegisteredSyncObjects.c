/*
 * XREFs of VidSchiSignalRegisteredSyncObjects @ 0x1C0001180
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C0001098 (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0001218 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ?VidSchiCompleteAllWaitsContext@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0001288 (-VidSchiCompleteAllWaitsContext@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiSignalRegisteredSyncObjects(struct HwQueueStagingList *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a2 + 152);
  while ( 1 )
  {
    v5 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    if ( (_QWORD *)v5[1] != v3 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v3 = v6;
    *(_QWORD *)(v6 + 8) = v3;
    _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled((_VIDSCH_SYNC_OBJECT *)v5[2], a1, 1);
    v5[1] = 0LL;
    *v5 = 0LL;
  }
  for ( i = *(_QWORD **)(a2 + 72); i != (_QWORD *)(a2 + 72); i = (_QWORD *)*i )
    VidSchiCompleteAllWaitsContext(a1, (struct _VIDSCH_CONTEXT *)(i - 3));
}
