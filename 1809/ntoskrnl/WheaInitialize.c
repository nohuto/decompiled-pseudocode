/*
 * XREFs of WheaInitialize @ 0x1409B0D68
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     WheapInitializeWorkQueue @ 0x14017D284 (WheapInitializeWorkQueue.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14017D41C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     IoWMIRegistrationControl @ 0x1406BA1A0 (IoWMIRegistrationControl.c)
 *     WheapLogInitEvent @ 0x140729144 (WheapLogInitEvent.c)
 *     WheapLoadPolicy @ 0x1409AFBE8 (WheapLoadPolicy.c)
 *     WheapCreatePerProcessorInfo @ 0x1409AFD88 (WheapCreatePerProcessorInfo.c)
 *     WheapInitializeEventing @ 0x1409AFE24 (WheapInitializeEventing.c)
 *     WheapInitializeErrorSourceTable @ 0x1409AFE9C (WheapInitializeErrorSourceTable.c)
 *     WheapQueryPshedForErrorSources @ 0x1409B1110 (WheapQueryPshedForErrorSources.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  int v2; // r12d
  ULONG_PTR v3; // r15
  int v5; // eax
  int PerProcessorInfo; // eax
  int v7; // eax
  int *v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rax
  __int64 k; // rbx
  bool v13; // zf
  int v14; // eax
  char v15; // al
  int v17; // eax
  int v18; // eax
  _RTL_BALANCED_NODE *v19; // rax
  signed __int8 v20; // cf
  _RTL_BALANCED_NODE *v21; // rbx
  int v22; // eax
  ULONG i; // ebx
  __int64 Prcb; // rax
  __int64 j; // rbx
  int v26; // eax
  unsigned int v32; // [rsp+88h] [rbp+48h] BYREF
  PVOID Address; // [rsp+90h] [rbp+50h] BYREF
  char v34; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  v3 = a2;
  v32 = 0;
  if ( a2 )
  {
    WheapDispatchPtr.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)&WheapDispatchPtr.SectorSize;
    *(_QWORD *)&WheapDispatchPtr.SectorSize = &WheapDispatchPtr.SectorSize;
    v17 = PshedInitialize(a1, &v34);
    if ( v17 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v17, 0LL, 0LL);
    WheapInitializeWorkQueue();
    WheapInitializeEventing();
    v18 = WheapQueryPshedForErrorSources(&v32, &Address);
    if ( v18 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v18, v3, 0LL);
    v19 = KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0LL, 0);
    v20 = _interlockedbittestandset64((volatile signed __int32 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0LL);
    v21 = v19;
    if ( v20 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead,
        v19,
        (ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
    if ( v21 )
      BYTE2(v21[1].Left) |= 1u;
    v22 = WheapInitializeErrorSourceTable(v32, (unsigned int *)Address);
    if ( v22 < 0 )
      KeBugCheckEx(0x122u, 7uLL, v22, 0LL, 0LL);
    PshedFreeMemory(Address);
    for ( i = 0;
          i < (unsigned int)KeNumberProcessors_0;
          *(_QWORD *)(*(_QWORD *)(Prcb + 24608) + 8LL) = &WheapErrorSourceTable )
    {
      Prcb = KeGetPrcb(i++);
      **(_DWORD **)(Prcb + 24608) = v32;
      *(_QWORD *)(*(_QWORD *)(Prcb + 24608) + 16LL) = &WheapDispatchPtr.Reserved;
    }
    for ( j = qword_1404C7568; (__int64 *)j != &qword_1404C7568; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 97) == 7 )
      {
        v26 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))&WheapSourceConfiguration + 6 * *(int *)(j + 40) + 3))(
                (unsigned int)v3,
                j + 89,
                *(_QWORD *)(j + 56));
        if ( v26 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v26, v3, *(int *)(j + 97));
        *(_DWORD *)(j + 101) = 2;
      }
    }
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2576LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
      WheapCheckForAndReportErrorsFromPreviousSession();
    for ( k = qword_1404C7568; (__int64 *)k != &qword_1404C7568; ++v2 )
    {
      v13 = *(_DWORD *)(k + 97) == 7;
      *(_DWORD *)(k + 117) = v2;
      if ( !v13 && !*(_BYTE *)(k + 88) )
      {
        v14 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))&WheapSourceConfiguration + 6 * *(int *)(k + 40) + 3))(
                (unsigned int)v3,
                k + 89,
                *(_QWORD *)(k + 56));
        if ( v14 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v14, v3, *(int *)(k + 97));
        *(_DWORD *)(k + 101) = 2;
      }
      k = *(_QWORD *)k;
    }
    WheapLogInitEvent();
    *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
    IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
    WheapInitializationComplete = 1;
    v15 = _InterlockedExchangeAdd64(
            (volatile signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink,
            0xFFFFFFFFFFFFFFFFuLL);
    if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
    KeAbPostRelease((ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
  }
  else
  {
    WheapStatus = 0LL;
    dword_140407758 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v5 = PshedInitialize(a1, &v34);
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v5, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v7 = WheapQueryPshedForErrorSources(&v32, &Address);
    if ( v7 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v7, 0LL, 0LL);
    v8 = (int *)Address;
    qword_1404C7570 = (__int64)&qword_1404C7568;
    qword_1404C7568 = (__int64)&qword_1404C7568;
    v9 = 0;
    WheapErrorSourceTable = 1279410516LL;
    LOWORD(stru_1404C7578.Header.Lock) = 1;
    stru_1404C7578.Header.Size = 6;
    stru_1404C7578.Header.SignalState = 1;
    stru_1404C7578.Header.WaitListHead.Blink = &stru_1404C7578.Header.WaitListHead;
    stru_1404C7578.Header.WaitListHead.Flink = &stru_1404C7578.Header.WaitListHead;
    if ( v32 )
    {
      do
      {
        v10 = (*((__int64 (__fastcall **)(_QWORD, int *, _QWORD))&WheapSourceConfiguration + 6 * v8[2] + 3))(
                0LL,
                v8,
                0LL);
        if ( v10 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v10, 0LL, v8[2]);
        v11 = (unsigned int)*v8;
        ++v9;
        v8[3] = 2;
        v8 = (int *)((char *)v8 + v11);
      }
      while ( v9 < v32 );
      v8 = (int *)Address;
    }
    PshedFreeMemory(v8);
  }
  return 0LL;
}
