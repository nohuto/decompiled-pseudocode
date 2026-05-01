/*
 * XREFs of ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801ECA60
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180054460 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1801EB424 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VC.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180408E7C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PrivilegedOperationsService::SubscribeToServices(
        PrivilegedOperationsService *this,
        struct IServiceProvider *a2)
{
  __int64 *v4; // rdi
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
  _QWORD v19[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h]
  GUID *v21; // [rsp+78h] [rbp-90h]
  GUID *v22; // [rsp+80h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  char v24; // [rsp+90h] [rbp-78h]
  GUID *v25; // [rsp+98h] [rbp-70h]
  GUID *v26; // [rsp+A0h] [rbp-68h]
  __int64 v27; // [rsp+A8h] [rbp-60h]
  char v28; // [rsp+B0h] [rbp-58h]
  GUID *v29; // [rsp+B8h] [rbp-50h]
  GUID *v30; // [rsp+C0h] [rbp-48h]
  __int64 v31; // [rsp+C8h] [rbp-40h]
  char v32; // [rsp+D0h] [rbp-38h]
  GUID *v33; // [rsp+D8h] [rbp-30h]
  GUID *v34; // [rsp+E0h] [rbp-28h]
  __int64 v35; // [rsp+E8h] [rbp-20h]
  char v36; // [rsp+F0h] [rbp-18h]
  GUID *v37; // [rsp+F8h] [rbp-10h]
  GUID *v38; // [rsp+100h] [rbp-8h]
  __int64 v39; // [rsp+108h] [rbp+0h]
  char v40; // [rsp+110h] [rbp+8h]
  SID *v41; // [rsp+118h] [rbp+10h]
  GUID *v42; // [rsp+120h] [rbp+18h]
  __int64 v43; // [rsp+128h] [rbp+20h]
  char v44; // [rsp+130h] [rbp+28h]
  GUID *v45; // [rsp+138h] [rbp+30h]
  GUID *v46; // [rsp+140h] [rbp+38h]
  __int64 v47; // [rsp+148h] [rbp+40h]
  char v48; // [rsp+150h] [rbp+48h]
  GUID *v49; // [rsp+158h] [rbp+50h]
  GUID *v50; // [rsp+160h] [rbp+58h]
  __int64 v51; // [rsp+168h] [rbp+60h]
  char v52; // [rsp+170h] [rbp+68h]
  GUID *v53; // [rsp+178h] [rbp+70h]
  GUID *v54; // [rsp+180h] [rbp+78h]
  __int64 v55; // [rsp+188h] [rbp+80h]
  char v56; // [rsp+190h] [rbp+88h]
  GUID *v57; // [rsp+198h] [rbp+90h]
  GUID *v58; // [rsp+1A0h] [rbp+98h]
  __int64 v59; // [rsp+1A8h] [rbp+A0h]
  char v60; // [rsp+1B0h] [rbp+A8h]
  GUID *v61; // [rsp+1B8h] [rbp+B0h]
  GUID *v62; // [rsp+1C0h] [rbp+B8h]
  __int64 v63; // [rsp+1C8h] [rbp+C0h]
  char v64; // [rsp+1D0h] [rbp+C8h]
  GUID *v65; // [rsp+1D8h] [rbp+D0h]
  GUID *v66; // [rsp+1E0h] [rbp+D8h]
  __int64 v67; // [rsp+1E8h] [rbp+E0h]
  char v68; // [rsp+1F0h] [rbp+E8h]
  GUID *v69; // [rsp+1F8h] [rbp+F0h]
  GUID *v70; // [rsp+200h] [rbp+F8h]
  __int64 v71; // [rsp+208h] [rbp+100h]
  char v72; // [rsp+210h] [rbp+108h]
  GUID *v73; // [rsp+218h] [rbp+110h]
  GUID *v74; // [rsp+220h] [rbp+118h]
  __int64 v75; // [rsp+228h] [rbp+120h]
  char v76; // [rsp+230h] [rbp+128h]
  GUID *v77; // [rsp+238h] [rbp+130h]
  GUID *v78; // [rsp+240h] [rbp+138h]
  __int64 v79; // [rsp+248h] [rbp+140h]
  char v80; // [rsp+250h] [rbp+148h]
  GUID *v81; // [rsp+258h] [rbp+150h]
  GUID *v82; // [rsp+260h] [rbp+158h]
  __int64 v83; // [rsp+268h] [rbp+160h]
  char v84; // [rsp+270h] [rbp+168h]
  GUID *v85; // [rsp+278h] [rbp+170h]
  GUID *v86; // [rsp+280h] [rbp+178h]
  __int64 v87; // [rsp+288h] [rbp+180h]
  char v88; // [rsp+290h] [rbp+188h]
  GUID *v89; // [rsp+298h] [rbp+190h]
  GUID *v90; // [rsp+2A0h] [rbp+198h]
  __int64 v91; // [rsp+2A8h] [rbp+1A0h]
  char v92; // [rsp+2B0h] [rbp+1A8h]
  GUID *v93; // [rsp+2B8h] [rbp+1B0h]
  GUID *v94; // [rsp+2C0h] [rbp+1B8h]
  __int64 v95; // [rsp+2C8h] [rbp+1C0h]
  char v96; // [rsp+2D0h] [rbp+1C8h]
  GUID *v97; // [rsp+2D8h] [rbp+1D0h]
  GUID *v98; // [rsp+2E0h] [rbp+1D8h]
  char (__fastcall *v99)(__int64, __int64, __int64); // [rsp+2E8h] [rbp+1E0h]
  char v100; // [rsp+2F0h] [rbp+1E8h]
  GUID *v101; // [rsp+2F8h] [rbp+1F0h]
  GUID *v102; // [rsp+300h] [rbp+1F8h]
  char (__fastcall *v103)(__int64, __int64, __int64); // [rsp+308h] [rbp+200h]
  char v104; // [rsp+310h] [rbp+208h]
  GUID *v105; // [rsp+318h] [rbp+210h]
  GUID *v106; // [rsp+320h] [rbp+218h]
  char (*v107)(void); // [rsp+328h] [rbp+220h]
  char v108; // [rsp+330h] [rbp+228h]
  GUID *v109; // [rsp+338h] [rbp+230h]
  GUID *v110; // [rsp+340h] [rbp+238h]
  char (*v111)(void); // [rsp+348h] [rbp+240h]
  char v112; // [rsp+350h] [rbp+248h]
  GUID *v113; // [rsp+358h] [rbp+250h]
  GUID *v114; // [rsp+360h] [rbp+258h]
  __int64 v115; // [rsp+368h] [rbp+260h]
  char v116; // [rsp+370h] [rbp+268h]
  GUID *v117; // [rsp+378h] [rbp+270h]
  GUID *v118; // [rsp+380h] [rbp+278h]
  __int64 v119; // [rsp+388h] [rbp+280h]
  char v120; // [rsp+390h] [rbp+288h]
  GUID *v121; // [rsp+398h] [rbp+290h]
  GUID *v122; // [rsp+3A0h] [rbp+298h]
  __int64 v123; // [rsp+3A8h] [rbp+2A0h]
  char v124; // [rsp+3B0h] [rbp+2A8h]
  SID *v125; // [rsp+3B8h] [rbp+2B0h]
  GUID *v126; // [rsp+3C0h] [rbp+2B8h]
  char (*v127)(); // [rsp+3C8h] [rbp+2C0h]
  char v128; // [rsp+3D0h] [rbp+2C8h]
  GUID *v129; // [rsp+3D8h] [rbp+2D0h]
  GUID *v130; // [rsp+3E0h] [rbp+2D8h]
  char (__fastcall *v131)(__int64, __int64); // [rsp+3E8h] [rbp+2E0h]
  char v132; // [rsp+3F0h] [rbp+2E8h]
  GUID *v133; // [rsp+3F8h] [rbp+2F0h]
  GUID *v134; // [rsp+400h] [rbp+2F8h]
  char (__fastcall *v135)(__int64, __int64, __int64); // [rsp+408h] [rbp+300h]
  char v136; // [rsp+410h] [rbp+308h]
  GUID *v137; // [rsp+418h] [rbp+310h]
  GUID *v138; // [rsp+420h] [rbp+318h]
  __int64 v139; // [rsp+428h] [rbp+320h]
  char v140; // [rsp+430h] [rbp+328h]
  void *v141; // [rsp+438h] [rbp+330h]
  GUID *v142; // [rsp+440h] [rbp+338h]
  __int64 v143; // [rsp+448h] [rbp+340h]
  char v144; // [rsp+450h] [rbp+348h]
  void *v145; // [rsp+458h] [rbp+350h]
  GUID *v146; // [rsp+460h] [rbp+358h]
  bool (__fastcall *v147)(PrivilegedOperations *); // [rsp+468h] [rbp+360h]
  char v148; // [rsp+470h] [rbp+368h]
  void *v149; // [rsp+478h] [rbp+370h]
  GUID *v150; // [rsp+480h] [rbp+378h]
  bool (__fastcall *v151)(PrivilegedOperations *); // [rsp+488h] [rbp+380h]
  char v152; // [rsp+490h] [rbp+388h]
  void *v153; // [rsp+498h] [rbp+390h]
  GUID *v154; // [rsp+4A0h] [rbp+398h]
  bool (__fastcall *v155)(PrivilegedOperations *); // [rsp+4A8h] [rbp+3A0h]
  char v156; // [rsp+4B0h] [rbp+3A8h]
  GUID *v157; // [rsp+4B8h] [rbp+3B0h]
  GUID *v158; // [rsp+4C0h] [rbp+3B8h]
  __int64 v159; // [rsp+4C8h] [rbp+3C0h]
  char v160; // [rsp+4D0h] [rbp+3C8h]
  GUID *v161; // [rsp+4D8h] [rbp+3D0h]
  GUID *v162; // [rsp+4E0h] [rbp+3D8h]
  __int64 v163; // [rsp+4E8h] [rbp+3E0h]
  char v164; // [rsp+4F0h] [rbp+3E8h]
  SID *v165; // [rsp+4F8h] [rbp+3F0h]
  GUID *v166; // [rsp+500h] [rbp+3F8h]
  char (*v167)(); // [rsp+508h] [rbp+400h]
  char v168; // [rsp+510h] [rbp+408h]
  GUID *v169; // [rsp+518h] [rbp+410h]
  GUID *v170; // [rsp+520h] [rbp+418h]
  __int64 v171; // [rsp+528h] [rbp+420h]
  char v172; // [rsp+530h] [rbp+428h]
  GUID *v173; // [rsp+538h] [rbp+430h]
  GUID *v174; // [rsp+540h] [rbp+438h]
  bool (__fastcall *v175)(PrivilegedOperations *); // [rsp+548h] [rbp+440h]
  char v176; // [rsp+550h] [rbp+448h]
  GUID *v177; // [rsp+558h] [rbp+450h]
  GUID *v178; // [rsp+560h] [rbp+458h]
  __int64 v179; // [rsp+568h] [rbp+460h]
  char v180; // [rsp+570h] [rbp+468h]
  __int64 v181; // [rsp+578h] [rbp+470h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5B0h] [rbp+4A8h]

  v18 = -2LL;
  v19[0] = &GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa;
  v19[1] = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v19[2] = 0LL;
  LOBYTE(v20) = 0;
  v21 = &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1;
  v22 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v23 = 0LL;
  v24 = 0;
  v25 = &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1;
  v26 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v27 = 0LL;
  v28 = 0;
  v29 = &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5;
  v30 = &GUID_1258a377_0646_40fd_b5fc_b642b81befba;
  v31 = 0LL;
  v32 = 0;
  v33 = &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5;
  v34 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v35 = 0LL;
  v36 = 0;
  v37 = &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5;
  v38 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v39 = 0LL;
  v40 = 0;
  v41 = &SID_FullScreenManager;
  v42 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v43 = 0LL;
  v44 = 0;
  v45 = &SID_ViewEventDispatcher;
  v46 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v47 = 0LL;
  v48 = 0;
  v49 = &SID_ViewEventDispatcher;
  v50 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  v51 = 0LL;
  v52 = 0;
  v53 = &SID_ViewEventDispatcher;
  v54 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v55 = 0LL;
  v56 = 0;
  v57 = &GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v58 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v59 = 0LL;
  v60 = 0;
  v61 = &GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v62 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v63 = 0LL;
  v64 = 0;
  v65 = &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v66 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v67 = 0LL;
  v68 = 0;
  v69 = &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v70 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v71 = 0LL;
  v72 = 0;
  v73 = &GUID_82467e7f_e743_4e2f_bf0b_20adcadf3217;
  v74 = &GUID_a993a76e_0909_48bb_b0e9_4d8236263896;
  v75 = 0LL;
  v76 = 0;
  v77 = &IID_ILockScreenViewManager;
  v78 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v79 = 0LL;
  v80 = 0;
  v81 = &IID_IAboveLockViewManager;
  v82 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v83 = 0LL;
  v84 = 0;
  v85 = &CLSID_HolographicForegroundAssistant;
  v86 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v87 = 0LL;
  v88 = 0;
  v89 = &GUID_c44450f0_731e_4fdb_95fe_d031838a5b14;
  v90 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v91 = 0LL;
  v92 = 0;
  v93 = &GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f;
  v94 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v95 = 0LL;
  v96 = 0;
  v97 = &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v98 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v99 = wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::IsEnabled;
  v100 = 1;
  v101 = &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v102 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v103 = wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::IsEnabled;
  v104 = 1;
  v105 = &CLSID_VirtualMonitorSlateHostFactory;
  v106 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v107 = IsHolographicWin32SlatesFeatureEnabled;
  v108 = 1;
  v109 = &CLSID_HolographicSlatePositionGuardian;
  v110 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v111 = IsHolographicWin32SlatesFeatureEnabled;
  v112 = 1;
  v113 = &GUID_7ca26eb3_f3a6_4d4e_9885_c7d2b7b34ac8;
  v114 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v115 = 0LL;
  v116 = 0;
  v117 = &GUID_8982be9d_1779_4400_a6ab_c69244842534;
  v118 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v119 = 0LL;
  v120 = 0;
  v121 = &GUID_8982be9d_1779_4400_a6ab_c69244842534;
  v122 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v123 = 0LL;
  v124 = 0;
  v125 = &SID_AccessibilityExperienceManager;
  v126 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v127 = wil::Feature<__WilFeatureTraits_Feature_EyeTracking>::IsEnabled;
  v128 = 1;
  v129 = &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c;
  v130 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v131 = wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::IsEnabled;
  v132 = 0;
  v133 = &GUID_c6ff146a_7f1d_492e_8981_e95cda605ef7;
  v134 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v135 = wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::IsEnabled;
  v136 = 1;
  v137 = &GUID_5ac9e22f_8a57_43c0_bf9a_1e1f5f366e55;
  v138 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v139 = 0LL;
  v140 = 0;
  v141 = &unk_1804F1118;
  v142 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v143 = 0LL;
  v144 = 1;
  v145 = &unk_1804F1118;
  v146 = &GUID_b815c956_b344_4bad_a85b_b492df0f9d1c;
  v147 = PrivilegedOperations::IsTabShellEnabled;
  v148 = 0;
  v149 = &unk_1804F1118;
  v150 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v151 = PrivilegedOperations::IsTabShellEnabled;
  v152 = 0;
  v153 = &unk_1804F1118;
  v154 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v155 = PrivilegedOperations::IsTabShellEnabled;
  v156 = 0;
  v157 = &GUID_3da63696_768a_4297_9ca1_ba5ebb8c2651;
  v158 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v159 = 0LL;
  v160 = 0;
  v161 = &GUID_1dec43b5_da90_42ad_8c2a_904640ed2091;
  v162 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v163 = 0LL;
  v164 = 0;
  v165 = &SID_ImmersiveLauncher;
  v166 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v167 = wil::Feature<__WilFeatureTraits_Feature_StartInWin32Host>::IsEnabled;
  v168 = 0;
  v169 = &GUID_bdd61328_14f8_4dff_8b7b_92be622ae360;
  v170 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v171 = 0LL;
  v172 = 1;
  v173 = &GUID_749f2714_937d_445e_9d22_666f49e7ff32;
  v174 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v175 = PrivilegedOperations::IsUndockCortanaEnabled;
  v176 = 1;
  v177 = &GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986;
  v178 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v179 = 0LL;
  v180 = 0;
  v4 = v19;
  while ( 1 )
  {
    v5 = (unsigned __int8 (*)(void))v4[2];
    if ( v5 && !v5() )
      goto LABEL_44;
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, __int64, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           *v4,
           &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db,
           &v16);
    if ( !*((_BYTE *)v4 + 24) )
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
    v4 += 4;
    if ( v4 == &v181 )
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
        0x37Cu,
        v13,
        v14);
      v9 = v15[0];
    }
    if ( v9 < 0 )
    {
      v12 = 892LL;
      goto LABEL_48;
    }
  }
  v8 = v16;
LABEL_26:
  v9 = PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowGroupingOperations>::PublishPrivilegedOperations(
         (__int64)this + 120,
         v8,
         (_QWORD *)v4[1]);
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
      0x380u,
      v13,
      v14);
    v9 = v15[0];
  }
  if ( v9 >= 0 )
    goto LABEL_43;
  v12 = 896LL;
LABEL_48:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return (unsigned int)v9;
}
