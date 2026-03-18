/*
 * XREFs of PpmGetThroughputInfoCallback @ 0x1402FFA80
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x140132310 (PoGetPerfStateAndParkingInfo.c)
 * Callees:
 *     PpmConvertTime @ 0x140004EB4 (PpmConvertTime.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400358F0 (PpmSnapPerformanceAccumulation.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall PpmGetThroughputInfoCallback(struct _KPRCB *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  char v7; // bl
  unsigned __int64 QuadPart; // rcx
  unsigned __int64 v9; // rax
  LARGE_INTEGER v11[12]; // [rsp+30h] [rbp-98h] BYREF

  memset(v11, 0, 0x58uLL);
  v6 = 0;
  if ( PpmSnapPerformanceAccumulation((__int64)a1, 0, a1 != KeGetCurrentPrcb(), 0, v11) )
  {
    v7 = PpmPerformanceCounterShift;
    if ( a1->PowerState.Hypervisor == ProcHypervisorHvCounters )
      v7 = PpmHvPerformanceCounterShift;
    QuadPart = v11[3].QuadPart;
    *(_QWORD *)(a2 + 8) = (unsigned __int64)v11[4].QuadPart >> v7;
    v9 = PpmConvertTime(QuadPart, 0x64uLL, a3);
    *(_QWORD *)(a2 + 16) = (unsigned __int64)v11[5].QuadPart >> v7;
    *(_DWORD *)a2 = (unsigned __int64)v11[0].QuadPart >> v7;
    *(_DWORD *)(a2 + 4) = (unsigned __int64)v11[1].QuadPart >> v7;
    *(_QWORD *)(a2 + 24) = v9 >> v7;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
