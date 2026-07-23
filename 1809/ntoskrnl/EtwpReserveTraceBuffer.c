/*
 * XREFs of EtwpReserveTraceBuffer @ 0x1400C7540
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x1401132B0 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x14017C82C (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x14017CB50 (EtwpLogContextSwapEvent.c)
 *     EtwTraceEvent @ 0x14030E9CC (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14030EE00 (EtwTraceRaw.c)
 *     EtwpReserveWithPebsIndex @ 0x1403117C8 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14031185C (EtwpReserveWithPmcCounters.c)
 *     EtwpWriteUserEvent @ 0x1406483F0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpUnlockBufferList @ 0x140015480 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400154CC (EtwpLockBufferList.c)
 *     EtwpUpdateEventsLostCount @ 0x140113944 (EtwpUpdateEventsLostCount.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     EtwpGetTimeStampAndQpcDelta @ 0x140313F8C (EtwpGetTimeStampAndQpcDelta.c)
 */

unsigned __int64 __fastcall EtwpReserveTraceBuffer(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        __int16 a5)
{
  unsigned int v7; // r13d
  __int64 v8; // rcx
  unsigned int v9; // r12d
  _QWORD *v10; // rsi
  unsigned __int64 *v11; // r15
  unsigned __int64 v12; // rbx
  signed __int64 v13; // rax
  int v14; // eax
  unsigned __int32 v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int32 v18; // eax
  unsigned __int32 v19; // ecx
  unsigned __int64 result; // rax
  int v21; // ebx
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 v24; // r10
  signed __int64 v25; // r9
  unsigned __int32 v26; // eax
  bool v27; // zf
  unsigned __int64 v28; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v30; // r9
  signed __int64 v31; // r8
  signed __int64 v32; // rcx
  unsigned int v33; // [rsp+30h] [rbp-58h]
  unsigned int Number; // [rsp+38h] [rbp-50h]
  signed __int64 v35; // [rsp+40h] [rbp-48h] BYREF
  __int64 v36[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 v37; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v38; // [rsp+A8h] [rbp+20h]

  v38 = a4;
  if ( (a1[4] & 0x80000000) != 0 || a2 > a1[2] )
    goto LABEL_29;
  v7 = a1[1];
  v8 = *a1;
  v9 = (a2 + 7) & 0xFFFFFFF8;
  v33 = v8;
  while ( 2 )
  {
    Number = KeGetCurrentPrcb()->Number;
    v10 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 4136LL) + ((unsigned __int64)Number << 6));
    if ( (a1[3] & 0x10000000) != 0 )
      v11 = (unsigned __int64 *)(a1 + 36);
    else
      v11 = (unsigned __int64 *)(*v10 + 8 * v8);
    v37 = 0;
    _m_prefetchw(v11);
    v12 = *v11;
    if ( (*v11 & 0xF) != 0 )
    {
      do
      {
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v12 - 1, v12);
        if ( v12 == v13 )
          break;
        v12 = v13;
      }
      while ( (v13 & 0xF) != 0 );
    }
    if ( !v12 )
      goto LABEL_20;
    v14 = v12 & 0xF;
    if ( (v12 & 0xF) != 0 )
    {
      v12 &= 0xFFFFFFFFFFFFFFF0uLL;
      if ( v14 == 1 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFu);
        _m_prefetchw(v11);
        v22 = *v11;
        while ( (v22 & 0xF) == 0 )
        {
          if ( v12 != (v22 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v23 = v22;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v22 + 15, v22);
          if ( v23 == v22 )
            goto LABEL_11;
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFF1);
      }
    }
    else
    {
      EtwpLockBufferList((__int64)a1, &v37);
      v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
      EtwpUnlockBufferList((__int64)a1, &v37);
    }
LABEL_11:
    if ( !v12 )
      goto LABEL_20;
    _m_prefetchw((const void *)(v12 + 8));
    v15 = *(_DWORD *)(v12 + 8);
    if ( v15 > v7 )
      goto LABEL_20;
    while ( 1 )
    {
      if ( (a1[208] & 0x8000000) != 0 )
      {
        if ( (unsigned int)EtwpGetTimeStampAndQpcDelta(a1, v36, &v35) )
          goto LABEL_25;
        v17 = v33;
        v24 = 8LL * v33;
        v25 = *(_QWORD *)(v10[2] + v24);
        if ( v35 != v25 )
        {
          v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v15 + 24, v15);
          v27 = v15 == v26;
          v15 = v26;
          if ( v27 )
          {
            v28 = v12 + v26;
            v27 = v25 == _InterlockedCompareExchange64((volatile signed __int64 *)(v10[2] + v24), v35, v25);
            *(_DWORD *)(v28 + 4) = 5308440;
            *(_QWORD *)(v28 + 8) = v36[0];
            if ( v27 )
            {
              *(_QWORD *)(v28 + 16) = v35;
              *(_DWORD *)v28 = -1072627710;
            }
            else
            {
              *(_DWORD *)v28 = 49167;
              *(_QWORD *)(v28 + 16) = 0LL;
            }
          }
          goto LABEL_25;
        }
        v16 = v36[0];
      }
      else
      {
        v16 = (*((__int64 (**)(void))a1 + 5))();
        v17 = v33;
      }
      *v38 = v16;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v9 + v15, v15);
      v19 = v18;
      if ( v15 == v18 )
        break;
      v15 = v18;
LABEL_25:
      if ( v15 > v7 )
        goto LABEL_20;
    }
    if ( v18 + v9 <= v7 )
    {
      ++*(_QWORD *)(v10[1] + 8 * v17);
      result = v12 + v18;
      *(_QWORD *)a3 = v12;
      *(_QWORD *)(a3 + 8) = v11;
      *(_DWORD *)(a3 + 16) = v19;
      return result;
    }
    *(_DWORD *)(v12 + 4) = v18;
LABEL_20:
    v21 = EtwpSwitchBuffer(a1, v12, (signed __int64 *)v11, Number, a5);
    if ( (a1[3] & 0x4000000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v30 = PerformanceCounter.QuadPart
          - _InterlockedExchange64((volatile __int64 *)a1 + 155, PerformanceCounter.QuadPart);
      do
      {
        v31 = *((_QWORD *)a1 + 156);
        if ( v31 )
          v32 = (v31 + v30 + 2 * v31) / 4;
        else
          v32 = v30;
      }
      while ( v31 != _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 156, v32, v31) );
    }
    if ( v21 >= 0 )
    {
      v8 = v33;
      continue;
    }
    break;
  }
LABEL_29:
  EtwpUpdateEventsLostCount(a1);
  return 0LL;
}
