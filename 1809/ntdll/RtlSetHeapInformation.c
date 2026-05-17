/*
 * XREFs of RtlSetHeapInformation @ 0x18007E690
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3320 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlHeapTrkInitialize @ 0x1800F9AC0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlRunOnceExecuteOnce @ 0x1800213E0 (RtlRunOnceExecuteOnce.c)
 *     RtlpFlushHeap @ 0x18006896C (RtlpFlushHeap.c)
 *     RtlpEnumProcessHeaps @ 0x18007B33C (RtlpEnumProcessHeaps.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007E754 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F25A8 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHpStackTraceConfig @ 0x180104B6C (RtlpHpStackTraceConfig.c)
 */

__int64 __fastcall RtlSetHeapInformation(_DWORD *a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax

  switch ( a2 )
  {
    case -2147483646:
      if ( !a3 || a4 != 48 )
        return 3221225473LL;
      result = RtlSetHeapDebuggingInformation(a1, a3);
LABEL_9:
      if ( (int)result < 0 )
        return result;
      return 0LL;
    case 0:
      if ( a4 < 4 )
        return 3221225507LL;
      if ( *(_DWORD *)a3 == 2 )
      {
        if ( a1[4] != -571548178 )
        {
          if ( (a1[28] & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = RtlpSetRequestedFrontEndHeap();
            goto LABEL_9;
          }
          return 3221225485LL;
        }
        return 0LL;
      }
      return 3221225473LL;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return 0LL;
  }
  if ( a2 != 4 )
  {
    if ( a2 == 3 )
    {
      if ( !a3 || a4 < 4 || *(_DWORD *)a3 != 1 || a4 != 8 || *(_DWORD *)(a3 + 4) )
        return 3221225485LL;
      if ( a1 )
      {
        RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
        v8 = 7LL;
        if ( a1[4] != -571548178 )
          v8 = 52LL;
        if ( LOWORD(a1[v8]) != 0xFFFF )
          RtlpFlushHeap((__int64)a1);
        RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
      }
      else
      {
        RtlpEnumProcessHeaps((__int64)RtlpFlushHeapsCallback, 0LL, 0);
      }
      return 0LL;
    }
    if ( a2 != 5 )
    {
      if ( a2 == 6 )
      {
        if ( a4 < 0x28
          || *(_DWORD *)a3 != 1
          || ((*(_QWORD *)(a3 + 8) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) != *(_QWORD *)(a3 + 8) )
        {
          return 3221225485LL;
        }
        if ( a1 )
        {
          if ( a1[4] == -571548178 )
          {
            v6 = 8LL;
          }
          else
          {
            if ( (a1[29] & 0x1000000) != 0 )
              return 0LL;
            v6 = 94LL;
          }
          v7 = (__int64 *)&a1[v6];
        }
        else
        {
          v7 = &qword_1801634B8;
        }
        v7[1] = *(_QWORD *)(a3 + 16);
        v7[3] = *(_QWORD *)(a3 + 32);
        *v7 = *(_QWORD *)(a3 + 8);
        v7[2] = *(_QWORD *)(a3 + 24);
      }
      return 0LL;
    }
    if ( !a3 || a4 < 0x10 || *(_WORD *)a3 != 1 || (*(_WORD *)(a3 + 2) & 0xFFFE) != 0 )
      return 3221225485LL;
    result = RtlpHpStackTraceConfig(a3);
    goto LABEL_9;
  }
  if ( (RtlpHpHeapFeatures & 1) == 0 )
    return 3221225485LL;
  result = RtlRunOnceExecuteOnce(
             &RtlpHpTagInitVar,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpTagRunOnceInit,
             (__int64)&RtlpHpTagContext,
             0LL);
  if ( (int)result >= 0 )
  {
    RtlpHpHeapFeatures |= 2u;
    return 0LL;
  }
  return result;
}
