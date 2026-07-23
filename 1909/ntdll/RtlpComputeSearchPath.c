/*
 * XREFs of RtlpComputeSearchPath @ 0x18006BAD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x18006BDE4 (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x18006C460 (RtlpLookupCurDirSetting.c)
 */

__int64 RtlpComputeSearchPath()
{
  int v0; // eax
  unsigned __int64 EnvironmentVersion; // rbx
  __int64 result; // rax

  v0 = 1;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (RtlpSearchPathMode & 1) == 0 )
  {
    if ( (RtlpSearchPathMode & 0x10000) != 0 )
    {
      v0 = 0;
    }
    else
    {
      v0 = dword_180166344;
      if ( !dword_180166344 )
        v0 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_1801184B0);
    }
  }
  result = RtlpComputePath((char *)&unk_18011DD10 + 16 * v0, 4LL, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 100) = 0;
  }
  return result;
}
