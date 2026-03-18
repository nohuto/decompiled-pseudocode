/*
 * XREFs of _lambda_d81a481debf6296c527a71b94d2ae09c_::operator() @ 0x1C0234638
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0234BF4 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall lambda_d81a481debf6296c527a71b94d2ae09c_::operator()(int **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  int v6; // edx
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // r8
  _QWORD v11[10]; // [rsp+20h] [rbp-60h] BYREF

  v4 = *(_QWORD *)a1[3];
  if ( v4 && !*(_BYTE *)(v4 + 18784) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(v4, a2, a3);
    v5[3] = (unsigned int)*a1[2];
    v5[4] = **a1;
    v5[5] = -1071775725LL;
    WdLogEvent5_WdError(v5);
    **a1 = -1071775725;
  }
  memset(v11, 0, 0x48uLL);
  v6 = **a1;
  v7 = *(_QWORD *)a1[1];
  v11[7] = 0LL;
  HIDWORD(v11[6]) = v6;
  v8 = (__int64 *)a1[2];
  memset(&v11[1], 0, 36);
  v11[0] = 0x480000001ELL;
  LODWORD(v11[6]) = 106;
  v11[8] = v7;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11, *v8, v9);
}
