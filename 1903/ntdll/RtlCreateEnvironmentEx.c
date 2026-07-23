/*
 * XREFs of RtlCreateEnvironmentEx @ 0x18005CB80
 * Callers:
 *     RtlCreateEnvironment @ 0x18005C270 (RtlCreateEnvironment.c)
 *     sub_18005C988 @ 0x18005C988 (sub_18005C988.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005D77C @ 0x18005D77C (sub_18005D77C.c)
 *     sub_18005D7A8 @ 0x18005D7A8 (sub_18005D7A8.c)
 *     RtlMultiByteToUnicodeN @ 0x18005D810 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x180061F00 (RtlOemToUnicodeN.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

NTSTATUS __cdecl RtlCreateEnvironmentEx(PVOID SourceEnvironment, PVOID *Environment, ULONG Flags)
{
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // r14
  PVOID v5; // rbx
  ULONG v6; // r15d
  BOOL v7; // ebp
  int v8; // r12d
  unsigned __int64 EnvironmentSize; // rdi
  void *v10; // rsi
  NTSTATUS v11; // eax
  NTSTATUS v12; // ebx
  _DWORD *v14; // rax
  bool v15; // cc
  ULONG BytesInMultiByteString; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v5 = SourceEnvironment;
  if ( (Flags & 0xFFFFFFF8) != 0 )
    return -1073741583;
  if ( (((Flags & 5) - 1) & Flags & 5) != 0 )
    return -1073741583;
  v6 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741583;
  if ( SourceEnvironment )
  {
    if ( (Flags & 4) == 0 )
      goto LABEL_6;
    return -1073741776;
  }
  if ( (Flags & 1) != 0 )
    return -1073741776;
LABEL_6:
  if ( (Flags & 4) != 0 )
    goto LABEL_23;
  if ( SourceEnvironment )
  {
    v7 = !(Flags & 1);
    v8 = 0;
    EnvironmentSize = sub_18005D7A8(SourceEnvironment, !(Flags & 1));
    goto LABEL_9;
  }
  v7 = 1;
  v8 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v5 = ProcessParameters->Environment;
  EnvironmentSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( !v5 )
    goto LABEL_23;
  while ( 1 )
  {
LABEL_9:
    v10 = (void *)sub_18005D77C(EnvironmentSize);
    if ( !v10 )
      return -1073741670;
    if ( v8 != 1 )
      goto LABEL_11;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v5 = ProcessParameters->Environment;
    if ( !v5 )
      break;
    v15 = ProcessParameters->EnvironmentSize <= EnvironmentSize;
    EnvironmentSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
    {
LABEL_11:
      if ( v7 )
      {
        memmove(v10, v5, EnvironmentSize);
        if ( v8 == 1 )
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
LABEL_19:
        *Environment = v10;
        return 0;
      }
      if ( EnvironmentSize > 0xFFFFFFFF )
      {
        v12 = -2147483643;
      }
      else
      {
        BytesInMultiByteString = EnvironmentSize >> 1;
        if ( v6 )
          v11 = RtlOemToUnicodeN((PWSTR)v10, EnvironmentSize, 0LL, (PCCH)v5, BytesInMultiByteString);
        else
          v11 = RtlMultiByteToUnicodeN((PWCH)v10, EnvironmentSize, 0LL, (PCSTR)v5, BytesInMultiByteString);
        v12 = v11;
      }
      if ( v12 >= 0 )
        goto LABEL_19;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      return v12;
    }
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
LABEL_23:
  v14 = (_DWORD *)sub_18005D77C(4LL);
  if ( !v14 )
    return -1073741670;
  *v14 = 0;
  *Environment = v14;
  return 0;
}
