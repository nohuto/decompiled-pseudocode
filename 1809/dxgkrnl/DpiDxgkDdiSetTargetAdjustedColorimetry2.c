/*
 * XREFs of DpiDxgkDdiSetTargetAdjustedColorimetry2 @ 0x1C004B1CC
 * Callers:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1C004B8A0 (DpiSetTargetAdjustedColorimetry2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C002FEE4 (McTemplateK0pqq.c)
 */

__int64 __fastcall DpiDxgkDdiSetTargetAdjustedColorimetry2(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int128 *a4,
        int a5)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, int *); // r9
  __int64 v10; // rbx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v20; // [rsp+20h] [rbp-88h]
  __int64 v21; // [rsp+28h] [rbp-80h]
  int v22; // [rsp+30h] [rbp-78h] BYREF
  __int128 v23; // [rsp+34h] [rbp-74h]
  __int128 v24; // [rsp+44h] [rbp-64h]
  __int128 v25; // [rsp+54h] [rbp-54h]
  int v26; // [rsp+64h] [rbp-44h]
  int v27; // [rsp+68h] [rbp-40h]

  v6 = (unsigned int)a3;
  v7 = *(__int64 (__fastcall **)(__int64, int *))(a1 + 1312);
  if ( v7 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqq(a1, &EventEnterDdiSetTargetAdjustedColorimetry, a3, a2, (_DWORD)a3, 0);
      v7 = *(__int64 (__fastcall **)(__int64, int *))(a1 + 1312);
    }
    v11 = *a4;
    v12 = a4[1];
    v26 = *((_DWORD *)a4 + 12);
    v23 = v11;
    v27 = a5;
    v25 = a4[2];
    v22 = v6;
    v24 = v12;
    v13 = v7(a2, &v22);
    v10 = v13;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v21) = v13;
      LODWORD(v20) = v6;
      McTemplateK0pqq(v15, &EventExitDdiSetTargetAdjustedColorimetry, v16, a2, v20, v21);
    }
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
    v18[3] = a1;
    v18[4] = v6;
    v18[5] = v10;
    v18[6] = 0LL;
    v18[7] = 0LL;
  }
  else
  {
    LODWORD(v10) = -1073741637;
  }
  return (unsigned int)v10;
}
