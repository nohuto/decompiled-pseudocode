/*
 * XREFs of ?TryGetProcessIdByWindowId@HolographicViewHostItemLedger@@UEAAJIPEAI@Z @ 0x180208580
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?TryGetViewByWindowId@HolographicViewHostItemLedger@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x180208780 (-TryGetViewByWindowId@HolographicViewHostItemLedger@@UEAAJIPEAPEAUIInspectable@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicViewHostItemLedger::TryGetProcessIdByWindowId(
        HolographicViewHostItemLedger *this,
        unsigned int a2,
        unsigned int *a3)
{
  __int64 result; // rax
  int ViewByWindowId; // eax
  int v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IInspectable *v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v10 = 0LL;
  ViewByWindowId = HolographicViewHostItemLedger::TryGetViewByWindowId(this, a2, &v10);
  try
  {
    if ( ViewByWindowId >= 0 )
    {
      ((void (__fastcall *)(struct IInspectable *, GUID *, __int64 *))v10->lpVtbl->QueryInterface)(
        v10,
        &GUID_c126df4f_0ea7_48c6_875c_23b737939cd1,
        &v11);
      if ( v11 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 72LL))(v11, a3);
        v7 = v6;
        if ( v6 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAF,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
            (const char *)(unsigned int)v6);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v10);
          return v7;
        }
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB5,
                           (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
                           v8);
  }
  return result;
}
