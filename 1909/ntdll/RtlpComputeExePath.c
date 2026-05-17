/*
 * XREFs of RtlpComputeExePath @ 0x18006BB60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x18006BDE4 (RtlpComputePath.c)
 */

__int64 __fastcall RtlpComputeExePath(__int64 a1)
{
  bool v2; // cf
  void *v3; // rcx
  unsigned __int64 EnvironmentVersion; // rbx
  __int64 result; // rax

  v2 = a1 != 0;
  v3 = &unk_18011DD30;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( !a1 )
    v3 = &unk_18011DD10;
  result = RtlpComputePath(v3, 4 - (unsigned int)v2, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 100) = 0;
  }
  return result;
}
