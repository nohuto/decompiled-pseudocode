/*
 * XREFs of PepDevicePowerControlCallback @ 0x1C0009BF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     PepProcessorIdleVeto @ 0x1C000AC38 (PepProcessorIdleVeto.c)
 *     PepUpdateIdleState @ 0x1C000ACF0 (PepUpdateIdleState.c)
 *     PepUpdatePlatformState @ 0x1C000AE14 (PepUpdatePlatformState.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     PepGetParkingPageInfo @ 0x1C002BC68 (PepGetParkingPageInfo.c)
 */

__int64 __fastcall PepDevicePowerControlCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]

  v7 = 0;
  *a7 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0x27u,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
      *(_DWORD *)(a1 + 56));
    if ( *(_QWORD *)(a1 + 1152) )
    {
      _m_prefetchw((const void *)(a1 + 1148));
      if ( !(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(a1 + 1148), 1u) )
        IoQueueWorkItem(*(PIO_WORKITEM *)(a1 + 1152), PepUpdatePerformanceConstraintWorker, CriticalWorkQueue, 0LL);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
    return v7;
  }
  if ( *(_QWORD *)a2 != PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE || *(_QWORD *)(a2 + 8) != 0xF3DF4B6734ACAAABuLL )
  {
    if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_VETO.Data1
      && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_PROCESSOR_IDLE_VETO.Data4 )
    {
      if ( a4 >= 0xC )
        return PepProcessorIdleVeto(a1, a3);
      return 3221225507LL;
    }
    if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_PLATFORM_IDLE_VETO.Data1
      && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_PLATFORM_IDLE_VETO.Data4 )
    {
      if ( a4 < 0xC )
        return 3221225507LL;
      if ( Src || qword_1C0011940 || qword_1C0011948 )
      {
        v10 = 0LL;
        v11 = 0LL;
        HIDWORD(v10) = *(_DWORD *)a3;
        LODWORD(v11) = *(_DWORD *)(a3 + 4);
        BYTE4(v11) = *(_BYTE *)(a3 + 8);
        LODWORD(v10) = 60;
        return ((__int64 (__fastcall *)(__int64 *))qword_1C0011640)(&v10);
      }
      return 3221225659LL;
    }
    if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_UPDATE.Data1
      && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_PROCESSOR_IDLE_UPDATE.Data4 )
    {
      if ( a4 >= 0xC )
        return PepUpdateIdleState(a1, a3);
    }
    else
    {
      if ( *(_QWORD *)a2 != *(_QWORD *)&GUID_PLATFORM_IDLE_UPDATE.Data1
        || *(_QWORD *)(a2 + 8) != *(_QWORD *)GUID_PLATFORM_IDLE_UPDATE.Data4 )
      {
        return 3221225659LL;
      }
      if ( a4 >= 0xC )
        return PepUpdatePlatformState(a5, a3);
    }
    return 3221225507LL;
  }
  if ( a6 >= 0x10 )
  {
    result = PepGetParkingPageInfo(a1, a5);
    if ( (int)result < 0 )
      *a7 = 0LL;
  }
  else
  {
    *a7 = 16LL;
    return 3221225626LL;
  }
  return result;
}
