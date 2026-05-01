/*
 * XREFs of ?MakeFallbackWindowTemplateForGroup@WindowGroupManager@@UEAAJK@Z @ 0x18025D580
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?TryGetWindowGroupById@WindowGroupManager@@AEAA?AV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@K@Z @ 0x18025DC4C (-TryGetWindowGroupById@WindowGroupManager@@AEAA-AV-$com_ptr_t@UIWindowGroup@@Uerr_exception_poli.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowGroupManager::MakeFallbackWindowTemplateForGroup(WindowGroupManager *this, unsigned int a2)
{
  __int64 v4; // r8
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  WindowGroupManager::TryGetWindowGroupById((char *)this - 8, &v9, a2);
  try
  {
    if ( v9 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
      if ( v4 )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 11) + 40LL))(
               *((_QWORD *)this + 11),
               a2,
               v4);
        if ( v5 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            237LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
            (const char *)(unsigned int)v5);
      }
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF2,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
                           v6);
  }
  return result;
}
