/*
 * XREFs of IsDebuggerAttached @ 0x1C006DFB4
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0002458 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C0006CF8 (SlowAppThreadInShellFrame.c)
 *     InForegroundQueue @ 0x1C006DBF0 (InForegroundQueue.c)
 *     CheckForegroundRight @ 0x1C006DE0C (CheckForegroundRight.c)
 *     TryDetachShellFrame @ 0x1C01AC074 (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *a1;
  if ( v3 && PsGetProcessDebugPort(v3) && (!*((_DWORD *)a1 + 219) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
    return 1;
  return v2;
}
