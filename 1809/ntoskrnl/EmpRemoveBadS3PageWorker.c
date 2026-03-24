/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x140813DE0
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistOfflinedPage @ 0x1403205A4 (WheaPersistOfflinedPage.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistOfflinedPage((unsigned int)EmpBadS3Page);
}
