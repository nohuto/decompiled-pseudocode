/*
 * XREFs of DpiDxgkDdiExchangePreStartInfo @ 0x1C015E764
 * Callers:
 *     DpiAddDevice @ 0x1C0149BF0 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C002FEE4 (McTemplateK0pqq.c)
 */

__int64 __fastcall DpiDxgkDdiExchangePreStartInfo(__int64 a1, __int64 a2, unsigned int *a3)
{
  const GUID *v5; // r8
  __int64 v7; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+28h] [rbp-10h]

  v5 = *(const GUID **)(a1 + 1144);
  if ( v5 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqq(a1, &EventEnterDdiExchangePreStartInfo, v5, a2, *a3, 0);
      v5 = *(const GUID **)(a1 + 1144);
    }
    v9 = ((__int64 (__fastcall *)(__int64, unsigned int *))v5)(a2, a3);
    v7 = v9;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v17) = v9;
      LODWORD(v16) = a3[1];
      McTemplateK0pqq((unsigned int)v16, &EventExitDdiExchangePreStartInfo, v12, a2, v16, v17);
    }
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v14[3] = a1;
    v14[4] = *a3;
    v15 = a3[1];
    v14[7] = 0LL;
    v14[5] = v15;
    v14[6] = v7;
  }
  else
  {
    LODWORD(v7) = 0;
    a3[1] = 0;
  }
  return (unsigned int)v7;
}
