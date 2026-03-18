/*
 * XREFs of _lambda_10496a3648ceea7cb187be63008938e6_::operator() @ 0x1C0200728
 * Callers:
 *     _DXGKCALLONEXIT__lambda_10496a3648ceea7cb187be63008938e6____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C003AD24 (_DXGKCALLONEXIT__lambda_10496a3648ceea7cb187be63008938e6____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall lambda_10496a3648ceea7cb187be63008938e6_::operator()(unsigned int **a1)
{
  unsigned int v2; // r10d
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 v5; // r8
  __int64 *v6; // rdx
  _QWORD v8[10]; // [rsp+20h] [rbp-60h] BYREF

  memset(v8, 0, 0x48uLL);
  v2 = *a1[1];
  v3 = *(_QWORD *)a1[2];
  v4 = **a1;
  v5 = (*a1)[1];
  v6 = (__int64 *)a1[3];
  memset(&v8[1], 0, 36);
  v8[0] = 0x480000001ELL;
  LODWORD(v8[6]) = 110;
  HIDWORD(v8[6]) = v5;
  v8[7] = __PAIR64__(v2, v4);
  v8[8] = v3;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v8, *v6, v5);
}
