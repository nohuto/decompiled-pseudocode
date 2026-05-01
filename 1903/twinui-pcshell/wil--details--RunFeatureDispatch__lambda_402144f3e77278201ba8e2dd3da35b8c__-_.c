/*
 * XREFs of wil::details::RunFeatureDispatch__lambda_402144f3e77278201ba8e2dd3da35b8c__&_ @ 0x180162BF0
 * Callers:
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x18016390C (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800549D0 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180055138 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::RunFeatureDispatch__lambda_402144f3e77278201ba8e2dd3da35b8c____(
        __int64 a1,
        const struct DiagnosticsInfo *a2,
        __int64 a3,
        char a4)
{
  struct wil::details::IFunctorHost *v4; // r8
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v7[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+54h] [rbp-24h]
  unsigned int v10; // [rsp+98h] [rbp+20h] BYREF

  LOBYTE(v10) = a4;
  v6[0] = &off_180437AD8;
  v6[1] = a3;
  v6[2] = &v10;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v7, 9608605, a2);
  wil::details::RunFunctor((wil::details *)v6, (struct wil::details::IFunctor *)v7, v4);
  result = v10;
  if ( v8 )
    *(_DWORD *)(v8 + 16) = v9;
  return result;
}
