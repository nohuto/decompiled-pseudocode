/*
 * XREFs of SepInitializeWorkList @ 0x1409AF8B8
 * Callers:
 *     SepInitializationPhase0 @ 0x1409AE8C0 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_1404412E0);
  qword_140441348 = 0LL;
  qword_1404412C8 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140441398 = (__int64)ExFreePool;
  qword_1404412D8 = (__int64)&qword_1404412D0;
  qword_1404412D0 = (__int64)&qword_1404412D0;
  qword_140441390 = (__int64)SepAdtDetermineInsertQueue;
  word_1404413A0 = 3;
  ExInitializeResourceLite(&stru_1404411A0);
  qword_140441258 = (__int64)ExFreePool;
  qword_140441188 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140441260 = 1;
  return result;
}
