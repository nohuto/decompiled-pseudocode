/*
 * XREFs of SepInitializeWorkList @ 0x1409AE8B8
 * Callers:
 *     SepInitializationPhase0 @ 0x1409AD8C0 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC4F0 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140440210);
  qword_140440278 = 0LL;
  qword_1404401F8 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_1404402C8 = (__int64)ExFreePool;
  qword_140440208 = (__int64)&qword_140440200;
  qword_140440200 = (__int64)&qword_140440200;
  qword_1404402C0 = (__int64)SepAdtDetermineInsertQueue;
  word_1404402D0 = 3;
  ExInitializeResourceLite(&stru_1404400D0);
  qword_140440188 = (__int64)ExFreePool;
  qword_1404400B8 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140440190 = 1;
  return result;
}
