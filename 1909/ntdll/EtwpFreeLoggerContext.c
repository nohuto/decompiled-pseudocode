/*
 * XREFs of EtwpFreeLoggerContext @ 0x180087B98
 * Callers:
 *     EtwpStartUmLogger @ 0x1800059B8 (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x18006D190 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x180087300 (EtwpStopUmLogger.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     EtwpFreeStreamIndexMap @ 0x180087D84 (EtwpFreeStreamIndexMap.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18009D250 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x18009D510 (ZwDelayExecution.c)
 *     EtwpShutdownCompression @ 0x18010E5C8 (EtwpShutdownCompression.c)
 */

LOGICAL __fastcall EtwpFreeLoggerContext(unsigned int *BaseAddress)
{
  __int64 v1; // rdx
  unsigned int *v3; // rdi
  unsigned int *v4; // rdi
  void *v5; // r8
  void *v6; // r8
  void *v7; // r8
  void *v8; // r8
  unsigned int *v10; // r8
  unsigned int *v11; // rbp
  unsigned int *v12; // r14
  unsigned int *v13; // r8
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
    EtwpShutdownCompression(BaseAddress);
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
    v10 = v3;
    v3 = *(unsigned int **)v3;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  v4 = (unsigned int *)*((_QWORD *)BaseAddress + 60);
  while ( v4 != BaseAddress + 120 )
  {
    v11 = v4;
    v12 = (unsigned int *)*((_QWORD *)v4 + 3);
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v12 == v4 + 6 )
        break;
      v13 = v12;
      v12 = *(unsigned int **)v12;
      RtlFreeHeap(ProcessHeap, 0, v13);
    }
    v4 = *(unsigned int **)v4;
    RtlFreeHeap(ProcessHeap, 0, v11);
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
  v8 = (void *)*((_QWORD *)BaseAddress + 69);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  EtwpFreeStreamIndexMap(BaseAddress);
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * BaseAddress[5]), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * BaseAddress[5] + 8));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
