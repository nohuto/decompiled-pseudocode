/*
 * XREFs of RtlpComputeExePath @ 0x180054C10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x180056598 (RtlpComputePath.c)
 */

__int64 __fastcall RtlpComputeExePath(__int64 a1)
{
  bool v2; // cf
  void *v3; // rcx
  unsigned __int64 EnvironmentVersion; // rbx
  __int64 result; // rax

  v2 = a1 != 0;
  v3 = &unk_18011D090;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( !a1 )
    v3 = &unk_18011D070;
  result = RtlpComputePath(v3, 4 - (unsigned int)v2, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 100) = 0;
  }
  return result;
}
