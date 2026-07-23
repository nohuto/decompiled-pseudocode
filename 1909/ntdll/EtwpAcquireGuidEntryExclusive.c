/*
 * XREFs of EtwpAcquireGuidEntryExclusive @ 0x1800062DC
 * Callers:
 *     EtwpDereferenceUmGuidEntry @ 0x180006330 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180007A48 (EtwpRegisterGuidsApiCallback.c)
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18000AD08 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpEventApiCallback @ 0x18000B0D4 (EtwpEventApiCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall EtwpAcquireGuidEntryExclusive(__int64 a1)
{
  struct _TEB *result; // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  result = NtCurrentTeb();
  *(_DWORD *)(a1 + 48) = result->ClientId.UniqueThread;
  return result;
}
