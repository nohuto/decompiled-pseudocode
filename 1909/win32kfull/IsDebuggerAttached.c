/*
 * XREFs of IsDebuggerAttached @ 0x1C013386C
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00027E0 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C0009FA0 (SlowAppThreadInShellFrame.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C01335E4 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C01352D8 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     TryDetachShellFrame @ 0x1C01E39D8 (TryDetachShellFrame.c)
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
