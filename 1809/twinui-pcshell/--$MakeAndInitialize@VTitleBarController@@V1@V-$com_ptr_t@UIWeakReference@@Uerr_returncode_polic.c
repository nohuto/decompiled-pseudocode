/*
 * XREFs of ??$MakeAndInitialize@VTitleBarController@@V1@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Details@WRL@Microsoft@@YAJPEAPEAVTitleBarController@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801F50CC
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VTitleBarController@@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@wil@@YA?AV?$ComPtr@VTitleBarController@@@WRL@Microsoft@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@0@@Z @ 0x1801F51D0 (--$MakeAndInitializeOrThrow@VTitleBarController@@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_p.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?attach@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIWeakReference@@@Z @ 0x1801BAAD0 (-attach@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIWeakReference@@.c)
 *     ??0TitleBarController@@QEAA@XZ @ 0x1801F5F40 (--0TitleBarController@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VTitleBarController@@@WRL@Microsoft@@IEAAKXZ @ 0x1801F7D84 (-InternalRelease@-$ComPtr@VTitleBarController@@@WRL@Microsoft@@IEAAKXZ.c)
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
  volatile int *v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  TitleBarController *v12; // [rsp+50h] [rbp+8h] BYREF
  TitleBarController *v13; // [rsp+60h] [rbp+18h] BYREF
  TitleBarController *v14; // [rsp+68h] [rbp+20h]

  v4 = 0;
  *a1 = 0LL;
  v5 = (TitleBarController *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v5;
  v12 = v5;
  if ( v5 )
  {
    v13 = v5;
    v6 = TitleBarController::TitleBarController(v5);
    v13 = v6;
    v7 = *a2;
    *a2 = 0LL;
    v12 = 0LL;
    wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::attach((__int64 *)v6 + 25, v7);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v12);
    if ( v6 )
    {
      v9 = *((_QWORD *)v6 + 9);
      while ( v9 >= 0 )
      {
        if ( (_DWORD)v9 != 0x7FFFFFFF )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 9, v9 + 1, v9);
          if ( v10 != v9 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v9 + 16), v8);
    }
LABEL_10:
    *a1 = v6;
    Microsoft::WRL::ComPtr<TitleBarController>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
