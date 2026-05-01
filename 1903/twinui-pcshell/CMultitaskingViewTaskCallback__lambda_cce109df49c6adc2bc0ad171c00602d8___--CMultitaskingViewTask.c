/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___::CMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___ @ 0x180348030
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___ @ 0x180347F94 (MakeMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180342F20 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 */

__int64 __fastcall CMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___::CMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>(a1);
  *(_QWORD *)a1 = off_180455E88;
  *(_QWORD *)(a1 + 32) = off_180455E68;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 56));
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 64));
  return a1;
}
