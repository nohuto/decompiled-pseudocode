/*
 * XREFs of ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x180097690
 * Callers:
 *     ?MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x180098F90 (-MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180099CDC (-SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x180095FA8 (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall KioskPositioner::CreateApplicationViewOperation(__int64 a1, _QWORD *a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17[2]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v18[16]; // [rsp+38h] [rbp-38h] BYREF
  __m256i v19; // [rsp+48h] [rbp-28h]
  __int64 v20; // [rsp+90h] [rbp+20h] BYREF
  _QWORD *v21; // [rsp+98h] [rbp+28h]
  __int64 v22; // [rsp+A8h] [rbp+38h]

  v22 = a4;
  v21 = a2;
  v20 = a1;
  v17[1] = -2LL;
  wil::MakeAndInitializeOrThrow<ApplicationViewOperation,>(&v20);
  v7 = v20;
  *(_DWORD *)(v20 + 116) = 255;
  *(_DWORD *)(v7 + 120) = a3;
  *(_DWORD *)(v20 + 176) = 1;
  *(_DWORD *)(v20 + 200) = 0;
  v8 = v20;
  *(_QWORD *)(v20 + 220) = 0LL;
  *(_QWORD *)(v8 + 228) = 0LL;
  v9 = v20;
  *(_QWORD *)(v20 + 204) = 0LL;
  *(_QWORD *)(v9 + 212) = 0LL;
  v10 = v20;
  *(_BYTE *)(v20 + 236) = 1;
  *(_QWORD *)(v10 + 240) = 0LL;
  memset_0(v18, 0, 0x30uLL);
  v19.m256i_i64[0] = 0LL;
  *(__m128i *)&v19.m256i_u64[1] = _mm_load_si128((const __m128i *)&_xmm);
  v19.m256i_i32[6] = 0;
  v11 = v20;
  *(_OWORD *)(v20 + 128) = 0LL;
  *(__m256i *)(v11 + 144) = v19;
  *(_BYTE *)(v11 + 124) = 1;
  v12 = *(_QWORD *)(a4 + 56);
  if ( !v12 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 16LL))(v12, v17);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v20 + 192), v17[0]);
  v13 = v20;
  v20 = 0LL;
  *a2 = v13;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v17);
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v20);
  v15 = *(_QWORD *)(a4 + 56);
  if ( v15 )
  {
    LOBYTE(v14) = v15 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v14);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return a2;
}
