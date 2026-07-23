/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x14010E9A0
 * Callers:
 *     IopTimerDispatch @ 0x1400018F0 (IopTimerDispatch.c)
 *     KiProcessExpiredTimerList @ 0x1400C7760 (KiProcessExpiredTimerList.c)
 *     KiFinalizeTimer2Disablement @ 0x1400FB0DC (KiFinalizeTimer2Disablement.c)
 *     KeDisableTimer2 @ 0x1400FB1D4 (KeDisableTimer2.c)
 *     KiExpireTimer2 @ 0x1400FB980 (KiExpireTimer2.c)
 *     KiIpiProcessRequests @ 0x140103F70 (KiIpiProcessRequests.c)
 *     KeFlushIoBuffers @ 0x14011CBB0 (KeFlushIoBuffers.c)
 *     KiScanInterruptObjectList @ 0x1401BD740 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401BD920 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401BDA70 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x1401C2940 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C2AA0 (KiVmbusInterruptSubDispatch.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140299EF4 (KiInvokeInterruptServiceRoutine.c)
 *     NtDeleteKey @ 0x1405AA940 (NtDeleteKey.c)
 *     CmCreateKey @ 0x1405B6A60 (CmCreateKey.c)
 *     NtDeleteValueKey @ 0x1405B7030 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1405B8130 (NtQueryMultipleValueKey.c)
 *     CmpSecurityMethod @ 0x1405CC2E0 (CmpSecurityMethod.c)
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     NtEnumerateKey @ 0x1405D32F0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405D4890 (NtEnumerateValueKey.c)
 *     CmOpenKey @ 0x1405E1EA0 (CmOpenKey.c)
 *     NtQueryKey @ 0x140640BB0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140641360 (NtQueryValueKey.c)
 *     CmKtmNotification @ 0x140695470 (CmKtmNotification.c)
 *     CmpCloseKeyObject @ 0x140695F40 (CmpCloseKeyObject.c)
 *     NtSetInformationKey @ 0x1406981A0 (NtSetInformationKey.c)
 *     NtFlushKey @ 0x1406C1210 (NtFlushKey.c)
 *     CmpReplicateKeyToVirtual @ 0x1407F4998 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14008A500 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __fastcall EtwGetKernelTraceTimestamp(LARGE_INTEGER *a1, unsigned int a2)
{
  int v2; // ebx
  unsigned int v4; // r9d
  bool i; // zf
  unsigned int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( qword_14055C8A0 )
  {
    v4 = *(_DWORD *)(qword_14055C8A0 + 4224);
    for ( i = !_BitScanForward(&v6, v4); !i; i = !_BitScanForward(&v6, v4) )
    {
      v7 = v6;
      v4 &= v4 - 1;
      v8 = 32LL * v6 + qword_14055C8A0 + 4260;
      if ( v8 && (a2 & *(_DWORD *)(v8 + 4 * ((unsigned __int64)a2 >> 29)) & 0x1FFFFFFF) != 0 )
        v2 |= 1 << *(_BYTE *)(qword_14055C8A0 + 2 * v7 + 4209);
    }
  }
  else
  {
    LOBYTE(v2) = 30;
  }
  if ( (v2 & 2) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = 0LL;
  *a1 = PerformanceCounter;
  if ( (v2 & 4) != 0 )
    result = RtlGetSystemTimePrecise();
  else
    result.QuadPart = 0LL;
  a1[1] = result;
  if ( (v2 & 8) != 0 )
  {
    result.QuadPart = __rdtsc();
    a1[2] = result;
  }
  else
  {
    a1[2].QuadPart = 0LL;
  }
  if ( (v2 & 0x10) != 0 )
  {
    v11.QuadPart = 0LL;
    ((void (__fastcall *)(LARGE_INTEGER *))off_1403FF720[0])(&v11);
    result = v11;
    a1[3] = v11;
  }
  else
  {
    a1[3].QuadPart = 0LL;
  }
  return result;
}
