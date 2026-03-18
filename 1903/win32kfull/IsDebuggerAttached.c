/*
 * XREFs of IsDebuggerAttached @ 0x1C0017AC8
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00027E0 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C0009FB0 (SlowAppThreadInShellFrame.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C0017840 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C0127258 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     TryDetachShellFrame @ 0x1C01E3B58 (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_QWORD *)a1
    && PsGetProcessDebugPort()
    && (!*(_DWORD *)(a1 + 876) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
  {
    return 1;
  }
  return v2;
}
