/*
 * XREFs of TppCallbackEpilog @ 0x1800351D0
 * Callers:
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003741C (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180035510 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 *     TppIteWakeWaiters @ 0x180066F8C (TppIteWakeWaiters.c)
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ZwReleaseSemaphore @ 0x18009CFD0 (ZwReleaseSemaphore.c)
 *     ZwSetEvent @ 0x18009D050 (ZwSetEvent.c)
 *     ZwReleaseMutant @ 0x18009D290 (ZwReleaseMutant.c)
 *     NtSetInformationWorkerFactory @ 0x1800A01A0 (NtSetInformationWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

void __fastcall TppCallbackEpilog(unsigned int *a1)
{
  unsigned int v2; // eax
  int v3; // ecx
  _RTL_SRWLOCK *v4; // r14
  char v5; // r15
  signed __int64 Value; // rbx
  unsigned __int64 v7; // rdi
  signed __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r10d
  __int64 v13; // r9
  __int64 v14; // r8
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  void *v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  NTSTATUS v20; // eax
  unsigned __int64 v21; // rbx
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  signed __int64 v27; // [rsp+20h] [rbp-89h]
  signed __int64 v28; // [rsp+20h] [rbp-89h]
  _DWORD WorkerFactoryInformation[2]; // [rsp+28h] [rbp-81h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-79h] BYREF

  TppCallbackCheckThreadAfterCallback(a1);
  v2 = a1[36];
  if ( !v2 )
  {
LABEL_14:
    memset(a1, 0, 0x90uLL);
    return;
  }
  while ( 1 )
  {
    _BitScanForward((unsigned int *)&v3, v2);
    WorkerFactoryInformation[1] = v3;
    a1[36] = v2 ^ (1 << v3);
    if ( v3 != 9 )
      break;
    v10 = *((_QWORD *)a1 + 23);
    *((_QWORD *)a1 + 23) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)(v10 + 8) + 8LL))(
      v10,
      0xFFFFFFFFFFFFFFFLL,
      0x180000000uLL);
LABEL_13:
    v2 = a1[36];
    if ( !v2 )
      goto LABEL_14;
  }
  if ( v3 == 6 )
  {
    v4 = (_RTL_SRWLOCK *)*((_QWORD *)a1 + 23);
    v5 = 0;
    _m_prefetchw(&v4[7]);
    Value = v4[7].Value;
    do
    {
      if ( v5 )
      {
        RtlReleaseSRWLockExclusive(v4 + 8);
        v5 = 0;
      }
      v7 = Value;
      v8 = (Value ^ (Value - 1)) & 0xFFFFFFFFFFFFFFFLL ^ Value;
      if ( (v8 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v7 >> 60) & 8) != 0 )
      {
        v8 &= ~0x8000000000000000uLL;
        v5 = 1;
        RtlAcquireSRWLockExclusive(v4 + 8);
      }
      Value = _InterlockedCompareExchange64((volatile signed __int64 *)&v4[7], v8, v7);
    }
    while ( v7 != Value );
    if ( v5 )
    {
      v9 = v4[9].Value;
      v4[9].Value = 0LL;
      RtlReleaseSRWLockExclusive(v4 + 8);
      TppIteWakeWaiters(v9);
    }
    goto LABEL_13;
  }
  switch ( v3 )
  {
    case 0:
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)a1 + 24));
      *((_QWORD *)a1 + 24) = 0LL;
      goto LABEL_13;
    case 1:
      v23 = ZwReleaseMutant((HANDLE)a1[38], 0LL);
      v21 = v23;
      if ( v23 >= 0 )
      {
        a1[38] = 0;
        goto LABEL_13;
      }
      memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
      v26 = a1[38];
      ExceptionRecord.ExceptionCode = -1073740019;
LABEL_40:
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[2] = v26;
      ExceptionRecord.ExceptionInformation[3] = v21;
LABEL_41:
      ExceptionRecord.ExceptionInformation[0] = *((_QWORD *)a1 + 11);
      ExceptionRecord.ExceptionInformation[1] = *((_QWORD *)a1 + 12);
      memset(a1, 0, 0xF8uLL);
      RtlRaiseException(&ExceptionRecord);
      return;
    case 2:
      v22 = ZwSetEvent((HANDLE)a1[37], 0LL);
      v21 = v22;
      if ( v22 < 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        v26 = a1[37];
        ExceptionRecord.ExceptionCode = -1073740021;
        goto LABEL_40;
      }
      a1[37] = 0;
      goto LABEL_13;
    case 3:
      v24 = ZwReleaseSemaphore((HANDLE)a1[39], a1[40], 0LL);
      v25 = v24;
      if ( v24 < 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionInformation[2] = a1[39];
        ExceptionRecord.ExceptionInformation[3] = a1[40];
        ExceptionRecord.ExceptionCode = -1073740020;
        ExceptionRecord.NumberParameters = 5;
        ExceptionRecord.ExceptionInformation[4] = v25;
        goto LABEL_41;
      }
      *(_QWORD *)(a1 + 39) = 0LL;
      goto LABEL_13;
    case 4:
      v11 = *((_QWORD *)a1 + 16);
      v12 = a1[18];
      v13 = *((_QWORD *)a1 + 23);
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 416));
        _InterlockedDecrement((volatile signed __int32 *)(v11 + 420));
        _m_prefetchw((const void *)(v11 + 8));
        v18 = *(_QWORD *)(v11 + 8);
        HIDWORD(v28) = HIDWORD(v18);
        do
        {
          LODWORD(v28) = v18 ^ (unsigned __int16)(v18 ^ (v18 - 1));
          v19 = v18;
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8), v28, v18);
          HIDWORD(v28) = HIDWORD(v18);
        }
        while ( v19 != v18 );
        v17 = *(void **)(v11 + 56);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 144) + 416LL));
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 144) + 420LL));
        v14 = *(_QWORD *)(v13 + 144);
        _m_prefetchw((const void *)(v14 + 8));
        v15 = *(_QWORD *)(v14 + 8);
        HIDWORD(v27) = HIDWORD(v15);
        do
        {
          LODWORD(v27) = v15 ^ (unsigned __int16)(v15 ^ (v15 - 1));
          v16 = v15;
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), v27, v15);
          HIDWORD(v27) = HIDWORD(v15);
        }
        while ( v16 != v15 );
        v17 = *(void **)(*(_QWORD *)(v13 + 144) + 56LL);
      }
      if ( v12 == 2 )
      {
        WorkerFactoryInformation[0] = 0;
        NtSetInformationWorkerFactory(v17, WorkerFactoryCallbackType, WorkerFactoryInformation, 4u);
      }
      goto LABEL_13;
    case 5:
      TppBarrierAdjust(*((_QWORD *)a1 + 22) + 32LL, 0xFFFFFFFFLL);
      *((_QWORD *)a1 + 22) = 0LL;
      goto LABEL_13;
    case 7:
      v20 = LdrUnloadDll(*((PVOID *)a1 + 25));
      v21 = v20;
      if ( v20 < 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        v26 = *((_QWORD *)a1 + 25);
        ExceptionRecord.ExceptionCode = -1073740018;
        goto LABEL_40;
      }
      *((_QWORD *)a1 + 25) = 0LL;
      goto LABEL_13;
    case 8:
      LdrUnloadDll(*((PVOID *)a1 + 21));
      *((_QWORD *)a1 + 21) = 0LL;
      goto LABEL_13;
    default:
      goto LABEL_13;
  }
}
