/*
 * XREFs of ACPIReleaseGlobalLock @ 0x1C001DAB4
 * Callers:
 *     GlobalLockEventHandler @ 0x1C001DA70 (GlobalLockEventHandler.c)
 *     ACPIIoctlReleaseGlobalLock @ 0x1C0057F14 (ACPIIoctlReleaseGlobalLock.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C001DD80 (WPP_RECORDER_SF_q.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C001E160 (ACPIStartNextGlobalLockRequest.c)
 *     WPP_RECORDER_SF_qq @ 0x1C001E264 (WPP_RECORDER_SF_qq.c)
 *     ACPIAcquireHardwareGlobalLock @ 0x1C001E338 (ACPIAcquireHardwareGlobalLock.c)
 *     WRITE_PM1_CONTROL @ 0x1C001E508 (WRITE_PM1_CONTROL.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0052044 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ACPIReleaseGlobalLock(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rdx
  bool v3; // zf
  volatile signed __int32 *v4; // rdx
  signed __int32 v5; // ecx
  signed __int32 v6; // eax

  v1 = a1;
  v2 = *((_QWORD *)AcpiInformation + 9);
  if ( a1 == v2 )
  {
    v3 = (*((_DWORD *)AcpiInformation + 20))-- == 1;
    if ( v3 )
    {
      *((_QWORD *)AcpiInformation + 9) = 0LL;
      v4 = (volatile signed __int32 *)*((_QWORD *)AcpiInformation + 5);
      v5 = *v4;
      if ( !*((_BYTE *)AcpiInformation + 84) )
      {
        do
        {
          v6 = _InterlockedCompareExchange(v4, v5 & 0xFFFFFFFC, v5);
          v3 = v5 == v6;
          v5 = v6;
        }
        while ( !v3 );
        if ( (v6 & 1) != 0 )
          WRITE_PM1_CONTROL(4LL, 0LL);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v4,
          3,
          17,
          (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids,
          v1);
      }
      if ( *((_UNKNOWN **)AcpiInformation + 6) != (_UNKNOWN *)((char *)AcpiInformation + 48) )
      {
        if ( (unsigned __int8)ACPIAcquireHardwareGlobalLock(*((_QWORD *)AcpiInformation + 5)) )
          ACPIStartNextGlobalLockRequest();
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 4;
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        3,
        16,
        (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids,
        *((_QWORD *)AcpiInformation + 9),
        *((_DWORD *)AcpiInformation + 20));
    }
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 4;
      WPP_RECORDER_SF_qq(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        3,
        15,
        (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids,
        *((_QWORD *)AcpiInformation + 9),
        a1);
    }
    return 3222536215LL;
  }
}
