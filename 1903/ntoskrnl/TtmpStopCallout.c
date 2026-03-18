/*
 * XREFs of TtmpStopCallout @ 0x1408BC1EC
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1408BB22C (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x1408BB430 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1408BB4D8 (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1408BB560 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1408BB60C (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1408BC27C (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1408BB7EC (TtmpCalloutDestroyWatchdog.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x1408BBB8C (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmiLogCalloutStop @ 0x1408C075C (TtmiLogCalloutStop.c)
 */

BOOLEAN __fastcall TtmpStopCallout(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int CalloutTagFromCalloutType; // eax
  __int64 v6; // r10
  struct _KTHREAD *CurrentThread; // rax

  v4 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) )
    TtmpCalloutDestroyWatchdog(a1);
  CalloutTagFromCalloutType = TtmpGetCalloutTagFromCalloutType(*(_DWORD *)(a1 + 16));
  TtmiLogCalloutStop(
    *(_DWORD *)(v6 + 16),
    *(_DWORD *)(v6 + 72),
    *(_QWORD *)(v6 + 24),
    CalloutTagFromCalloutType,
    a2,
    v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
}
