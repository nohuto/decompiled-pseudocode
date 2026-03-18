/*
 * XREFs of TtmpStartCallout @ 0x1408BB9D0
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1408BAAFC (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x1408BAD00 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1408BADA8 (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1408BAE30 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1408BAEDC (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1408BBB4C (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     TtmpCalloutArmWatchdog @ 0x1408BAF84 (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x1408BB05C (TtmpCalloutCreateWatchdog.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x1408BB45C (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmpInitializeWatchdogTimeouts @ 0x1408BB5C8 (TtmpInitializeWatchdogTimeouts.c)
 *     TtmiLogCalloutStart @ 0x1408BFEF0 (TtmiLogCalloutStart.c)
 */

__int64 __fastcall TtmpStartCallout(__int64 a1, unsigned int *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  _DWORD *v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned int CalloutTagFromCalloutType; // eax
  __int64 result; // rax

  if ( !TtmpDeviceCalloutTimeoutsSet )
    TtmpDeviceCalloutTimeoutsSet = TtmpInitializeWatchdogTimeouts(a1);
  *(_QWORD *)a1 = a2;
  v10 = &TtmpDeviceWatchdogTimeouts;
  *(_QWORD *)(a1 + 8) = a3;
  v11 = 0;
  *(_DWORD *)(a1 + 16) = a4;
  while ( *v10 != a4 )
  {
    ++v11;
    v10 += 6;
    if ( v11 >= 6 )
    {
      v12 = 30000;
      goto LABEL_8;
    }
  }
  v12 = v10[4];
LABEL_8:
  if ( v12 && TtmpCalloutCreateWatchdog(a1) >= 0 && *(_QWORD *)(a1 + 24) )
    TtmpCalloutArmWatchdog(a1, *a2, v12, a5);
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  CalloutTagFromCalloutType = TtmpGetCalloutTagFromCalloutType(a4);
  TtmiLogCalloutStart(*(unsigned int *)(a3 + 16), *(_QWORD *)(a3 + 24), CalloutTagFromCalloutType, a6);
  result = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 32) = MEMORY[0xFFFFF78000000008];
  return result;
}
