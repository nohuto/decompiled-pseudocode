/*
 * XREFs of WmipUnreferenceRegEntry @ 0x140099D28
 * Callers:
 *     WmipDeregisterRegEntry @ 0x140173FF8 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x14066982C (WmipForwardWmiIrp.c)
 *     WmipQueryWmiDataBlock @ 0x1406BF4A0 (WmipQueryWmiDataBlock.c)
 *     IoWMISystemControl @ 0x1406EB4FC (IoWMISystemControl.c)
 *     IoWMIRegistrationControl @ 0x140714870 (IoWMIRegistrationControl.c)
 *     WmipUpdateRegistration @ 0x140714948 (WmipUpdateRegistration.c)
 *     WmipRegistrationWorker @ 0x140718C70 (WmipRegistrationWorker.c)
 *     WmipEventNotification @ 0x14071A550 (WmipEventNotification.c)
 *     WmipFreeTraceDeviceList @ 0x14071BF4C (WmipFreeTraceDeviceList.c)
 *     WmipDeregisterDevice @ 0x140732468 (WmipDeregisterDevice.c)
 *     WmipRegisterDevice @ 0x140736804 (WmipRegisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
