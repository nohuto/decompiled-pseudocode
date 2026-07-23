/*
 * XREFs of RtlpCommitQueryDebugInfo @ 0x18007DD6C
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x18007D99C (RtlQueryProcessModuleInformation.c)
 *     RtlCommitDebugInfo @ 0x1800D9450 (RtlCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D9470 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D9600 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D99E0 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D9EB0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800DA280 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     RtlpWalkCallbackRoutine @ 0x1800DA900 (RtlpWalkCallbackRoutine.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800DC638 (AVrfpQueryProcessVerifierOptions.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A0600 (ZwAllocateVirtualMemory.c)
 */

char *__fastcall RtlpCommitQueryDebugInfo(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  ULONG_PTR v7; // [rsp+50h] [rbp+18h] BYREF
  char *v8; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 <= 0xFFFFFFF8 )
  {
    v3 = a1[9];
    v4 = a1[10];
    v5 = v3 + ((a2 + 7) & 0xFFFFFFF8);
    if ( v5 <= v4 )
    {
LABEL_6:
      a1[9] = v5;
      return (char *)a1 + v3;
    }
    if ( v5 < a1[11] )
    {
      v8 = (char *)a1 + v4;
      v7 = v5 - v4;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v8, 0LL, &v7, 0x1000u, 4u) >= 0 )
      {
        a1[10] += v7;
        v3 = a1[9];
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
