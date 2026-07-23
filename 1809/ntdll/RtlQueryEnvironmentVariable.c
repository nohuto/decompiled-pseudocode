/*
 * XREFs of RtlQueryEnvironmentVariable @ 0x180056D90
 * Callers:
 *     RtlGetExePath @ 0x1800541D0 (RtlGetExePath.c)
 *     LdrpCorInitialize @ 0x180054948 (LdrpCorInitialize.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180056530 (RtlQueryEnvironmentVariable_U.c)
 *     RtlpComputePath @ 0x180056598 (RtlpComputePath.c)
 *     RtlExpandEnvironmentStrings @ 0x180056C00 (RtlExpandEnvironmentStrings.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpCheckPseudoEnvironmentVariable @ 0x180056F98 (RtlpCheckPseudoEnvironmentVariable.c)
 *     RtlpQueryEnvironmentCache @ 0x180057038 (RtlpQueryEnvironmentCache.c)
 *     RtlpScanEnvironment @ 0x1800572F0 (RtlpScanEnvironment.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable(
        PVOID Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PWSTR Value,
        SIZE_T ValueLength,
        PSIZE_T ReturnLength)
{
  int v10; // ebx
  PSIZE_T v11; // r15
  NTSTATUS result; // eax
  SIZE_T v13; // rsi
  _PEB *ProcessEnvironmentBlock; // rdx
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  NTSTATUS v16; // [rsp+40h] [rbp-28h]
  struct _TEB *v17; // [rsp+48h] [rbp-20h]
  PVOID v18; // [rsp+80h] [rbp+18h] BYREF

  v17 = NtCurrentTeb();
  v10 = 0;
  v11 = ReturnLength;
  *ReturnLength = 0LL;
  if ( !NameLength )
    return -1073741568;
  result = RtlpCheckPseudoEnvironmentVariable((wchar_t *)Name, NameLength, (__int64)v11);
  if ( result == -1073741568 )
  {
    if ( Environment )
    {
      v18 = Environment;
      if ( !*(_WORD *)Environment )
        return -1073741568;
      ProcessEnvironmentBlock = v17->ProcessEnvironmentBlock;
      if ( ProcessEnvironmentBlock->ProcessParameters->Environment == Environment )
      {
        FastPebLock = ProcessEnvironmentBlock->FastPebLock;
        if ( !FastPebLock || FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
        {
          result = RtlpQueryEnvironmentCache(&v18, Name, NameLength, Value, ValueLength, v11);
          if ( result != -1073741568 )
            return result;
          v10 = 1;
        }
      }
      return RtlpScanEnvironment(v18, Name, NameLength, Value, ValueLength, v11, v10);
    }
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v18 = v17->ProcessEnvironmentBlock->ProcessParameters->Environment;
    v13 = ValueLength;
    v16 = RtlpQueryEnvironmentCache(&v18, Name, NameLength, Value, ValueLength, v11);
    if ( v16 == -1073741568 )
      v16 = RtlpScanEnvironment(v18, Name, NameLength, Value, v13, v11, 1);
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    return v16;
  }
  return result;
}
