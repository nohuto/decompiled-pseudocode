/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x14084D830
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistOfflinedPage @ 0x140340BBC (WheaPersistOfflinedPage.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistOfflinedPage((UNICODE_STRING *)(unsigned int)EmpBadS3Page);
}
