/*
 * XREFs of _lambda_c9e0091c899eb8092cd1e2c5b05e9e28_::_lambda_invoker_cdecl_ @ 0x1800878C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c9e0091c899eb8092cd1e2c5b05e9e28_::operator() @ 0x180088938 (_lambda_c9e0091c899eb8092cd1e2c5b05e9e28_--operator().c)
 */

__int64 __fastcall lambda_c9e0091c899eb8092cd1e2c5b05e9e28_::_lambda_invoker_cdecl_(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int128 *a5,
        __int128 *a6)
{
  __int64 v6; // xmm1_8
  __int64 v7; // xmm1_8
  __int128 v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+50h] [rbp-38h]
  __int128 v11; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+70h] [rbp-18h]

  v6 = *((_QWORD *)a6 + 2);
  v9 = *a6;
  v10 = v6;
  v7 = *((_QWORD *)a5 + 2);
  v11 = *a5;
  v12 = v7;
  return lambda_c9e0091c899eb8092cd1e2c5b05e9e28_::operator()(a1, a1, a2, a3, a4, (__int64)&v11, (__int64)&v9);
}
