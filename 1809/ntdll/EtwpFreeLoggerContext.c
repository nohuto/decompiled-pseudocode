/*
 * XREFs of EtwpFreeLoggerContext @ 0x18005A9DC
 * Callers:
 *     EtwpStopUmLogger @ 0x18004CFF4 (EtwpStopUmLogger.c)
 *     EtwpStartUmLogger @ 0x18004FFC8 (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x180059EE0 (EtwpLogger.c)
 * Callees:
 *     EtwpShutdownCompression @ 0x1800029B8 (EtwpShutdownCompression.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     EtwpFreeStreamIndexMap @ 0x18005ABC4 (EtwpFreeStreamIndexMap.c)
 *     RtlDeleteCriticalSection @ 0x18005C6B0 (RtlDeleteCriticalSection.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A06C0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1800A0980 (ZwDelayExecution.c)
 */

LOGICAL __fastcall EtwpFreeLoggerContext(unsigned int *BaseAddress)
{
  __int64 v1; // rdx
  unsigned int *v3; // rdi
  unsigned int *v4; // rdi
  void *v5; // r8
  void *v6; // r8
  void *v7; // r8
  unsigned int *v9; // r8
  unsigned int *v10; // rbp
  unsigned int *v11; // r14
  unsigned int *v12; // r8
  void *ProcessHeap; // rcx
  LARGE_INTEGER DelayInterval; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  v1 = BaseAddress[5];
  DelayInterval.QuadPart = -3000000LL;
  if ( *(int *)(EtwpLoggerArray + 16 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0, &DelayInterval);
    while ( *(int *)(EtwpLoggerArray + 16LL * BaseAddress[5] + 8) > 1 );
  }
  if ( (BaseAddress[81] & 0x4000000) != 0 )
    EtwpShutdownCompression((__int64)BaseAddress);
  if ( *((_QWORD *)BaseAddress + 53) )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)BaseAddress + 53, &RegionSize, 0x8000u);
  }
  NtClose(*((HANDLE *)BaseAddress + 17));
  NtClose(*((HANDLE *)BaseAddress + 16));
  RtlDeleteCriticalSection((PRTL_CRITICAL_SECTION)(BaseAddress + 22));
  if ( *((_QWORD *)BaseAddress + 20) )
    RtlFreeAnsiString((PUNICODE_STRING)(BaseAddress + 38));
  if ( *((_QWORD *)BaseAddress + 22) )
    RtlFreeAnsiString((PUNICODE_STRING)(BaseAddress + 42));
  if ( *((_QWORD *)BaseAddress + 24) )
    RtlFreeAnsiString((PUNICODE_STRING)(BaseAddress + 46));
  v3 = (unsigned int *)*((_QWORD *)BaseAddress + 58);
  while ( v3 != BaseAddress + 116 )
  {
    v9 = v3;
    v3 = *(unsigned int **)v3;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  }
  v4 = (unsigned int *)*((_QWORD *)BaseAddress + 60);
  while ( v4 != BaseAddress + 120 )
  {
    v10 = v4;
    v11 = (unsigned int *)*((_QWORD *)v4 + 3);
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v11 == v4 + 6 )
        break;
      v12 = v11;
      v11 = *(unsigned int **)v11;
      RtlFreeHeap(ProcessHeap, 0, v12);
    }
    v4 = *(unsigned int **)v4;
    RtlFreeHeap(ProcessHeap, 0, v10);
  }
  v5 = (void *)*((_QWORD *)BaseAddress + 64);
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  v6 = (void *)*((_QWORD *)BaseAddress + 65);
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  v7 = (void *)*((_QWORD *)BaseAddress + 67);
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  EtwpFreeStreamIndexMap(BaseAddress);
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * BaseAddress[5]), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * BaseAddress[5] + 8));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
