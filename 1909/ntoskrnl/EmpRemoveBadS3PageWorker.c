/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x14084CF30
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistOfflinedPage @ 0x14034061C (WheaPersistOfflinedPage.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistOfflinedPage((unsigned int)EmpBadS3Page);
}
