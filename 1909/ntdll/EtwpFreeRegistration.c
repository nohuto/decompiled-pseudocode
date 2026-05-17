/*
 * XREFs of EtwpFreeRegistration @ 0x180053958
 * Callers:
 *     EtwNotificationRegister @ 0x18000A800 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x180053850 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A09A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall EtwpFreeRegistration(__int64 a1)
{
  __int64 result; // rax

  memset((void *)(a1 + 88), 0, 0xA8uLL);
  result = RtlpInterlockedPushEntrySList(&EtwpFreeRegistrationList, a1);
  _InterlockedDecrement(&EtwpRegistrationCount);
  return result;
}
