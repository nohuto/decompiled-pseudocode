/*
 * XREFs of DpiIndirectDdiIoControl @ 0x1C02AC224
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C029F6C0 (DpiFdoDispatchIoctl.c)
 *     DxgkHandleIndirectEscape @ 0x1C02AC3D8 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiIndirectDdiIoControl(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 1056))(*(_QWORD *)(a1 + 1008));
  v5 = v1;
  if ( v1 < 0 )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdError(v6);
  }
  return (unsigned int)v5;
}
