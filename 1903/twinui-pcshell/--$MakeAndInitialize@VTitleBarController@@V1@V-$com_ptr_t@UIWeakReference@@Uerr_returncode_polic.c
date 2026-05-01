/*
 * XREFs of ??$MakeAndInitialize@VTitleBarController@@V1@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Details@WRL@Microsoft@@YAJPEAPEAVTitleBarController@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180246504
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VTitleBarController@@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@wil@@YA?AV?$ComPtr@VTitleBarController@@@WRL@Microsoft@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@0@@Z @ 0x1802465F8 (--$MakeAndInitializeOrThrow@VTitleBarController@@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_p.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?attach@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIWeakReference@@@Z @ 0x180208920 (-attach@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIWeakReference@@.c)
 *     ??0TitleBarController@@QEAA@XZ @ 0x180247128 (--0TitleBarController@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VTitleBarController@@@WRL@Microsoft@@IEAAKXZ @ 0x180248CF8 (-InternalRelease@-$ComPtr@VTitleBarController@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TitleBarController,TitleBarController,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>(
        TitleBarController **a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  TitleBarController *v5; // rax
  TitleBarController *v6; // rdi
  __int64 v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  TitleBarController *v11; // [rsp+50h] [rbp+8h] BYREF
  TitleBarController *v12; // [rsp+60h] [rbp+18h] BYREF
  TitleBarController *v13; // [rsp+68h] [rbp+20h]

  v4 = 0;
  *a1 = 0LL;
  v5 = (TitleBarController *)operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v5;
  v11 = v5;
  if ( v5 )
  {
    v12 = v5;
    v6 = TitleBarController::TitleBarController(v5);
    v12 = v6;
    v7 = *a2;
    *a2 = 0LL;
    v11 = 0LL;
    wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::attach((__int64 *)v6 + 25, v7);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v11);
    if ( v6 )
    {
      v8 = *((_QWORD *)v6 + 9);
      while ( v8 >= 0 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 9, v8 + 1, v8);
        if ( v9 == v8 )
          goto LABEL_9;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v8 + 16));
    }
LABEL_9:
    *a1 = v6;
    Microsoft::WRL::ComPtr<TitleBarController>::InternalRelease(&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
