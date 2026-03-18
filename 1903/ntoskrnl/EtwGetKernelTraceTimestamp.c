/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x14010A0C0
 * Callers:
 *     KiIpiSendRequest @ 0x1400B9DD0 (KiIpiSendRequest.c)
 *     KiExpireTimer2 @ 0x1400BF760 (KiExpireTimer2.c)
 *     KiProcessExpiredTimerList @ 0x1400C33F0 (KiProcessExpiredTimerList.c)
 *     KiIpiProcessRequests @ 0x1400FE140 (KiIpiProcessRequests.c)
 *     KeDisableTimer2 @ 0x140113F5C (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x140114200 (KiFinalizeTimer2Disablement.c)
 *     KeFlushIoBuffers @ 0x14011CE50 (KeFlushIoBuffers.c)
 *     KiScanInterruptObjectList @ 0x1401C5030 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401C5210 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401C5360 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x1401C9470 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C95D0 (KiVmbusInterruptSubDispatch.c)
 *     IopTimerDispatch @ 0x140293E10 (IopTimerDispatch.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402B0FD0 (KiInvokeInterruptServiceRoutine.c)
 *     NtQueryValueKey @ 0x1405FD5A0 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x1405FDBD0 (CmOpenKey.c)
 *     NtQueryKey @ 0x1405FF6B0 (NtQueryKey.c)
 *     NtSetValueKey @ 0x14062C340 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x140638040 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1406397C0 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14063B060 (NtQueryMultipleValueKey.c)
 *     CmCreateKey @ 0x14063B570 (CmCreateKey.c)
 *     NtEnumerateValueKey @ 0x14064D920 (NtEnumerateValueKey.c)
 *     CmpSecurityMethod @ 0x14064F260 (CmpSecurityMethod.c)
 *     NtEnumerateKey @ 0x14064F940 (NtEnumerateKey.c)
 *     CmKtmNotification @ 0x1406999A0 (CmKtmNotification.c)
 *     CmpCloseKeyObject @ 0x1406BB480 (CmpCloseKeyObject.c)
 *     NtSetInformationKey @ 0x1406BC830 (NtSetInformationKey.c)
 *     NtFlushKey @ 0x1406E4CD0 (NtFlushKey.c)
 *     CmpReplicateKeyToVirtual @ 0x14082D0C4 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     EtwpGetSystemTime @ 0x140082060 (EtwpGetSystemTime.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
  if ( qword_14058C8A0 )
  {
    v4 = *(_DWORD *)(qword_14058C8A0 + 4224);
    for ( i = !_BitScanForward(&v6, v4); !i; i = !_BitScanForward(&v6, v4) )
    {
      v7 = v6;
      v4 &= v4 - 1;
      v8 = 32LL * v6 + qword_14058C8A0 + 4260;
      if ( v8 && (a2 & *(_DWORD *)(v8 + 4 * ((unsigned __int64)a2 >> 29)) & 0x1FFFFFFF) != 0 )
        v2 |= 1 << *(_BYTE *)(qword_14058C8A0 + 2 * v7 + 4209);
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
    result = EtwpGetSystemTime();
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
    ((void (__fastcall *)(__int64 *))off_140424720[0])(&v11);
    result = v11;
    a1[3].QuadPart = v11;
  }
  else
  {
    a1[3].QuadPart = 0LL;
  }
  return result;
}
