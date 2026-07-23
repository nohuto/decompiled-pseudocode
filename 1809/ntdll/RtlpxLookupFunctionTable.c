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
 *     RtlPcToFileHeader @ 0x180077850 (RtlPcToFileHeader.c)
 *     RtlGuardCheckImageBase @ 0x180078ED4 (RtlGuardCheckImageBase.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E2034 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlLookupFunctionTable @ 0x1800E2230 (RtlLookupFunctionTable.c)
 *     EtwpProviderArrivalCallback @ 0x18010FE08 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlpGetImageBaseViaQueryVirtualMemory @ 0x180009B38 (RtlpGetImageBaseViaQueryVirtualMemory.c)
 *     RtlpWaitCouldDeadlock @ 0x18005EDEC (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x18006ADA0 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180075204 (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x180075260 (RtlpWakeSRWLock.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     ZwTerminateProcess @ 0x1800A0880 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3C10 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpxLookupFunctionTable(PVOID BaseAddress, __int64 a2)
{
  bool v3; // zf
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned __int64 Value; // rbx
  int v8; // r10d
  int v9; // r9d
  int v10; // eax
  char *v11; // r8
  unsigned __int64 v12; // rdx
  signed __int64 v13; // rax
  __int64 ImageBaseViaQueryVirtualMemory; // rax
  __int64 v16; // r15
  signed __int64 v17; // rcx
  signed __int64 v18; // r8
  signed __int64 v19; // rtt
  __int64 v20; // rdx
  signed __int64 v21; // rcx
  signed __int64 v22; // rdx
  signed __int64 v23; // rtt
  bool v24; // cl
  char *v25; // rdx
  signed __int64 v26; // rax
  int j; // ecx
  _QWORD *v29; // rcx
  __int64 i; // rdx
  unsigned __int64 v31; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 *v32; // [rsp+38h] [rbp-60h]
  __int64 v33; // [rsp+40h] [rbp-58h]
  void *UniqueThread; // [rsp+48h] [rbp-50h]
  int v35; // [rsp+50h] [rbp-48h]
  signed __int32 v36[3]; // [rsp+54h] [rbp-44h] BYREF
  int v37; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v38; // [rsp+B0h] [rbp+18h] BYREF

  v3 = LdrInitState == 3;
  v5 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v3 )
  {
    v6 = -1LL;
    v37 = 0;
    Value = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 17LL, 0LL);
    if ( !Value )
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
          if ( (unsigned __int64)BaseAddress < v12 )
          {
            if ( !v10 )
              break;
            v9 = v10 - 1;
          }
          else
          {
            if ( (unsigned __int64)BaseAddress < v12 + *((unsigned int *)v11 + 4) )
            {
              *(_OWORD *)a2 = *(_OWORD *)v11;
              *(_QWORD *)(a2 + 16) = *((_QWORD *)v11 + 2);
              v5 = *(_QWORD *)a2;
              break;
            }
            v8 = v10 + 1;
          }
        }
      }
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 0LL, 17LL);
      if ( v13 != 17 )
      {
        if ( (v13 & 1) == 0 )
          RtlRaiseStatus(-1073741212);
        if ( (v13 & 2) != 0 )
        {
LABEL_35:
          if ( (v13 & 8) != 0 )
          {
            v29 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0uLL);
            for ( i = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v29[1] )
              v29 = (_QWORD *)*v29;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
              goto LABEL_14;
            v6 = -9LL;
          }
          do
          {
            v20 = v6 + 4;
            v21 = v13 & 6;
            if ( v21 != 2 )
              v20 = v6;
            v22 = v13 + v20;
            v23 = v13;
            v13 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, v22, v13);
          }
          while ( v23 != v13 );
          if ( v21 == 2 )
            RtlpWakeSRWLock(&LdrpInvertedFunctionTableSRWLock, v22, 0LL);
          goto LABEL_14;
        }
        while ( 1 )
        {
          v18 = 0LL;
          if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
            v18 = v13 - 16;
          v19 = v13;
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, v18, v13);
          if ( v19 == v13 )
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
      v16 = (Value >> 1) & 1;
      if ( (Value & 1) != 0 && (v16 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock() )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v24 = 0;
        v36[0] = 2;
        v33 = 0LL;
        if ( v16 )
        {
          v32 = 0LL;
          v35 = -1;
          v31 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          v25 = (char *)((unsigned __int64)&v31 | Value & 8 | 7);
          v24 = (Value & 4) == 0;
        }
        else
        {
          v35 = -2;
          v32 = &v31;
          v25 = (char *)&v31 + 3;
        }
        v26 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock,
                (signed __int64)v25,
                Value);
        v3 = Value == v26;
        Value = v26;
        if ( !v3 )
          goto LABEL_46;
        if ( v24 )
          RtlpOptimizeSRWLockList(&LdrpInvertedFunctionTableSRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( j = SRWLockSpinCount; j; --j )
          {
            if ( (v36[0] & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(v36, 1u) )
        {
          do
            NtWaitForAlertByThreadId(&LdrpInvertedFunctionTableSRWLock, 0LL);
          while ( (v36[0] & 4) == 0 );
        }
      }
      else
      {
        v17 = (Value | 1) + 16;
        if ( v16 )
          v17 = Value | 1;
        if ( Value == _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock,
                        v17,
                        Value) )
          goto LABEL_3;
LABEL_46:
        RtlBackoff(&v37);
        _m_prefetchw(&LdrpInvertedFunctionTableSRWLock);
        Value = LdrpInvertedFunctionTableSRWLock.Value;
      }
    }
  }
LABEL_16:
  ImageBaseViaQueryVirtualMemory = RtlpGetImageBaseViaQueryVirtualMemory(BaseAddress);
  *(_QWORD *)(a2 + 8) = ImageBaseViaQueryVirtualMemory;
  if ( ImageBaseViaQueryVirtualMemory )
  {
    if ( (int)RtlpImageDirectoryEntryToDataEx(ImageBaseViaQueryVirtualMemory, (__int64)&v38) < 0 )
    {
      v5 = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
    else
    {
      v5 = v38;
      *(_QWORD *)a2 = v38;
    }
  }
  return v5;
}
