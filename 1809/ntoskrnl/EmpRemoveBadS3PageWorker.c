/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x140814FE0
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistOfflinedPage @ 0x140320794 (WheaPersistOfflinedPage.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistOfflinedPage((UNICODE_STRING *)(unsigned int)EmpBadS3Page);
}
