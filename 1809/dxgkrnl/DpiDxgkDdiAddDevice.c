/*
 * XREFs of DpiDxgkDdiAddDevice @ 0x1C0147FB8
 * Callers:
 *     DpiAddDevice @ 0x1C0149BF0 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq @ 0x1C0037720 (McTemplateK0ppq.c)
 */

__int64 __fastcall DpiDxgkDdiAddDevice(__int64 a1, __int64 a2, const GUID *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  const GUID *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v14; // [rsp+28h] [rbp-10h]
  int v15; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v15 = 0;
    McTemplateK0ppq(a1, &EventEnterDdiAddDevice, a3, a2, 0LL, v15);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, const GUID *))(a1 + 144))(a2, a3);
  v11 = v6;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v14) = v6;
    McTemplateK0ppq(*(_QWORD *)&a3->Data1, &EventExitDdiAddDevice, v9, a2, *(_QWORD *)&a3->Data1, v14);
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v12[7] = 0LL;
  v12[3] = a1;
  v12[4] = a2;
  v12[5] = a3;
  v12[6] = v11;
  return (unsigned int)v11;
}
