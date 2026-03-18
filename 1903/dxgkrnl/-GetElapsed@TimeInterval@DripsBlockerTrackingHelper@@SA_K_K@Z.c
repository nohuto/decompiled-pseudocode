/*
 * XREFs of ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1C0243CE0
 * Callers:
 *     ?AddActiveTime@DripsBlockerTrackingHelper@@AEAAXII@Z @ 0x1C0240E0C (-AddActiveTime@DripsBlockerTrackingHelper@@AEAAXII@Z.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXXZ @ 0x1C0240F04 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXXZ.c)
 *     ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x1C0246014 (-Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1C00427D4 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::TimeInterval::GetElapsed(__int64 a1)
{
  __int64 v2; // rdi
  LARGE_INTEGER v3; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( (int)RtlULongLongMult(v3.QuadPart - a1, 0x989680uLL, &v6) >= 0 )
    return v6 / PerformanceFrequency.QuadPart;
  if ( (int)RtlULongLongMult(v4, 0x3E8uLL, &v6) >= 0
    && (int)RtlULongLongMult(v6 / PerformanceFrequency.QuadPart, 0x2710uLL, &v6) >= 0 )
  {
    return v6;
  }
  return v2;
}
