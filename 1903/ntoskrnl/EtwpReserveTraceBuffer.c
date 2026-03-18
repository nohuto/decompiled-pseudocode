/*
 * XREFs of EtwpReserveTraceBuffer @ 0x1400C31E0
 * Callers:
 *     EtwpTraceMessageVa @ 0x14008BFF0 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140146E9C (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1401471C0 (EtwpLogContextSwapEvent.c)
 *     EtwTraceEvent @ 0x14032C3F0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14032C888 (EtwTraceRaw.c)
 *     EtwpReserveWithPebsIndex @ 0x14032F710 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14032F7A4 (EtwpReserveWithPmcCounters.c)
 *     EtwpWriteUserEvent @ 0x140643270 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpSwitchBuffer @ 0x140003560 (EtwpSwitchBuffer.c)
 *     EtwpUnlockBufferList @ 0x1400039C4 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140003A10 (EtwpLockBufferList.c)
 *     EtwpUpdateEventsLostCount @ 0x14013B510 (EtwpUpdateEventsLostCount.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     EtwpGetTimeStampAndQpcDelta @ 0x140332160 (EtwpGetTimeStampAndQpcDelta.c)
 */

__int64 __fastcall EtwpReserveTraceBuffer(unsigned int *a1, unsigned int a2, __int64 a3, __int64 *a4, __int16 a5)
{
  unsigned __int32 v7; // ecx
  __int64 v8; // r13
  unsigned int v9; // r12d
  _QWORD *v10; // rsi
  unsigned __int64 *v11; // r15
  unsigned __int64 v12; // rbx
  signed __int64 v13; // rax
  int v14; // eax
  unsigned __int32 v15; // ebp
  __int64 v16; // rax
  signed __int64 *v17; // r9
  unsigned __int32 v18; // eax
  __int64 v19; // rdx
  signed __int64 v20; // rax
  signed __int64 j; // rcx
  signed __int64 v22; // rtt
  __int64 result; // rax
  int v24; // ebx
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  signed __int64 v27; // r10
  unsigned __int32 v28; // eax
  bool v29; // zf
  unsigned __int64 v30; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v32; // r9
  signed __int64 v33; // r8
  signed __int64 v34; // rcx
  unsigned int i; // [rsp+30h] [rbp-58h]
  unsigned int Number; // [rsp+38h] [rbp-50h]
  __int64 v37; // [rsp+40h] [rbp-48h] BYREF
  signed __int64 v38[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 v39; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v40; // [rsp+A8h] [rbp+20h]

  v40 = a4;
  if ( (a1[4] & 0x80000000) != 0 || a2 > a1[2] )
  {
LABEL_57:
    EtwpUpdateEventsLostCount(a1);
    return 0LL;
  }
  v7 = a1[1];
  v8 = *a1;
  v9 = (a2 + 7) & 0xFFFFFFF8;
  for ( i = v7; ; v7 = i )
  {
    Number = KeGetCurrentPrcb()->Number;
    v10 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 4136LL) + ((unsigned __int64)Number << 6));
    if ( (a1[3] & 0x10000000) != 0 )
    {
      v11 = (unsigned __int64 *)(a1 + 36);
    }
    else
    {
      v7 = i;
      v11 = (unsigned __int64 *)(*v10 + 8 * v8);
    }
    v39 = 0;
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
      v7 = i;
    }
    if ( v12 )
      break;
LABEL_24:
    v24 = EtwpSwitchBuffer(a1, v12, (signed __int64 *)v11, Number, a5);
    if ( (a1[3] & 0x4000000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v32 = PerformanceCounter.QuadPart
          - _InterlockedExchange64((volatile __int64 *)a1 + 159, PerformanceCounter.QuadPart);
      do
      {
        v33 = *((_QWORD *)a1 + 160);
        if ( v33 )
          v34 = (v33 + v32 + 2 * v33) / 4;
        else
          v34 = v32;
      }
      while ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 160, v34, v33) );
    }
    if ( v24 < 0 )
      goto LABEL_57;
  }
  v14 = v12 & 0xF;
  if ( (v12 & 0xF) == 0 )
  {
    EtwpLockBufferList((__int64)a1, &v39);
    v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
    EtwpUnlockBufferList((__int64)a1, &v39);
LABEL_43:
    v7 = i;
    goto LABEL_12;
  }
  v12 &= 0xFFFFFFFFFFFFFFF0uLL;
  if ( v14 == 1 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFu);
    _m_prefetchw(v11);
    v25 = *v11;
    while ( (v25 & 0xF) == 0 )
    {
      if ( v12 != (v25 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v26 = v25;
      v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v25 + 15, v25);
      if ( v26 == v25 )
        goto LABEL_43;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFF1);
    goto LABEL_43;
  }
LABEL_12:
  if ( !v12 )
    goto LABEL_24;
  v37 = 0LL;
  _m_prefetchw((const void *)(v12 + 8));
  v15 = *(_DWORD *)(v12 + 8);
  if ( v15 > v7 )
    goto LABEL_24;
  while ( 1 )
  {
    if ( (a1[208] & 0x8000000) != 0 )
    {
      if ( (unsigned int)EtwpGetTimeStampAndQpcDelta(a1, &v37, v38) )
        goto LABEL_29;
      v27 = *(_QWORD *)(v10[2] + 8 * v8);
      if ( v38[0] != v27 )
      {
        v28 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v15 + 24, v15);
        v29 = v15 == v28;
        v15 = v28;
        if ( v29 )
        {
          v30 = v12 + v28;
          v29 = v27 == _InterlockedCompareExchange64((volatile signed __int64 *)(v10[2] + 8 * v8), v38[0], v27);
          *(_DWORD *)(v30 + 4) = 5308440;
          *(_QWORD *)(v30 + 8) = v37;
          if ( v29 )
          {
            *(_QWORD *)(v30 + 16) = v38[0];
            *(_DWORD *)v30 = -1072627710;
          }
          else
          {
            *(_DWORD *)v30 = 49167;
            *(_QWORD *)(v30 + 16) = 0LL;
          }
        }
        goto LABEL_29;
      }
      v16 = v37;
    }
    else
    {
      v16 = (*((__int64 (**)(void))a1 + 5))();
    }
    v17 = v40;
    *v40 = v16;
    v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v9 + v15, v15);
    v19 = v18;
    if ( v15 == v18 )
      break;
    v15 = v18;
LABEL_29:
    if ( v15 > i )
      goto LABEL_24;
  }
  if ( v18 + v9 > i )
  {
    *(_DWORD *)(v12 + 4) = v18;
    goto LABEL_24;
  }
  if ( (a1[3] & 0x400) != 0 )
  {
    v20 = *(_QWORD *)(v12 + 16);
    for ( j = *v17; *v17 > v20; j = *v17 )
    {
      v22 = v20;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 16), j, v20);
      if ( v22 == v20 )
        break;
    }
  }
  ++*(_QWORD *)(v10[1] + 8 * v8);
  result = v12 + v19;
  *(_QWORD *)a3 = v12;
  *(_QWORD *)(a3 + 8) = v11;
  *(_DWORD *)(a3 + 16) = v19;
  return result;
}
