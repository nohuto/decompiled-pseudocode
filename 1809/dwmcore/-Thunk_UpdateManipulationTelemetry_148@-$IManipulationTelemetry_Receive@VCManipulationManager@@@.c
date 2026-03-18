/*
 * XREFs of ?Thunk_UpdateManipulationTelemetry_148@?$IManipulationTelemetry_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x1801ED7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IManipulationTelemetry_Receive<CManipulationManager>::Thunk_UpdateManipulationTelemetry_148(
        __int64 a1,
        __int64 **a2)
{
  __int64 v2; // rbx

  v2 = **a2;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, a2[1]);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
