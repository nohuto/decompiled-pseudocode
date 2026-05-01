/*
 * XREFs of ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801A5640
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800107DC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1801A4114 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VC.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1803A347C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PrivilegedOperationsService::SubscribeToServices(
        PrivilegedOperationsService *this,
        struct IServiceProvider *a2)
{
  _BYTE *v4; // rdi
  unsigned __int8 (*v5)(void); // rax
  int v6; // eax
  CCriticalFailureHandler *v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  CCriticalFailureHandler *v10; // rcx
  __int64 v12; // rdx
  unsigned __int64 *v13; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v14; // [rsp+30h] [rbp-D8h]
  int v15[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v17[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h]
  GUID *v19; // [rsp+58h] [rbp-B0h]
  GUID *v20; // [rsp+60h] [rbp-A8h]
  __int64 v21; // [rsp+68h] [rbp-A0h]
  _QWORD v22[4]; // [rsp+70h] [rbp-98h] BYREF
  char v23; // [rsp+90h] [rbp-78h]
  GUID *v24; // [rsp+98h] [rbp-70h]
  GUID *v25; // [rsp+A0h] [rbp-68h]
  __int64 v26; // [rsp+A8h] [rbp-60h]
  char v27; // [rsp+B0h] [rbp-58h]
  GUID *v28; // [rsp+B8h] [rbp-50h]
  GUID *v29; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+C8h] [rbp-40h]
  char v31; // [rsp+D0h] [rbp-38h]
  GUID *v32; // [rsp+D8h] [rbp-30h]
  GUID *v33; // [rsp+E0h] [rbp-28h]
  __int64 v34; // [rsp+E8h] [rbp-20h]
  char v35; // [rsp+F0h] [rbp-18h]
  GUID *v36; // [rsp+F8h] [rbp-10h]
  GUID *v37; // [rsp+100h] [rbp-8h]
  __int64 v38; // [rsp+108h] [rbp+0h]
  char v39; // [rsp+110h] [rbp+8h]
  SID *v40; // [rsp+118h] [rbp+10h]
  GUID *v41; // [rsp+120h] [rbp+18h]
  __int64 v42; // [rsp+128h] [rbp+20h]
  char v43; // [rsp+130h] [rbp+28h]
  GUID *v44; // [rsp+138h] [rbp+30h]
  GUID *v45; // [rsp+140h] [rbp+38h]
  __int64 v46; // [rsp+148h] [rbp+40h]
  char v47; // [rsp+150h] [rbp+48h]
  GUID *v48; // [rsp+158h] [rbp+50h]
  GUID *v49; // [rsp+160h] [rbp+58h]
  __int64 v50; // [rsp+168h] [rbp+60h]
  char v51; // [rsp+170h] [rbp+68h]
  GUID *v52; // [rsp+178h] [rbp+70h]
  GUID *v53; // [rsp+180h] [rbp+78h]
  __int64 v54; // [rsp+188h] [rbp+80h]
  char v55; // [rsp+190h] [rbp+88h]
  GUID *v56; // [rsp+198h] [rbp+90h]
  GUID *v57; // [rsp+1A0h] [rbp+98h]
  __int64 v58; // [rsp+1A8h] [rbp+A0h]
  char v59; // [rsp+1B0h] [rbp+A8h]
  GUID *v60; // [rsp+1B8h] [rbp+B0h]
  GUID *v61; // [rsp+1C0h] [rbp+B8h]
  __int64 v62; // [rsp+1C8h] [rbp+C0h]
  char v63; // [rsp+1D0h] [rbp+C8h]
  GUID *v64; // [rsp+1D8h] [rbp+D0h]
  GUID *v65; // [rsp+1E0h] [rbp+D8h]
  __int64 v66; // [rsp+1E8h] [rbp+E0h]
  char v67; // [rsp+1F0h] [rbp+E8h]
  GUID *v68; // [rsp+1F8h] [rbp+F0h]
  GUID *v69; // [rsp+200h] [rbp+F8h]
  __int64 v70; // [rsp+208h] [rbp+100h]
  char v71; // [rsp+210h] [rbp+108h]
  GUID *v72; // [rsp+218h] [rbp+110h]
  GUID *v73; // [rsp+220h] [rbp+118h]
  __int64 v74; // [rsp+228h] [rbp+120h]
  char v75; // [rsp+230h] [rbp+128h]
  GUID *v76; // [rsp+238h] [rbp+130h]
  GUID *v77; // [rsp+240h] [rbp+138h]
  __int64 v78; // [rsp+248h] [rbp+140h]
  char v79; // [rsp+250h] [rbp+148h]
  GUID *v80; // [rsp+258h] [rbp+150h]
  GUID *v81; // [rsp+260h] [rbp+158h]
  __int64 v82; // [rsp+268h] [rbp+160h]
  char v83; // [rsp+270h] [rbp+168h]
  GUID *v84; // [rsp+278h] [rbp+170h]
  GUID *v85; // [rsp+280h] [rbp+178h]
  __int64 v86; // [rsp+288h] [rbp+180h]
  char v87; // [rsp+290h] [rbp+188h]
  GUID *v88; // [rsp+298h] [rbp+190h]
  GUID *v89; // [rsp+2A0h] [rbp+198h]
  __int64 v90; // [rsp+2A8h] [rbp+1A0h]
  char v91; // [rsp+2B0h] [rbp+1A8h]
  GUID *v92; // [rsp+2B8h] [rbp+1B0h]
  GUID *v93; // [rsp+2C0h] [rbp+1B8h]
  __int64 v94; // [rsp+2C8h] [rbp+1C0h]
  char v95; // [rsp+2D0h] [rbp+1C8h]
  GUID *v96; // [rsp+2D8h] [rbp+1D0h]
  GUID *v97; // [rsp+2E0h] [rbp+1D8h]
  char (__fastcall *v98)(__int64, __int64, __int64); // [rsp+2E8h] [rbp+1E0h]
  char v99; // [rsp+2F0h] [rbp+1E8h]
  GUID *v100; // [rsp+2F8h] [rbp+1F0h]
  GUID *v101; // [rsp+300h] [rbp+1F8h]
  char (__fastcall *v102)(__int64, __int64, __int64); // [rsp+308h] [rbp+200h]
  char v103; // [rsp+310h] [rbp+208h]
  GUID *v104; // [rsp+318h] [rbp+210h]
  GUID *v105; // [rsp+320h] [rbp+218h]
  __int64 v106; // [rsp+328h] [rbp+220h]
  char v107; // [rsp+330h] [rbp+228h]
  GUID *v108; // [rsp+338h] [rbp+230h]
  GUID *v109; // [rsp+340h] [rbp+238h]
  __int64 v110; // [rsp+348h] [rbp+240h]
  char v111; // [rsp+350h] [rbp+248h]
  GUID *v112; // [rsp+358h] [rbp+250h]
  GUID *v113; // [rsp+360h] [rbp+258h]
  __int64 v114; // [rsp+368h] [rbp+260h]
  char v115; // [rsp+370h] [rbp+268h]
  SID *v116; // [rsp+378h] [rbp+270h]
  GUID *v117; // [rsp+380h] [rbp+278h]
  char (*v118)(); // [rsp+388h] [rbp+280h]
  char v119; // [rsp+390h] [rbp+288h]
  GUID *v120; // [rsp+398h] [rbp+290h]
  GUID *v121; // [rsp+3A0h] [rbp+298h]
  char (__fastcall *v122)(__int64, __int64); // [rsp+3A8h] [rbp+2A0h]
  char v123; // [rsp+3B0h] [rbp+2A8h]
  GUID *v124; // [rsp+3B8h] [rbp+2B0h]
  GUID *v125; // [rsp+3C0h] [rbp+2B8h]
  char (__fastcall *v126)(__int64, __int64, __int64); // [rsp+3C8h] [rbp+2C0h]
  char v127; // [rsp+3D0h] [rbp+2C8h]
  GUID *v128; // [rsp+3D8h] [rbp+2D0h]
  GUID *v129; // [rsp+3E0h] [rbp+2D8h]
  __int64 v130; // [rsp+3E8h] [rbp+2E0h]
  char v131; // [rsp+3F0h] [rbp+2E8h]
  void *v132; // [rsp+3F8h] [rbp+2F0h]
  GUID *v133; // [rsp+400h] [rbp+2F8h]
  char (*v134)(); // [rsp+408h] [rbp+300h]
  char v135; // [rsp+410h] [rbp+308h]
  void *v136; // [rsp+418h] [rbp+310h]
  GUID *v137; // [rsp+420h] [rbp+318h]
  bool (__fastcall *v138)(PrivilegedOperations *, __int64, __int64); // [rsp+428h] [rbp+320h]
  char v139; // [rsp+430h] [rbp+328h]
  void *v140; // [rsp+438h] [rbp+330h]
  GUID *v141; // [rsp+440h] [rbp+338h]
  bool (__fastcall *v142)(PrivilegedOperations *, __int64, __int64); // [rsp+448h] [rbp+340h]
  char v143; // [rsp+450h] [rbp+348h]
  void *v144; // [rsp+458h] [rbp+350h]
  GUID *v145; // [rsp+460h] [rbp+358h]
  bool (__fastcall *v146)(PrivilegedOperations *, __int64, __int64); // [rsp+468h] [rbp+360h]
  char v147; // [rsp+470h] [rbp+368h]
  GUID *v148; // [rsp+478h] [rbp+370h]
  GUID *v149; // [rsp+480h] [rbp+378h]
  __int64 v150; // [rsp+488h] [rbp+380h]
  char v151; // [rsp+490h] [rbp+388h]
  GUID *v152; // [rsp+498h] [rbp+390h]
  GUID *v153; // [rsp+4A0h] [rbp+398h]
  __int64 v154; // [rsp+4A8h] [rbp+3A0h]
  char v155; // [rsp+4B0h] [rbp+3A8h]
  GUID *v156; // [rsp+4B8h] [rbp+3B0h]
  GUID *v157; // [rsp+4C0h] [rbp+3B8h]
  __int64 v158; // [rsp+4C8h] [rbp+3C0h]
  char v159; // [rsp+4D0h] [rbp+3C8h]
  __int64 v160; // [rsp+4D8h] [rbp+3D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+510h] [rbp+408h]

  v18 = -2LL;
  v19 = &GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa;
  v20 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v21 = 0LL;
  LOBYTE(v22[0]) = 0;
  v22[1] = &GUID_3e50d2b3_b66b_48b0_87d3_ad0bccb8bcca;
  v22[2] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v22[3] = 0LL;
  v23 = 0;
  v24 = &GUID_3e50d2b3_b66b_48b0_87d3_ad0bccb8bcca;
  v25 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v26 = 0LL;
  v27 = 0;
  v28 = &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5;
  v29 = &GUID_1258a377_0646_40fd_b5fc_b642b81befba;
  v30 = 0LL;
  v31 = 0;
  v32 = &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5;
  v33 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v34 = 0LL;
  v35 = 0;
  v36 = &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5;
  v37 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v38 = 0LL;
  v39 = 0;
  v40 = &SID_FullScreenManager;
  v41 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v42 = 0LL;
  v43 = 0;
  v44 = &SID_ViewEventDispatcher;
  v45 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v46 = 0LL;
  v47 = 0;
  v48 = &SID_ViewEventDispatcher;
  v49 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  v50 = 0LL;
  v51 = 0;
  v52 = &SID_ViewEventDispatcher;
  v53 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v54 = 0LL;
  v55 = 0;
  v56 = &GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v57 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v58 = 0LL;
  v59 = 0;
  v60 = &GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v61 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v62 = 0LL;
  v63 = 0;
  v64 = &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v65 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v66 = 0LL;
  v67 = 0;
  v68 = &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v69 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v70 = 0LL;
  v71 = 0;
  v72 = &GUID_82467e7f_e743_4e2f_bf0b_20adcadf3217;
  v73 = &GUID_a993a76e_0909_48bb_b0e9_4d8236263896;
  v74 = 0LL;
  v75 = 0;
  v76 = &IID_ILockScreenViewManager;
  v77 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v78 = 0LL;
  v79 = 0;
  v80 = &IID_IAboveLockViewManager;
  v81 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v82 = 0LL;
  v83 = 0;
  v84 = &CLSID_HolographicForegroundAssistant;
  v85 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v86 = 0LL;
  v87 = 0;
  v88 = &GUID_c44450f0_731e_4fdb_95fe_d031838a5b14;
  v89 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v90 = 0LL;
  v91 = 0;
  v92 = &GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f;
  v93 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v94 = 0LL;
  v95 = 0;
  v96 = &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v97 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v98 = wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::IsEnabled;
  v99 = 1;
  v100 = &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v101 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v102 = wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::IsEnabled;
  v103 = 1;
  v104 = &GUID_7ca26eb3_f3a6_4d4e_9885_c7d2b7b34ac8;
  v105 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v106 = 0LL;
  v107 = 0;
  v108 = &GUID_8982be9d_1779_4400_a6ab_c69244842534;
  v109 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v110 = 0LL;
  v111 = 0;
  v112 = &GUID_8982be9d_1779_4400_a6ab_c69244842534;
  v113 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v114 = 0LL;
  v115 = 0;
  v116 = &SID_AccessibilityExperienceManager;
  v117 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v118 = wil::Feature<__WilFeatureTraits_Feature_EyeTracking>::IsEnabled;
  v119 = 1;
  v120 = &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c;
  v121 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v122 = wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::IsEnabled;
  v123 = 0;
  v124 = &GUID_c6ff146a_7f1d_492e_8981_e95cda605ef7;
  v125 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v126 = wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::IsEnabled;
  v127 = 1;
  v128 = &GUID_5ac9e22f_8a57_43c0_bf9a_1e1f5f366e55;
  v129 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v130 = 0LL;
  v131 = 0;
  v132 = &unk_180475470;
  v133 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v134 = wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::IsEnabled;
  v135 = 1;
  v136 = &unk_180475470;
  v137 = &GUID_b815c956_b344_4bad_a85b_b492df0f9d1c;
  v138 = PrivilegedOperations::IsTabShellEnabled;
  v139 = 0;
  v140 = &unk_180475470;
  v141 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v142 = PrivilegedOperations::IsTabShellEnabled;
  v143 = 0;
  v144 = &unk_180475470;
  v145 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v146 = PrivilegedOperations::IsTabShellEnabled;
  v147 = 0;
  v148 = &GUID_3da63696_768a_4297_9ca1_ba5ebb8c2651;
  v149 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v150 = 0LL;
  v151 = 0;
  v152 = &GUID_1dec43b5_da90_42ad_8c2a_904640ed2091;
  v153 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v154 = 0LL;
  v155 = 0;
  v156 = &GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986;
  v157 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v158 = 0LL;
  v159 = 0;
  v4 = v22;
  while ( 1 )
  {
    v5 = (unsigned __int8 (*)(void))*((_QWORD *)v4 - 1);
    if ( v5 && !v5() )
      goto LABEL_44;
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, _QWORD, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           *((_QWORD *)v4 - 3),
           &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db,
           &v16);
    if ( !*v4 )
      break;
    if ( v6 >= 0 )
    {
      v8 = v16;
      if ( v16 )
        goto LABEL_26;
    }
LABEL_43:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
LABEL_44:
    v4 += 32;
    if ( v4 - 24 == (_BYTE *)&v160 )
      return 0LL;
  }
  v9 = v6;
  v15[0] = v6;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", v17) >= 0 )
    {
      switch ( v17[0] )
      {
        case 2u:
          v9 = -2023406815;
          goto LABEL_18;
        case 3u:
          v9 = -2023406814;
          goto LABEL_18;
        case 4u:
          v9 = -2147418094;
          goto LABEL_18;
        case 5u:
          v9 = -2147022986;
LABEL_18:
          v15[0] = v9;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v9 < 0 )
  {
    if ( v9 != -2147024882 && v9 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v7,
        v15,
        L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        0x365u,
        v13,
        v14);
      v9 = v15[0];
    }
    if ( v9 < 0 )
    {
      v12 = 869LL;
      goto LABEL_48;
    }
  }
  v8 = v16;
LABEL_26:
  v9 = PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowGroupingOperations>::PublishPrivilegedOperations(
         (__int64)this + 120,
         v8,
         *((_QWORD **)v4 - 2));
  v15[0] = v9;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v17[1]) >= 0 )
    {
      switch ( v17[1] )
      {
        case 2u:
          v9 = -2023406815;
          goto LABEL_36;
        case 3u:
          v9 = -2023406814;
          goto LABEL_36;
        case 4u:
          v9 = -2147418094;
          goto LABEL_36;
        case 5u:
          v9 = -2147022986;
LABEL_36:
          v15[0] = v9;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v9 >= 0 )
    goto LABEL_43;
  if ( v9 != -2147024882 && v9 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v10,
      v15,
      L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      0x369u,
      v13,
      v14);
    v9 = v15[0];
  }
  if ( v9 >= 0 )
    goto LABEL_43;
  v12 = 873LL;
LABEL_48:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return (unsigned int)v9;
}
