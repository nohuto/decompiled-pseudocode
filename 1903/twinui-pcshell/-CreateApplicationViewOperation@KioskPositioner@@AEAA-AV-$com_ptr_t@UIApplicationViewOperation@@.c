/*
 * XREFs of ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x18039C140
 * Callers:
 *     ?MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x18039DA38 (-MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18039E770 (-SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180056444 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??R?$_Func_class@V?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@$$V@std@@QEBA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180168848 (--R-$_Func_class@V-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D6F4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x18039ABCC (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 */

// Hidden C++ exception states: #wind=6
volatile signed __int64 **__fastcall KioskPositioner::CreateApplicationViewOperation(
        volatile signed __int64 *a1,
        volatile signed __int64 **a2,
        int a3,
        __int64 a4)
{
  volatile signed __int64 *v7; // rax
  volatile signed __int64 *v8; // rax
  volatile signed __int64 *v9; // rax
  volatile signed __int64 *v10; // rax
  volatile signed __int64 *v11; // rax
  volatile signed __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16[4]; // [rsp+28h] [rbp-48h] BYREF
  __m256i v17; // [rsp+48h] [rbp-28h]
  volatile signed __int64 *v18; // [rsp+A0h] [rbp+30h] BYREF
  volatile signed __int64 **v19; // [rsp+A8h] [rbp+38h]
  __int64 v20; // [rsp+B8h] [rbp+48h]

  v20 = a4;
  v19 = a2;
  v18 = a1;
  v16[1] = -2LL;
  wil::MakeAndInitializeOrThrow<ApplicationViewOperation,>(&v18);
  v7 = v18;
  *((_DWORD *)v18 + 29) = 4095;
  *((_DWORD *)v7 + 30) = a3;
  *((_DWORD *)v18 + 31) = 0;
  *((_DWORD *)v18 + 45) = 1;
  *((_DWORD *)v18 + 50) = 0;
  v8 = v18;
  *(volatile signed __int64 *)((char *)v18 + 220) = 0LL;
  *(volatile signed __int64 *)((char *)v8 + 228) = 0LL;
  v9 = v18;
  *(volatile signed __int64 *)((char *)v18 + 204) = 0LL;
  *(volatile signed __int64 *)((char *)v9 + 212) = 0LL;
  v10 = v18;
  *((_BYTE *)v18 + 236) = 1;
  *((_QWORD *)v10 + 30) = 0LL;
  v17.m256i_i64[3] = 0LL;
  v17.m256i_i64[0] = 0LL;
  *(__m128i *)&v17.m256i_u64[1] = _mm_load_si128((const __m128i *)&_xmm);
  v11 = v18;
  *(_OWORD *)((char *)v18 + 132) = 0LL;
  *(__m256i *)((char *)v11 + 148) = v17;
  *((_BYTE *)v11 + 128) = 1;
  std::_Func_class<wil::com_ptr_t<IApplicationViewTitlebarConfiguration,wil::err_exception_policy>,>::operator()(
    a4,
    (__int64)v16);
  Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)v18 + 24, v16[0]);
  v12 = v18;
  v18 = 0LL;
  *a2 = v12;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v16);
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v18);
  v14 = *(_QWORD *)(a4 + 56);
  if ( v14 )
  {
    LOBYTE(v13) = v14 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v13);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return a2;
}
