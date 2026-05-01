/*
 * XREFs of ?GetAssignedAccessTypeForUserWithGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1803B2CF4
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x1803B2504 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z @ 0x1803B2C84 (-GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAs.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithGroup(
        Windows::Internal::AssignedAccess::AAManagerHelper *this,
        const unsigned __int16 *a2,
        enum Windows::Internal::AssignedAccess::AssignedAccessType *a3)
{
  int AssignedAccessConfiguration; // eax
  unsigned int v5; // ebx
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v6; // rbx
  HSTRING_HEADER *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v12; // [rsp+28h] [rbp-38h] BYREF
  const WCHAR *v13; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER v14; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *(_DWORD *)a3 = 0;
  v12 = 0LL;
  v13 = a2;
  AssignedAccessConfiguration = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessConfiguration(
                                  this,
                                  &v12);
  v5 = AssignedAccessConfiguration;
  if ( AssignedAccessConfiguration >= 0 )
  {
    v6 = v12;
    v11 = 0LL;
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v14, &v13);
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *, PVOID, __int64 *))(*(_QWORD *)v6 + 64LL))(
           v6,
           v7[1].Reserved.Reserved1,
           &v11);
    v5 = v8;
    if ( v8 >= 0 )
    {
      if ( !v11
        || (v8 = (*(__int64 (__fastcall **)(__int64, enum Windows::Internal::AssignedAccess::AssignedAccessType *))(*(_QWORD *)v11 + 80LL))(
                   v11,
                   a3),
            v5 = v8,
            v8 >= 0) )
      {
        v5 = 0;
        goto LABEL_10;
      }
      v9 = 212LL;
    }
    else
    {
      v9 = 210LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)v8);
LABEL_10:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD0,
    (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
    (const char *)(unsigned int)AssignedAccessConfiguration);
LABEL_11:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v12);
  return v5;
}
