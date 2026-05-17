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

__int64 __fastcall RtlCreateEnvironmentEx(void *Src, _QWORD *a2, int a3)
{
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  void *Environment; // rbx
  int v6; // r15d
  BOOL v7; // ebp
  int v8; // r12d
  size_t EnvironmentSize; // rdi
  void *v10; // rsi
  int v11; // eax
  int v12; // ebx
  _DWORD *v14; // rax
  bool v15; // cc
  int v16; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  Environment = Src;
  if ( (a3 & 0xFFFFFFF8) != 0 )
    return 3221225713LL;
  if ( (((a3 & 5) - 1) & a3 & 5) != 0 )
    return 3221225713LL;
  v6 = a3 & 2;
  if ( (a3 & 2) != 0 && (a3 & 1) == 0 )
    return 3221225713LL;
  if ( Src )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_6;
    return 3221225520LL;
  }
  if ( (a3 & 1) != 0 )
    return 3221225520LL;
LABEL_6:
  if ( (a3 & 4) != 0 )
    goto LABEL_23;
  if ( Src )
  {
    v7 = !(a3 & 1);
    v8 = 0;
    EnvironmentSize = sub_18005D7A8(Src, !(a3 & 1));
    goto LABEL_9;
  }
  v7 = 1;
  v8 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  EnvironmentSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( !Environment )
    goto LABEL_23;
  while ( 1 )
  {
LABEL_9:
    v10 = (void *)sub_18005D77C(EnvironmentSize);
    if ( !v10 )
      return (unsigned int)-1073741670;
    if ( v8 != 1 )
      goto LABEL_11;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = ProcessParameters->Environment;
    if ( !Environment )
      break;
    v15 = ProcessParameters->EnvironmentSize <= EnvironmentSize;
    EnvironmentSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
    {
LABEL_11:
      if ( v7 )
      {
        memmove(v10, Environment, EnvironmentSize);
        if ( v8 == 1 )
          RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
LABEL_19:
        *a2 = v10;
        return 0LL;
      }
      if ( EnvironmentSize > 0xFFFFFFFF )
      {
        v12 = -2147483643;
      }
      else
      {
        v16 = EnvironmentSize >> 1;
        if ( v6 )
          v11 = RtlOemToUnicodeN((_DWORD)v10, EnvironmentSize, 0, (_DWORD)Environment, v16);
        else
          v11 = RtlMultiByteToUnicodeN((_DWORD)v10, EnvironmentSize, 0, (_DWORD)Environment, v16);
        v12 = v11;
      }
      if ( v12 >= 0 )
        goto LABEL_19;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v10);
      return (unsigned int)v12;
    }
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v10);
  }
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v10);
LABEL_23:
  v14 = (_DWORD *)sub_18005D77C(4LL);
  if ( !v14 )
    return 3221225626LL;
  *v14 = 0;
  *a2 = v14;
  return 0LL;
}
