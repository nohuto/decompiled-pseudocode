/*
 * XREFs of EtwpFreeRegistration @ 0x18004EA88
 * Callers:
 *     EtwNotificationRegister @ 0x180020CB0 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x18004E980 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A3DF0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall EtwpFreeRegistration(__int64 a1)
{
  __int64 result; // rax

  memset((void *)(a1 + 88), 0, 0xA8uLL);
  result = RtlpInterlockedPushEntrySList(&EtwpFreeRegistrationList);
  _InterlockedDecrement(&EtwpRegistrationCount);
  return result;
}
