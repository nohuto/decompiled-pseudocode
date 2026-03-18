/*
 * XREFs of ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C005A090
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0059F00 (xxxUserPowerCalloutWorker.c)
 *     CleanupPowerRequestList @ 0x1C00B7660 (CleanupPowerRequestList.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C0110830 (McTemplateK0xq.c)
 */

struct tagPOWERREQUEST *UnqueuePowerRequest(void)
{
  __int64 v0; // rbx
  __int64 v1; // r8
  _QWORD *v2; // rax

  v0 = 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
  if ( gPowerRequestList.Flink != &gPowerRequestList )
  {
    v0 = qword_1C0217668;
    v2 = *(_QWORD **)(qword_1C0217668 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C0217668 != &gPowerRequestList || *v2 != qword_1C0217668 )
      __fastfail(3u);
    qword_1C0217668 = *(_QWORD *)(qword_1C0217668 + 8);
    *v2 = &gPowerRequestList;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0xq(&gPowerRequestList, &RemovePowerRequestFromQueue, v1, v0, -1);
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
  return (struct tagPOWERREQUEST *)v0;
}
