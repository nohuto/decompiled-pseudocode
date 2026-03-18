/*
 * XREFs of DpiDxgkDdiExchangePreStartInfo @ 0x1C017FE64
 * Callers:
 *     DpiAddDevice @ 0x1C01617D0 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C00356E4 (McTemplateK0pqq.c)
 */

__int64 __fastcall DpiDxgkDdiExchangePreStartInfo(__int64 a1, __int64 a2, unsigned int *a3)
{
  const GUID *v5; // r8
  __int64 v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  const GUID *v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h]
  __int64 v15; // [rsp+28h] [rbp-10h]

  v5 = *(const GUID **)(a1 + 1144);
  if ( v5 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqq(*a3, &EventEnterDdiExchangePreStartInfo, v5, a2, *a3, 0);
      v5 = *(const GUID **)(a1 + 1144);
    }
    v7 = ((int (__fastcall *)(__int64, unsigned int *))v5)(a2, a3);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v15) = v7;
      LODWORD(v14) = a3[1];
      McTemplateK0pqq(v10, &EventExitDdiExchangePreStartInfo, v11, a2, v14, v15);
    }
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
    v12[3] = a1;
    v12[4] = *a3;
    v13 = a3[1];
    v12[7] = 0LL;
    v12[5] = v13;
    v12[6] = v7;
  }
  else
  {
    LODWORD(v7) = 0;
    a3[1] = 0;
  }
  return (unsigned int)v7;
}
