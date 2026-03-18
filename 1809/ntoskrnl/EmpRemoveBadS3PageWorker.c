/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x140813E00
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistOfflinedPage @ 0x1403204A4 (WheaPersistOfflinedPage.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistOfflinedPage((unsigned int)EmpBadS3Page);
}
