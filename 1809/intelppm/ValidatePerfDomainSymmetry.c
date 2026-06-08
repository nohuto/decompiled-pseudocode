/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C00226F4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EF84 (ProcLibDeviceStart.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0002F1C (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002F5C (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddii @ 0x1C0009848 (WPP_RECORDER_SF_ddii.c)
 *     ValidatePssSymmetry @ 0x1C00232CC (ValidatePssSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C0023344 (ValidatePctPtcSymmetry.c)
 *     GetPerfDomain @ 0x1C0023648 (GetPerfDomain.c)
 *     ValidateCpcSymmetry @ 0x1C002B900 (ValidateCpcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C002BCE0 (ValidatePepPerformanceSymmetry.c)
 *     ValidateTssSymmetry @ 0x1C002C05C (ValidateTssSymmetry.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v10; // [rsp+20h] [rbp-50h]
  __int64 v11[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+38h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001A398,
    0LL);
  v2 = 0;
  if ( (unsigned int)GetPerfDomain(a1, v11, &v12) != 1 )
  {
    v3 = 0LL;
    ResetEnumerationContext(v11);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v11, &v12) )
    {
      v6 = v12;
      if ( v12 != a1 )
      {
        v7 = *(_QWORD *)(a1 + 264);
        if ( (v7 & 0x10FF300000LL) != (*(_QWORD *)(v12 + 264) & 0x10FF300000LL) )
        {
          WPP_RECORDER_SF_ddii((__int64)WPP_GLOBAL_Control->DeviceExtension, v7 & 0x10FF300000LL, v4, v5, v10);
          v7 = *(_QWORD *)(a1 + 264);
          v3 |= (v7 ^ *(_QWORD *)(v6 + 264)) & 0x10FF300000LL;
        }
        if ( (v7 & 0x70000000) != 0 )
        {
          if ( (int)ValidatePctPtcSymmetry(
                      *(_DWORD *)(a1 + 52),
                      (int)a1 + 392,
                      *(_DWORD *)(v6 + 52),
                      (int)a1 + 392,
                      (__int64)"_PCT") < 0 )
            v3 |= 0x70000000uLL;
          if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_DWORD *)(a1 + 52),
                      *(_QWORD *)(a1 + 424),
                      *(_DWORD *)(v6 + 52),
                      *(_QWORD *)(v6 + 424),
                      (__int64)"XPSS") < 0 )
          {
            v3 |= 0x40000000uLL;
          }
          if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_DWORD *)(a1 + 52),
                      *(_QWORD *)(a1 + 416),
                      *(_DWORD *)(v6 + 52),
                      *(_QWORD *)(v6 + 416),
                      (__int64)"_PSS") < 0 )
          {
            v3 |= 0x30000000uLL;
          }
        }
        if ( (*(_DWORD *)(a1 + 264) & 0x3300000) != 0 )
        {
          if ( (int)ValidatePctPtcSymmetry(
                      *(_DWORD *)(a1 + 52),
                      (int)a1 + 448,
                      *(_DWORD *)(v6 + 52),
                      (int)a1 + 448,
                      (__int64)"_PTC") < 0 )
            v3 |= 0x3300000uLL;
          if ( (int)ValidateTssSymmetry(
                      *(unsigned int *)(a1 + 52),
                      *(_QWORD *)(a1 + 472),
                      *(unsigned int *)(v6 + 52),
                      *(_QWORD *)(v6 + 472)) < 0 )
            v3 |= 0x3300000uLL;
        }
        if ( (*(_DWORD *)(a1 + 264) & 0x8000000) != 0
          && (int)ValidateCpcSymmetry(
                    *(unsigned int *)(a1 + 52),
                    *(_QWORD *)(a1 + 560),
                    *(unsigned int *)(v6 + 52),
                    *(_QWORD *)(v6 + 560)) < 0 )
        {
          v3 |= 0x8000000uLL;
        }
        if ( (*(_QWORD *)(a1 + 264) & 0x1000000000LL) != 0
          && (int)ValidatePepPerformanceSymmetry(
                    *(unsigned int *)(a1 + 52),
                    *(_QWORD *)(a1 + 1160),
                    *(unsigned int *)(v6 + 52),
                    *(_QWORD *)(v6 + 1160)) < 0 )
        {
          v3 |= 0x1000000000uLL;
        }
      }
    }
    ResetEnumerationContext(v11);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v11, &v12) )
    {
      v8 = ~v3;
      do
        *(_QWORD *)(v12 + 264) &= v8;
      while ( !(unsigned int)EnumerateNextDevice((__int64)v11, &v12) );
    }
    v2 = (*(_QWORD *)(a1 + 264) & 0x10FF300000LL) == 0 ? 0xC0000001 : 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001A398);
  return v2;
}
