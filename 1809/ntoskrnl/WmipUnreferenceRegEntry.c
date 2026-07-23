/*
 * XREFs of WmipUnreferenceRegEntry @ 0x14008DA70
 * Callers:
 *     WmipDeregisterRegEntry @ 0x14016A998 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x1405FC974 (WmipForwardWmiIrp.c)
 *     WmipEventNotification @ 0x140690300 (WmipEventNotification.c)
 *     WmipQueryWmiDataBlock @ 0x1406A8E70 (WmipQueryWmiDataBlock.c)
 *     IoWMIRegistrationControl @ 0x1406BA1A0 (IoWMIRegistrationControl.c)
 *     WmipUpdateRegistration @ 0x1406BA278 (WmipUpdateRegistration.c)
 *     WmipRegistrationWorker @ 0x1406C74F0 (WmipRegistrationWorker.c)
 *     IoWMISystemControl @ 0x1406CD39C (IoWMISystemControl.c)
 *     WmipDeregisterDevice @ 0x140708794 (WmipDeregisterDevice.c)
 *     WmipRegisterDevice @ 0x14070C4CC (WmipRegisterDevice.c)
 *     WmipFreeTraceDeviceList @ 0x140754E8C (WmipFreeTraceDeviceList.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
