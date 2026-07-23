/*
 * XREFs of PopExecuteProcessorCallback @ 0x1400A5EB0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueTargetDpc @ 0x1400A5F00 (PopQueueTargetDpc.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopExecuteProcessorCallback(PRKDPC Dpc, __int64 a2)
{
  int v4; // eax

  v4 = (*(__int64 (__fastcall **)(struct _KPRCB *, _QWORD, _QWORD))a2)(
         KeGetCurrentPrcb(),
         *(_QWORD *)(a2 + 8),
         *(_QWORD *)(a2 + 16));
  if ( v4 < 0 )
    *(_DWORD *)(a2 + 40) = v4;
  return PopQueueTargetDpc(Dpc);
}
