/*
 * XREFs of ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x18001CF34
 * Callers:
 *     _lambda_c13819b0d879b62a077923732e057450_::operator() @ 0x180067C78 (_lambda_c13819b0d879b62a077923732e057450_--operator().c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18000FA70 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001D500 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004D6E0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800549F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??$?0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z @ 0x180135D40 (--$-0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z.c)
 *     ??$?0$0O@@StringReference@Internal@Windows@@QEAA@AEAY0O@$$CBG@Z @ 0x180135DD8 (--$-0$0O@@StringReference@Internal@Windows@@QEAA@AEAY0O@$$CBG@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180135F74 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIInsp.c)
 *     ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18013AB04 (-PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV-$function@$$A6AJXZ@wistd@@PE.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall AtmosCheck::PerformLicenseCheckInternalLegacy(AtmosCheck *this, bool *a2)
{
  bool *v2; // r14
  HRESULT ActivationFactory; // r15d
  _OWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  int v11; // eax
  char v12; // r12
  const WCHAR *v13; // r8
  int v14; // edx
  HSTRING v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  DWORD v19; // r14d
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rdx
  _DWORD *v23; // r8
  _QWORD *v24; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rbx
  AtmosCheck *v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rbx
  const unsigned __int16 (*v37)[14]; // rdx
  _QWORD *v38; // rax
  __int64 v39; // rbx
  int (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD *v41; // rax
  unsigned int v42; // r12d
  __int64 v43; // rbx
  __int64 v44; // r14
  _QWORD *v45; // rax
  UINT32 StringLen; // r14d
  const WCHAR *StringRawBuffer; // rax
  UINT32 v48; // r14d
  const WCHAR *v49; // rax
  UINT32 v50; // r14d
  const WCHAR *v51; // rax
  __int64 v52; // rbx
  _QWORD *v53; // rax
  UINT32 v54; // ebx
  const WCHAR *v55; // rax
  UINT32 v56; // ebx
  const WCHAR *v57; // rax
  UINT32 v58; // ebx
  const WCHAR *v59; // rax
  int *v60; // rax
  int (__fastcall ***v61)(_QWORD, GUID *, __int64 *); // rcx
  int (__fastcall ***v62)(_QWORD, GUID *, __int64 *); // rcx
  HSTRING v63; // rcx
  int (__fastcall ***v64)(_QWORD, GUID *, __int64 *); // rcx
  int (__fastcall ***v65)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v66; // eax
  __int64 v67; // rdx
  int pdwType; // [rsp+28h] [rbp-E0h]
  int pdwTypea; // [rsp+28h] [rbp-E0h]
  int (__fastcall ***v70)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-C0h] BYREF
  __int64 v71; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v72; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v73; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v74; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+70h] [rbp-98h] BYREF
  char v76; // [rsp+78h] [rbp-90h]
  unsigned int v77; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v78; // [rsp+80h] [rbp-88h] BYREF
  __int64 v79; // [rsp+88h] [rbp-80h] BYREF
  __int64 (__fastcall ***v80)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-78h] BYREF
  __int64 v81; // [rsp+98h] [rbp-70h] BYREF
  __int64 (__fastcall ***v82)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp-68h] BYREF
  HSTRING v83; // [rsp+A8h] [rbp-60h] BYREF
  HSTRING v84; // [rsp+B0h] [rbp-58h] BYREF
  HSTRING v85; // [rsp+B8h] [rbp-50h] BYREF
  DWORD pcbData; // [rsp+C0h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp-40h] BYREF
  int pvData; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v89; // [rsp+D8h] [rbp-30h] BYREF
  int v90; // [rsp+E0h] [rbp-28h] BYREF
  DWORD v91; // [rsp+E4h] [rbp-24h] BYREF
  __int64 v92; // [rsp+E8h] [rbp-20h] BYREF
  HSTRING v93; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v94; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v95; // [rsp+100h] [rbp-8h] BYREF
  int v96; // [rsp+108h] [rbp+0h] BYREF
  bool *v97; // [rsp+110h] [rbp+8h]
  int v98; // [rsp+118h] [rbp+10h]
  __int64 v99; // [rsp+120h] [rbp+18h] BYREF
  _DWORD v100[2]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v101; // [rsp+130h] [rbp+28h]
  __int64 v102; // [rsp+138h] [rbp+30h]
  _QWORD v103[14]; // [rsp+140h] [rbp+38h] BYREF
  _QWORD v104[14]; // [rsp+1B0h] [rbp+A8h] BYREF
  _QWORD v105[14]; // [rsp+220h] [rbp+118h] BYREF
  _QWORD v106[14]; // [rsp+290h] [rbp+188h] BYREF
  _QWORD v107[14]; // [rsp+300h] [rbp+1F8h] BYREF
  _QWORD v108[14]; // [rsp+370h] [rbp+268h] BYREF
  HSTRING_HEADER v109; // [rsp+3E0h] [rbp+2D8h] BYREF
  _QWORD v110[4]; // [rsp+3F8h] [rbp+2F0h] BYREF
  void *v111[3]; // [rsp+418h] [rbp+310h] BYREF
  unsigned __int64 v112; // [rsp+430h] [rbp+328h]
  HSTRING string; // [rsp+438h] [rbp+330h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+440h] [rbp+338h] BYREF
  HSTRING v115; // [rsp+458h] [rbp+350h] BYREF
  HSTRING v116; // [rsp+478h] [rbp+370h] BYREF
  HSTRING v117; // [rsp+498h] [rbp+390h] BYREF
  HSTRING v118; // [rsp+4B8h] [rbp+3B0h] BYREF
  void *v119; // [rsp+4D8h] [rbp+3D0h] BYREF
  int v120; // [rsp+4E0h] [rbp+3D8h]
  int v121; // [rsp+4E4h] [rbp+3DCh]
  void *v122; // [rsp+4E8h] [rbp+3E0h]
  int v123; // [rsp+4F0h] [rbp+3E8h]
  int v124; // [rsp+4F4h] [rbp+3ECh]
  const char *v125; // [rsp+4F8h] [rbp+3F0h]
  __int64 v126; // [rsp+500h] [rbp+3F8h]
  _DWORD v127[6]; // [rsp+508h] [rbp+400h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+560h] [rbp+458h]

  v102 = -2LL;
  v2 = a2;
  v97 = a2;
  v93 = 0LL;
  memset(&v109, 0, sizeof(v109));
  v92 = 0LL;
  v89 = 0LL;
  pv = 0LL;
  v84 = 0LL;
  v77 = 0;
  *a2 = 0;
  ActivationFactory = 0;
  v5 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  v110[2] = 24LL;
  v110[3] = 31LL;
  *v5 = *(_OWORD *)L"LegacyDefaultEndpointKey";
  v5[1] = *(_OWORD *)L"faultEndpointKey";
  v5[2] = *(_OWORD *)L"pointKey";
  *((_WORD *)v5 + 24) = 0;
  v110[0] = v5;
  v6 = (_QWORD *)((char *)this + 400);
  std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
    (_QWORD *)this + 50,
    &v94,
    (char *)v110);
  operator delete(v5, (const struct std::nothrow_t *)0x40);
  v7 = v94;
  if ( v94 == *((_QWORD *)this + 51) )
  {
    ActivationFactory = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AC,
      (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8000FFFFLL,
      pdwType);
    goto LABEL_35;
  }
  v8 = 0;
  v9 = 0LL;
  v10 = (_DWORD *)(*(_QWORD *)(v94 + 48) + 4LL);
  do
  {
    v127[v9++] = *v10;
    v10 += 2;
  }
  while ( v9 < 6 );
  v11 = *((_DWORD *)this + 40);
  if ( v11 == 5 || (unsigned int)(v11 - 11) <= 1 )
  {
    v12 = 1;
    v76 = 1;
  }
  else
  {
    v12 = 0;
    v76 = 0;
  }
  pcbData = 4;
  pvData = 0;
  v13 = L"AudioSrvLicenseResult";
  if ( !*((_BYTE *)this + 75) )
    v13 = L"AudioDGLicenseResult";
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
    v13,
    0x10u,
    0LL,
    &pvData,
    &pcbData);
  v14 = pvData;
  if ( pvData < 0 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      *(_DWORD *)(*(_QWORD *)(v7 + 48) + v26 + 4) = v14;
      v26 += 8LL;
      if ( v26 >= 32 )
        break;
      v14 = pvData;
    }
LABEL_26:
    v22 = 0LL;
    v23 = v127;
    do
    {
      if ( *v23 != *(_DWORD *)(*(_QWORD *)(v7 + 48) + v22 + 4) )
        *v2 = 1;
      v22 += 8LL;
      ++v23;
    }
    while ( v22 < 48 );
LABEL_30:
    if ( v93 )
    {
      WindowsDeleteString(v93);
      v93 = 0LL;
    }
    if ( v84 )
    {
      WindowsDeleteString(v84);
      v84 = 0LL;
    }
    v24 = pv;
    if ( pv )
    {
      v66 = v77;
      if ( v77 )
      {
        do
        {
          v67 = v24[v8];
          if ( v67 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v67 + 16LL))(v24[v8]);
            *((_QWORD *)pv + v8) = 0LL;
            v24 = pv;
            v66 = v77;
          }
          ++v8;
        }
        while ( v8 < v66 );
      }
      CoTaskMemFree(v24);
    }
    goto LABEL_35;
  }
  if ( WindowsCreateStringReference(
         L"Windows.Internal.StateRepository.ApplicationExtension",
         0x35u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v15 = string;
  v16 = v92;
  if ( v92 )
  {
    v92 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  ActivationFactory = RoGetActivationFactory(v15, &GUID_78662bbb_1464_4279_b5ff_ffccb2bc6529, &v92);
  v8 = 0;
  if ( ActivationFactory < 0 )
    goto LABEL_30;
  ActivationFactory = WindowsCreateStringReference(L"windows.mediaPlayback", 0x15u, &v109, &v93);
  if ( ActivationFactory < 0 )
    goto LABEL_30;
  v17 = v92;
  v18 = v89;
  if ( v89 )
  {
    v89 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v17 + 144LL))(v17, v93, &v89);
  v8 = 0;
  if ( ActivationFactory < 0 )
    goto LABEL_30;
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v89 + 56LL))(v89, &v91);
  if ( ActivationFactory < 0 )
    goto LABEL_30;
  v98 = 0;
  if ( (unsigned int)dword_1801B1580 > 5 )
  {
    v125 = "Retrieved media app list";
    v126 = 25LL;
    v100[0] = ((unsigned int)&unk_18017814E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v100[1] = 5;
    v101 = 0LL;
    v119 = off_1801B1588;
    v120 = *(unsigned __int16 *)off_1801B1588;
    v121 = 2;
    v122 = &unk_180178159;
    v123 = 23;
    v124 = 1;
    EtwEventWriteTransfer(qword_1801B15A0, v100, 0LL, 0LL, 3, &v119);
  }
  v19 = 0;
  pcbData = 0;
  if ( !v91 )
  {
LABEL_23:
    v20 = *(_QWORD *)(v7 + 48);
    v21 = *(_DWORD *)(v20 + 12);
    v2 = v97;
    if ( v21 < 0 && *(int *)(v20 + 20) >= 0 )
      *(_DWORD *)(v20 + 20) = v21;
    goto LABEL_26;
  }
  while ( 1 )
  {
    v73 = 0LL;
    v75 = 0LL;
    v74 = 0LL;
    v70 = 0LL;
    v72 = 0LL;
    v71 = 0LL;
    v90 = 0;
    v27 = pv;
    if ( pv )
    {
      v28 = v77;
      if ( v77 )
      {
        do
        {
          v29 = v27[v8];
          if ( v29 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 16LL))(v27[v8]);
            *((_QWORD *)pv + v8) = 0LL;
            v27 = pv;
            v28 = v77;
          }
          ++v8;
        }
        while ( v8 < v28 );
        v6 = (_QWORD *)((char *)this + 400);
      }
      CoTaskMemFree(v27);
      pv = 0LL;
    }
    v77 = 0;
    v30 = v89;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, v19, &v73);
    v8 = 0;
    if ( ActivationFactory < 0 )
      goto LABEL_119;
    v31 = v73;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 96LL))(v31, &v75);
    v8 = 0;
    if ( ActivationFactory < 0 )
      goto LABEL_119;
    v32 = v75;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 96LL))(v32, &v74);
    v8 = 0;
    if ( ActivationFactory < 0 )
      goto LABEL_119;
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v74 + 208LL))(v74, &v84);
    if ( ActivationFactory < 0 )
      goto LABEL_119;
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v74 + 624LL))(v74, &v90);
    if ( ActivationFactory < 0 )
      goto LABEL_119;
    std::wstring::wstring(v111, L"LegacyDefaultEndpointKey");
    std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
      v6,
      &v99,
      (char *)v111);
    if ( v112 >= 8 )
      std::_Deallocate<16,0>(v111[0], (const struct std::nothrow_t *)(2 * v112 + 2));
    v34 = v99;
    if ( v99 == *((_QWORD *)this + 51) )
      break;
    if ( v90 == 3 || v12 )
    {
      v82 = 0LL;
      v81 = 0LL;
      v80 = 0LL;
      v79 = 0LL;
      v78 = 0LL;
      AtmosCheck::Trace(v33, "Checking capabilities", 0);
      v35 = v73;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v82);
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v35 + 504LL))(
                            v35,
                            &v82);
      v8 = 0;
      if ( ActivationFactory < 0 )
        goto LABEL_117;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v81);
      ActivationFactory = (**v82)(v82, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v81);
      if ( ActivationFactory < 0 )
        goto LABEL_117;
      v36 = v81;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v80);
      v38 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v115, v37);
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v36 + 48LL))(v36, *v38, &v80);
      v8 = 0;
      if ( ActivationFactory < 0 )
        goto LABEL_117;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
      ActivationFactory = (**v80)(v80, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v79);
      if ( ActivationFactory < 0 )
        goto LABEL_117;
      v39 = v79;
      v40 = v70;
      if ( v70 )
      {
        v70 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v40)[2])(v40);
      }
      v41 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v116, L"Codec");
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v39 + 48LL))(v39, *v41, &v70);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v78);
      v8 = 0;
      if ( ActivationFactory < 0 )
      {
LABEL_118:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v80);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v81);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v82);
LABEL_119:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
        v64 = v70;
        if ( v70 )
        {
          v70 = 0LL;
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v64)[2])(v64);
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
        goto LABEL_30;
      }
      if ( (**v70)(v70, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v78) >= 0 )
      {
        ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v78 + 48LL))(v78, &v96);
        if ( ActivationFactory < 0 )
          goto LABEL_117;
        if ( v96 == 1037 )
        {
          ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *, LPVOID *))(*(_QWORD *)v78 + 304LL))(
                                v78,
                                &v77,
                                &pv);
          if ( ActivationFactory < 0 )
            goto LABEL_117;
          v42 = 0;
          if ( v77 )
          {
            while ( 1 )
            {
              v85 = 0LL;
              v43 = *((_QWORD *)pv + v42);
              v95 = v43;
              if ( v43 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
              ActivationFactory = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
                                    &v95,
                                    &v72);
              if ( ActivationFactory < 0
                || (v44 = v72,
                    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71),
                    v45 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v117, L"@Name"),
                    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v44 + 48LL))(
                                          v44,
                                          *v45,
                                          &v71),
                    ActivationFactory < 0)
                || (ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v71 + 152LL))(
                                          v71,
                                          &v85),
                    ActivationFactory < 0) )
              {
                if ( v43 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
                v63 = v85;
                v8 = 0;
LABEL_115:
                if ( v63 )
                  WindowsDeleteString(v63);
LABEL_117:
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v78);
                goto LABEL_118;
              }
              StringLen = WindowsGetStringLen(v85);
              StringRawBuffer = WindowsGetStringRawBuffer(v85, 0LL);
              if ( CompareStringOrdinal(StringRawBuffer, StringLen, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2 )
                break;
              v48 = WindowsGetStringLen(v85);
              v49 = WindowsGetStringRawBuffer(v85, 0LL);
              if ( CompareStringOrdinal(v49, v48, L"atmosMatEncoder", -1, 1) == 2 )
              {
                v105[0] = off_18014E7D8;
                v105[1] = this;
                v105[13] = v105;
                AtmosCheck::PerformLicenseCheckHelperLegacy(this, v84, *(_QWORD *)(v34 + 48));
                *((_BYTE *)this + 240) = 1;
                *((_BYTE *)this + 208) = 1;
                *((_BYTE *)this + 272) = 1;
                *((_BYTE *)this + 304) = 1;
              }
              else
              {
                v50 = WindowsGetStringLen(v85);
                v51 = WindowsGetStringRawBuffer(v85, 0LL);
                if ( CompareStringOrdinal(v51, v50, L"atmosHeadphonesEncoder", -1, 1) == 2 )
                {
                  v106[0] = off_18014E6B0;
                  v106[1] = this;
                  v106[13] = v106;
                  goto LABEL_81;
                }
              }
LABEL_82:
              if ( v43 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
              v8 = 0;
              if ( v85 )
                WindowsDeleteString(v85);
              if ( ++v42 >= v77 )
              {
                v19 = pcbData;
                goto LABEL_100;
              }
            }
            v104[0] = off_18014E808;
            v104[1] = this;
            v104[13] = v104;
LABEL_81:
            AtmosCheck::PerformLicenseCheckHelperLegacy(this, v84, *(_QWORD *)(v34 + 48));
            goto LABEL_82;
          }
        }
        goto LABEL_100;
      }
      v83 = 0LL;
      ActivationFactory = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
                            &v70,
                            &v72);
      if ( ActivationFactory < 0
        || (v52 = v72,
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71),
            v53 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v118, L"@Name"),
            ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v52 + 48LL))(
                                  v52,
                                  *v53,
                                  &v71),
            v8 = 0,
            ActivationFactory < 0)
        || (ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v71 + 152LL))(v71, &v83),
            ActivationFactory < 0) )
      {
        v63 = v83;
        goto LABEL_115;
      }
      v54 = WindowsGetStringLen(v83);
      v55 = WindowsGetStringRawBuffer(v83, 0LL);
      if ( CompareStringOrdinal(v55, v54, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2 )
      {
        v107[0] = off_18014E808;
        v107[1] = this;
        v107[13] = v107;
        goto LABEL_97;
      }
      v56 = WindowsGetStringLen(v83);
      v57 = WindowsGetStringRawBuffer(v83, 0LL);
      if ( CompareStringOrdinal(v57, v56, L"atmosMatEncoder", -1, 1) == 2 )
      {
        v108[0] = off_18014E7D8;
        v108[1] = this;
        v108[13] = v108;
        AtmosCheck::PerformLicenseCheckHelperLegacy(this, v84, *(_QWORD *)(v34 + 48));
        *((_BYTE *)this + 240) = 1;
        *((_BYTE *)this + 208) = 1;
        *((_BYTE *)this + 272) = 1;
        *((_BYTE *)this + 304) = 1;
      }
      else
      {
        v58 = WindowsGetStringLen(v83);
        v59 = WindowsGetStringRawBuffer(v83, 0LL);
        if ( CompareStringOrdinal(v59, v58, L"atmosHeadphonesEncoder", -1, 1) == 2 )
        {
          v103[0] = off_18014E6B0;
          v103[1] = this;
          v103[13] = v103;
LABEL_97:
          AtmosCheck::PerformLicenseCheckHelperLegacy(this, v84, *(_QWORD *)(v34 + 48));
        }
      }
      v8 = 0;
      if ( v83 )
        WindowsDeleteString(v83);
LABEL_100:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v78);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v80);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v81);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v82);
      v12 = v76;
    }
    WindowsDeleteString(v84);
    v84 = 0LL;
    v60 = *(int **)(v34 + 48);
    if ( v60[1] >= 0 && v60[3] >= 0 && v60[5] >= 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
      v61 = v70;
      if ( v70 )
      {
        v70 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v61)[2])(v61);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
      goto LABEL_23;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
    v62 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v62)[2])(v62);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
    pcbData = ++v19;
    if ( v19 >= v91 )
      goto LABEL_23;
    v6 = (_QWORD *)((char *)this + 400);
  }
  ActivationFactory = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x401,
    (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
    (const char *)0x8000FFFFLL,
    pdwTypea);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
  v65 = v70;
  if ( v70 )
  {
    v70 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v65)[2])(v65);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
LABEL_35:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v89);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v92);
  return (unsigned int)ActivationFactory;
}
