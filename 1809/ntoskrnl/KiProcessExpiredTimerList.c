/*
 * XREFs of KiProcessExpiredTimerList @ 0x1400C7760
 * Callers:
 *     KiRetireDpcList @ 0x1400C6400 (KiRetireDpcList.c)
 *     KiExpireTimerTable @ 0x140156E30 (KiExpireTimerTable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReadyThread @ 0x1400C5040 (KiReadyThread.c)
 *     KiTimerWaitTest @ 0x1400C7AB0 (KiTimerWaitTest.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     KiProcessThreadWaitList @ 0x1400FBEE0 (KiProcessThreadWaitList.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14011BCDC (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwTraceReadyThread @ 0x140310544 (EtwTraceReadyThread.c)
 */

int __fastcall KiProcessExpiredTimerList(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v6; // r13d
  __int64 v7; // rax
  int *v8; // r12
  bool v9; // bp
  __int64 v10; // rbx
  __int64 v11; // rsi
  int v12; // ebx
  ULONG_PTR v13; // rcx
  __int64 v14; // rbx
  void *v15; // rcx
  void (__fastcall *v16)(__int64, _QWORD, _QWORD, _QWORD); // rax
  ULONG_PTR v17; // rcx
  __int64 **v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 *v21; // rbx
  __int64 *v22; // rdi
  volatile signed __int32 *v23; // r15
  __int64 *v24; // rax
  __int64 **v25; // rcx
  unsigned __int64 v26; // rdx
  size_t v27; // r8
  int v29; // [rsp+30h] [rbp-B8h]
  int v30; // [rsp+34h] [rbp-B4h] BYREF
  unsigned int BugCheckParameter3; // [rsp+38h] [rbp-B0h]
  int BugCheckParameter3_4; // [rsp+3Ch] [rbp-ACh] BYREF
  __int64 v33; // [rsp+40h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-98h]
  _QWORD v36[2]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v37[2]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v38; // [rsp+78h] [rbp-70h]
  char v39; // [rsp+80h] [rbp-68h]
  _BYTE v40[32]; // [rsp+88h] [rbp-60h] BYREF

  v4 = 0LL;
  v33 = a3;
  v29 = BYTE4(PerfGlobalGroupMask) & 0x80;
  v6 = a4;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (int *)a2;
  v35 = v7;
  BugCheckParameter3 = *(_DWORD *)(v7 + 484);
  v9 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
  do
  {
    v10 = _InterlockedExchange64((volatile __int64 *)(a3 + 8 * v4), 0LL);
    v4 = (unsigned int)(v4 + 1);
    if ( v10 )
    {
      v30 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v10, 7u) )
      {
        do
          KeYieldProcessorEx(&v30, a2, a3);
        while ( (*(_DWORD *)v10 & 0x80u) != 0 );
      }
      if ( v9 )
      {
        v37[0] = *(_QWORD *)(v10 + 24);
        v26 = KiWaitAlways ^ _byteswap_uint64(v10 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v10 + 48), KiWaitNever));
        if ( v26 )
          v38 = *(_QWORD *)(v26 + 24);
        else
          v38 = 0LL;
      }
      v7 = KiTimerWaitTest(a1, v10, v8 + 2);
      v11 = v7;
      if ( v9 )
      {
        v37[1] = v10;
        v39 = *(_BYTE *)(v10 + 1) >> 2;
        v36[0] = v37;
        v36[1] = 32LL;
        LODWORD(v7) = EtwTraceKernelEvent((unsigned int)v36, 1, 1073872896, 3921, 1538);
      }
      if ( v11 )
      {
        if ( *(_QWORD *)(a1 + 11528) )
          KiProcessThreadWaitList(a1, 1LL, 0LL);
        if ( v29 )
          EtwGetKernelTraceTimestamp(v40, 536871040LL);
        v12 = *v8;
        BugCheckParameter2 = *(_QWORD *)(v11 + 24);
        v13 = BugCheckParameter2;
        *v8 = v12 + 1;
        v14 = 2 * ((v12 & 0xF) + 1LL);
        *(_QWORD *)&v8[2 * v14] = v13;
        v8[2 * v14 + 2] = MEMORY[0xFFFFF78000000320];
        v15 = *(void **)(a1 + 25000);
        *(_DWORD *)(a1 + 23452) = 0;
        if ( v15 && *(void **)(a1 + 25008) != v15 && *(_DWORD *)(a1 + 22764) < *(_DWORD *)(a1 + 22772) )
        {
          v27 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
          *(_QWORD *)(a1 + 25008) = v15;
          memset(v15, 0, v27);
        }
        v16 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))BugCheckParameter2;
        *(_BYTE *)(a1 + 11882) = 1;
        v16(v11, *(_QWORD *)(v11 + 32), (unsigned int)v8[2], (unsigned int)v8[3]);
        v17 = BugCheckParameter3;
        *(_BYTE *)(a1 + 11882) = 0;
        v8[2 * v14 + 3] = MEMORY[0xFFFFF78000000320];
        LODWORD(v7) = *(_DWORD *)(v35 + 484);
        if ( (_DWORD)v17 != (_DWORD)v7 )
          KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v17, *(unsigned int *)(v35 + 484));
        if ( v29 )
          LODWORD(v7) = EtwTraceTimedEvent(3909, 536871040, (unsigned int)&BugCheckParameter2, 8, 4196866, (__int64)v40);
      }
      a3 = v33;
    }
  }
  while ( (unsigned int)v4 < v6 );
  v18 = *(__int64 ***)(a1 + 11528);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 11528) = 0LL;
    do
    {
      v19 = *((unsigned __int8 *)v18 + 371);
      v20 = (__int64)(v18 - 27);
      v21 = *(v18 - 1);
      v18 = (__int64 **)*v18;
      v22 = &v21[6 * v19];
      do
      {
        if ( *((_BYTE *)v21 + 17) < 5u )
        {
          v23 = (volatile signed __int32 *)v21[4];
          BugCheckParameter3_4 = 0;
          while ( _interlockedbittestandset(v23, 7u) )
          {
            do
              KeYieldProcessorEx(&BugCheckParameter3_4, a2, a3);
            while ( (*v23 & 0x80u) != 0 );
          }
          if ( *((_BYTE *)v21 + 17) == 4 )
          {
            v24 = (__int64 *)*v21;
            if ( *(__int64 **)(*v21 + 8) != v21 || (v25 = (__int64 **)v21[1], *v25 != v21) )
              __fastfail(3u);
            *v25 = v24;
            v24[1] = (__int64)v25;
          }
          _InterlockedAnd(v23, 0xFFFFFF7F);
        }
        v21 += 6;
      }
      while ( v21 != v22 );
      *(_WORD *)(v20 + 566) = 1;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        LOBYTE(a2) = 1;
        EtwTraceReadyThread(v20, a2, 0LL, 2LL);
      }
      LODWORD(v7) = KiReadyThread(a1, v20, a3, a4);
    }
    while ( v18 );
  }
  return v7;
}
