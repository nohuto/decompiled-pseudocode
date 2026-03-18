/*
 * XREFs of IsNsobjPciBus @ 0x1C009D2C0
 * Callers:
 *     IsPciBus @ 0x1C00939A8 (IsPciBus.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C009D030 (ACPIBusIrpStartDeviceWorker.c)
 *     EnableDisableRegions @ 0x1C009D1BC (EnableDisableRegions.c)
 *     ACPIInternalIsPci @ 0x1C00A2790 (ACPIInternalIsPci.c)
 *     ACPIInitStopDevice @ 0x1C00A2CB4 (ACPIInitStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AD9E0 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00AF490 (ACPIFilterIrpStopDevice.c)
 *     IsPciBusExtension @ 0x1C00B069C (IsPciBusExtension.c)
 * Callees:
 *     AMLIGetNSObjectContext @ 0x1C0001874 (AMLIGetNSObjectContext.c)
 *     IsPciBusAsync @ 0x1C0023B40 (IsPciBusAsync.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

char __fastcall IsNsobjPciBus(volatile signed __int32 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  char result; // al
  _BYTE Event[32]; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+68h] [rbp+10h] BYREF

  memset(Event, 0, sizeof(Event));
  v2 = AMLIGetNSObjectContext((__int64)a1);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( (v3 & 0x2000000) != 0 )
      return 1;
    if ( (v3 & 0x100000000LL) != 0 )
      return 0;
  }
  KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
  *(_DWORD *)&Event[24] = -1073741275;
  v6 = 0;
  if ( (unsigned int)IsPciBusAsync(a1, (KSPIN_LOCK)AmlisuppCompletePassive, (KSPIN_LOCK)Event, &v6) != 259 )
    return v6;
  KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  result = v6;
  if ( *(int *)&Event[24] < 0 )
    return 0;
  return result;
}
