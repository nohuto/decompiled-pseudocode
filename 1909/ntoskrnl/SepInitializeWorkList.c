/*
 * XREFs of SepInitializeWorkList @ 0x140A02560
 * Callers:
 *     SepInitializationPhase0 @ 0x140A014A0 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_14046BD60);
  qword_14046BDC8 = 0LL;
  qword_14046BD48 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_14046BE18 = (__int64)ExFreePoolWithTag;
  qword_14046BD58 = (__int64)&qword_14046BD50;
  qword_14046BD50 = (__int64)&qword_14046BD50;
  qword_14046BE10 = (__int64)SepAdtDetermineInsertQueue;
  word_14046BE20 = 3;
  ExInitializeResourceLite(&stru_14046BC20);
  qword_14046BCD8 = (__int64)ExFreePoolWithTag;
  qword_14046BC08 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_14046BCE0 = 1;
  return result;
}
