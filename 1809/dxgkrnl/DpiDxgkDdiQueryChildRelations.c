/*
 * XREFs of DpiDxgkDdiQueryChildRelations @ 0x1C0146E28
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C0146340 (DpiFdoEnumChildDevices.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0hbr0pqx @ 0x1C004B370 (McTemplateK0hbr0pqx.c)
 */

__int64 __fastcall DpiDxgkDdiQueryChildRelations(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax

  v5 = a4;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0hbr0pqx(a4, &EventEnterDdiQueryChildRelations, a3, a4, a3, a2, 0, a4 / 0x1C);
  v10 = (*(int (__fastcall **)(__int64, __int64, _QWORD))(a1 + 200))(a2, a3, (unsigned int)v5);
  if ( bTracingEnabled )
  {
    v11 = v5;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0hbr0pqx(v9, &EventExitDdiQueryChildRelations, v5, v5, a3, a2, v10, v5 / 0x1C);
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v11, v12);
  v13[5] = v10;
  v13[3] = a1;
  v13[4] = a3;
  v13[6] = 0LL;
  v13[7] = 0LL;
  return (unsigned int)v10;
}
