/*
 * XREFs of _lambda_d751ed88a330b424065b2529e18a6817_::operator() @ 0x180243A2C
 * Callers:
 *     _lambda_2cb0432609559d0b9f8b724cd53e45e8_::operator() @ 0x1802438B4 (_lambda_2cb0432609559d0b9f8b724cd53e45e8_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x18007E6C8 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x18012C7C0 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 */

__int64 __fastcall lambda_d751ed88a330b424065b2529e18a6817_::operator()(
        Windows::Internal::ShellHelpers::PropertySetHelper **a1)
{
  Windows::Internal::ShellHelpers::PropertySetHelper *v2; // rax
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, void *, GUID *, __int128 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v10; // r8
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // r8
  __int64 v12; // rax
  Windows::Internal::ShellHelpers::PropertySetHelper *v13; // rcx
  int v14; // eax
  _BYTE v15[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h]
  __int128 v18; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v17 = -2LL;
  v2 = *a1;
  if ( *((_QWORD *)*a1 + 4) )
  {
    *(_QWORD *)&v18 = 0LL;
    v3 = *((_QWORD *)v2 + 1);
    v4 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int128 *))(*(_QWORD *)v3 + 24LL);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v18);
    v5 = v4(v3, &unk_1804F3BF8, &GUID_d1710073_c814_4a0c_9685_00e44547418f, &v18);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x139,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
        (const char *)(unsigned int)v5);
LABEL_13:
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
      return v6;
    }
    *(_QWORD *)&v16 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int128 *))(*(_QWORD *)v18 + 64LL))(
           v18,
           *((_QWORD *)*a1 + 4),
           &GUID_f264283f_b510_4555_80ed_4c7216018854,
           &v16);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 316LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v16);
      goto LABEL_13;
    }
    if ( (_QWORD)v16 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v16 + 160LL))(v16, v15);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 324LL;
        goto LABEL_12;
      }
      if ( !v15[0] )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v16 + 48LL))(v16, (__int64)*a1 + 40);
        v6 = v7;
        if ( v7 < 0 )
        {
          v8 = 327LL;
          goto LABEL_12;
        }
      }
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v16);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
    v2 = *a1;
  }
  if ( *(_QWORD *)v2 )
  {
    AcquireSRWLockExclusive(&TabGroupingPolicy::TabGroupPolicyEvaluator::s_chooseLock);
    v18 = 0uLL;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
                *a1,
                *((HSTRING *)*a1 + 12),
                v10,
                &v18) < 0 )
      goto LABEL_25;
    v12 = v18 - 0x4B4911C56E81C7D0LL;
    if ( (_QWORD)v18 == 0x4B4911C56E81C7D0LL )
      v12 = *((_QWORD *)&v18 + 1) + 0x1F10BF2D8BF9B671LL;
    if ( v12 )
    {
      *(_OWORD *)((char *)*a1 + 40) = v18;
    }
    else
    {
LABEL_25:
      v13 = *a1;
      v16 = *(_OWORD *)((char *)*a1 + 40);
      v14 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(v13, *((HSTRING *)v13 + 12), v11, &v16);
      v6 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15B,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
          (const char *)(unsigned int)v14);
        ReleaseSRWLockExclusive(&TabGroupingPolicy::TabGroupPolicyEvaluator::s_chooseLock);
        return v6;
      }
    }
    ReleaseSRWLockExclusive(&TabGroupingPolicy::TabGroupPolicyEvaluator::s_chooseLock);
  }
  return 0LL;
}
