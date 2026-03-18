/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x14010E900
 * Callers:
 *     IopTimerDispatch @ 0x1400018F0 (IopTimerDispatch.c)
 *     KiProcessExpiredTimerList @ 0x1400C7800 (KiProcessExpiredTimerList.c)
 *     KiFinalizeTimer2Disablement @ 0x1400FB03C (KiFinalizeTimer2Disablement.c)
 *     KeDisableTimer2 @ 0x1400FB134 (KeDisableTimer2.c)
 *     KiExpireTimer2 @ 0x1400FB8E0 (KiExpireTimer2.c)
 *     KiIpiProcessRequests @ 0x140103ED0 (KiIpiProcessRequests.c)
 *     KeFlushIoBuffers @ 0x14011CB20 (KeFlushIoBuffers.c)
 *     KiScanInterruptObjectList @ 0x1401BD5C0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401BD7A0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401BD8F0 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x1401C27C0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C2920 (KiVmbusInterruptSubDispatch.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140299C04 (KiInvokeInterruptServiceRoutine.c)
 *     NtDeleteKey @ 0x1405A9940 (NtDeleteKey.c)
 *     CmCreateKey @ 0x1405B5A60 (CmCreateKey.c)
 *     NtDeleteValueKey @ 0x1405B6030 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1405B7130 (NtQueryMultipleValueKey.c)
 *     CmpSecurityMethod @ 0x1405CB2E0 (CmpSecurityMethod.c)
 *     NtSetValueKey @ 0x1405CC8E0 (NtSetValueKey.c)
 *     NtEnumerateKey @ 0x1405D22F0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405D3890 (NtEnumerateValueKey.c)
 *     CmOpenKey @ 0x1405E0EA0 (CmOpenKey.c)
 *     NtQueryKey @ 0x14063FBB0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140640360 (NtQueryValueKey.c)
 *     CmKtmNotification @ 0x1406942D0 (CmKtmNotification.c)
 *     CmpCloseKeyObject @ 0x140694DA0 (CmpCloseKeyObject.c)
 *     NtSetInformationKey @ 0x140697000 (NtSetInformationKey.c)
 *     NtFlushKey @ 0x1406BFF90 (NtFlushKey.c)
 *     CmpReplicateKeyToVirtual @ 0x1407F37B8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14008A510 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestamp(LARGE_INTEGER *a1, unsigned int a2)
{
  int v2; // ebx
  unsigned int v4; // r9d
  bool i; // zf
  unsigned int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( qword_14055B8A0 )
  {
    v4 = *(_DWORD *)(qword_14055B8A0 + 4224);
    for ( i = !_BitScanForward(&v6, v4); !i; i = !_BitScanForward(&v6, v4) )
    {
      v7 = v6;
      v4 &= v4 - 1;
      v8 = 32LL * v6 + qword_14055B8A0 + 4260;
      if ( v8 && (a2 & *(_DWORD *)(v8 + 4 * ((unsigned __int64)a2 >> 29)) & 0x1FFFFFFF) != 0 )
        v2 |= 1 << *(_BYTE *)(qword_14055B8A0 + 2 * v7 + 4209);
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
    result = 0LL;
  a1[1].QuadPart = result;
  if ( (v2 & 8) != 0 )
  {
    result = __rdtsc();
    a1[2].QuadPart = result;
  }
  else
  {
    a1[2].QuadPart = 0LL;
  }
  if ( (v2 & 0x10) != 0 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(__int64 *))off_1403FE720[0])(&v11);
    result = v11;
    a1[3].QuadPart = v11;
  }
  else
  {
    a1[3].QuadPart = 0LL;
  }
  return result;
}
