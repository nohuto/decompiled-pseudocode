/*
 * XREFs of _lambda_7b89ab000df0a6c72fa8d71ac8b3e245_::operator() @ 0x1C023D24C
 * Callers:
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_7b89ab000df0a6c72fa8d71ac8b3e245___ @ 0x1C023CF90 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_7b89ab000df0a6c72fa8d71ac8b3e245___.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 */

char __fastcall lambda_7b89ab000df0a6c72fa8d71ac8b3e245_::operator()(__int64 a1, __int64 *a2)
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
