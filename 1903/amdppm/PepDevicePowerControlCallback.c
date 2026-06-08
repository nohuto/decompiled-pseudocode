/*
 * XREFs of PepDevicePowerControlCallback @ 0x1C000D410
 * Callers:
 *     <none>
 * Callees:
 *     PepUpdateIdleState @ 0x1C000C20C (PepUpdateIdleState.c)
 *     PepUpdatePlatformState @ 0x1C000C330 (PepUpdatePlatformState.c)
 *     PepUpdatePerformanceConstraint @ 0x1C000CEBC (PepUpdatePerformanceConstraint.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     PepGetParkingPageInfo @ 0x1C0033F80 (PepGetParkingPageInfo.c)
 */

NTSTATUS __fastcall PepDevicePowerControlCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  NTSTATUS result; // eax
  ULONG v9; // ecx
  _BYTE ProcNumber[20]; // [rsp+20h] [rbp-20h] BYREF

  *a7 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE )
    return PepUpdatePerformanceConstraint(a1);
  if ( *(_QWORD *)a2 == PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE && *(_QWORD *)(a2 + 8) == 0xF3DF4B6734ACAAABuLL )
  {
    if ( a6 >= 0x10 )
    {
      result = PepGetParkingPageInfo(a1, a5);
      if ( result < 0 )
        *a7 = 0LL;
    }
    else
    {
      *a7 = 16LL;
      return -1073741670;
    }
    return result;
  }
  if ( *(_QWORD *)a2 != *(_QWORD *)&GUID_PROCESSOR_IDLE_VETO.Data1
    || *(_QWORD *)(a2 + 8) != *(_QWORD *)GUID_PROCESSOR_IDLE_VETO.Data4 )
  {
    if ( *(_QWORD *)a2 != *(_QWORD *)&GUID_PLATFORM_IDLE_VETO.Data1
      || *(_QWORD *)(a2 + 8) != *(_QWORD *)GUID_PLATFORM_IDLE_VETO.Data4 )
    {
      if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_UPDATE.Data1
        && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_PROCESSOR_IDLE_UPDATE.Data4 )
      {
        if ( a4 >= 0xC )
          return PepUpdateIdleState(a1, (unsigned int *)a3);
      }
      else
      {
        if ( *(_QWORD *)a2 != *(_QWORD *)&GUID_PLATFORM_IDLE_UPDATE.Data1
          || *(_QWORD *)(a2 + 8) != *(_QWORD *)GUID_PLATFORM_IDLE_UPDATE.Data4 )
        {
          return -1073741637;
        }
        if ( a4 >= 0xC )
          return PepUpdatePlatformState(a1, (unsigned int *)a3);
      }
      return -1073741789;
    }
    if ( a4 < 0xC )
      return -1073741789;
    if ( Src || qword_1C0013980 || qword_1C0013988 )
    {
      *(_QWORD *)ProcNumber = 0LL;
      *(_QWORD *)&ProcNumber[8] = 0LL;
      *(_DWORD *)&ProcNumber[4] = *(_DWORD *)a3;
      *(_DWORD *)&ProcNumber[8] = *(_DWORD *)(a3 + 4);
      ProcNumber[12] = *(_BYTE *)(a3 + 8);
      *(_DWORD *)ProcNumber = 62;
      return ((__int64 (__fastcall *)(_BYTE *))qword_1C0013680)(ProcNumber);
    }
    return -1073741637;
  }
  if ( a4 < 0xC )
    return -1073741789;
  if ( !*(_QWORD *)(a1 + 696) || !*(_QWORD *)(a1 + 1136) && (*(_QWORD *)(a1 + 264) & 0x100000000000LL) == 0 )
    return -1073741637;
  v9 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)ProcNumber = 62;
  *(_OWORD *)&ProcNumber[4] = 0LL;
  result = KeGetProcessorNumberFromIndex(v9, (PPROCESSOR_NUMBER)&ProcNumber[4]);
  if ( result >= 0 )
  {
    *(_QWORD *)&ProcNumber[8] = *(_QWORD *)a3;
    ProcNumber[16] = *(_BYTE *)(a3 + 8);
    return ((__int64 (__fastcall *)(_BYTE *))qword_1C0013678)(ProcNumber);
  }
  return result;
}
