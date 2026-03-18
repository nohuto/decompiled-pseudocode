/*
 * XREFs of DpiDxgkDdiRemoveDevice @ 0x1C02AF36C
 * Callers:
 *     DpiAddDevice @ 0x1C0165580 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C02A0CF0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C00357CC (McTemplateK0xq.c)
 */

__int64 __fastcall DpiDxgkDdiRemoveDevice(__int64 a1, __int64 a2, const GUID *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  const GUID *v8; // r8
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+20h] [rbp-18h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v13 = 0;
    McTemplateK0xq(a1, &EventEnterDdiRemoveDevice, a3, a2, v13);
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(a1 + 168))(a2);
  v9 = v5;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v12) = v5;
    McTemplateK0xq(v7, &EventExitDdiRemoveDevice, v8, a2, v12);
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v10[3] = a1;
  v10[4] = a2;
  v10[5] = v9;
  v10[6] = 0LL;
  v10[7] = 0LL;
  return (unsigned int)v9;
}
