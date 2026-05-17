/*
 * XREFs of RtlpxLookupFunctionTable @ 0x180006E00
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x180002F20 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180004720 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x180006A90 (RtlLookupFunctionEntry.c)
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x18000922C (LdrpResolveProcedureAddress.c)
 *     RtlQueryInformationActivationContext @ 0x18002DE20 (RtlQueryInformationActivationContext.c)
 *     RtlQueueWorkItem @ 0x180047CF0 (RtlQueueWorkItem.c)
 *     RtlPcToFileHeader @ 0x180077840 (RtlPcToFileHeader.c)
 *     RtlGuardCheckImageBase @ 0x180078EC4 (RtlGuardCheckImageBase.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E2034 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlLookupFunctionTable @ 0x1800E2230 (RtlLookupFunctionTable.c)
 *     EtwpProviderArrivalCallback @ 0x18010FE08 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlpGetImageBaseViaQueryVirtualMemory @ 0x180009B38 (RtlpGetImageBaseViaQueryVirtualMemory.c)
 *     RtlpWaitCouldDeadlock @ 0x18005EDEC (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x18006ADA0 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x1800751F4 (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x180075250 (RtlpWakeSRWLock.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     ZwTerminateProcess @ 0x1800A0860 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3BF0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 *a2)
{
  bool v3; // zf
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned __int64 v7; // rbx
  int v8; // r10d
  int v9; // r9d
  int v10; // eax
  char *v11; // r8
  unsigned __int64 v12; // rdx
  signed __int64 v13; // rax
  __int64 ImageBaseViaQueryVirtualMemory; // rax
  int v16; // edx
  __int64 v17; // r15
  signed __int64 v18; // rcx
  signed __int64 v19; // r8
  signed __int64 v20; // rtt
  __int64 v21; // rdx
  signed __int64 v22; // rcx
  signed __int64 v23; // rdx
  signed __int64 v24; // rtt
  bool v25; // cl
  char *v26; // rdx
  signed __int64 v27; // rax
  int j; // ecx
  _QWORD *v30; // rcx
  __int64 i; // rdx
  unsigned __int64 v32; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 *v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  void *UniqueThread; // [rsp+48h] [rbp-50h]
  int v36; // [rsp+50h] [rbp-48h]
  signed __int32 v37[3]; // [rsp+54h] [rbp-44h] BYREF
  int v38; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v39; // [rsp+B0h] [rbp+18h] BYREF

  v3 = LdrInitState == 3;
  v5 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  if ( v3 )
  {
    v6 = -1LL;
    v38 = 0;
    v7 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 17LL, 0LL);
    if ( !v7 )
    {
LABEL_3:
      if ( LdrpInvertedFunctionTable != 1 )
      {
        v8 = 1;
        v9 = LdrpInvertedFunctionTable - 1;
        while ( v9 >= v8 )
        {
          v10 = (v9 + v8) >> 1;
          v11 = (char *)&xmmword_180178500 + 24 * v10;
          v12 = *((_QWORD *)v11 + 1);
          if ( a1 < v12 )
          {
            if ( !v10 )
              break;
            v9 = v10 - 1;
          }
          else
          {
            if ( a1 < v12 + *((unsigned int *)v11 + 4) )
            {
              *(_OWORD *)a2 = *(_OWORD *)v11;
              a2[2] = *((_QWORD *)v11 + 2);
              v5 = *a2;
              break;
            }
            v8 = v10 + 1;
          }
        }
      }
      v13 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 0LL, 17LL);
      if ( v13 != 17 )
      {
        if ( (v13 & 1) == 0 )
          RtlRaiseStatus(3221226084LL);
        if ( (v13 & 2) != 0 )
        {
LABEL_35:
          if ( (v13 & 8) != 0 )
          {
            v30 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0uLL);
            for ( i = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v30[1] )
              v30 = (_QWORD *)*v30;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
              goto LABEL_14;
            v6 = -9LL;
          }
          do
          {
            v21 = v6 + 4;
            v22 = v13 & 6;
            if ( v22 != 2 )
              v21 = v6;
            v23 = v13 + v21;
            v24 = v13;
            v13 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v23, v13);
          }
          while ( v24 != v13 );
          if ( v22 == 2 )
            RtlpWakeSRWLock(&LdrpInvertedFunctionTableSRWLock, v23, 0LL);
          goto LABEL_14;
        }
        while ( 1 )
        {
          v19 = 0LL;
          if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
            v19 = v13 - 16;
          v20 = v13;
          v13 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v19, v13);
          if ( v20 == v13 )
            break;
          if ( (v13 & 2) != 0 )
            goto LABEL_35;
        }
      }
LABEL_14:
      if ( v5 || !byte_1801784FC && SLOBYTE(NtCurrentPeb()->CrossProcessFlags) >= 0 )
        return v5;
      goto LABEL_16;
    }
    while ( 1 )
    {
      v17 = (v7 >> 1) & 1;
      if ( (v7 & 1) != 0 && (v17 || (v7 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock() )
          ZwTerminateProcess(-1LL, 3221225547LL);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v25 = 0;
        v37[0] = 2;
        v34 = 0LL;
        if ( v17 )
        {
          v33 = 0LL;
          v36 = -1;
          v32 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
          v26 = (char *)((unsigned __int64)&v32 | v7 & 8 | 7);
          v25 = (v7 & 4) == 0;
        }
        else
        {
          v36 = -2;
          v33 = &v32;
          v26 = (char *)&v32 + 3;
        }
        v27 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, (signed __int64)v26, v7);
        v3 = v7 == v27;
        v7 = v27;
        if ( !v3 )
          goto LABEL_46;
        if ( v25 )
          RtlpOptimizeSRWLockList(&LdrpInvertedFunctionTableSRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( j = SRWLockSpinCount; j; --j )
          {
            if ( (v37[0] & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(v37, 1u) )
        {
          do
            NtWaitForAlertByThreadId(&LdrpInvertedFunctionTableSRWLock, 0LL);
          while ( (v37[0] & 4) == 0 );
        }
      }
      else
      {
        v18 = (v7 | 1) + 16;
        if ( v17 )
          v18 = v7 | 1;
        if ( v7 == _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v18, v7) )
          goto LABEL_3;
LABEL_46:
        RtlBackoff(&v38);
        _m_prefetchw(&LdrpInvertedFunctionTableSRWLock);
        v7 = LdrpInvertedFunctionTableSRWLock;
      }
    }
  }
LABEL_16:
  ImageBaseViaQueryVirtualMemory = RtlpGetImageBaseViaQueryVirtualMemory(a1, a2 + 2);
  a2[1] = ImageBaseViaQueryVirtualMemory;
  if ( ImageBaseViaQueryVirtualMemory )
  {
    LOBYTE(v16) = 1;
    if ( (int)RtlpImageDirectoryEntryToDataEx(ImageBaseViaQueryVirtualMemory, v16, 3, (int)a2 + 20, (__int64)&v39) < 0 )
    {
      v5 = 0LL;
      *a2 = 0LL;
    }
    else
    {
      v5 = v39;
      *a2 = v39;
    }
  }
  return v5;
}
