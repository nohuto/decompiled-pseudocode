/*
 * XREFs of ProcLibThermalNotification @ 0x1C002F780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcLibThermalNotification(__int64 a1, int a2)
{
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001A398,
    0LL);
  if ( *(_DWORD *)(a1 + 704) != a2 )
  {
    *(_DWORD *)(a1 + 704) = a2;
    ((void (__fastcall *)(__int64))qword_1C001A758)(a1);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           qword_1C001A398);
}
