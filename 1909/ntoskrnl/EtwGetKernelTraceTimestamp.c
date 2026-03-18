/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x1401094D0
 * Callers:
 *     KiIpiSendRequest @ 0x140099C40 (KiIpiSendRequest.c)
 *     KiExpireTimer2 @ 0x14009F5E0 (KiExpireTimer2.c)
 *     KiProcessExpiredTimerList @ 0x1400A3270 (KiProcessExpiredTimerList.c)
 *     KiIpiProcessRequests @ 0x1401002D0 (KiIpiProcessRequests.c)
 *     KeDisableTimer2 @ 0x1401137EC (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x140113A90 (KiFinalizeTimer2Disablement.c)
 *     KeFlushIoBuffers @ 0x14011D370 (KeFlushIoBuffers.c)
 *     KiScanInterruptObjectList @ 0x1401C5BB0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401C5D90 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401C5EE0 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x1401C9FF0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401CA150 (KiVmbusInterruptSubDispatch.c)
 *     IopTimerDispatch @ 0x140293B70 (IopTimerDispatch.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402B0D30 (KiInvokeInterruptServiceRoutine.c)
 *     NtQueryValueKey @ 0x1405FEFD0 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x1405FF600 (CmOpenKey.c)
 *     NtQueryKey @ 0x1406010E0 (NtQueryKey.c)
 *     NtSetValueKey @ 0x140630190 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x14063B0D0 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x14063C850 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14063E0F0 (NtQueryMultipleValueKey.c)
 *     CmCreateKey @ 0x14063E600 (CmCreateKey.c)
 *     NtEnumerateValueKey @ 0x140660AE0 (NtEnumerateValueKey.c)
 *     CmpSecurityMethod @ 0x140662420 (CmpSecurityMethod.c)
 *     NtEnumerateKey @ 0x140662B00 (NtEnumerateKey.c)
 *     CmpCloseKeyObject @ 0x1406B6B30 (CmpCloseKeyObject.c)
 *     NtSetInformationKey @ 0x1406B8050 (NtSetInformationKey.c)
 *     CmKtmNotification @ 0x1406BAEA0 (CmKtmNotification.c)
 *     NtFlushKey @ 0x1406E5920 (NtFlushKey.c)
 *     CmpReplicateKeyToVirtual @ 0x14082C7C4 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     EtwpGetSystemTime @ 0x140082460 (EtwpGetSystemTime.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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
