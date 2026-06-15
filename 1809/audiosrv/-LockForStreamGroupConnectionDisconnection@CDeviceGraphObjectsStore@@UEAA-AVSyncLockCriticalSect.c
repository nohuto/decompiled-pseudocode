/*
 * XREFs of ?LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180013C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CDeviceGraphObjectsStore::LockForStreamGroupConnectionDisconnection(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = a1 + 184;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
  *a2 = v2;
  return a2;
}
