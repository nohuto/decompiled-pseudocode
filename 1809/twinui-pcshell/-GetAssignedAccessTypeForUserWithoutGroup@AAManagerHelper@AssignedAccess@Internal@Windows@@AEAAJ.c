/*
 * XREFs of ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1803B2DEC
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x1803B2504 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd___ @ 0x1803B29A8 (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_e29.c)
 *     ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z @ 0x1803B2C84 (-GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAs.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithoutGroup(
        Windows::Internal::AssignedAccess::AAManagerHelper *this,
        const unsigned __int16 *a2,
        enum Windows::Internal::AssignedAccess::AssignedAccessType *a3)
{
  int AssignedAccessConfiguration; // eax
  unsigned int v5; // ebx
  int UserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const unsigned __int16 *v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v12; // [rsp+48h] [rbp+20h] BYREF

  v10 = a2;
  *(_DWORD *)a3 = 0;
  v12 = 0LL;
  AssignedAccessConfiguration = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessConfiguration(
                                  this,
                                  &v12);
  v5 = AssignedAccessConfiguration;
  if ( AssignedAccessConfiguration >= 0 )
  {
    v11 = 0LL;
    UserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd = Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd___(
                                                            (__int64)&v10,
                                                            (__int64 *)v12,
                                                            &v11);
    v5 = UserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd;
    if ( UserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd >= 0 )
    {
      if ( !v11
        || (UserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd = (*(__int64 (__fastcall **)(__int64, enum Windows::Internal::AssignedAccess::AssignedAccessType *))(*(_QWORD *)v11 + 80LL))(
                                                                    v11,
                                                                    a3),
            v5 = UserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd,
            UserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd >= 0) )
      {
        v5 = 0;
        goto LABEL_10;
      }
      v7 = 200LL;
    }
    else
    {
      v7 = 197LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)UserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd);
LABEL_10:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB9,
    (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
    (const char *)(unsigned int)AssignedAccessConfiguration);
LABEL_11:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v12);
  return v5;
}
