/*
 * XREFs of ?get_Current@TabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAPEAUITabSetMediator@2345@@Z @ 0x18020E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics::get_Current(
        Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabSetMediator **a2)
{
  HRESULT v3; // eax
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID v8; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  v3 = CoCreateInstance(
         &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
         0LL,
         4u,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &v8);
  try
  {
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        145LL,
        (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(LPVOID, __int128 *, GUID *, struct Windows::Internal::ComposableShell::Tabs::ITabSetMediator **))(*(_QWORD *)v8 + 24LL))(
           v8,
           &xmmword_1804785D8,
           &GUID_c9be375e_5163_4871_9380_1c4a5982d480,
           a2);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        146LL,
        (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
        (const char *)(unsigned int)v4);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x95,
                           (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
                           v5);
  }
  return result;
}
