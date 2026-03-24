/*
 * XREFs of WmipUnreferenceRegEntry @ 0x14008DB30
 * Callers:
 *     WmipDeregisterRegEntry @ 0x14016A898 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x1405FB974 (WmipForwardWmiIrp.c)
 *     WmipEventNotification @ 0x14068F140 (WmipEventNotification.c)
 *     WmipQueryWmiDataBlock @ 0x1406A7BD0 (WmipQueryWmiDataBlock.c)
 *     IoWMIRegistrationControl @ 0x1406B8F00 (IoWMIRegistrationControl.c)
 *     WmipUpdateRegistration @ 0x1406B8FD8 (WmipUpdateRegistration.c)
 *     WmipRegistrationWorker @ 0x1406C6250 (WmipRegistrationWorker.c)
 *     IoWMISystemControl @ 0x1406CC0FC (IoWMISystemControl.c)
 *     WmipDeregisterDevice @ 0x1407074F4 (WmipDeregisterDevice.c)
 *     WmipRegisterDevice @ 0x14070B22C (WmipRegisterDevice.c)
 *     WmipFreeTraceDeviceList @ 0x140753C9C (WmipFreeTraceDeviceList.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
