/*
 * XREFs of GetAssignedAccessTypeForUser @ 0x180035AD4
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001C620 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000A020 (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000A030 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?close_reset@?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@SAXPEAUHKEY__@@@Z @ 0x18000AAF8 (-close_reset@-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral_constan.c)
 *     ?DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ @ 0x180035DDC (-DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ.c)
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x180035EB0 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 *     ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z @ 0x180035F98 (-GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAs.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd___ @ 0x180036008 (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_e29.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  _QWORD *v6; // rbx
  unsigned __int8 (__fastcall ***v7)(_QWORD, __int64); // rdi
  unsigned int v8; // eax
  int AssignedAccessConfiguration; // eax
  int v11; // edi
  int UserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd; // eax
  __int64 v13; // rax
  HKEY v14; // rbx
  int v15; // eax
  DWORD Type[2]; // [rsp+30h] [rbp-50h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-40h] BYREF
  BYTE Data[4]; // [rsp+44h] [rbp-3Ch] BYREF
  DWORD cbData[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v22[3]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+78h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v18 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,0,std::nullptr_t>>>(&hKey);
  if ( hKey )
    wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,0,std::nullptr_t>::close_reset(hKey);
  hKey = 0LL;
  if ( RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration",
         0,
         0x20019u,
         &hKey)
    || (*(_DWORD *)Data = 0, cbData[0] = 4, RegQueryValueExW(hKey, L"Version", 0LL, Type, Data, cbData))
    || Type[0] != 4 )
  {
    v5 = 0;
  }
  else
  {
    v5 = *(_DWORD *)Data;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,0,std::nullptr_t>>>(&hKey);
  v18 = v5;
  hKey = (HKEY)&Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::`vftable';
  v6 = v22;
  *(_QWORD *)Type = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`vftable';
  *(_QWORD *)cbData = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::`vftable';
  v22[0] = &hKey;
  v22[1] = Type;
  v22[2] = cbData;
  while ( 1 )
  {
    v7 = (unsigned __int8 (__fastcall ***)(_QWORD, __int64))*v6;
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
    if ( v18 <= v8 )
    {
      if ( (**v7)(v7, a1) )
        break;
    }
    if ( ++v6 == &v23 )
    {
      if ( !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::DoesGroupConfigExist((Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *)&v18) )
      {
        *a3 = 0;
        return 0LL;
      }
      break;
    }
  }
  Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper((Windows::Internal::AssignedAccess::AAManagerHelper *)v21);
  *a3 = 0;
  *(_QWORD *)Type = 0LL;
  *(_QWORD *)cbData = a1;
  AssignedAccessConfiguration = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessConfiguration(
                                  (Windows::Internal::AssignedAccess::AAManagerHelper *)v21,
                                  (struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration **)Type);
  v11 = AssignedAccessConfiguration;
  if ( AssignedAccessConfiguration < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB9,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)AssignedAccessConfiguration);
    goto LABEL_16;
  }
  hKey = 0LL;
  UserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd = Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd___(
                                                          cbData,
                                                          *(_QWORD *)Type,
                                                          &hKey);
  v11 = UserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd;
  if ( UserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)UserInfoIf__lambda_e292dbe355bbba6f2cf9952d0b17febd);
    if ( !hKey )
      goto LABEL_16;
    v13 = *(_QWORD *)hKey;
LABEL_21:
    (*(void (**)(void))(v13 + 16))();
LABEL_16:
    if ( *(_QWORD *)Type )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)Type + 16LL))(*(_QWORD *)Type);
    goto LABEL_34;
  }
  v14 = hKey;
  if ( !hKey )
  {
    if ( *(_QWORD *)Type )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)Type + 16LL))(*(_QWORD *)Type);
    goto LABEL_25;
  }
  v15 = (*(__int64 (__fastcall **)(HKEY, _DWORD *))(*(_QWORD *)hKey + 80LL))(hKey, a3);
  v11 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)v15);
    v13 = *(_QWORD *)v14;
    goto LABEL_21;
  }
  (*(void (__fastcall **)(HKEY))(*(_QWORD *)v14 + 16LL))(v14);
  if ( *(_QWORD *)Type )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)Type + 16LL))(*(_QWORD *)Type);
  v11 = 0;
LABEL_34:
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_26;
  }
LABEL_25:
  v11 = 0;
LABEL_26:
  if ( v21[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
  return (unsigned int)v11;
}
