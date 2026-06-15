/*
 * XREFs of ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180035F38
 * Callers:
 *     _lambda_fb23503d9b3566a26ea1a9c0ca33164d_::operator() @ 0x18006B744 (_lambda_fb23503d9b3566a26ea1a9c0ca33164d_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003890 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180036858 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800368A4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?MarkAsEvaluated@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180036A80 (-MarkAsEvaluated@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18003F0A0 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180059428 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800CA1A0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$?0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z @ 0x18013CBC8 (--$-0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z.c)
 *     ??$?0$0O@@StringReference@Internal@Windows@@QEAA@AEAY0O@$$CBG@Z @ 0x18013CC60 (--$-0$0O@@StringReference@Internal@Windows@@QEAA@AEAY0O@$$CBG@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18013CCAC (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIInsp.c)
 *     ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18013F4C4 (-PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV-$function@$$A6AJXZ@wistd@@PE.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall AtmosCheck::PerformLicenseCheckInternalLegacy(AtmosCheck *this, bool *a2)
{
  bool *v2; // rbx
  DWORD v4; // esi
  HRESULT ActivationFactory; // r14d
  char *v6; // r12
  const struct std::nothrow_t *v7; // rdx
  void *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  int v12; // eax
  char v13; // r15
  const WCHAR *v14; // r8
  int v15; // edx
  HSTRING v16; // rbx
  __int64 v17; // rbx
  unsigned int v18; // ebx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rdx
  _DWORD *v22; // r8
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v23; // rcx
  _QWORD *v24; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rbx
  AtmosCheck *v33; // rcx
  struct std::nothrow_t *v34; // rdx
  void *v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rsi
  __int64 v38; // rsi
  const unsigned __int16 (*v39)[14]; // rdx
  _QWORD *v40; // rax
  __int64 v41; // rsi
  int (__fastcall ***v42)(_QWORD, GUID *, _QWORD *); // rcx
  _QWORD *v43; // rax
  unsigned int v44; // r12d
  __int64 v45; // r15
  __int64 v46; // rsi
  _QWORD *v47; // rax
  UINT32 v48; // esi
  const WCHAR *v49; // rax
  char *v50; // r9
  __int64 v51; // r8
  UINT32 v52; // esi
  const WCHAR *v53; // rax
  UINT32 v54; // esi
  const WCHAR *v55; // rax
  int *v56; // rax
  int (__fastcall ***v57)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v58; // rsi
  _QWORD *v59; // rax
  UINT32 StringLen; // esi
  const WCHAR *StringRawBuffer; // rax
  char *v62; // r9
  __int64 v63; // r8
  UINT32 v64; // esi
  const WCHAR *v65; // rax
  UINT32 v66; // esi
  const WCHAR *v67; // rax
  int (__fastcall ***v68)(_QWORD, GUID *, _QWORD *); // rcx
  HSTRING v69; // rcx
  int (__fastcall ***v70)(_QWORD, GUID *, _QWORD *); // rcx
  int (__fastcall ***v71)(_QWORD, GUID *, _QWORD *); // rcx
  unsigned int v72; // ebx
  unsigned int i; // eax
  __int64 v74; // rdx
  int (__fastcall ***v75)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-C0h] BYREF
  __int64 v76; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v77; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v78; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v80; // [rsp+70h] [rbp-98h] BYREF
  __int64 v81; // [rsp+78h] [rbp-90h]
  __int64 v82; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v83; // [rsp+88h] [rbp-80h] BYREF
  __int64 v84; // [rsp+90h] [rbp-78h] BYREF
  __int64 (__fastcall ***v85)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp-70h] BYREF
  __int64 v86; // [rsp+A0h] [rbp-68h] BYREF
  __int64 (__fastcall ***v87)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp-60h] BYREF
  DWORD pcbData; // [rsp+B0h] [rbp-58h] BYREF
  HSTRING v89; // [rsp+B8h] [rbp-50h] BYREF
  HSTRING v90; // [rsp+C0h] [rbp-48h] BYREF
  HSTRING v91; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID pv; // [rsp+D0h] [rbp-38h] BYREF
  int pvData; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v94; // [rsp+DCh] [rbp-2Ch] BYREF
  __int64 v95; // [rsp+E0h] [rbp-28h]
  DWORD v96; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v97; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v98; // [rsp+F8h] [rbp-10h] BYREF
  HSTRING v99; // [rsp+100h] [rbp-8h] BYREF
  int v100; // [rsp+108h] [rbp+0h] BYREF
  bool *v101; // [rsp+110h] [rbp+8h]
  unsigned __int64 v102; // [rsp+118h] [rbp+10h] BYREF
  void *v103; // [rsp+120h] [rbp+18h] BYREF
  struct std::nothrow_t *v104; // [rsp+128h] [rbp+20h] BYREF
  void *v105; // [rsp+130h] [rbp+28h] BYREF
  __int64 v106; // [rsp+138h] [rbp+30h] BYREF
  __int64 v107; // [rsp+140h] [rbp+38h] BYREF
  __int64 v108; // [rsp+148h] [rbp+40h] BYREF
  int v109; // [rsp+150h] [rbp+48h]
  _DWORD v110[2]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v111; // [rsp+160h] [rbp+58h]
  __int64 v112; // [rsp+168h] [rbp+60h]
  char v113; // [rsp+170h] [rbp+68h] BYREF
  _QWORD v114[14]; // [rsp+178h] [rbp+70h] BYREF
  char v115; // [rsp+1E8h] [rbp+E0h] BYREF
  _QWORD v116[14]; // [rsp+1F0h] [rbp+E8h] BYREF
  _BYTE v117[8]; // [rsp+260h] [rbp+158h] BYREF
  _QWORD v118[14]; // [rsp+268h] [rbp+160h] BYREF
  char v119; // [rsp+2D8h] [rbp+1D0h] BYREF
  _QWORD v120[14]; // [rsp+2E0h] [rbp+1D8h] BYREF
  char v121; // [rsp+350h] [rbp+248h] BYREF
  _QWORD v122[14]; // [rsp+358h] [rbp+250h] BYREF
  _BYTE v123[8]; // [rsp+3C8h] [rbp+2C0h] BYREF
  _QWORD v124[14]; // [rsp+3D0h] [rbp+2C8h] BYREF
  HSTRING_HEADER v125; // [rsp+440h] [rbp+338h] BYREF
  void *v126[2]; // [rsp+458h] [rbp+350h] BYREF
  __m128i si128; // [rsp+468h] [rbp+360h]
  _QWORD v128[3]; // [rsp+478h] [rbp+370h] BYREF
  unsigned __int64 v129; // [rsp+490h] [rbp+388h]
  HSTRING string; // [rsp+498h] [rbp+390h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+4A0h] [rbp+398h] BYREF
  HSTRING v132; // [rsp+4B8h] [rbp+3B0h] BYREF
  HSTRING v133; // [rsp+4D8h] [rbp+3D0h] BYREF
  HSTRING v134; // [rsp+4F8h] [rbp+3F0h] BYREF
  HSTRING v135; // [rsp+518h] [rbp+410h] BYREF
  void *v136; // [rsp+538h] [rbp+430h] BYREF
  int v137; // [rsp+540h] [rbp+438h]
  int v138; // [rsp+544h] [rbp+43Ch]
  void *v139; // [rsp+548h] [rbp+440h]
  int v140; // [rsp+550h] [rbp+448h]
  int v141; // [rsp+554h] [rbp+44Ch]
  const char *v142; // [rsp+558h] [rbp+450h]
  __int64 v143; // [rsp+560h] [rbp+458h]
  _DWORD v144[6]; // [rsp+568h] [rbp+460h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5C0h] [rbp+4B8h]

  v112 = -2LL;
  v2 = a2;
  v101 = a2;
  v4 = 0;
  v99 = 0LL;
  memset(&v125, 0, sizeof(v125));
  v98 = 0LL;
  v97 = 0LL;
  pv = 0LL;
  v91 = 0LL;
  v83 = 0;
  *a2 = 0;
  ActivationFactory = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v126[0]) = 0;
  std::wstring::assign(v126, (void *)L"LegacyDefaultEndpointKey");
  v6 = (char *)this + 448;
  std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
    (char *)this + 448,
    &v107,
    v126);
  if ( si128.m128i_i64[1] >= 8uLL )
  {
    v7 = (const struct std::nothrow_t *)(2 * si128.m128i_i64[1] + 2);
    v102 = (unsigned __int64)v7;
    v8 = v126[0];
    v103 = v126[0];
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v103, &v102);
      v7 = (const struct std::nothrow_t *)v102;
      v8 = v103;
    }
    operator delete(v8, v7);
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v126[0]) = 0;
  v95 = *((_QWORD *)this + 57);
  v9 = v107;
  if ( v107 == v95 )
  {
    ActivationFactory = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D4,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_36;
  }
  v10 = 0LL;
  v11 = (_DWORD *)(*(_QWORD *)(v107 + 48) + 4LL);
  do
  {
    v144[v10++] = *v11;
    v11 += 6;
  }
  while ( v10 < 6 );
  v12 = *((_DWORD *)this + 48);
  if ( v12 == 5 || (unsigned int)(v12 - 11) <= 1 )
  {
    v13 = 1;
    LOBYTE(v81) = 1;
  }
  else
  {
    v13 = 0;
    LOBYTE(v81) = 0;
  }
  pcbData = 4;
  pvData = 0;
  v14 = L"AudioSrvLicenseResult";
  if ( !*((_BYTE *)this + 99) )
    v14 = L"AudioDGLicenseResult";
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
    v14,
    0x10u,
    0LL,
    &pvData,
    &pcbData);
  v15 = pvData;
  if ( pvData < 0 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      *(_DWORD *)(*(_QWORD *)(v9 + 48) + v26 + 4) = v15;
      v26 += 24LL;
      if ( v26 >= 96 )
        break;
      v15 = pvData;
    }
LABEL_26:
    v21 = 0LL;
    v22 = v144;
    do
    {
      v23 = *(struct AtmosCheck::EndpointSpecificSpatialTechInfo **)(v9 + 48);
      if ( *v22 != *(_DWORD *)((char *)v23 + v21 + 4) )
      {
        *v2 = 1;
        v23 = *(struct AtmosCheck::EndpointSpecificSpatialTechInfo **)(v9 + 48);
      }
      v21 += 24LL;
      ++v22;
    }
    while ( v21 < 144 );
    AtmosCheck::MarkAsEvaluated(v23);
    goto LABEL_31;
  }
  if ( WindowsCreateStringReference(
         L"Windows.Internal.StateRepository.ApplicationExtension",
         0x35u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v16 = string;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v98);
  ActivationFactory = RoGetActivationFactory(v16, &GUID_78662bbb_1464_4279_b5ff_ffccb2bc6529, &v98);
  if ( ActivationFactory < 0 )
    goto LABEL_31;
  ActivationFactory = WindowsCreateStringReference(L"windows.mediaPlayback", 0x15u, &v125, &v99);
  if ( ActivationFactory < 0 )
    goto LABEL_31;
  v17 = v98;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v97);
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v17 + 144LL))(v17, v99, &v97);
  if ( ActivationFactory < 0 )
    goto LABEL_31;
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v97 + 56LL))(v97, &v96);
  if ( ActivationFactory < 0 )
    goto LABEL_31;
  v109 = 0;
  if ( (unsigned int)dword_1801B54F0 > 5 )
  {
    v142 = "Retrieved media app list";
    v143 = 25LL;
    v110[0] = 184549376;
    v110[1] = 5;
    v111 = 0LL;
    v136 = off_1801B54F8;
    v137 = *(unsigned __int16 *)off_1801B54F8;
    v138 = 2;
    v139 = &unk_18017C0B6;
    v140 = 23;
    v141 = 1;
    v94 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(qword_1801B5510, v110, 0LL, 0LL, 3, &v136);
  }
  pcbData = 0;
  v18 = 0;
  if ( !v96 )
  {
LABEL_23:
    v19 = *(_QWORD *)(v9 + 48);
    v20 = *(_DWORD *)(v19 + 28);
    v2 = v101;
    if ( v20 < 0 && *(int *)(v19 + 52) >= 0 )
      *(_DWORD *)(v19 + 52) = v20;
    goto LABEL_26;
  }
  while ( 1 )
  {
    v78 = 0LL;
    v80 = 0LL;
    v79 = 0LL;
    v75 = 0LL;
    v77 = 0LL;
    v76 = 0LL;
    v94 = 0;
    v27 = pv;
    if ( pv )
    {
      v28 = v83;
      if ( v83 )
      {
        do
        {
          v29 = v27[v18];
          if ( v29 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 16LL))(v27[v18]);
            *((_QWORD *)pv + v18) = 0LL;
            v27 = pv;
            v28 = v83;
          }
          ++v18;
        }
        while ( v18 < v28 );
        v4 = pcbData;
      }
      CoTaskMemFree(v27);
      pv = 0LL;
    }
    v83 = 0;
    v30 = v97;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v78);
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, v4, &v78);
    if ( ActivationFactory < 0 )
      goto LABEL_122;
    v31 = v78;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 96LL))(v31, &v80);
    if ( ActivationFactory < 0
      || (v32 = v80,
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79),
          ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 96LL))(v32, &v79),
          ActivationFactory < 0)
      || (ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v79 + 176LL))(v79, &v91),
          ActivationFactory < 0)
      || (ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v79 + 720LL))(v79, &v94),
          ActivationFactory < 0) )
    {
LABEL_122:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v76);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v77);
      goto LABEL_123;
    }
    std::wstring::wstring(v128, L"LegacyDefaultEndpointKey");
    std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
      v6,
      &v108,
      v128);
    if ( v129 >= 8 )
    {
      v34 = (struct std::nothrow_t *)(2 * v129 + 2);
      v104 = v34;
      v35 = (void *)v128[0];
      v105 = (void *)v128[0];
      if ( (unsigned __int64)v34 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v105, (unsigned __int64 *)&v104);
        v34 = v104;
        v35 = v105;
      }
      operator delete(v35, v34);
    }
    v36 = v108;
    if ( v108 == *((_QWORD *)this + 57) )
    {
      ActivationFactory = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x429,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)0x8000FFFFLL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v76);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v77);
      v70 = v75;
      if ( v75 )
      {
        v75 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v70)[2])(v70);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v78);
      goto LABEL_36;
    }
    if ( v94 == 3 || v13 )
      break;
LABEL_90:
    WindowsDeleteString(v91);
    v91 = 0LL;
    v56 = *(int **)(v36 + 48);
    v18 = 0;
    if ( v56[1] >= 0 && v56[7] >= 0 && v56[13] >= 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v76);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v77);
      v57 = v75;
      if ( v75 )
      {
        v75 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v57)[2])(v57);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v78);
      goto LABEL_23;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v76);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v77);
    v68 = v75;
    if ( v75 )
    {
      v75 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v68)[2])(v68);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v78);
    pcbData = ++v4;
    if ( v4 >= v96 )
      goto LABEL_23;
  }
  v87 = 0LL;
  v86 = 0LL;
  v85 = 0LL;
  v84 = 0LL;
  v82 = 0LL;
  AtmosCheck::Trace(v33, "Checking capabilities", 0);
  v37 = v78;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v87);
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v37 + 504LL))(
                        v37,
                        &v87);
  if ( ActivationFactory < 0 )
    goto LABEL_118;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v86);
  ActivationFactory = (**v87)(v87, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v86);
  if ( ActivationFactory < 0 )
    goto LABEL_118;
  v38 = v86;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v85);
  v40 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v132, v39);
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v38 + 48LL))(v38, *v40, &v85);
  if ( ActivationFactory < 0 )
    goto LABEL_118;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v84);
  ActivationFactory = (**v85)(v85, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v84);
  if ( ActivationFactory < 0 )
    goto LABEL_118;
  v41 = v84;
  v42 = v75;
  if ( v75 )
  {
    v75 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v42)[2])(v42);
  }
  v43 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v133, L"Codec");
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v41 + 48LL))(v41, *v43, &v75);
  if ( ActivationFactory < 0 )
    goto LABEL_118;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v82);
  if ( (**v75)(v75, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v82) < 0 )
  {
    v90 = 0LL;
    ActivationFactory = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
                          &v75,
                          &v77);
    if ( ActivationFactory < 0
      || (v58 = v77,
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v76),
          v59 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v135, L"@Name"),
          ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v58 + 48LL))(
                                v58,
                                *v59,
                                &v76),
          ActivationFactory < 0)
      || (ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v76 + 152LL))(v76, &v90),
          ActivationFactory < 0) )
    {
      v69 = v90;
      goto LABEL_116;
    }
    StringLen = WindowsGetStringLen(v90);
    StringRawBuffer = WindowsGetStringRawBuffer(v90, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, StringLen, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2 )
    {
      v122[0] = off_180152A80;
      v122[1] = this;
      v122[13] = v122;
      v62 = &v121;
      v63 = 0LL;
    }
    else
    {
      v64 = WindowsGetStringLen(v90);
      v65 = WindowsGetStringRawBuffer(v90, 0LL);
      if ( CompareStringOrdinal(v65, v64, L"atmosMatEncoder", -1, 1) == 2 )
      {
        v124[0] = off_180152AA8;
        v124[1] = this;
        v124[13] = v124;
        AtmosCheck::PerformLicenseCheckHelperLegacy(this, v91, 1LL, v123, *(_QWORD *)(v36 + 48));
        *((_BYTE *)this + 288) = 1;
        *((_BYTE *)this + 256) = 1;
        *((_BYTE *)this + 320) = 1;
        *((_BYTE *)this + 352) = 1;
        goto LABEL_106;
      }
      v66 = WindowsGetStringLen(v90);
      v67 = WindowsGetStringRawBuffer(v90, 0LL);
      if ( CompareStringOrdinal(v67, v66, L"atmosHeadphonesEncoder", -1, 1) != 2 )
      {
LABEL_106:
        if ( v90 )
          WindowsDeleteString(v90);
        goto LABEL_89;
      }
      v114[0] = off_180152A58;
      v114[1] = this;
      v114[13] = v114;
      v62 = &v113;
      v63 = 2LL;
    }
    AtmosCheck::PerformLicenseCheckHelperLegacy(this, v91, v63, v62, *(_QWORD *)(v36 + 48));
    goto LABEL_106;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v82 + 48LL))(v82, &v100);
  if ( ActivationFactory < 0 )
    goto LABEL_118;
  if ( v100 != 1037 )
    goto LABEL_89;
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *, LPVOID *))(*(_QWORD *)v82 + 304LL))(
                        v82,
                        &v83,
                        &pv);
  if ( ActivationFactory < 0 )
    goto LABEL_118;
  v44 = 0;
  if ( !v83 )
  {
LABEL_88:
    v6 = (char *)this + 448;
LABEL_89:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v82);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v84);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v85);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v86);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v87);
    v4 = pcbData;
    v13 = v81;
    goto LABEL_90;
  }
  while ( 1 )
  {
    v89 = 0LL;
    v45 = *((_QWORD *)pv + v44);
    v106 = v45;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v106);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v77);
    ActivationFactory = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
                          &v106,
                          &v77);
    if ( ActivationFactory < 0 )
      break;
    v46 = v77;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v76);
    v47 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v134, L"@Name");
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v46 + 48LL))(v46, *v47, &v76);
    if ( ActivationFactory < 0 )
      break;
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v76 + 152LL))(v76, &v89);
    if ( ActivationFactory < 0 )
      break;
    v48 = WindowsGetStringLen(v89);
    v49 = WindowsGetStringRawBuffer(v89, 0LL);
    if ( CompareStringOrdinal(v49, v48, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2 )
    {
      v116[0] = off_180152A80;
      v116[1] = this;
      v116[13] = v116;
      v50 = &v115;
      v51 = 0LL;
LABEL_82:
      AtmosCheck::PerformLicenseCheckHelperLegacy(this, v91, v51, v50, *(_QWORD *)(v36 + 48));
      goto LABEL_83;
    }
    v52 = WindowsGetStringLen(v89);
    v53 = WindowsGetStringRawBuffer(v89, 0LL);
    if ( CompareStringOrdinal(v53, v52, L"atmosMatEncoder", -1, 1) == 2 )
    {
      v118[0] = off_180152AA8;
      v118[1] = this;
      v118[13] = v118;
      AtmosCheck::PerformLicenseCheckHelperLegacy(this, v91, 1LL, v117, *(_QWORD *)(v36 + 48));
      *((_BYTE *)this + 288) = 1;
      *((_BYTE *)this + 256) = 1;
      *((_BYTE *)this + 320) = 1;
      *((_BYTE *)this + 352) = 1;
    }
    else
    {
      v54 = WindowsGetStringLen(v89);
      v55 = WindowsGetStringRawBuffer(v89, 0LL);
      if ( CompareStringOrdinal(v55, v54, L"atmosHeadphonesEncoder", -1, 1) == 2 )
      {
        v120[0] = off_180152A58;
        v120[1] = this;
        v120[13] = v120;
        v50 = &v119;
        v51 = 2LL;
        goto LABEL_82;
      }
    }
LABEL_83:
    if ( v45 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    if ( v89 )
      WindowsDeleteString(v89);
    if ( ++v44 >= v83 )
      goto LABEL_88;
  }
  if ( v45 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  v69 = v89;
LABEL_116:
  if ( v69 )
    WindowsDeleteString(v69);
LABEL_118:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v82);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v84);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v85);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v86);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v87);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v76);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v77);
LABEL_123:
  v71 = v75;
  if ( v75 )
  {
    v75 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v71)[2])(v71);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v78);
LABEL_31:
  if ( v99 )
  {
    WindowsDeleteString(v99);
    v99 = 0LL;
  }
  if ( v91 )
  {
    WindowsDeleteString(v91);
    v91 = 0LL;
  }
  v24 = pv;
  if ( pv )
  {
    v72 = 0;
    for ( i = v83; v72 < i; ++v72 )
    {
      v74 = v24[v72];
      if ( v74 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v74 + 16LL))(v24[v72]);
        *((_QWORD *)pv + v72) = 0LL;
        v24 = pv;
        i = v83;
      }
    }
    CoTaskMemFree(v24);
  }
LABEL_36:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v97);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v98);
  return (unsigned int)ActivationFactory;
}
