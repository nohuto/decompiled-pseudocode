/*
 * XREFs of WPP_SF_D @ 0x1C003B9A0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0012874 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00149DC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidStallDeviceQueue @ 0x1C00157FC (RaidStallDeviceQueue.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0017D34 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0018748 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidAdapterHack @ 0x1C001C1F8 (RaidAdapterHack.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C003CD18 (RaidLunQueueWaitForQuiescence.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x1C0043A80 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     RaWmiDispatchIrp @ 0x1C006FC94 (RaWmiDispatchIrp.c)
 *     StorpRegisterShim @ 0x1C0070A48 (StorpRegisterShim.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_D(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
