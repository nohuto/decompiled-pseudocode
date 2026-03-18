/*
 * XREFs of DpiIndirectDdiIoControl @ 0x1C026FA68
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0263DD0 (DpiFdoDispatchIoctl.c)
 *     DxgkHandleIndirectEscape @ 0x1C026FACC (DxgkHandleIndirectEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiIndirectDdiIoControl(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 1056))(*(_QWORD *)(a1 + 1008));
  v3 = v1;
  if ( v1 < 0 )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = v3;
    WdLogEvent5_WdError(v4);
  }
  return (unsigned int)v3;
}
