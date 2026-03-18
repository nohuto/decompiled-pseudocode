/*
 * XREFs of MmIsDriverSuspectForVerifier @ 0x1409640E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     VfDriverLock @ 0x14096043C (VfDriverLock.c)
 *     ViIsDriverSuspectForVerifier @ 0x140964A78 (ViIsDriverSuspectForVerifier.c)
 */

__int64 __fastcall MmIsDriverSuspectForVerifier(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int IsDriverSuspectForVerifier; // eax
  unsigned int v4; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0LL;
  VfDriverLock();
  IsDriverSuspectForVerifier = ViIsDriverSuspectForVerifier(v1);
  ViDriversLoadLockOwner = 0LL;
  v4 = IsDriverSuspectForVerifier;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v4;
}
