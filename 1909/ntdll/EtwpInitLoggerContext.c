/*
 * XREFs of EtwpInitLoggerContext @ 0x18000471C
 * Callers:
 *     EtwpStartUmLogger @ 0x1800059B8 (EtwpStartUmLogger.c)
 * Callees:
 *     EtwpAddInstanceIdToLogFileName @ 0x180004B28 (EtwpAddInstanceIdToLogFileName.c)
 *     RtlQueryPerformanceCounter @ 0x18000BBB0 (RtlQueryPerformanceCounter.c)
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     EtwpFillProcessorStreamIndexMap @ 0x180086804 (EtwpFillProcessorStreamIndexMap.c)
 *     EtwpFreeStreamIndexMap @ 0x180087D84 (EtwpFreeStreamIndexMap.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwCreateEvent @ 0x18009D790 (ZwCreateEvent.c)
 */

char *__fastcall EtwpInitLoggerContext(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r12d
  unsigned __int16 v10; // si
  LARGE_INTEGER v11; // rax
  char *Heap; // rbx
  PVOID v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  char *result; // rax
  unsigned __int16 v21; // r8
  unsigned int i; // ecx
  PVOID v23; // rax
  void *v24; // rax
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // r8
  void *v28; // r8
  __int128 v29; // [rsp+30h] [rbp-20h]
  __int128 v30; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp+30h] BYREF

  v5 = a5;
  v10 = 1;
  if ( a4 )
  {
    v21 = 0;
    v10 = 0;
    for ( i = 0; i < a5; i += (*(unsigned __int16 *)(i + a4 + 4) + 7) & 0xFFFFFFF8 )
    {
      ++v10;
      v21 += *(_WORD *)(i + a4 + 44);
    }
    a3 = v21;
  }
  *(_QWORD *)&v29 = MEMORY[0x7FFE0014];
  if ( *(_DWORD *)(a1 + 40) == 2 )
  {
    v11.QuadPart = MEMORY[0x7FFE0014];
  }
  else if ( *(_DWORD *)(a1 + 40) == 3 )
  {
    v11.QuadPart = __rdtsc();
  }
  else
  {
    PerformanceCounter.QuadPart = 0LL;
    RtlQueryPerformanceCounter(&PerformanceCounter);
    v11 = PerformanceCounter;
  }
  *((LARGE_INTEGER *)&v29 + 1) = v11;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8 * a3 + 584);
  if ( !Heap )
    return 0LL;
  v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 4 * a3);
  *((_QWORD *)Heap + 69) = v13;
  if ( v13 )
  {
    if ( a4 )
    {
      if ( (unsigned int)EtwpFillProcessorStreamIndexMap(Heap, v10, a4, v5) )
        goto LABEL_44;
      v23 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 12LL * v10);
      *((_QWORD *)Heap + 64) = v23;
      if ( !v23 )
        goto LABEL_44;
    }
    else
    {
      v14 = 0;
      if ( a3 )
      {
        v15 = 0LL;
        do
        {
          *(_WORD *)(v15 + *((_QWORD *)Heap + 69)) = 0;
          v15 += 4LL;
          *(_WORD *)(*((_QWORD *)Heap + 69) + v15 - 2) = v14++;
        }
        while ( v14 < a3 );
      }
    }
    v16 = *(_DWORD *)(a1 + 48);
    if ( v16 )
    {
      if ( v16 > 0x4000 )
      {
        *(_DWORD *)(a1 + 48) = 0x4000;
        v16 = 0x4000;
      }
      v17 = v16 << 10;
    }
    else
    {
      v17 = 4096;
    }
    *((_DWORD *)Heap + 52) = v17;
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(Heap + 152), *(PCWSTR *)(a1 + 152))
      && !(unsigned int)EtwpAddInstanceIdToLogFileName(a1, *(unsigned int *)(a1 + 96), &v30) )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x4000) != 0 )
      {
        v24 = &EtwpGlobalSequence;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) == 0 )
          goto LABEL_19;
        v24 = Heap + 408;
      }
      *((_QWORD *)Heap + 50) = v24;
LABEL_19:
      v18 = 2048;
      *((_DWORD *)Heap + 5) = a2;
      *((_DWORD *)Heap + 81) = 2048;
      *((_DWORD *)Heap + 51) = a3;
      *((_DWORD *)Heap + 13) = 0xFFFF;
      *((_DWORD *)Heap + 12) = -1072889856;
      *((_DWORD *)Heap + 11) = -1072496640;
      v19 = *(_DWORD *)(a1 + 64);
      if ( (v19 & 0x400) != 0 )
      {
        v18 = 3072;
        goto LABEL_23;
      }
      if ( (v19 & 2) != 0 )
      {
        v18 = 2050;
      }
      else
      {
        if ( (v19 & 8) != 0 )
        {
          v18 = 2056;
          *(_OWORD *)(Heap + 184) = v30;
          goto LABEL_23;
        }
        if ( (v19 & 1) == 0 )
          goto LABEL_24;
        v18 = 2049;
      }
      *(_OWORD *)(Heap + 168) = v30;
LABEL_23:
      *((_DWORD *)Heap + 81) = v18;
LABEL_24:
      *((_DWORD *)Heap + 81) = v18 | *(_DWORD *)(a1 + 64) & 0x34133024;
      *((_DWORD *)Heap + 98) = *(_DWORD *)(a1 + 108);
      *((_DWORD *)Heap + 57) = *((_DWORD *)Heap + 56);
      *(_OWORD *)(Heap + 56) = *(_OWORD *)(a1 + 24);
      *((_DWORD *)Heap + 80) = *(_DWORD *)(a1 + 60);
      *((_DWORD *)Heap + 54) = *(_DWORD *)(a1 + 56);
      *((_DWORD *)Heap + 55) = *(_DWORD *)(a1 + 52);
      *((_QWORD *)Heap + 30) = Heap + 232;
      *((_QWORD *)Heap + 29) = Heap + 232;
      *((_QWORD *)Heap + 33) = 0LL;
      *((_QWORD *)Heap + 31) = Heap + 264;
      *((_QWORD *)Heap + 32) = Heap + 264;
      *((_QWORD *)Heap + 36) = 0LL;
      *((_QWORD *)Heap + 34) = Heap + 288;
      *((_QWORD *)Heap + 35) = Heap + 288;
      *((_QWORD *)Heap + 39) = 0LL;
      *((_QWORD *)Heap + 37) = Heap + 312;
      *((_QWORD *)Heap + 38) = Heap + 312;
      *((_QWORD *)Heap + 59) = Heap + 464;
      *((_QWORD *)Heap + 58) = Heap + 464;
      *((_QWORD *)Heap + 61) = Heap + 480;
      *((_QWORD *)Heap + 60) = Heap + 480;
      *((_DWORD *)Heap + 4) = *(_DWORD *)(a1 + 40);
      *((_DWORD *)Heap + 18) = *(_DWORD *)(a1 + 96);
      *((_DWORD *)Heap + 92) = *(_DWORD *)(a1 + 76);
      if ( ZwCreateEvent((PHANDLE)Heap + 16, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0
        && ZwCreateEvent((PHANDLE)Heap + 17, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0 )
      {
        RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)(Heap + 88), 0, 0);
        *((_QWORD *)Heap + 10) = 0LL;
        result = Heap;
        *((_DWORD *)Heap + 82) = 1;
        *(_OWORD *)Heap = v29;
        return result;
      }
    }
  }
LABEL_44:
  v25 = (void *)*((_QWORD *)Heap + 17);
  if ( v25 )
  {
    NtClose(v25);
    *((_QWORD *)Heap + 17) = 0LL;
  }
  v26 = (void *)*((_QWORD *)Heap + 16);
  if ( v26 )
  {
    NtClose(v26);
    *((_QWORD *)Heap + 16) = 0LL;
  }
  v27 = (void *)*((_QWORD *)Heap + 64);
  if ( v27 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v27);
  v28 = (void *)*((_QWORD *)Heap + 69);
  if ( v28 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v28);
  EtwpFreeStreamIndexMap(Heap);
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 152));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 184));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
