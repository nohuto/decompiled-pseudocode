/*
 * XREFs of _lambda_336d399dbea870f4b634e48a18f0c036_::operator() @ 0x1C01FC248
 * Callers:
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___ @ 0x1C01FC080 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 */

char __fastcall lambda_336d399dbea870f4b634e48a18f0c036_::operator()(__int64 a1, __int64 *a2)
{
  struct tagTHREADINFO *v2; // rdx
  __int64 v3; // rcx

  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x20u, *a2);
  v2 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 328LL);
  if ( v3 )
    v2 = *(struct tagTHREADINFO **)(v3 + 16);
  CInputGlobals::SetPtiLastWoken(gpInputGlobals, v2, 0);
  return 1;
}
