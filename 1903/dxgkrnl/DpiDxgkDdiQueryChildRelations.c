/*
 * XREFs of DpiDxgkDdiQueryChildRelations @ 0x1C017816C
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C0177880 (DpiFdoEnumChildDevices.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0hbr0pqx @ 0x1C00525C4 (McTemplateK0hbr0pqx.c)
 */

__int64 __fastcall DpiDxgkDdiQueryChildRelations(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD *v11; // rax

  v5 = a4;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0hbr0pqx(a1, &EventEnterDdiQueryChildRelations, a3, a4, a3, a2, 0, a4 / 0x1C);
  v10 = (*(int (__fastcall **)(__int64, __int64, _QWORD))(a1 + 200))(a2, a3, (unsigned int)v5);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0hbr0pqx(v9, &EventExitDdiQueryChildRelations, v5, v5, a3, a2, v10, v5 / 0x1C);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v11[5] = v10;
  v11[3] = a1;
  v11[4] = a3;
  v11[6] = 0LL;
  v11[7] = 0LL;
  return (unsigned int)v10;
}
