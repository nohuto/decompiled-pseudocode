/*
 * XREFs of ?TryGetViewByWindowId@HolographicViewHostItemLedger@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x180208780
 * Callers:
 *     ?TryGetProcessIdByWindowId@HolographicViewHostItemLedger@@UEAAJIPEAI@Z @ 0x180208580 (-TryGetProcessIdByWindowId@HolographicViewHostItemLedger@@UEAAJIPEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?TryFindViewHostItem@HolographicViewHostItemLedger@@UEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1802084E0 (-TryFindViewHostItem@HolographicViewHostItemLedger@@UEAA-AV-$ComPtr@UIViewHostItem@Holographic@S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicViewHostItemLedger::TryGetViewByWindowId(
        HolographicViewHostItemLedger *this,
        int a2,
        struct IInspectable **a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64); // rbx
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct IInspectable **); // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v13 = 0LL;
  v6 = *((_QWORD *)this + 8);
  v7 = *(int (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v13);
  try
  {
    if ( v7(v6) >= 0 )
    {
      HolographicViewHostItemLedger::TryFindViewHostItem((__int64)this + 8, (__int64 *)&v14, v13);
      v8 = (__int64)v14;
      if ( v14 )
      {
        v9 = (**v14)(v14, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a3);
        v10 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC3,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
            (const char *)(unsigned int)v9);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
          return v10;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC9,
                           (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
                           v11);
  }
  return result;
}
