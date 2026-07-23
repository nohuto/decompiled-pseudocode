/*
 * XREFs of sub_1800062DC @ 0x1800062DC
 * Callers:
 *     sub_180006330 @ 0x180006330 (sub_180006330.c)
 *     sub_180007A48 @ 0x180007A48 (sub_180007A48.c)
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     sub_18000AD08 @ 0x18000AD08 (sub_18000AD08.c)
 *     sub_18000B0D4 @ 0x18000B0D4 (sub_18000B0D4.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall sub_1800062DC(__int64 a1)
{
  struct _TEB *result; // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  result = NtCurrentTeb();
  *(_DWORD *)(a1 + 48) = result->ClientId.UniqueThread;
  return result;
}
