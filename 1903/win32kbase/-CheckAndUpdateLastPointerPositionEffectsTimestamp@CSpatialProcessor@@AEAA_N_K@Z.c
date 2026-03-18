/*
 * XREFs of ?CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z @ 0x1C009C73C
 * Callers:
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C009C62C (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CSpatialProcessor::CheckAndUpdateLastPointerPositionEffectsTimestamp(
        CSpatialProcessor *this,
        __int64 a2)
{
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( a2 - *((_QWORD *)this + 4) <= PerformanceFrequency.QuadPart / 0x1EuLL )
    return 0;
  *((_QWORD *)this + 4) = a2;
  return 1;
}
