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
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1800A0960 (ZwDelayExecution.c)
 */

__int64 __fastcall EtwpFreeLoggerContext(unsigned __int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbp
  _QWORD *v11; // r14
  unsigned __int64 v12; // r8
  void *ProcessHeap; // rcx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v15 = -1;
  v1 = *(unsigned int *)(a1 + 20);
  v14 = -3000000;
  if ( *(int *)(EtwpLoggerArray + 16 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0LL, &v14);
    while ( *(int *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8) > 1 );
  }
  if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
    EtwpShutdownCompression(a1);
  if ( *(_QWORD *)(a1 + 424) )
  {
    v16 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 424, &v16, 0x8000LL);
  }
  NtClose(*(HANDLE *)(a1 + 136));
  NtClose(*(HANDLE *)(a1 + 128));
  RtlDeleteCriticalSection((void *)(a1 + 88));
  if ( *(_QWORD *)(a1 + 160) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 152));
  if ( *(_QWORD *)(a1 + 176) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 168));
  if ( *(_QWORD *)(a1 + 192) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 184));
  v3 = *(_QWORD **)(a1 + 464);
  while ( v3 != (_QWORD *)(a1 + 464) )
  {
    v9 = (unsigned __int64)v3;
    v3 = (_QWORD *)*v3;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  }
  v4 = *(_QWORD **)(a1 + 480);
  while ( v4 != (_QWORD *)(a1 + 480) )
  {
    v10 = (unsigned __int64)v4;
    v11 = (_QWORD *)v4[3];
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v11 == v4 + 3 )
        break;
      v12 = (unsigned __int64)v11;
      v11 = (_QWORD *)*v11;
      RtlFreeHeap((__int64)ProcessHeap, 0, v12);
    }
    v4 = (_QWORD *)*v4;
    RtlFreeHeap((__int64)ProcessHeap, 0, v10);
  }
  v5 = *(_QWORD *)(a1 + 512);
  if ( v5 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  v6 = *(_QWORD *)(a1 + 520);
  if ( v6 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  v7 = *(_QWORD *)(a1 + 536);
  if ( v7 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
  EtwpFreeStreamIndexMap(a1);
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
