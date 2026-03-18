/*
 * XREFs of IsDebuggerAttached @ 0x1C00D7D60
 * Callers:
 *     ?CanSetForegroundWindow@@YA?AW4ForegroundRightCheck@@PEBUtagWND@@@Z @ 0x1C00D7AF4 (-CanSetForegroundWindow@@YA-AW4ForegroundRightCheck@@PEBUtagWND@@@Z.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00D7CEC (IsAdaptiveQueueDetachExempted.c)
 *     InForegroundQueue @ 0x1C00D7FE0 (InForegroundQueue.c)
 *     SlowAppThreadInShellFrame @ 0x1C012AEEC (SlowAppThreadInShellFrame.c)
 *     TryDetachShellFrame @ 0x1C01CF278 (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *a1;
  if ( v3 && PsGetProcessDebugPort(v3) && (!*((_DWORD *)a1 + 221) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
    return 1;
  return v2;
}
