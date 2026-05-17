/*
 * XREFs of TppCallbackEpilog @ 0x180016F10
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18001725C (TppCallbackCheckThreadAfterCallback.c)
 *     LdrUnloadDll @ 0x1800425D0 (LdrUnloadDll.c)
 *     TppBarrierAdjust @ 0x180073CB8 (TppBarrierAdjust.c)
 *     TppIteWakeWaiters @ 0x180073E38 (TppIteWakeWaiters.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     ZwReleaseSemaphore @ 0x1800A0420 (ZwReleaseSemaphore.c)
 *     ZwSetEvent @ 0x1800A04A0 (ZwSetEvent.c)
 *     ZwReleaseMutant @ 0x1800A06E0 (ZwReleaseMutant.c)
 *     NtSetInformationWorkerFactory @ 0x1800A35D0 (NtSetInformationWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

void __fastcall TppCallbackEpilog(unsigned int *a1)
{
  __int64 v2; // r9
  unsigned int v3; // eax
  int v4; // ecx
  unsigned __int64 *v5; // r8
  __int64 v6; // r14
  char v7; // r15
  signed __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rcx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  int v21; // eax
  unsigned __int64 v22; // rbx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  signed __int64 v28; // [rsp+20h] [rbp-89h]
  signed __int64 v29; // [rsp+20h] [rbp-89h]
  _DWORD v30[2]; // [rsp+28h] [rbp-81h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-79h] BYREF

  TppCallbackCheckThreadAfterCallback(a1);
  v3 = a1[36];
  if ( !v3 )
  {
LABEL_14:
    memset(a1, 0, 0x90uLL);
    return;
  }
  while ( 1 )
  {
    _BitScanForward((unsigned int *)&v4, v3);
    v5 = (unsigned __int64 *)0x180000000LL;
    v30[1] = v4;
    a1[36] = v3 ^ (1 << v4);
    if ( v4 != 9 )
      break;
    v12 = *((_QWORD *)a1 + 23);
    *((_QWORD *)a1 + 23) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)(v12 + 8) + 8LL))(
      v12,
      0xFFFFFFFFFFFFFFFLL,
      0x180000000uLL);
LABEL_13:
    v3 = a1[36];
    if ( !v3 )
      goto LABEL_14;
  }
  if ( v4 == 6 )
  {
    v6 = *((_QWORD *)a1 + 23);
    v7 = 0;
    _m_prefetchw((const void *)(v6 + 56));
    v8 = *(_QWORD *)(v6 + 56);
    do
    {
      if ( v7 )
      {
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 64));
        v7 = 0;
      }
      v9 = v8;
      v10 = (v8 ^ (v8 - 1)) & 0xFFFFFFFFFFFFFFFLL ^ v8;
      if ( (v10 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v9 >> 60) & 8) != 0 )
      {
        v10 &= ~0x8000000000000000uLL;
        v7 = 1;
        RtlAcquireSRWLockExclusive(v6 + 64, 0xFFFFFFFFFFFFFFFuLL, v5, v2);
      }
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 56), v10, v9);
    }
    while ( v9 != v8 );
    if ( v7 )
    {
      v11 = *(_QWORD *)(v6 + 72);
      *(_QWORD *)(v6 + 72) = 0LL;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 64));
      TppIteWakeWaiters(v11);
    }
    goto LABEL_13;
  }
  if ( v4 == 4 )
  {
    v13 = *((_QWORD *)a1 + 16);
    v2 = a1[18];
    v14 = *((_QWORD *)a1 + 23);
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 416));
      _InterlockedDecrement((volatile signed __int32 *)(v13 + 420));
      _m_prefetchw((const void *)(v13 + 8));
      v19 = *(_QWORD *)(v13 + 8);
      HIDWORD(v29) = HIDWORD(v19);
      do
      {
        LODWORD(v29) = v19 ^ (unsigned __int16)(v19 ^ (v19 - 1));
        v20 = v19;
        v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), v29, v19);
        HIDWORD(v29) = HIDWORD(v19);
      }
      while ( v20 != v19 );
      v18 = *(_QWORD *)(v13 + 56);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 144) + 416LL));
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 144) + 420LL));
      v15 = *(_QWORD *)(v14 + 144);
      _m_prefetchw((const void *)(v15 + 8));
      v16 = *(_QWORD *)(v15 + 8);
      HIDWORD(v28) = HIDWORD(v16);
      do
      {
        LODWORD(v28) = v16 ^ (unsigned __int16)(v16 ^ (v16 - 1));
        v17 = v16;
        v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 8), v28, v16);
        HIDWORD(v28) = HIDWORD(v16);
      }
      while ( v17 != v16 );
      v18 = *(_QWORD *)(*(_QWORD *)(v14 + 144) + 56LL);
    }
    if ( (_DWORD)v2 == 2 )
    {
      v30[0] = 0;
      NtSetInformationWorkerFactory(v18, 9LL, v30);
    }
    goto LABEL_13;
  }
  switch ( v4 )
  {
    case 0:
      RtlLeaveCriticalSection(*((_QWORD *)a1 + 24));
      *((_QWORD *)a1 + 24) = 0LL;
      goto LABEL_13;
    case 1:
      v24 = ZwReleaseMutant(a1[38], 0LL, 0x180000000uLL);
      v22 = v24;
      if ( v24 >= 0 )
      {
        a1[38] = 0;
        goto LABEL_13;
      }
      memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
      v27 = a1[38];
      ExceptionRecord.ExceptionCode = -1073740019;
LABEL_41:
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[2] = v27;
      ExceptionRecord.ExceptionInformation[3] = v22;
LABEL_42:
      ExceptionRecord.ExceptionInformation[0] = *((_QWORD *)a1 + 11);
      ExceptionRecord.ExceptionInformation[1] = *((_QWORD *)a1 + 12);
      memset(a1, 0, 0xF8uLL);
      RtlRaiseException(&ExceptionRecord);
      return;
    case 2:
      v23 = ZwSetEvent(a1[37], 0LL);
      v22 = v23;
      if ( v23 < 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        v27 = a1[37];
        ExceptionRecord.ExceptionCode = -1073740021;
        goto LABEL_41;
      }
      a1[37] = 0;
      goto LABEL_13;
    case 3:
      v25 = ZwReleaseSemaphore(a1[39], a1[40], 0LL);
      v26 = v25;
      if ( v25 < 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionInformation[2] = a1[39];
        ExceptionRecord.ExceptionInformation[3] = a1[40];
        ExceptionRecord.ExceptionCode = -1073740020;
        ExceptionRecord.NumberParameters = 5;
        ExceptionRecord.ExceptionInformation[4] = v26;
        goto LABEL_42;
      }
      *(_QWORD *)(a1 + 39) = 0LL;
      goto LABEL_13;
    case 5:
      TppBarrierAdjust(*((_QWORD *)a1 + 22) + 32LL, 0xFFFFFFFFLL);
      *((_QWORD *)a1 + 22) = 0LL;
      goto LABEL_13;
    case 7:
      v21 = LdrUnloadDll(*((_QWORD *)a1 + 25), 0xFFFFFFFFFFFFFFFLL, 0x180000000uLL);
      v22 = v21;
      if ( v21 < 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        v27 = *((_QWORD *)a1 + 25);
        ExceptionRecord.ExceptionCode = -1073740018;
        goto LABEL_41;
      }
      *((_QWORD *)a1 + 25) = 0LL;
      goto LABEL_13;
    case 8:
      LdrUnloadDll(*((_QWORD *)a1 + 21), 0xFFFFFFFFFFFFFFFLL, 0x180000000uLL);
      *((_QWORD *)a1 + 21) = 0LL;
      goto LABEL_13;
    default:
      goto LABEL_13;
  }
}
