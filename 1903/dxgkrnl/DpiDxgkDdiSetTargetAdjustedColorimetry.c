/*
 * XREFs of DpiDxgkDdiSetTargetAdjustedColorimetry @ 0x1C02AF00C
 * Callers:
 *     DpiSetTargetAdjustedColorimetry @ 0x1C017FD90 (DpiSetTargetAdjustedColorimetry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C00356E4 (McTemplateK0pqq.c)
 */

__int64 __fastcall DpiDxgkDdiSetTargetAdjustedColorimetry(__int64 a1, __int64 a2, const GUID *a3, __int64 a4)
{
  __int64 (__fastcall *v4)(__int64, _QWORD, _OWORD *); // r10
  __int64 v6; // rdi
  __int64 v9; // rbx
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  _QWORD *v17; // rax
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  _OWORD v21[3]; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+60h] [rbp-18h]

  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, _OWORD *))(a1 + 1120);
  v6 = (unsigned int)a3;
  if ( v4 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqq(a1, &EventEnterDdiSetTargetAdjustedColorimetry, a3, a2, (_DWORD)a3, 0);
      v4 = *(__int64 (__fastcall **)(__int64, _QWORD, _OWORD *))(a1 + 1120);
    }
    v10 = *(_DWORD *)(a4 + 48);
    v11 = *(_OWORD *)(a4 + 16);
    v21[0] = *(_OWORD *)a4;
    v12 = *(_OWORD *)(a4 + 32);
    v22 = v10;
    v21[2] = v12;
    v21[1] = v11;
    v13 = v4(a2, (unsigned int)v6, v21);
    v9 = v13;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v20) = v13;
      LODWORD(v19) = v6;
      McTemplateK0pqq(v15, &EventExitDdiSetTargetAdjustedColorimetry, v16, a2, v19, v20);
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
    v17[3] = a1;
    v17[4] = v6;
    v17[5] = v9;
    v17[6] = 0LL;
    v17[7] = 0LL;
  }
  else
  {
    LODWORD(v9) = -1073741637;
  }
  return (unsigned int)v9;
}
