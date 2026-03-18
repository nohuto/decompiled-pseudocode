/*
 * XREFs of WmipUnreferenceRegEntry @ 0x1400EDD84
 * Callers:
 *     WmipDeregisterRegEntry @ 0x140174728 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x140696C4C (WmipForwardWmiIrp.c)
 *     WmipQueryWmiDataBlock @ 0x1406A44A0 (WmipQueryWmiDataBlock.c)
 *     IoWMISystemControl @ 0x1406EC7BC (IoWMISystemControl.c)
 *     IoWMIRegistrationControl @ 0x140716650 (IoWMIRegistrationControl.c)
 *     WmipUpdateRegistration @ 0x140716728 (WmipUpdateRegistration.c)
 *     WmipRegistrationWorker @ 0x14071AA60 (WmipRegistrationWorker.c)
 *     WmipEventNotification @ 0x14071C340 (WmipEventNotification.c)
 *     WmipFreeTraceDeviceList @ 0x14071DD3C (WmipFreeTraceDeviceList.c)
 *     WmipDeregisterDevice @ 0x1407346C8 (WmipDeregisterDevice.c)
 *     WmipRegisterDevice @ 0x140738A64 (WmipRegisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
