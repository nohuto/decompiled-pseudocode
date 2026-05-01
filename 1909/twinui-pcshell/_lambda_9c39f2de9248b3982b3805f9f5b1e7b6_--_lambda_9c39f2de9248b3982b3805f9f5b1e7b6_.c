/*
 * XREFs of _lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::_lambda_9c39f2de9248b3982b3805f9f5b1e7b6_ @ 0x18014C4C4
 * Callers:
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180159120 (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::_lambda_9c39f2de9248b3982b3805f9f5b1e7b6_(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        _BYTE *a5,
        _OWORD *a6,
        _QWORD *a7)
{
  __int64 v10; // rcx

  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  v10 = *a3;
  *(_QWORD *)(a1 + 8) = *a3;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *(_QWORD *)(a1 + 16) = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_BYTE *)(a1 + 24) = *a5;
  *(_OWORD *)(a1 + 28) = *a6;
  *(_QWORD *)(a1 + 48) = *a7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 48));
  return a1;
}
