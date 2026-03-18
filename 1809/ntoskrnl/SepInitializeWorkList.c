/*
 * XREFs of SepInitializeWorkList @ 0x1409AE8B8
 * Callers:
 *     SepInitializationPhase0 @ 0x1409AD8C0 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC4D0 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140440220);
  qword_140440288 = 0LL;
  qword_140440208 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_1404402D8 = (__int64)ExFreePool;
  qword_140440218 = (__int64)&qword_140440210;
  qword_140440210 = (__int64)&qword_140440210;
  qword_1404402D0 = (__int64)SepAdtDetermineInsertQueue;
  word_1404402E0 = 3;
  ExInitializeResourceLite(&stru_1404400E0);
  qword_140440198 = (__int64)ExFreePool;
  qword_1404400C8 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_1404401A0 = 1;
  return result;
}
