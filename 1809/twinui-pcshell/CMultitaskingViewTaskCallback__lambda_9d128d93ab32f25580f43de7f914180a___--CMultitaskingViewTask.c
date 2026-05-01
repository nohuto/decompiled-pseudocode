/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___::CMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___ @ 0x1802E24C4
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___ @ 0x1802E2428 (MakeMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1802E2534 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 */

__int64 __fastcall CMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___::CMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>();
  *(_QWORD *)a1 = off_1803EDF80;
  *(_QWORD *)(a1 + 32) = off_1803EDF60;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 48));
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 56));
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 16);
  return a1;
}
