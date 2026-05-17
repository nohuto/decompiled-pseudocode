/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x180056530
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18000DB20 (RtlGetFullPathName_Ustr.c)
 *     IsProgramFilesPath @ 0x18005483C (IsProgramFilesPath.c)
 *     RtlpWow64ThunkEnvironment32To64 @ 0x18005565C (RtlpWow64ThunkEnvironment32To64.c)
 *     RtlpCheckRelativeDrive @ 0x1800582CC (RtlpCheckRelativeDrive.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 *     RtlpLookupSafeCurDirList @ 0x1800E0668 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x180056D90 (RtlQueryEnvironmentVariable.c)
 */

__int64 __fastcall RtlQueryEnvironmentVariable_U(__int64 a1, unsigned __int16 *a2, _WORD *a3)
{
  __int64 result; // rax
  __int16 v5; // cx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h]

  result = RtlQueryEnvironmentVariable(a1, *((_QWORD *)a2 + 1), (unsigned __int64)*a2 >> 1);
  v5 = v6;
  if ( v6 > 0x7FFF )
    return 3221225495LL;
  if ( (_DWORD)result == -1073741789 )
    v5 = v6 - 1;
  *a3 = 2 * v5;
  return result;
}
