/*
 * XREFs of RtlSetHeapInformation @ 0x18007E6A0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3320 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlHeapTrkInitialize @ 0x1800F9AC0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlRunOnceExecuteOnce @ 0x1800213E0 (RtlRunOnceExecuteOnce.c)
 *     RtlpFlushHeap @ 0x18006896C (RtlpFlushHeap.c)
 *     RtlpEnumProcessHeaps @ 0x18007B34C (RtlpEnumProcessHeaps.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007E764 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F25A8 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHpStackTraceConfig @ 0x180104B6C (RtlpHpStackTraceConfig.c)
 */

NTSTATUS __cdecl RtlSetHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength)
{
  NTSTATUS result; // eax
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax

  switch ( HeapInformationClass )
  {
    case -2147483646:
      if ( !HeapInformation || HeapInformationLength != 48 )
        return -1073741823;
      result = RtlSetHeapDebuggingInformation((int)HeapHandle);
LABEL_9:
      if ( result < 0 )
        return result;
      return 0;
    case 0:
      if ( HeapInformationLength < 4 )
        return -1073741789;
      if ( *(_DWORD *)HeapInformation == 2 )
      {
        if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
        {
          if ( (*((_DWORD *)HeapHandle + 28) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = RtlpSetRequestedFrontEndHeap();
            goto LABEL_9;
          }
          return -1073741811;
        }
        return 0;
      }
      return -1073741823;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return 0;
  }
  if ( HeapInformationClass != 4 )
  {
    if ( HeapInformationClass == HeapOptimizeResources )
    {
      if ( !HeapInformation
        || HeapInformationLength < 4
        || *(_DWORD *)HeapInformation != 1
        || HeapInformationLength != 8
        || *((_DWORD *)HeapInformation + 1) )
      {
        return -1073741811;
      }
      if ( HeapHandle )
      {
        RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
        v8 = 28LL;
        if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
          v8 = 208LL;
        if ( *(_WORD *)((char *)HeapHandle + v8) != 0xFFFF )
          RtlpFlushHeap((__int64)HeapHandle);
        RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
      }
      else
      {
        RtlpEnumProcessHeaps((__int64)RtlpFlushHeapsCallback, 0LL, 0);
      }
      return 0;
    }
    if ( HeapInformationClass != 5 )
    {
      if ( HeapInformationClass == 6 )
      {
        if ( HeapInformationLength < 0x28
          || *(_DWORD *)HeapInformation != 1
          || ((*((_QWORD *)HeapInformation + 1) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) != *((_QWORD *)HeapInformation + 1) )
        {
          return -1073741811;
        }
        if ( HeapHandle )
        {
          if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
          {
            v6 = 32LL;
          }
          else
          {
            if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
              return 0;
            v6 = 376LL;
          }
          v7 = (__int64 *)((char *)HeapHandle + v6);
        }
        else
        {
          v7 = &qword_1801634B8;
        }
        v7[1] = *((_QWORD *)HeapInformation + 2);
        v7[3] = *((_QWORD *)HeapInformation + 4);
        *v7 = *((_QWORD *)HeapInformation + 1);
        v7[2] = *((_QWORD *)HeapInformation + 3);
      }
      return 0;
    }
    if ( !HeapInformation
      || HeapInformationLength < 0x10
      || *(_WORD *)HeapInformation != 1
      || (*((_WORD *)HeapInformation + 1) & 0xFFFE) != 0 )
    {
      return -1073741811;
    }
    result = RtlpHpStackTraceConfig(HeapInformation);
    goto LABEL_9;
  }
  if ( (RtlpHpHeapFeatures & 1) == 0 )
    return -1073741811;
  result = RtlRunOnceExecuteOnce(&RtlpHpTagInitVar, (PRTL_RUN_ONCE_INIT_FN)RtlpHpTagRunOnceInit, &RtlpHpTagContext, 0LL);
  if ( result >= 0 )
  {
    RtlpHpHeapFeatures |= 2u;
    return 0;
  }
  return result;
}
