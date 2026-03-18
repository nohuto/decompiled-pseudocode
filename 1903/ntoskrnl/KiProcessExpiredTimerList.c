/*
 * XREFs of KiProcessExpiredTimerList @ 0x1400C33F0
 * Callers:
 *     KiRetireDpcList @ 0x1400C1DD0 (KiRetireDpcList.c)
 *     KiExpireTimerTable @ 0x140166F44 (KiExpireTimerTable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiReadyThread @ 0x140067ED0 (KiReadyThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiTimerWaitTest @ 0x1400C3730 (KiTimerWaitTest.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010A0C0 (EtwGetKernelTraceTimestamp.c)
 *     KiProcessThreadWaitList @ 0x1401148D0 (KiProcessThreadWaitList.c)
 *     EtwTraceTimedEvent @ 0x14011CCD0 (EtwTraceTimedEvent.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwTraceReadyThread @ 0x14032E1F4 (EtwTraceReadyThread.c)
 */

int __fastcall KiProcessExpiredTimerList(__int64 a1, int *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // ebp
  __int64 v10; // rax
  bool v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // ebx
  ULONG_PTR v15; // rcx
  __int64 v16; // rbx
  void *v17; // rcx
  void (__fastcall *v18)(__int64, _QWORD, _QWORD, _QWORD); // rax
  ULONG_PTR v19; // rcx
  __int64 **v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 *v23; // rbx
  __int64 *v24; // rbp
  volatile signed __int32 *v25; // r15
  __int64 *v26; // rax
  __int64 **v27; // rcx
  unsigned __int64 v28; // rdx
  size_t v29; // r8
  int v31; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int BugCheckParameter3; // [rsp+34h] [rbp-B4h]
  unsigned int BugCheckParameter3_4; // [rsp+38h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-A0h]
  __int64 v36; // [rsp+50h] [rbp-98h]
  _QWORD v37[2]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v38[4]; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v39[32]; // [rsp+88h] [rbp-60h] BYREF

  v36 = a3;
  BugCheckParameter3_4 = a4;
  v5 = a3;
  memset(v38, 0, sizeof(v38));
  memset(v39, 0, sizeof(v39));
  v8 = 0LL;
  v9 = BYTE4(PerfGlobalGroupMask) & 0x80;
  v35 = *(_QWORD *)(a1 + 8);
  LODWORD(v10) = *(_DWORD *)(v35 + 484);
  BugCheckParameter3 = v10;
  v11 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
  while ( 1 )
  {
    v12 = _InterlockedExchange64((volatile __int64 *)(v5 + 8 * v8), 0LL);
    v8 = (unsigned int)(v8 + 1);
    if ( v12 )
    {
      v31 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v12, 7u) )
      {
        do
          KeYieldProcessorEx(&v31);
        while ( (*(_DWORD *)v12 & 0x80u) != 0 );
      }
      if ( v11 )
      {
        v38[0] = *(_QWORD *)(v12 + 24);
        v28 = KiWaitAlways ^ _byteswap_uint64(v12 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v12 + 48), KiWaitNever));
        if ( v28 )
          v38[2] = *(_QWORD *)(v28 + 24);
        else
          v38[2] = 0LL;
      }
      v10 = KiTimerWaitTest(a1, v12, a2 + 2);
      v13 = v10;
      if ( v11 )
      {
        v38[1] = v12;
        LOBYTE(v38[3]) = *(_BYTE *)(v12 + 1) >> 2;
        v37[0] = v38;
        v37[1] = 32LL;
        LODWORD(v10) = EtwTraceKernelEvent((unsigned int)v37, 1, 1073872896, 3921, 1538);
      }
      if ( v13 )
      {
        if ( *(_QWORD *)(a1 + 11528) )
          KiProcessThreadWaitList(a1, 1LL, 0LL);
        if ( v9 )
          EtwGetKernelTraceTimestamp(v39, 536871040LL);
        v14 = *a2;
        BugCheckParameter2 = *(_QWORD *)(v13 + 24);
        v15 = BugCheckParameter2;
        *a2 = v14 + 1;
        v16 = 2 * ((v14 & 0xF) + 1LL);
        *(_QWORD *)&a2[2 * v16] = v15;
        a2[2 * v16 + 2] = MEMORY[0xFFFFF78000000320];
        v17 = *(void **)(a1 + 25000);
        *(_DWORD *)(a1 + 23452) = 0;
        if ( v17 && *(void **)(a1 + 25008) != v17 && *(_DWORD *)(a1 + 22764) < *(_DWORD *)(a1 + 22772) )
        {
          v29 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
          *(_QWORD *)(a1 + 25008) = v17;
          memset(v17, 0, v29);
        }
        v18 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))BugCheckParameter2;
        *(_BYTE *)(a1 + 11882) = 1;
        v18(v13, *(_QWORD *)(v13 + 32), (unsigned int)a2[2], (unsigned int)a2[3]);
        v19 = BugCheckParameter3;
        *(_BYTE *)(a1 + 11882) = 0;
        a2[2 * v16 + 3] = MEMORY[0xFFFFF78000000320];
        LODWORD(v10) = *(_DWORD *)(v35 + 484);
        if ( (_DWORD)v19 != (_DWORD)v10 )
          KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v19, *(unsigned int *)(v35 + 484));
        if ( v9 )
          LODWORD(v10) = EtwTraceTimedEvent(
                           3909,
                           536871040,
                           (unsigned int)&BugCheckParameter2,
                           8,
                           4196866,
                           (__int64)v39);
      }
    }
    if ( (unsigned int)v8 >= BugCheckParameter3_4 )
      break;
    v5 = v36;
  }
  v20 = *(__int64 ***)(a1 + 11528);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 11528) = 0LL;
    do
    {
      v21 = *((unsigned __int8 *)v20 + 371);
      v22 = (__int64)(v20 - 27);
      v23 = *(v20 - 1);
      v20 = (__int64 **)*v20;
      v24 = &v23[6 * v21];
      do
      {
        if ( *((_BYTE *)v23 + 17) < 5u )
        {
          v25 = (volatile signed __int32 *)v23[4];
          KiAcquireKobjectLockSafe(v25);
          if ( *((_BYTE *)v23 + 17) == 4 )
          {
            v26 = (__int64 *)*v23;
            if ( *(__int64 **)(*v23 + 8) != v23 || (v27 = (__int64 **)v23[1], *v27 != v23) )
              __fastfail(3u);
            *v27 = v26;
            v26[1] = (__int64)v27;
          }
          _InterlockedAnd(v25, 0xFFFFFF7F);
        }
        v23 += 6;
      }
      while ( v23 != v24 );
      *(_WORD *)(v22 + 566) = 1;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        LOBYTE(v7) = 1;
        EtwTraceReadyThread(v22, v7, 0LL, 2LL);
      }
      LODWORD(v10) = KiReadyThread(a1, v22);
    }
    while ( v20 );
  }
  return v10;
}
