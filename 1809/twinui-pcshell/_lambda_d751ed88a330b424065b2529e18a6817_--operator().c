/*
 * XREFs of _lambda_d751ed88a330b424065b2529e18a6817_::operator() @ 0x1801F26AC
 * Callers:
 *     _lambda_2cb0432609559d0b9f8b724cd53e45e8_::operator() @ 0x1801F2484 (_lambda_2cb0432609559d0b9f8b724cd53e45e8_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x180071638 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x180106B20 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 */

__int64 __fastcall lambda_d751ed88a330b424065b2529e18a6817_::operator()(
        Windows::Internal::ShellHelpers::PropertySetHelper **a1)
{
  Windows::Internal::ShellHelpers::PropertySetHelper *v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rax
  Windows::Internal::ShellHelpers::PropertySetHelper *v12; // rcx
  int v13; // eax
  _BYTE v14[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+50h] [rbp-20h]
  __int128 v17; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v16 = -2LL;
  v2 = *a1;
  if ( *((_QWORD *)*a1 + 4) )
  {
    *(_QWORD *)&v17 = 0LL;
    v3 = *((_QWORD *)v2 + 1);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v17);
    v4 = (*(__int64 (__fastcall **)(__int64, void *, GUID *, __int128 *))(*(_QWORD *)v3 + 24LL))(
           v3,
           &unk_180477A38,
           &GUID_c07fc549_09c7_480a_855c_3d8a695f82c3,
           &v17);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x139,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
        (const char *)(unsigned int)v4);
LABEL_13:
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v17);
      return v5;
    }
    *(_QWORD *)&v15 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int128 *))(*(_QWORD *)v17 + 56LL))(
           v17,
           *((_QWORD *)*a1 + 4),
           &GUID_f264283f_b510_4555_80ed_4c7216018854,
           &v15);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 316LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v15);
      goto LABEL_13;
    }
    if ( (_QWORD)v15 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v15 + 160LL))(v15, v14);
      v5 = v6;
      if ( v6 < 0 )
      {
        v7 = 324LL;
        goto LABEL_12;
      }
      if ( !v14[0] )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v15 + 48LL))(v15, (__int64)*a1 + 40);
        v5 = v6;
        if ( v6 < 0 )
        {
          v7 = 327LL;
          goto LABEL_12;
        }
      }
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v15);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v17);
    v2 = *a1;
  }
  if ( *(_QWORD *)v2 )
  {
    AcquireSRWLockExclusive(&TabGroupingPolicy::TabGroupPolicyEvaluator::s_chooseLock);
    v17 = 0uLL;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(*a1, *((HSTRING *)*a1 + 12), v9, &v17) < 0 )
      goto LABEL_25;
    v11 = v17 - 0x4B4911C56E81C7D0LL;
    if ( (_QWORD)v17 == 0x4B4911C56E81C7D0LL )
      v11 = *((_QWORD *)&v17 + 1) + 0x1F10BF2D8BF9B671LL;
    if ( v11 )
    {
      *(_OWORD *)((char *)*a1 + 40) = v17;
    }
    else
    {
LABEL_25:
      v12 = *a1;
      v15 = *(_OWORD *)((char *)*a1 + 40);
      v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(v12, *((HSTRING *)v12 + 12), v10, &v15);
      v5 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15B,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
          (const char *)(unsigned int)v13);
        ReleaseSRWLockExclusive(&TabGroupingPolicy::TabGroupPolicyEvaluator::s_chooseLock);
        return v5;
      }
    }
    ReleaseSRWLockExclusive(&TabGroupingPolicy::TabGroupPolicyEvaluator::s_chooseLock);
  }
  return 0LL;
}
