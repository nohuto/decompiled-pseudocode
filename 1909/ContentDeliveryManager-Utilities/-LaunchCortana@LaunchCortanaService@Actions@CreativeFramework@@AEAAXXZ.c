/*
 * XREFs of ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009611C
 * Callers:
 *     ?Invoke@LaunchCortanaService@Actions@CreativeFramework@@UEAAXXZ @ 0x180096110 (-Invoke@LaunchCortanaService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800242C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024328 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067F1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18007647C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800766D4 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?CortanaUndocking_ReplaceDecisionReadBeforeReevaluation@CortanaProactiveTelemetry@@SAXXZ @ 0x180095DDC (-CortanaUndocking_ReplaceDecisionReadBeforeReevaluation@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ @ 0x180095F04 (-IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ.c)
 *     ??$ActivateInstance@UILockScreenRegistrySettingProvider@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UILockScreenRegistrySettingProvider@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180096F14 (--$ActivateInstance@UILockScreenRegistrySettingProvider@ContentManagement@@@wil@@YA-AV-$com_ptr_.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13 #try_helpers=1
void __fastcall CreativeFramework::Actions::LaunchCortanaService::LaunchCortana(
        CreativeFramework::Actions::LaunchCortanaService *this)
{
  int v1; // eax
  LSTATUS ValueW; // edx
  __int16 v3; // cx
  signed int v4; // eax
  __int64 v5; // rax
  CortanaUndockingHelpers *v6; // rcx
  bool v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // esi
  HRESULT v11; // eax
  wil::details::in1diag3 *v12; // rcx
  void **v13; // rdx
  int v14; // eax
  LPVOID v15; // rcx
  HRESULT v16; // eax
  HSTRING v17; // rsi
  void *v18; // rcx
  int ActivationFactory; // eax
  wil::details::in1diag3 *v20; // rcx
  bool v21; // si
  unsigned int v22; // eax
  int v23; // eax
  wchar_t *v24; // rdx
  unsigned __int64 v25; // r8
  void *v26; // rbx
  __int64 (__fastcall *v27)(void *, PVOID, _QWORD **); // r14
  void **v28; // rax
  HSTRING_HEADER *v29; // rsi
  _QWORD *v30; // rcx
  int v31; // eax
  wil::details::in1diag3 *v32; // rcx
  HRESULT v33; // eax
  HSTRING v34; // rbx
  __int64 v35; // rcx
  int v36; // eax
  wil::details::in1diag3 *v37; // rcx
  int v38; // eax
  wil::details::in1diag3 *v39; // rcx
  int v40; // eax
  wil::details::in1diag3 *v41; // rcx
  __int64 v42; // rcx
  LPVOID v43; // rcx
  __int64 v44; // rcx
  _QWORD *v45; // rcx
  char v46; // [rsp+40h] [rbp-2D8h] BYREF
  char v47[7]; // [rsp+41h] [rbp-2D7h] BYREF
  DWORD v48[2]; // [rsp+48h] [rbp-2D0h] BYREF
  DWORD v49; // [rsp+50h] [rbp-2C8h] BYREF
  DWORD pcbData[2]; // [rsp+58h] [rbp-2C0h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-2B8h] BYREF
  _QWORD *v52; // [rsp+68h] [rbp-2B0h] BYREF
  void *v53; // [rsp+70h] [rbp-2A8h] BYREF
  _QWORD v54[2]; // [rsp+78h] [rbp-2A0h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-290h] BYREF
  __int64 v56; // [rsp+98h] [rbp-280h]
  unsigned __int64 v57; // [rsp+A0h] [rbp-278h]
  void *v58[3]; // [rsp+A8h] [rbp-270h] BYREF
  unsigned __int64 v59; // [rsp+C0h] [rbp-258h]
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp-250h] BYREF
  HSTRING string[2]; // [rsp+E0h] [rbp-238h] BYREF
  _WORD pvData[264]; // [rsp+F0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+0h]

  v54[1] = -2LL;
  v59 = 7LL;
  v58[2] = 0LL;
  LOWORD(v58[0]) = 0;
  std::wstring::assign(v58, (char *)L"StartMode=Reactive&QuerySource=LockScreen", 0x29uLL);
  v57 = 7LL;
  v56 = 0LL;
  LOWORD(Src[0]) = 0;
  std::wstring::assign(Src, (char *)L"&QuerySourceSecondaryId=", 0x18uLL);
  wil::ActivateInstance<ContentManagement::ILockScreenRegistrySettingProvider>(v54);
  v46 = 0;
  v47[0] = 0;
  v1 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)v54[0] + 48LL))(v54[0], &v46, v47);
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v1);
    goto LABEL_85;
  }
  if ( v46 )
  {
    std::wstring::append(Src, (char *)L"LaunchFromSpotlight", 0x13uLL);
  }
  else
  {
    memset_0(pvData, 0, 0x208uLL);
    pcbData[0] = 520;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Speech_OneCore\\Preferences",
               L"Id",
               2u,
               0LL,
               pvData,
               pcbData);
    if ( ValueW )
    {
      v3 = 0;
      pvData[0] = 0;
    }
    else
    {
      v3 = pvData[0];
    }
    v4 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v4 = ValueW;
    if ( v4 >= 0 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( pvData[v5] );
      if ( v5 )
        std::wstring::append(Src, (char *)pvData, v5 & -(__int64)(v3 != 0));
    }
  }
  std::wstring::append((char *)v58, Src, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v6 = (CortanaUndockingHelpers *)v54[0];
  if ( v54[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v54[0] + 16LL))(v54[0]);
  if ( v57 >= 8 )
    operator delete(Src[0]);
  v7 = 0;
  if ( CortanaUndockingHelpers::IsUndockCortanaEnabled(v6) )
  {
    v49 = 0;
    v48[0] = 4;
    v8 = RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
           L"ReplaceCortanaCheckRefreshed",
           0x10u,
           0LL,
           &v49,
           v48);
    if ( v8 == 2 )
    {
      CortanaProactiveTelemetry::CortanaUndocking_ReplaceDecisionReadBeforeReevaluation();
    }
    else
    {
      if ( v8 )
      {
        v9 = 98LL;
        goto LABEL_26;
      }
      if ( !v49 )
      {
        v10 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x68,
          (__int64)"internal\\shellcommondesktopbase\\inc\\cortana\\cortanaundocking.h",
          (const char *)0x8000FFFFLL);
        goto LABEL_31;
      }
    }
    pcbData[0] = 0;
    v48[0] = 4;
    v8 = RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
           L"CortanaIsReplaced",
           0x10u,
           0LL,
           pcbData,
           v48);
    if ( v8 != 2 )
    {
      if ( v8 )
      {
        v9 = 124LL;
LABEL_26:
        v10 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)v9,
                (__int64)"internal\\shellcommondesktopbase\\inc\\cortana\\cortanaundocking.h",
                (const char *)v8);
        goto LABEL_31;
      }
      v7 = pcbData[0] == 1;
    }
  }
  v10 = 0;
LABEL_31:
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"internal\\shellcommondesktopbase\\inc\\cortana\\cortanaundocking.h",
      (const char *)(unsigned int)v10);
  if ( !v7 )
  {
    ppv = 0LL;
    v11 = CoCreateInstance(
            &GUID_24ac8f2b_4d4a_4c17_9607_6a4b14068f97,
            0LL,
            4u,
            &GUID_37c30b2c_2c34_45bc_bb87_62126979a511,
            &ppv);
    v12 = retaddr;
    if ( v11 >= 0 )
    {
      v13 = v58;
      if ( v59 >= 8 )
        v13 = (void **)v58[0];
      v14 = (*(__int64 (__fastcall **)(LPVOID, void **))(*(_QWORD *)ppv + 24LL))(ppv, v13);
      if ( v14 >= 0 )
      {
        v15 = ppv;
        if ( !ppv )
          goto LABEL_81;
        goto LABEL_80;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_87;
    }
LABEL_85:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x44,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v53 = 0LL;
  string[0] = 0LL;
  v16 = WindowsCreateStringReference(L"Windows.Foundation.Uri", 0x16u, &hstringHeader, string);
  if ( v16 < 0 )
  {
LABEL_87:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
LABEL_88:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x4E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)ActivationFactory);
LABEL_89:
    wil::details::in1diag3::Throw_Hr(
      v32,
      (void *)0x56,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v31);
    goto LABEL_90;
  }
  v17 = string[0];
  v18 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  ActivationFactory = RoGetActivationFactory(v17, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, &v53);
  v20 = retaddr;
  if ( ActivationFactory < 0 )
    goto LABEL_88;
  v21 = 0;
  pcbData[0] = 0;
  v49 = 4;
  v22 = RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
          L"IsTestAppConfiguredAsReplacement",
          0x10u,
          0LL,
          pcbData,
          &v49);
  if ( v22 != 2 )
  {
    if ( v22 )
    {
      v23 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x29,
              (__int64)"internal\\shellcommondesktopbase\\inc\\cortana\\cortanaundocking.h",
              (const char *)v22);
      goto LABEL_49;
    }
    v21 = pcbData[0] == 1;
  }
  v23 = 0;
LABEL_49:
  if ( v23 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"internal\\shellcommondesktopbase\\inc\\cortana\\cortanaundocking.h",
      (const char *)(unsigned int)v23);
  v24 = L"ms-cortana-2:";
  if ( !v21 )
    v24 = L"ms-cortana2:";
  v57 = 7LL;
  v56 = 0LL;
  LOWORD(Src[0]) = 0;
  if ( *v24 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
  }
  else
  {
    v25 = 0LL;
  }
  std::wstring::assign(Src, (char *)v24, v25);
  std::wstring::append((char *)Src, v58, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v52 = 0LL;
  v26 = v53;
  v27 = *(__int64 (__fastcall **)(void *, PVOID, _QWORD **))(*(_QWORD *)v53 + 48LL);
  v28 = Src;
  if ( v57 >= 8 )
    v28 = (void **)Src[0];
  *(_QWORD *)pcbData = v28;
  v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)pcbData);
  v30 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v30 + 16LL))(v30, *v30);
  }
  v31 = v27(v26, v29[1].Reserved.Reserved1, &v52);
  v32 = retaddr;
  if ( v31 < 0 )
    goto LABEL_89;
  *(_QWORD *)v48 = 0LL;
  string[0] = 0LL;
  v33 = WindowsCreateStringReference(L"Windows.System.Launcher", 0x17u, &hstringHeader, string);
  if ( v33 < 0 )
  {
LABEL_90:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v33);
LABEL_91:
    wil::details::in1diag3::Throw_Hr(
      v37,
      (void *)0x5A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v36);
    goto LABEL_92;
  }
  v34 = string[0];
  v35 = *(_QWORD *)v48;
  if ( *(_QWORD *)v48 )
  {
    *(_QWORD *)v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = RoGetActivationFactory(v34, &GUID_00000035_0000_0000_c000_000000000046, v48);
  v37 = retaddr;
  if ( v36 < 0 )
    goto LABEL_91;
  ppv = 0LL;
  v38 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, LPVOID *))v48)(
          *(_QWORD *)v48,
          &GUID_277151c3_9e3e_42f6_91a4_5dfdeb232451,
          &ppv);
  v39 = retaddr;
  if ( v38 < 0 )
  {
LABEL_92:
    wil::details::in1diag3::Throw_Hr(
      v39,
      (void *)0x5E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v38);
    goto LABEL_93;
  }
  v54[0] = 0LL;
  v40 = (*(__int64 (__fastcall **)(LPVOID, _QWORD *, _QWORD *))(*(_QWORD *)ppv + 64LL))(ppv, v52, v54);
  v41 = retaddr;
  if ( v40 < 0 )
  {
LABEL_93:
    wil::details::in1diag3::Throw_Hr(
      v41,
      (void *)0x62,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v40);
    JUMPOUT(0x1800969BFLL);
  }
  v42 = v54[0];
  if ( v54[0] )
  {
    v54[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  v43 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v43 + 16LL))(v43);
  }
  v44 = *(_QWORD *)v48;
  if ( *(_QWORD *)v48 )
  {
    *(_QWORD *)v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  v45 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v45 + 16LL))(v45);
  }
  if ( v57 >= 8 )
    operator delete(Src[0]);
  v57 = 7LL;
  v56 = 0LL;
  LOWORD(Src[0]) = 0;
  v15 = v53;
  if ( v53 )
  {
    v53 = 0LL;
LABEL_80:
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_81:
  if ( v59 >= 8 )
    operator delete(v58[0]);
}
