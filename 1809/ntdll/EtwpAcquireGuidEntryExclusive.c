/*
 * XREFs of EtwpAcquireGuidEntryExclusive @ 0x180050D94
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180021104 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwDeliverDataBlock @ 0x1800506D0 (EtwDeliverDataBlock.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180050D6C (EtwpDereferenceUmGuidEntry.c)
 *     EtwpEventApiCallback @ 0x180077B20 (EtwpEventApiCallback.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180085380 (EtwpRegisterGuidsApiCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall EtwpAcquireGuidEntryExclusive(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  struct _TEB *result; // rax

  RtlAcquireSRWLockExclusive(a1 + 40, a2, a3, a4);
  result = NtCurrentTeb();
  *(_DWORD *)(a1 + 48) = result->ClientId.UniqueThread;
  return result;
}
