/*
 * XREFs of ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x18000F470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x18000A2A8 (-SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00@Z @ 0x18000A464 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00@Z.c)
 *     ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x18000A500 (-DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z.c)
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18000A5C0 (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x180010084 (-CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180012FD4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::RegisterPhoneNamespace(
        ContentManagement::PhoneShellNamespaceHelper *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  ContentManagement::PhoneShellNamespaceHelper *v4; // r15
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v7; // rax
  ContentManagement::PhoneShellNamespaceHelper *v8; // rcx
  int PhoneLink; // eax
  int v10; // ebx
  char v11; // r14
  PCWSTR v12; // rax
  int v13; // eax
  bool *v14; // r8
  WCHAR *v15; // r12
  __int64 v16; // rdx
  int DoesKeyExist; // eax
  const unsigned __int16 *v18; // rdx
  const unsigned __int16 *v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  WCHAR *v22; // rax
  const unsigned __int16 *v23; // r9
  int v24; // eax
  bool *v25; // r8
  __int64 v26; // rdx
  int v27; // eax
  const unsigned __int16 *v28; // rdx
  const unsigned __int16 *v29; // r9
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  int v32; // eax
  bool *v33; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v34; // rsi
  __int64 v35; // rdx
  int v36; // eax
  const unsigned __int16 *v37; // rdx
  const unsigned __int16 *v38; // r9
  __int64 v39; // rdx
  unsigned __int64 v40; // r9
  const unsigned __int16 *v41; // r9
  int v42; // eax
  bool *v43; // r8
  void *v44; // r13
  unsigned __int64 v45; // r9
  __int64 v46; // rdx
  int v47; // eax
  const unsigned __int16 *v48; // rdx
  const unsigned __int16 *v49; // r9
  __int64 v50; // rdx
  int v51; // eax
  bool *v52; // r8
  void *v53; // r15
  unsigned __int64 v54; // r9
  __int64 v55; // rdx
  int v56; // eax
  const unsigned __int16 *v57; // rdx
  const unsigned __int16 *v58; // r9
  __int64 v59; // rdx
  int v60; // eax
  int v61; // eax
  bool *v62; // r8
  void *v63; // r14
  unsigned __int64 v64; // r9
  __int64 v65; // rdx
  int v66; // eax
  const unsigned __int16 *v67; // rdx
  __int64 v68; // rdx
  int v69; // eax
  PCWSTR v70; // rax
  int v71; // eax
  bool *v72; // r8
  void *v73; // rsi
  unsigned __int64 v74; // r9
  __int64 v75; // rdx
  int v76; // eax
  const unsigned __int16 *v77; // rdx
  const unsigned __int16 *v78; // r9
  __int64 v79; // rdx
  int v80; // eax
  bool *v81; // r8
  int Key; // eax
  const unsigned __int16 *v83; // rdx
  __int64 v84; // rdx
  const WCHAR *v85; // rax
  int v86; // eax
  int v87; // r8d
  PCWSTR v88; // rax
  int v89; // eax
  void *v90; // rbx
  unsigned __int16 v92; // [rsp+20h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-58h] BYREF
  __int64 v94; // [rsp+30h] [rbp-50h]
  __int64 v95; // [rsp+38h] [rbp-48h]
  int v96; // [rsp+40h] [rbp-40h]
  LPCWSTR lpPathName; // [rsp+48h] [rbp-38h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v98[3]; // [rsp+50h] [rbp-30h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v99[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v4 = this;
  lpPathName = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  v7 = WindowsGetStringRawBuffer(a3, 0LL);
  PhoneLink = ContentManagement::PhoneShellNamespaceHelper::CreatePhoneLink(
                v8,
                v7,
                StringRawBuffer,
                (unsigned __int16 **)&lpPathName);
  v10 = PhoneLink;
  if ( PhoneLink < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)PhoneLink);
    goto LABEL_161;
  }
  v11 = 1;
  v96 = 1;
  pv = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v12 = WindowsGetStringRawBuffer(a2, 0LL);
  v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          &pv,
          L"%ws\\%ws",
          L"Software\\Classes\\CLSID",
          v12);
  v15 = (WCHAR *)pv;
  v10 = v13;
  if ( v13 < 0 )
  {
    v16 = 752LL;
LABEL_24:
    v21 = (unsigned int)v13;
    goto LABEL_25;
  }
  DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist((const WCHAR *)pv, &v92, v14);
  v10 = DoesKeyExist;
  if ( DoesKeyExist < 0 )
  {
    v20 = 854LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)DoesKeyExist);
    goto LABEL_12;
  }
  if ( !(_BYTE)v92 )
  {
    DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::CreateKey(v15, v18);
    v10 = DoesKeyExist;
    if ( DoesKeyExist < 0 )
    {
      v20 = 857LL;
      goto LABEL_7;
    }
  }
  v10 = 0;
LABEL_12:
  if ( v10 >= 0 )
  {
    v13 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(v15, &Src, L"Your Phone", v19);
    v10 = v13;
    if ( v13 < 0 )
    {
      v16 = 761LL;
      goto LABEL_24;
    }
    v13 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
            v15,
            L"System.IsPinnedToNameSpaceTree",
            (const unsigned __int16 *)1);
    v10 = v13;
    if ( v13 < 0 )
    {
      v16 = 762LL;
      goto LABEL_24;
    }
    v13 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
            v15,
            L"DescriptionID",
            (const unsigned __int16 *)3);
    v10 = v13;
    if ( v13 < 0 )
    {
      v16 = 763LL;
      goto LABEL_24;
    }
    v22 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
    v13 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(v15, L"LocalizedString", v22, v23);
    v10 = v13;
    if ( v13 < 0 )
    {
      v16 = 764LL;
      goto LABEL_24;
    }
    v13 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
            v15,
            L"SortOrderIndex",
            (const unsigned __int16 *)0x40);
    v10 = v13;
    if ( v13 < 0 )
    {
      v16 = 765LL;
      goto LABEL_24;
    }
    memset(v98, 0, sizeof(v98));
    v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            v98,
            L"%ws\\%ws",
            v15,
            L"DefaultIcon");
    v10 = v24;
    if ( v24 < 0 )
    {
      v26 = 770LL;
LABEL_39:
      v31 = (unsigned int)v24;
      goto LABEL_40;
    }
    v27 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist((const WCHAR *)v98[0], &v92, v25);
    v10 = v27;
    if ( v27 >= 0 )
    {
      if ( (_BYTE)v92
        || (v27 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v98[0], v28),
            v10 = v27,
            v27 >= 0) )
      {
        v10 = 0;
LABEL_35:
        if ( v10 < 0 )
        {
          v31 = (unsigned int)v10;
          v26 = 771LL;
LABEL_40:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v26,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)v31);
LABEL_155:
          if ( v98[0] )
            CoTaskMemFree(v98[0]);
          goto LABEL_157;
        }
        v24 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                (const WCHAR *)v98[0],
                &Src,
                L"%SystemRoot%\\system32\\ContentDeliveryManager.Utilities.dll,-10",
                v29);
        v10 = v24;
        if ( v24 < 0 )
        {
          v26 = 772LL;
          goto LABEL_39;
        }
        memset(v99, 0, sizeof(v99));
        v32 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
                v99,
                L"%ws\\%ws",
                v15,
                L"InProcServer32");
        v34 = v99[0];
        v10 = v32;
        if ( v32 < 0 )
        {
          v35 = 778LL;
LABEL_56:
          v40 = (unsigned int)v32;
          goto LABEL_57;
        }
        v36 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist((const WCHAR *)v99[0], &v92, v33);
        v10 = v36;
        if ( v36 >= 0 )
        {
          if ( (_BYTE)v92
            || (v36 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v34, v37),
                v10 = v36,
                v36 >= 0) )
          {
            v10 = 0;
LABEL_50:
            if ( v10 < 0 )
            {
              v40 = (unsigned int)v10;
              v35 = 779LL;
LABEL_57:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v35,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                (const char *)v40);
LABEL_153:
              if ( v34 )
                CoTaskMemFree(v34);
              goto LABEL_155;
            }
            v32 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                    (const WCHAR *)v34,
                    &Src,
                    L"%SystemRoot%\\system32\\shell32.dll",
                    v38);
            v10 = v32;
            if ( v32 < 0 )
            {
              v35 = 780LL;
              goto LABEL_56;
            }
            v32 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                    (const WCHAR *)v34,
                    L"ThreadingModel",
                    L"Both",
                    v41);
            v10 = v32;
            if ( v32 < 0 )
            {
              v35 = 781LL;
              goto LABEL_56;
            }
            pv = 0LL;
            v94 = 0LL;
            v95 = 0LL;
            v42 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
                    &pv,
                    L"%ws\\%ws",
                    v15,
                    L"Instance");
            v44 = pv;
            v10 = v42;
            if ( v42 < 0 )
            {
              v45 = (unsigned int)v42;
              v46 = 786LL;
LABEL_72:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v46,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                (const char *)v45);
LABEL_151:
              if ( v44 )
                CoTaskMemFree(v44);
              goto LABEL_153;
            }
            v47 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist((const WCHAR *)pv, &v92, v43);
            v10 = v47;
            if ( v47 >= 0 )
            {
              if ( (_BYTE)v92
                || (v47 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v44, v48),
                    v10 = v47,
                    v47 >= 0) )
              {
                v10 = 0;
LABEL_67:
                if ( v10 < 0 )
                {
                  v46 = 787LL;
LABEL_71:
                  v45 = (unsigned int)v10;
                  goto LABEL_72;
                }
                v10 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                        (const WCHAR *)v44,
                        L"CLSID",
                        L"{0E5AAE11-A475-4c5b-AB00-C66DE400274E}",
                        v49);
                if ( v10 < 0 )
                {
                  v46 = 788LL;
                  goto LABEL_71;
                }
                pv = 0LL;
                v94 = 0LL;
                v95 = 0LL;
                v51 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
                        &pv,
                        L"%ws\\%ws",
                        v44,
                        L"InitPropertyBag");
                v53 = pv;
                v10 = v51;
                if ( v51 < 0 )
                {
                  v54 = (unsigned int)v51;
                  v55 = 794LL;
LABEL_89:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v55,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                    (const char *)v54);
LABEL_148:
                  if ( v53 )
                    CoTaskMemFree(v53);
                  v4 = this;
                  goto LABEL_151;
                }
                v56 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist((const WCHAR *)pv, &v92, v52);
                v10 = v56;
                if ( v56 >= 0 )
                {
                  if ( (_BYTE)v92
                    || (v56 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v53, v57),
                        v10 = v56,
                        v56 >= 0) )
                  {
                    v10 = 0;
LABEL_82:
                    if ( v10 < 0 )
                    {
                      v55 = 795LL;
LABEL_88:
                      v54 = (unsigned int)v10;
                      goto LABEL_89;
                    }
                    v60 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                            (const WCHAR *)v53,
                            L"TargetFolderPath",
                            lpPathName,
                            v58);
                    v10 = v60;
                    if ( v60 < 0 )
                    {
                      v54 = (unsigned int)v60;
                      v55 = 796LL;
                      goto LABEL_89;
                    }
                    v10 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
                            (const WCHAR *)v53,
                            L"Attributes",
                            (const unsigned __int16 *)0x11);
                    if ( v10 < 0 )
                    {
                      v55 = 797LL;
                      goto LABEL_88;
                    }
                    pv = 0LL;
                    v94 = 0LL;
                    v95 = 0LL;
                    v61 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
                            &pv,
                            L"%ws\\%ws",
                            v15,
                            L"ShellFolder");
                    v63 = pv;
                    v10 = v61;
                    if ( v61 < 0 )
                    {
                      v64 = (unsigned int)v61;
                      v65 = 803LL;
LABEL_106:
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)v65,
                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                        (const char *)v64);
LABEL_145:
                      if ( v63 )
                        CoTaskMemFree(v63);
                      v11 = v96;
                      goto LABEL_148;
                    }
                    v66 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist((const WCHAR *)pv, &v92, v62);
                    v10 = v66;
                    if ( v66 >= 0 )
                    {
                      if ( (_BYTE)v92
                        || (v66 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v63, v67),
                            v10 = v66,
                            v66 >= 0) )
                      {
                        v10 = 0;
LABEL_99:
                        if ( v10 < 0 )
                        {
                          v65 = 804LL;
LABEL_105:
                          v64 = (unsigned int)v10;
                          goto LABEL_106;
                        }
                        v69 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
                                (const WCHAR *)v63,
                                L"Attributes",
                                (const unsigned __int16 *)0x30040005);
                        v10 = v69;
                        if ( v69 < 0 )
                        {
                          v64 = (unsigned int)v69;
                          v65 = 805LL;
                          goto LABEL_106;
                        }
                        v10 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
                                (const WCHAR *)v63,
                                L"FolderValueFlags",
                                (const unsigned __int16 *)0x428);
                        if ( v10 < 0 )
                        {
                          v65 = 806LL;
                          goto LABEL_105;
                        }
                        pv = 0LL;
                        v94 = 0LL;
                        v95 = 0LL;
                        v70 = WindowsGetStringRawBuffer(a2, 0LL);
                        v71 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
                                &pv,
                                L"%ws\\%ws",
                                L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Desktop\\NameSpace",
                                v70);
                        v73 = pv;
                        v10 = v71;
                        if ( v71 < 0 )
                        {
                          v74 = (unsigned int)v71;
                          v75 = 810LL;
LABEL_140:
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)v75,
                            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                            (const char *)v74);
LABEL_142:
                          if ( v73 )
                            CoTaskMemFree(v73);
                          v34 = v99[0];
                          goto LABEL_145;
                        }
                        v76 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(
                                (const WCHAR *)pv,
                                &v92,
                                v72);
                        v10 = v76;
                        if ( v76 >= 0 )
                        {
                          if ( (_BYTE)v92
                            || (v76 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey(
                                        (const WCHAR *)v73,
                                        v77),
                                v10 = v76,
                                v76 >= 0) )
                          {
                            v10 = 0;
LABEL_116:
                            if ( v10 < 0 )
                            {
                              v75 = 811LL;
                              goto LABEL_139;
                            }
                            v80 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                                    (const WCHAR *)v73,
                                    &Src,
                                    L"Your Phone",
                                    v78);
                            v10 = v80;
                            if ( v80 < 0 )
                            {
                              v74 = (unsigned int)v80;
                              v75 = 812LL;
                              goto LABEL_140;
                            }
                            Key = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(
                                    L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
                                    &v92,
                                    v81);
                            v10 = Key;
                            if ( Key >= 0 )
                            {
                              if ( (_BYTE)v92
                                || (Key = CreativeFramework::ContentDeliveryManagerSettings::CreateKey(
                                            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
                                            v83),
                                    v10 = Key,
                                    Key >= 0) )
                              {
                                v10 = 0;
LABEL_127:
                                if ( v10 >= 0 )
                                {
                                  v85 = WindowsGetStringRawBuffer(a2, 0LL);
                                  v86 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
                                          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
                                          v85,
                                          (const unsigned __int16 *)1);
                                  v10 = v86;
                                  if ( v86 < 0 )
                                  {
                                    v74 = (unsigned int)v86;
                                    v75 = 816LL;
                                    goto LABEL_140;
                                  }
                                  LOBYTE(v87) = 0;
                                  v96 = v87;
                                  v88 = WindowsGetStringRawBuffer(a2, 0LL);
                                  pv = 0LL;
                                  v94 = 0LL;
                                  v95 = 0LL;
                                  v89 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
                                          &pv,
                                          L"::%ws",
                                          v88);
                                  v10 = v89;
                                  if ( v89 >= 0 )
                                  {
                                    v90 = pv;
                                    SHChangeNotify(8, 5u, pv, 0LL);
                                    if ( v90 )
                                      CoTaskMemFree(v90);
                                    v10 = 0;
                                  }
                                  else
                                  {
                                    wil::details::in1diag3::Return_Hr(
                                      retaddr,
                                      (void *)0x362,
                                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                                      (const char *)(unsigned int)v89);
                                    if ( pv )
                                      CoTaskMemFree(pv);
                                  }
                                  if ( v10 >= 0 )
                                  {
                                    v10 = 0;
                                    goto LABEL_142;
                                  }
                                  v75 = 822LL;
                                }
                                else
                                {
                                  v75 = 815LL;
                                }
LABEL_139:
                                v74 = (unsigned int)v10;
                                goto LABEL_140;
                              }
                              v84 = 857LL;
                            }
                            else
                            {
                              v84 = 854LL;
                            }
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)v84,
                              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                              (const char *)(unsigned int)Key);
                            goto LABEL_127;
                          }
                          v79 = 857LL;
                        }
                        else
                        {
                          v79 = 854LL;
                        }
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)v79,
                          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                          (const char *)(unsigned int)v76);
                        goto LABEL_116;
                      }
                      v68 = 857LL;
                    }
                    else
                    {
                      v68 = 854LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v68,
                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                      (const char *)(unsigned int)v66);
                    goto LABEL_99;
                  }
                  v59 = 857LL;
                }
                else
                {
                  v59 = 854LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v59,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                  (const char *)(unsigned int)v56);
                goto LABEL_82;
              }
              v50 = 857LL;
            }
            else
            {
              v50 = 854LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v50,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)v47);
            goto LABEL_67;
          }
          v39 = 857LL;
        }
        else
        {
          v39 = 854LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v39,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v36);
        goto LABEL_50;
      }
      v30 = 857LL;
    }
    else
    {
      v30 = 854LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v27);
    goto LABEL_35;
  }
  v21 = (unsigned int)v10;
  v16 = 753LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)v21);
LABEL_157:
  if ( v15 )
    CoTaskMemFree(v15);
  if ( v11 )
  {
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)v4 + 56LL))(v4, a2);
  }
LABEL_161:
  if ( lpPathName )
    CoTaskMemFree((LPVOID)lpPathName);
  return (unsigned int)v10;
}
