/*
 * XREFs of TraceLoggingPTPAAPKeyPress @ 0x1C019A400
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z @ 0x1C0199194 (-TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z.c)
 *     ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C01992AC (-TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z.c)
 */

__int64 __fastcall TraceLoggingPTPAAPKeyPress(int a1)
{
  LARGE_INTEGER v2; // rbp
  __int64 v3; // rdi
  __int64 result; // rax
  LONGLONG v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbx
  signed __int64 v8; // r14
  struct tagTPTELEMTIMINGS *v9; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF

  v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = _InterlockedCompareExchange64(&gAapState[13], 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&gTPTelemTimings + 1, 0LL, 0LL);
  if ( a1 && v3 > 0 && result > v3 )
  {
    v5 = v2.QuadPart - _InterlockedCompareExchange64((volatile signed __int64 *)&gTPTelemTimings + 4, 0LL, 0LL);
    v6 = 1000 * (result - v3) / PerformanceFrequency.QuadPart;
    result = 1000 * v5 / PerformanceFrequency.QuadPart;
    v7 = result;
    if ( !*((_QWORD *)&gTPTelemTimings + 3) )
      *((_DWORD *)&gTPTelemTimings + 11) = *((_DWORD *)&gTPTelemTimings + 10);
    if ( v6 < 500 || result < 500 )
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)gTPTelemTimings, 0LL, 0LL);
      TraceLoggingPTPKeyToGestureTiming(
        gAapState[12],
        v3,
        gTPTelemTimings,
        v2.QuadPart,
        (LPCGUID)PerformanceFrequency.QuadPart);
      if ( v6 < 500 && (v9 = gTPTelemTimings, *((_DWORD *)&gTPTelemTimings + 10))
        || v7 < 500 && (v9 = gTPTelemTimings, *((_DWORD *)&gTPTelemTimings + 11)) )
      {
        TraceLoggingPTPKeyToAATimeDeltas(
          1000 * (v8 - v3) / PerformanceFrequency.QuadPart,
          v6,
          v7,
          1000 * (v2.QuadPart - v3) / PerformanceFrequency.QuadPart,
          *((_DWORD *)v9 + 10),
          *((_DWORD *)v9 + 11));
      }
      memset(gTPTelemTimings, 0, 0x54uLL);
      result = (__int64)gTPTelemTimings;
      *((_DWORD *)&gTPTelemTimings + 20) = -1;
    }
  }
  return result;
}
