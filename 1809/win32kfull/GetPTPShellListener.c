/*
 * XREFs of GetPTPShellListener @ 0x1C01C2A64
 * Callers:
 *     GetPTPShellTarget @ 0x1C01C2A90 (GetPTPShellTarget.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01DC25C (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 GetPTPShellListener()
{
  __int64 v0; // rax

  if ( grpdeskRitInput && (v0 = *(_QWORD *)(grpdeskRitInput + 8LL)) != 0 )
    return *(_QWORD *)(v0 + 232);
  else
    return 0LL;
}
