/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C00237EC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0020CA8 (ProcLibDeviceStart.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0003934 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003974 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     WPP_RECORDER_SF_ddii @ 0x1C0009D98 (WPP_RECORDER_SF_ddii.c)
 *     ValidatePssSymmetry @ 0x1C0024268 (ValidatePssSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C00242E0 (ValidatePctPtcSymmetry.c)
 *     GetPerfDomain @ 0x1C0024474 (GetPerfDomain.c)
 *     ValidateCpcSymmetry @ 0x1C002DBC8 (ValidateCpcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C002E120 (ValidatePepPerformanceSymmetry.c)
 *     ValidateTssSymmetry @ 0x1C002E540 (ValidateTssSymmetry.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v9; // [rsp+20h] [rbp-50h]
  __int64 v10[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+A8h] [rbp+38h] BYREF

  memset(v10, 0, sizeof(v10));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001B398,
    0LL);
  v2 = 0;
  if ( (unsigned int)GetPerfDomain(a1, v10, &v11) != 1 )
  {
    v3 = 0LL;
    ResetEnumerationContext(v10);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v10, &v11) )
    {
      v4 = v11;
      if ( v11 != a1 )
      {
        v5 = *(_QWORD *)(v11 + 264);
        v6 = *(_QWORD *)(a1 + 264);
        if ( (v6 & 0x10FF300000LL) != (v5 & 0x10FF300000LL) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_ddii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              v6 & 0x10FF300000LL,
              (__int64)&WPP_RECORDER_INITIALIZED,
              v9);
            v6 = *(_QWORD *)(a1 + 264);
            v5 = *(_QWORD *)(v4 + 264);
          }
          v3 |= (v5 ^ v6) & 0x10FF300000LL;
        }
        if ( (v6 & 0x70000000) != 0 )
        {
          if ( (int)ValidatePctPtcSymmetry(
                      *(_DWORD *)(a1 + 52),
                      (int)a1 + 408,
                      *(_DWORD *)(v4 + 52),
                      (int)a1 + 408,
                      (__int64)"_PCT") < 0 )
            v3 |= 0x70000000uLL;
          if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_DWORD *)(a1 + 52),
                      *(_QWORD *)(a1 + 440),
                      *(_DWORD *)(v4 + 52),
                      *(_QWORD *)(v4 + 440),
                      (__int64)"XPSS") < 0 )
          {
            v3 |= 0x40000000uLL;
          }
          if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_DWORD *)(a1 + 52),
                      *(_QWORD *)(a1 + 432),
                      *(_DWORD *)(v4 + 52),
                      *(_QWORD *)(v4 + 432),
                      (__int64)"_PSS") < 0 )
          {
            v3 |= 0x30000000uLL;
          }
        }
        if ( (*(_DWORD *)(a1 + 264) & 0x3300000) != 0 )
        {
          if ( (int)ValidatePctPtcSymmetry(
                      *(_DWORD *)(a1 + 52),
                      (int)a1 + 464,
                      *(_DWORD *)(v4 + 52),
                      (int)a1 + 464,
                      (__int64)"_PTC") < 0 )
            v3 |= 0x3300000uLL;
          if ( (int)ValidateTssSymmetry(
                      *(unsigned int *)(a1 + 52),
                      *(_QWORD *)(a1 + 488),
                      *(unsigned int *)(v4 + 52),
                      *(_QWORD *)(v4 + 488)) < 0 )
            v3 |= 0x3300000uLL;
        }
        if ( (*(_DWORD *)(a1 + 264) & 0x8000000) != 0
          && (int)ValidateCpcSymmetry(
                    *(unsigned int *)(a1 + 52),
                    *(_QWORD *)(a1 + 576),
                    *(unsigned int *)(v4 + 52),
                    *(_QWORD *)(v4 + 576)) < 0 )
        {
          v3 |= 0x8000000uLL;
        }
        if ( (*(_QWORD *)(a1 + 264) & 0x1000000000LL) != 0
          && (int)ValidatePepPerformanceSymmetry(
                    *(unsigned int *)(a1 + 52),
                    *(_QWORD *)(a1 + 1176),
                    *(unsigned int *)(v4 + 52),
                    *(_QWORD *)(v4 + 1176)) < 0 )
        {
          v3 |= 0x1000000000uLL;
        }
      }
    }
    ResetEnumerationContext(v10);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v10, &v11) )
    {
      v7 = ~v3;
      do
        *(_QWORD *)(v11 + 264) &= v7;
      while ( !(unsigned int)EnumerateNextDevice((__int64)v10, &v11) );
    }
    v2 = (*(_QWORD *)(a1 + 264) & 0x10FF300000LL) == 0 ? 0xC0000001 : 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001B398);
  return v2;
}
