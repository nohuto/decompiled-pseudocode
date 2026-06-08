/*
 * XREFs of InitAcpiProcessorDomains @ 0x1C0020148
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0020CA8 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     InitAcpiIdleDomain @ 0x1C0020244 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C00202D8 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C0031FE8 (InitAcpiThrottleDomain.c)
 */

__int64 __fastcall InitAcpiProcessorDomains(__int64 a1)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  if ( (*(_DWORD *)(a1 + 264) & 0x7F070LL) != 0 && *(_QWORD *)(a1 + 512) && (int)InitAcpiIdleDomain(a1, a1 + 520) < 0 )
    *(_QWORD *)(a1 + 520) = 0LL;
  v2 = *(_QWORD *)(a1 + 264);
  if ( (v2 & 0x1000000000LL) != 0 )
    *(_QWORD *)(a1 + 536) = *(_QWORD *)(a1 + 1192);
  if ( (v2 & 0x800000) != 0 )
  {
    if ( (v2 & 0xF8000000) != 0 && (int)InitAcpiPerfDomain(a1) >= 0 && (*(_QWORD *)(a1 + 264) & 0x1000000000LL) == 0 )
      *(_QWORD *)(a1 + 536) = *(_QWORD *)(a1 + 456);
    if ( (*(_DWORD *)(a1 + 264) & 0x3000000) != 0
      && (int)InitAcpiThrottleDomain(a1) >= 0
      && (*(_QWORD *)(a1 + 264) & 0x10F8000000LL) == 0 )
    {
      *(_QWORD *)(a1 + 536) = *(_QWORD *)(a1 + 504);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 208));
}
