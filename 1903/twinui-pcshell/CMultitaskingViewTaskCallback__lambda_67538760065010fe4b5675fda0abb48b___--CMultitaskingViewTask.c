/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b___::CMultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b___ @ 0x180342EB0
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b___ @ 0x180342E14 (MakeMultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180342F20 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 */

__int64 __fastcall CMultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b___::CMultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>();
  *(_QWORD *)a1 = off_180455530;
  *(_QWORD *)(a1 + 32) = off_180455510;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 48));
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 56));
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 16);
  return a1;
}
