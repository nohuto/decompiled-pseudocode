/*
 * XREFs of IsInputProcessingActivated @ 0x1C002EBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IsInputProcessingActivated()
{
  __int64 v0; // rdi
  bool v1; // bl

  v0 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v0, 0LL);
  v1 = *(_DWORD *)(v0 + 16) == 2;
  ExReleasePushLockSharedEx(v0, 0LL);
  KeLeaveCriticalRegion();
  return v1;
}
