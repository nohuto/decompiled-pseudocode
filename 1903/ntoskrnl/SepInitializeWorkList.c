/*
 * XREFs of SepInitializeWorkList @ 0x140A02044
 * Callers:
 *     SepInitializationPhase0 @ 0x140A00F84 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_14046C020);
  qword_14046C088 = 0LL;
  qword_14046C008 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_14046C0D8 = (__int64)ExFreePoolWithTag;
  qword_14046C018 = (__int64)&qword_14046C010;
  qword_14046C010 = (__int64)&qword_14046C010;
  qword_14046C0D0 = (__int64)SepAdtDetermineInsertQueue;
  word_14046C0E0 = 3;
  ExInitializeResourceLite(&stru_14046BEE0);
  qword_14046BF98 = (__int64)ExFreePoolWithTag;
  qword_14046BEC8 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_14046BFA0 = 1;
  return result;
}
