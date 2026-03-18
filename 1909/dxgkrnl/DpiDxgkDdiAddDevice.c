/*
 * XREFs of DpiDxgkDdiAddDevice @ 0x1C0181C7C
 * Callers:
 *     DpiAddDevice @ 0x1C0165580 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq @ 0x1C003DCB8 (McTemplateK0ppq.c)
 */

__int64 __fastcall DpiDxgkDdiAddDevice(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  const GUID *v9; // r8
  _QWORD *v10; // rax
  __int64 v12; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppq(a1, &EventEnterDdiAddDevice, a3, a2, 0LL, 0);
  v8 = (*(int (__fastcall **)(__int64, const GUID *))(a1 + 144))(a2, a3);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v12) = v8;
    McTemplateK0ppq(v7, &EventExitDdiAddDevice, v9, a2, *(_QWORD *)&a3->Data1, v12);
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v10[7] = 0LL;
  v10[3] = a1;
  v10[4] = a2;
  v10[5] = a3;
  v10[6] = v8;
  return (unsigned int)v8;
}
