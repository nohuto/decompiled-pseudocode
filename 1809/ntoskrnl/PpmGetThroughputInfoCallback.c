/*
 * XREFs of PpmGetThroughputInfoCallback @ 0x1402E3490
 * Callers:
 *     <none>
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x14005BDC0 (PpmSnapPerformanceAccumulation.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall PpmGetThroughputInfoCallback(LARGE_INTEGER *a1, __int64 a2)
{
  char v4; // cl
  LARGE_INTEGER v6[12]; // [rsp+30h] [rbp-78h] BYREF

  memset(v6, 0, 0x58uLL);
  PpmSnapPerformanceAccumulation(a1, 0, 0, 0, v6);
  v4 = PpmPerformanceCounterShift;
  if ( a1[3003].LowPart == 3 )
    v4 = PpmHvPerformanceCounterShift;
  *(_QWORD *)(a2 + 8) = (unsigned __int64)v6[4].QuadPart >> v4;
  *(_QWORD *)(a2 + 16) = (unsigned __int64)v6[5].QuadPart >> v4;
  *(_DWORD *)a2 = (unsigned __int64)v6[0].QuadPart >> v4;
  *(_DWORD *)(a2 + 4) = (unsigned __int64)v6[1].QuadPart >> v4;
  return 0LL;
}
