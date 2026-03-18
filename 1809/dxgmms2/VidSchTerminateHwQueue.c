/*
 * XREFs of VidSchTerminateHwQueue @ 0x1C0037BD0
 * Callers:
 *     VidSchCreateHwQueue @ 0x1C0036AB0 (VidSchCreateHwQueue.c)
 *     VidSchTerminateAdapter @ 0x1C00C9A80 (VidSchTerminateAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@H@Z @ 0x1C003494C (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@H@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00352D0 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall VidSchTerminateHwQueue(struct VIDSCH_HW_QUEUE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v4 + 56) & 1) != 0 )
  {
    a2 = *((_QWORD *)a1 + 13);
    if ( a2 )
    {
      ((void (__fastcall *)(_QWORD))DxgCoreInterface[24])(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 24LL) + 8LL));
      *((_QWORD *)a1 + 13) = 0LL;
    }
  }
  VidSchiRemoveHwQueueFromSyncPoints(a1, a2, a3);
  VidSchiDecrementHwQueueReference((char *)a1);
}
