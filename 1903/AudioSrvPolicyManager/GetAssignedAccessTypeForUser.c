/*
 * XREFs of GetAssignedAccessTypeForUser @ 0x1800329CC
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180019494 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800016DC (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800067A0 (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180017F70 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?DoesTargetProfileExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NPEBG@Z @ 0x18003301C (-DoesTargetProfileExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NP.c)
 *     ?DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ @ 0x180033170 (-DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ.c)
 *     ?GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ @ 0x1800332BC (-GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ.c)
 *     ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180033430 (-GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEA.c)
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x180033554 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 *     ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z @ 0x18003363C (-GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAs.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x1800336AC (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser(unsigned __int16 *a1, __int64 a2, _DWORD *a3)
{
  HANDLE ProcessHeap; // rax
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration **v6; // rax
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration **v7; // rdi
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *v8; // rbx
  char v9; // si
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v10; // rsi
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v11; // rcx
  int v12; // esi
  int AssignedAccessConfiguration; // eax
  int UserInfoIf__lambda_661bc23c674c805837064d315685ee67; // eax
  __int64 v15; // rax
  __int64 *v16; // rdi
  int v17; // eax
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v20; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int16 *v21; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  ProcessHeap = GetProcessHeap();
  v6 = (struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration **)HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[3] = 0LL;
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = (Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *)v7;
  if ( !v7 )
    goto LABEL_12;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v19);
  if ( (int)Windows::Internal::AssignedAccess::PersistentLocationHelper::GetRedirectedPathIfNeeded(
              L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration",
              L"AssignedAccessConfiguration",
              &v19) >= 0
    && (v10 = v19) != 0LL )
  {
    v11 = *v7;
    v19 = 0LL;
    if ( v11 )
      CoTaskMemFree(v11);
    *v7 = v10;
    v7[2] = (struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *)-1LL;
    v7[1] = (struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *)-1LL;
    *((_DWORD *)v7 + 6) = Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::GetStoreVersion((Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *)v7);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v19);
  if ( !v9 )
  {
LABEL_12:
    v8 = 0LL;
    if ( !v7 )
    {
LABEL_41:
      v12 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C,
        (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_42;
    }
    if ( *v7 )
    {
      CoTaskMemFree(*v7);
      *v7 = 0LL;
    }
    v7[1] = 0LL;
    v7[2] = 0LL;
    operator delete(v7);
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_41;
  if ( !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::DoesTargetProfileExist(v8, a1)
    && !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::DoesGroupConfigExist(v8) )
  {
    *a3 = 0;
    v12 = 0;
    goto LABEL_42;
  }
  Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper((Windows::Internal::AssignedAccess::AAManagerHelper *)v22);
  *a3 = 0;
  v21 = a1;
  v19 = 0LL;
  AssignedAccessConfiguration = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessConfiguration(
                                  (Windows::Internal::AssignedAccess::AAManagerHelper *)v22,
                                  &v19);
  v12 = AssignedAccessConfiguration;
  if ( AssignedAccessConfiguration < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)AssignedAccessConfiguration);
    goto LABEL_22;
  }
  v20 = 0LL;
  UserInfoIf__lambda_661bc23c674c805837064d315685ee67 = Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___(
                                                          &v21,
                                                          v19,
                                                          &v20);
  v12 = UserInfoIf__lambda_661bc23c674c805837064d315685ee67;
  if ( UserInfoIf__lambda_661bc23c674c805837064d315685ee67 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)UserInfoIf__lambda_661bc23c674c805837064d315685ee67);
    if ( !v20 )
      goto LABEL_22;
    v15 = *v20;
LABEL_27:
    (*(void (**)(void))(v15 + 16))();
LABEL_22:
    if ( v19 )
      (*(void (__fastcall **)(struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *))(*(_QWORD *)v19 + 16LL))(v19);
    goto LABEL_39;
  }
  v16 = v20;
  if ( !v20 )
  {
    if ( v19 )
      (*(void (__fastcall **)(struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *))(*(_QWORD *)v19 + 16LL))(v19);
    goto LABEL_31;
  }
  v17 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(*v20 + 80))(v20, a3);
  v12 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)v17);
    v15 = *v16;
    goto LABEL_27;
  }
  (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
  if ( v19 )
    (*(void (__fastcall **)(struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *))(*(_QWORD *)v19 + 16LL))(v19);
  v12 = 0;
LABEL_39:
  if ( v12 >= 0 )
  {
LABEL_31:
    v12 = 0;
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34,
    (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
    (const char *)(unsigned int)v12);
LABEL_32:
  if ( v22[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
LABEL_42:
  if ( v8 )
  {
    if ( *(_QWORD *)v8 )
    {
      CoTaskMemFree(*(LPVOID *)v8);
      *(_QWORD *)v8 = 0LL;
    }
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    operator delete(v8);
  }
  return (unsigned int)v12;
}
