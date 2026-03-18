/*
 * XREFs of HUBPDO_CreatePdo @ 0x1C0070A74
 * Callers:
 *     HUBDSM_CreatingChildPDOAndReportingToPnp @ 0x1C001DE40 (HUBDSM_CreatingChildPDOAndReportingToPnp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C006F900 (HUBPDO_CreatePdoInternal.c)
 */

__int64 __fastcall HUBPDO_CreatePdo(_QWORD *a1)
{
  unsigned int PdoInternal; // esi
  void (__fastcall *v3)(_QWORD, _QWORD, __int64); // rbx
  __int64 v4; // rax
  __int64 v5; // rax

  *((_DWORD *)a1 + 608) = 0;
  PdoInternal = HUBPDO_CreatePdoInternal((__int64)a1, 1);
  if ( PdoInternal == 4077 )
  {
    v3 = *(void (__fastcall **)(_QWORD, _QWORD, __int64))(*a1 + 424LL);
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1[2]);
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, v4);
    v3(*(_QWORD *)(*a1 + 248LL), a1[3], v5);
    *(_DWORD *)(a1[1] + 1424LL) = 1;
  }
  else
  {
    *(_DWORD *)(a1[1] + 1424LL) = 3;
  }
  return PdoInternal;
}
