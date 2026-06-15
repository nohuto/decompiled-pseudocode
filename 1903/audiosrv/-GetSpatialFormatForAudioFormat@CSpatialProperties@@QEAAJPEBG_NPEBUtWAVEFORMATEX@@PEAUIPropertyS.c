/*
 * XREFs of ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x1800017DC
 * Callers:
 *     ?GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18000170C (-GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@PEAUSpatialAud.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     BlockSpatialAudioRegistryGates @ 0x1800272F8 (BlockSpatialAudioRegistryGates.c)
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x180035318 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x18003540C (-InitSpatialTechList@CSpatialProperties@@AEAAJXZ.c)
 *     ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x180037648 (--0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z.c)
 *     IsSpatialOnlyFormat @ 0x180037FF8 (IsSpatialOnlyFormat.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18003823C (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z @ 0x1800385D4 (-GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180046948 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGKPEAU3@AEAK9999PEAU2@@Z @ 0x180067BB0 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 *     _alloca_probe @ 0x18006B870 (_alloca_probe.c)
 *     memcmp_0 @ 0x18006B8F7 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSpatialProperties::GetSpatialFormatForAudioFormat(
        __int64 a1,
        const WCHAR *a2,
        char a3,
        const struct tWAVEFORMATEX *a4,
        __int64 a5,
        __int64 a6,
        char *a7)
{
  const WCHAR *v9; // r12
  __int64 v11; // rsi
  __int64 v12; // rdx
  int AsUInt32With; // ebx
  int v14; // eax
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  __int64 v17; // rdx
  int v18; // r9d
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // r9
  __int64 v24; // r9
  int v25; // r10d
  char *v26; // rcx
  char v27; // di
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  int v30; // eax
  LPCGUID v31; // r8
  LPCGUID v32; // r9
  LPCGUID v33; // r8
  LPCGUID v34; // r9
  bool v35; // bl
  __int64 v36; // rax
  unsigned __int16 *p_wFormatTag; // rbx
  int v38; // edx
  __int64 v39; // r12
  int v40; // r9d
  GUID *v41; // rax
  const WCHAR *v42; // rdx
  LPCGUID v43; // r8
  LPCGUID v44; // r9
  unsigned int v45; // r15d
  const struct CSpatialAudioTech *TechnologyByID; // rdi
  __int64 v47; // rax
  char v48; // bl
  int v49; // eax
  int v50; // edi
  unsigned __int16 nChannels; // cx
  unsigned __int16 wBitsPerSample; // dx
  int v53; // r11d
  __int16 v54; // r10
  __int16 v55; // r9
  int v56; // edx
  __int16 v57; // r8
  LPCGUID v58; // r8
  LPCGUID v59; // r9
  unsigned int v60; // ecx
  LPCWSTR v61; // r9
  LPCGUID v62; // r8
  LPCGUID v63; // r9
  BOOL v64; // ecx
  __int64 v65; // rdi
  _QWORD *v66; // rcx
  char v68; // [rsp+48h] [rbp-D8h]
  bool v69; // [rsp+A0h] [rbp-80h]
  char v70; // [rsp+A1h] [rbp-7Fh] BYREF
  int v71; // [rsp+A4h] [rbp-7Ch] BYREF
  char v72; // [rsp+A8h] [rbp-78h] BYREF
  char v73; // [rsp+A9h] [rbp-77h] BYREF
  char v74; // [rsp+AAh] [rbp-76h] BYREF
  char v75; // [rsp+ABh] [rbp-75h] BYREF
  char v76; // [rsp+ACh] [rbp-74h] BYREF
  char v77; // [rsp+ADh] [rbp-73h] BYREF
  char v78; // [rsp+AEh] [rbp-72h] BYREF
  char v79[4]; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v80; // [rsp+B4h] [rbp-6Ch] BYREF
  int v81; // [rsp+B8h] [rbp-68h] BYREF
  unsigned int v82; // [rsp+BCh] [rbp-64h] BYREF
  int v83; // [rsp+C0h] [rbp-60h] BYREF
  int v84; // [rsp+C4h] [rbp-5Ch] BYREF
  unsigned int v85; // [rsp+C8h] [rbp-58h] BYREF
  __int16 v86; // [rsp+CCh] [rbp-54h] BYREF
  unsigned int v87; // [rsp+D0h] [rbp-50h] BYREF
  int v88; // [rsp+D4h] [rbp-4Ch] BYREF
  unsigned int v89; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v90; // [rsp+E0h] [rbp-40h]
  int v91; // [rsp+E8h] [rbp-38h] BYREF
  int v92; // [rsp+ECh] [rbp-34h] BYREF
  LPCWSTR pwsz; // [rsp+F0h] [rbp-30h]
  char *v94; // [rsp+F8h] [rbp-28h]
  __int64 v95; // [rsp+100h] [rbp-20h] BYREF
  int v96; // [rsp+108h] [rbp-18h] BYREF
  int v97; // [rsp+10Ch] [rbp-14h] BYREF
  int v98; // [rsp+110h] [rbp-10h] BYREF
  int v99; // [rsp+114h] [rbp-Ch]
  int v100; // [rsp+118h] [rbp-8h] BYREF
  int v101; // [rsp+11Ch] [rbp-4h] BYREF
  const struct tWAVEFORMATEX *v102; // [rsp+120h] [rbp+0h]
  __int64 v103; // [rsp+128h] [rbp+8h]
  int v104; // [rsp+130h] [rbp+10h] BYREF
  __int64 v105; // [rsp+138h] [rbp+18h] BYREF
  PROPVARIANT pvar; // [rsp+140h] [rbp+20h] BYREF
  __int64 v107; // [rsp+148h] [rbp+28h]
  __int64 v108; // [rsp+150h] [rbp+30h]
  _DWORD v109[2]; // [rsp+158h] [rbp+38h] BYREF
  __int64 v110; // [rsp+160h] [rbp+40h]
  PROPERTYKEY v111; // [rsp+170h] [rbp+50h] BYREF
  __int128 v112; // [rsp+190h] [rbp+70h] BYREF
  int v113; // [rsp+1A0h] [rbp+80h]
  __int64 v114; // [rsp+1B0h] [rbp+90h]
  __int64 v115; // [rsp+1B8h] [rbp+98h]
  __int64 v116; // [rsp+1C0h] [rbp+A0h]
  char v117[64]; // [rsp+1C8h] [rbp+A8h] BYREF
  char v118[72]; // [rsp+208h] [rbp+E8h] BYREF
  char v119[80]; // [rsp+250h] [rbp+130h] BYREF
  __int128 Buf2; // [rsp+2A0h] [rbp+180h] BYREF
  _BYTE v121[24]; // [rsp+2B0h] [rbp+190h]
  __int128 Buf1; // [rsp+2C8h] [rbp+1A8h] BYREF
  _BYTE v123[24]; // [rsp+2D8h] [rbp+1B8h]
  __int128 v124; // [rsp+2F0h] [rbp+1D0h] BYREF
  _OWORD v125[2]; // [rsp+300h] [rbp+1E0h]
  int v126; // [rsp+320h] [rbp+200h] BYREF
  char v127; // [rsp+324h] [rbp+204h]
  char v128; // [rsp+328h] [rbp+208h]
  __int128 v129; // [rsp+32Ch] [rbp+20Ch] BYREF
  char v130; // [rsp+33Ch] [rbp+21Ch] BYREF
  int v131; // [rsp+35Ch] [rbp+23Ch]
  int v132; // [rsp+360h] [rbp+240h]
  __int16 v133; // [rsp+364h] [rbp+244h]
  _BYTE v134[4]; // [rsp+370h] [rbp+250h] BYREF
  int v135; // [rsp+374h] [rbp+254h]
  char v136; // [rsp+378h] [rbp+258h] BYREF
  char v137; // [rsp+37Ah] [rbp+25Ah] BYREF
  char v138; // [rsp+37Ch] [rbp+25Ch] BYREF
  int v139; // [rsp+38Ch] [rbp+26Ch]
  GUID v140; // [rsp+390h] [rbp+270h] BYREF
  void *v141; // [rsp+3A0h] [rbp+280h] BYREF
  int v142; // [rsp+3A8h] [rbp+288h]
  int v143; // [rsp+3ACh] [rbp+28Ch]
  void *v144; // [rsp+3B0h] [rbp+290h]
  int v145; // [rsp+3B8h] [rbp+298h]
  int v146; // [rsp+3BCh] [rbp+29Ch]
  unsigned int *v147; // [rsp+3C0h] [rbp+2A0h]
  __int64 v148; // [rsp+3C8h] [rbp+2A8h]
  _BYTE *v149; // [rsp+3D0h] [rbp+2B0h]
  __int64 v150; // [rsp+3D8h] [rbp+2B8h]
  char *v151; // [rsp+3E0h] [rbp+2C0h]
  __int64 v152; // [rsp+3E8h] [rbp+2C8h]
  char *v153; // [rsp+3F0h] [rbp+2D0h]
  __int64 v154; // [rsp+3F8h] [rbp+2D8h]
  char *v155; // [rsp+400h] [rbp+2E0h]
  __int64 v156; // [rsp+408h] [rbp+2E8h]
  char *v157; // [rsp+410h] [rbp+2F0h]
  __int64 v158; // [rsp+418h] [rbp+2F8h]
  _BYTE *v159; // [rsp+420h] [rbp+300h]
  __int64 v160; // [rsp+428h] [rbp+308h]
  _BYTE *v161; // [rsp+430h] [rbp+310h]
  __int64 v162; // [rsp+438h] [rbp+318h]
  _BYTE *v163; // [rsp+440h] [rbp+320h]
  __int64 v164; // [rsp+448h] [rbp+328h]
  _BYTE *v165; // [rsp+450h] [rbp+330h]
  __int64 v166; // [rsp+458h] [rbp+338h]
  _BYTE *v167; // [rsp+460h] [rbp+340h]
  __int64 v168; // [rsp+468h] [rbp+348h]
  _BYTE *v169; // [rsp+470h] [rbp+350h]
  __int64 v170; // [rsp+478h] [rbp+358h]
  _BYTE *v171; // [rsp+480h] [rbp+360h]
  __int64 v172; // [rsp+488h] [rbp+368h]
  struct _EVENT_DATA_DESCRIPTOR v173; // [rsp+490h] [rbp+370h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v174; // [rsp+4A0h] [rbp+380h] BYREF
  EVENT_DATA_DESCRIPTOR v175; // [rsp+4B0h] [rbp+390h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v176; // [rsp+4D0h] [rbp+3B0h] BYREF
  char *v177; // [rsp+4E0h] [rbp+3C0h]
  __int64 v178; // [rsp+4E8h] [rbp+3C8h]
  char *v179; // [rsp+4F0h] [rbp+3D0h]
  __int64 v180; // [rsp+4F8h] [rbp+3D8h]
  __int128 *v181; // [rsp+500h] [rbp+3E0h]
  __int64 v182; // [rsp+508h] [rbp+3E8h]
  char *v183; // [rsp+510h] [rbp+3F0h]
  __int64 v184; // [rsp+518h] [rbp+3F8h]
  __int16 *v185; // [rsp+520h] [rbp+400h]
  __int64 v186; // [rsp+528h] [rbp+408h]
  int *v187; // [rsp+530h] [rbp+410h]
  __int64 v188; // [rsp+538h] [rbp+418h]
  GUID *v189; // [rsp+540h] [rbp+420h]
  __int64 v190; // [rsp+548h] [rbp+428h]
  int *v191; // [rsp+550h] [rbp+430h]
  __int64 v192; // [rsp+558h] [rbp+438h]
  unsigned int *v193; // [rsp+560h] [rbp+440h]
  __int64 v194; // [rsp+568h] [rbp+448h]
  _BYTE *v195; // [rsp+570h] [rbp+450h]
  __int64 v196; // [rsp+578h] [rbp+458h]
  int *v197; // [rsp+580h] [rbp+460h]
  __int64 v198; // [rsp+588h] [rbp+468h]
  int *v199; // [rsp+590h] [rbp+470h]
  __int64 v200; // [rsp+598h] [rbp+478h]
  char *v201; // [rsp+5A0h] [rbp+480h]
  __int64 v202; // [rsp+5A8h] [rbp+488h]
  char *v203; // [rsp+5B0h] [rbp+490h]
  __int64 v204; // [rsp+5B8h] [rbp+498h]
  char *v205; // [rsp+5C0h] [rbp+4A0h]
  __int64 v206; // [rsp+5C8h] [rbp+4A8h]
  int *v207; // [rsp+5D0h] [rbp+4B0h]
  __int64 v208; // [rsp+5D8h] [rbp+4B8h]
  char *v209; // [rsp+5E0h] [rbp+4C0h]
  __int64 v210; // [rsp+5E8h] [rbp+4C8h]
  char *v211; // [rsp+5F0h] [rbp+4D0h]
  __int64 v212; // [rsp+5F8h] [rbp+4D8h]
  EVENT_DATA_DESCRIPTOR v213; // [rsp+600h] [rbp+4E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v214; // [rsp+620h] [rbp+500h] BYREF
  char *v215; // [rsp+630h] [rbp+510h]
  __int64 v216; // [rsp+638h] [rbp+518h]
  struct _EVENT_DATA_DESCRIPTOR v217; // [rsp+640h] [rbp+520h] BYREF
  int *v218; // [rsp+650h] [rbp+530h]
  __int64 v219; // [rsp+658h] [rbp+538h]
  EVENT_DATA_DESCRIPTOR v220; // [rsp+660h] [rbp+540h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v221; // [rsp+680h] [rbp+560h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v222; // [rsp+690h] [rbp+570h] BYREF
  char *v223; // [rsp+6A0h] [rbp+580h]
  __int64 v224; // [rsp+6A8h] [rbp+588h]
  struct _EVENT_DATA_DESCRIPTOR v225; // [rsp+6B0h] [rbp+590h] BYREF
  int *v226; // [rsp+6C0h] [rbp+5A0h]
  __int64 v227; // [rsp+6C8h] [rbp+5A8h]
  EVENT_DATA_DESCRIPTOR v228; // [rsp+6D0h] [rbp+5B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v229; // [rsp+6F0h] [rbp+5D0h] BYREF
  int *v230; // [rsp+700h] [rbp+5E0h]
  __int64 v231; // [rsp+708h] [rbp+5E8h]
  EVENT_DATA_DESCRIPTOR v232; // [rsp+710h] [rbp+5F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v233; // [rsp+730h] [rbp+610h] BYREF
  __int64 *v234; // [rsp+740h] [rbp+620h]
  int v235; // [rsp+748h] [rbp+628h]
  int v236; // [rsp+74Ch] [rbp+62Ch]
  EVENT_DATA_DESCRIPTOR v237; // [rsp+750h] [rbp+630h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v238; // [rsp+770h] [rbp+650h] BYREF
  GUID *v239; // [rsp+780h] [rbp+660h]
  int v240; // [rsp+788h] [rbp+668h]
  int v241; // [rsp+78Ch] [rbp+66Ch]
  struct _EVENT_DATA_DESCRIPTOR v242; // [rsp+790h] [rbp+670h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+7A0h] [rbp+680h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+7C0h] [rbp+6A0h] BYREF
  EVENT_DATA_DESCRIPTOR v245; // [rsp+7D0h] [rbp+6B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v246; // [rsp+7F0h] [rbp+6D0h] BYREF
  _BYTE v247[6672]; // [rsp+800h] [rbp+6E0h] BYREF
  _BYTE v248[768]; // [rsp+2210h] [rbp+20F0h] BYREF
  _OWORD v249[369]; // [rsp+2510h] [rbp+23F0h] BYREF

  v114 = -2LL;
  v102 = a4;
  v9 = a2;
  pwsz = a2;
  v11 = a5;
  v90 = a5;
  v103 = a6;
  v115 = a6;
  v71 = 0;
  v85 = 10;
  v81 = -1;
  v83 = -1;
  v82 = -1;
  v89 = -1;
  v92 = -1;
  v69 = 0;
  memset_0(&v124, 0, 0x28uLL);
  v80 = 0;
  memset_0(&v126, 0, 0x48uLL);
  v84 = 0;
  v100 = 0;
  v140 = GUID_00000000_0000_0000_0000_000000000000;
  memset_0(v119, 0, 0x48uLL);
  memset_0(v248, 0, 0x1A10uLL);
  v105 = a5;
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  v88 = 2;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v116 = a1;
  *(_BYTE *)(a1 + 77) = 1;
  if ( !a7 )
    goto LABEL_4;
  memset_0(a7, 0, 0x48uLL);
  *(GUID *)(a7 + 12) = GUID_00000000_0000_0000_0000_000000000000;
  v14 = BlockSpatialAudioRegistryGates();
  *((_DWORD *)a7 + 16) = v14;
  if ( (v14 & 2) != 0 )
  {
    if ( v85 == 1 )
    {
      pvar = 0LL;
      v107 = 0LL;
      v108 = 0LL;
      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
             a5,
             &PKEY_Endpoint_SpatialNotAllowed,
             &pvar) < 0
        || !(_WORD)pvar
        || (_WORD)pvar == 11 && !(_WORD)v107 )
      {
        *((_DWORD *)a7 + 16) &= ~2u;
      }
      PropVariantClear(&pvar);
    }
    else
    {
      *((_DWORD *)a7 + 16) = v14 & 0xFFFFFFFD;
    }
  }
  if ( !a4 || !v9 || !a5 )
  {
LABEL_4:
    AsUInt32With = -2147467261;
    v71 = -2147467261;
    goto LABEL_166;
  }
  if ( a3 )
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&pDesc, v9);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017B293, v15, v16, 3u, &pData);
    }
    goto LABEL_164;
  }
  v111 = PKEY_AudioEndpoint_FormFactor;
  AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                   &v105,
                   &v111,
                   10LL,
                   &v85);
  v71 = AsUInt32With;
  if ( AsUInt32With >= 0 )
  {
    v112 = PKEY_Endpoint_PreferedPcmChannelCountForHrtf;
    v113 = 2;
    AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                     &v105,
                     &v112,
                     2LL,
                     &v88);
    v71 = AsUInt32With;
    if ( AsUInt32With >= 0 )
    {
      AsUInt32With = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
      v71 = AsUInt32With;
      if ( AsUInt32With >= 0 )
      {
        AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(
                         *(_QWORD *)(a1 + 56),
                         &v84);
        v71 = AsUInt32With;
        if ( AsUInt32With >= 0 )
        {
          AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 40LL))(
                           *(_QWORD *)(a1 + 56),
                           &v100);
          v71 = AsUInt32With;
          if ( AsUInt32With >= 0 )
          {
            v71 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 48) + 96LL))(
                    *(_QWORD *)(a1 + 48),
                    &v80);
            v99 = 8;
            if ( v71 >= 0 && v80 <= 8 )
              v71 = (*(__int64 (__fastcall **)(_QWORD, int *, _BYTE *, _QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(
                      *(_QWORD *)(a1 + 48),
                      &v126,
                      v247,
                      834 * v80);
            AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)v134, a4);
            if ( (unsigned int)hProvider > 4 )
            {
              TlgCreateWsz(&v176, v9);
              v70 = v126;
              v177 = &v70;
              v178 = 1LL;
              v72 = v131;
              v179 = &v72;
              v180 = 1LL;
              v181 = &v129;
              v182 = 16LL;
              v73 = v128;
              v183 = &v73;
              v184 = 1LL;
              v86 = v133;
              v185 = &v86;
              v186 = 2LL;
              v101 = v84;
              v187 = &v101;
              v188 = 4LL;
              v189 = &v140;
              v190 = 16LL;
              v191 = &v71;
              v192 = 4LL;
              v193 = &v80;
              v194 = 4LL;
              v195 = v134;
              v196 = 2LL;
              v96 = v139;
              v197 = &v96;
              v198 = 4LL;
              v97 = v135;
              v199 = &v97;
              v200 = 4LL;
              v201 = &v138;
              v202 = 16LL;
              v203 = &v136;
              v204 = 2LL;
              v205 = &v137;
              v206 = 2LL;
              v104 = v132;
              v207 = &v104;
              v208 = 4LL;
              v74 = v127;
              v209 = &v74;
              v210 = 1LL;
              v211 = &v130;
              v212 = 16LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017B107, v19, v20, 0x15u, &v175);
              v18 = v71;
            }
            v21 = 0;
            v87 = 0;
            if ( v18 >= 0 )
            {
              v22 = 0;
              do
              {
                if ( v22 >= v80 )
                  break;
                if ( (unsigned int)hProvider > 4 )
                {
                  v147 = &v87;
                  v148 = 4LL;
                  v23 = 834LL * v22;
                  v149 = &v247[v23 + 768];
                  v150 = 16LL;
                  v75 = v247[v23 + 784];
                  v151 = &v75;
                  v152 = 1LL;
                  v76 = v247[v23 + 788];
                  v153 = &v76;
                  v154 = 1LL;
                  v77 = v247[v23 + 792];
                  v155 = &v77;
                  v156 = 1LL;
                  v78 = v247[v23 + 796];
                  v157 = &v78;
                  v158 = 1LL;
                  v159 = &v247[v23 + 800];
                  v160 = 4LL;
                  v161 = &v247[v23 + 804];
                  v162 = 4LL;
                  v163 = &v247[v23 + 808];
                  v164 = 4LL;
                  v165 = &v247[v23 + 812];
                  v166 = 16LL;
                  v167 = &v247[v23 + 828];
                  v168 = 2LL;
                  v169 = &v247[v23 + 830];
                  v170 = 2LL;
                  v171 = &v247[v23 + 832];
                  v172 = 2LL;
                  TlgCreateWsz(&v173, (LPCWSTR)&v247[v23 + 512]);
                  TlgCreateWsz(&v174, (LPCWSTR)&v247[v24]);
                  v109[0] = 184549376;
                  v109[1] = 4;
                  v110 = 0LL;
                  v141 = off_1801B6488;
                  v142 = *(unsigned __int16 *)off_1801B6488;
                  v143 = v25;
                  v144 = &unk_18017B32E;
                  v145 = 267;
                  v146 = 1;
                  LODWORD(v94) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                  EtwEventWriteTransfer(qword_1801B64A0, v109, 0LL, 0LL, 17, &v141);
                  v18 = v71;
                  v21 = v87;
                }
                v87 = ++v21;
                v22 = v21;
              }
              while ( v18 >= 0 );
              v9 = pwsz;
            }
            if ( v84 || a4->wFormatTag != 0xFFFE )
            {
              v27 = 1;
            }
            else
            {
              v26 = (char *)&a4[1].nSamplesPerSec + 2;
              v27 = 1;
              LOBYTE(v17) = 1;
              if ( (unsigned __int8)IsSpatialOnlyFormat(v26, v17) )
              {
                if ( (unsigned int)hProvider > 2 )
                {
                  TlgCreateWsz(&v246, v9);
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017B2DD, v28, v29, 3u, &v245);
                }
                AsUInt32With = -2147024809;
                goto LABEL_43;
              }
              v18 = v71;
            }
            if ( v18 < 0 || v80 > 8 )
            {
              if ( (unsigned int)hProvider > 4 )
              {
                TlgCreateWsz(&v229, v9);
                v230 = &v71;
                v231 = 4LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017B00B, v31, v32, 4u, &v228);
              }
              v80 = 0;
              memset_0(&v126, 0, 0x48uLL);
              memset_0(v247, 0, sizeof(v247));
              v27 = 0;
            }
            else
            {
              if ( !v80 || *(_BYTE *)(a1 + 76) )
              {
                v30 = v131;
              }
              else
              {
                v30 = v131;
                if ( v131 != v126 )
                {
                  if ( !*(_DWORD *)(a1 + 164) || *(_DWORD *)(a1 + 104) )
                  {
                    v30 = v126;
                    v131 = v126;
                  }
                  else
                  {
                    v126 = v131;
                  }
                }
              }
              v69 = v30 != 0;
            }
            AsUInt32With = CSpatialProperties::InitSpatialTechList((CSpatialProperties *)a1);
            v71 = AsUInt32With;
            if ( AsUInt32With < 0 )
              goto LABEL_165;
            CSpatialAudioTechnologies::RegistryGates();
            if ( (unsigned int)g_ListOfSpatialTech > 8 )
            {
              AsUInt32With = -2147418113;
LABEL_43:
              v71 = AsUInt32With;
LABEL_165:
              v11 = v90;
              goto LABEL_166;
            }
            if ( (a7[64] & 3) != 0 )
            {
              if ( (unsigned int)hProvider > 4 )
              {
                TlgCreateWsz(&v233, v9);
                LODWORD(v95) = *((_DWORD *)a7 + 16);
                v234 = &v95;
                v235 = 4;
                v236 = 0;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017AFC6, v33, v34, 4u, &v232);
              }
              goto LABEL_164;
            }
            v35 = v69 || (a7[64] & 8) != 0;
            v36 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                    v117,
                    v103);
            v68 = v35;
            p_wFormatTag = &v102->wFormatTag;
            LOBYTE(v38) = v27;
            CSpatialProperties::EnumerateSpatialEncoders(
              a1,
              v38,
              (unsigned int)&v126,
              v80,
              (__int64)v247,
              v85,
              v84,
              0LL,
              (__int64)v102,
              v68,
              v36,
              (__int64)v9,
              v88,
              (__int64)v248,
              (__int64)&v81,
              (__int64)&v83,
              (__int64)&v82,
              (__int64)&v89,
              (__int64)&v92,
              (__int64)&v126);
            v39 = v89;
            if ( !v27 )
            {
              v69 = v89 != -1;
              if ( (unsigned int)hProvider > 4 )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
                {
                  TlgCreateWsz(&v238, pwsz);
                  if ( (_DWORD)v39 == v40 )
                    v41 = &GUID_00000000_0000_0000_0000_000000000000;
                  else
                    v41 = (GUID *)((char *)v249 + 834 * v39);
                  v239 = v41;
                  v240 = 16;
                  v241 = 0;
                  if ( (_DWORD)v39 == v40 )
                    v42 = L"<none>";
                  else
                    v42 = (const WCHAR *)&v248[834 * v39];
                  TlgCreateWsz(&v242, v42);
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017B0A8, v43, v44, 5u, &v237);
                }
              }
            }
            v70 = 1;
            v45 = v81;
            v12 = 0xFFFFFFFFLL;
            if ( v81 == -1 )
            {
              v45 = v39;
              v70 = 0;
            }
            v81 = v82;
            if ( v82 != -1 )
              *(_OWORD *)(a7 + 28) = *(_OWORD *)((char *)v249 + 834 * v82);
            if ( (_DWORD)v39 != -1 )
              *(_OWORD *)(a7 + 44) = *(_OWORD *)((char *)v249 + 834 * v39);
            if ( v45 == -1 )
            {
LABEL_164:
              AsUInt32With = v71;
              goto LABEL_165;
            }
            v82 = v83;
            while ( 1 )
            {
              v79[0] = 0;
              v98 = 0;
              v95 = 834LL * v45;
              v94 = (char *)v249 + v95;
              TechnologyByID = CSpatialAudioTechnologies::GetTechnologyByID(
                                 (CSpatialAudioTechnologies *)v249,
                                 (const struct _GUID *)((char *)v249 + v95));
              v47 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                      v118,
                      v103);
              v48 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *, _QWORD, _QWORD, unsigned __int16 *, __int64, int, int *, char *, __int128 *))(*(_QWORD *)TechnologyByID + 40LL))(
                      TechnologyByID,
                      v85,
                      0LL,
                      p_wFormatTag,
                      v47,
                      v88,
                      &v98,
                      v79,
                      &v124);
              v49 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *, LPCWSTR))(*(_QWORD *)TechnologyByID
                                                                                         + 32LL))(
                      TechnologyByID,
                      pwsz);
              v91 = v49;
              if ( !v48 || v49 < 0 )
              {
                if ( (unsigned int)hProvider > 4 )
                {
                  TlgCreateWsz(&v221, pwsz);
                  TlgCreateWsz(&v222, v61);
                  v223 = v94;
                  v224 = 16LL;
                  TlgCreateWsz(&v225, (LPCWSTR)&v248[v95]);
                  v226 = &v91;
                  v227 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017AEF7, v62, v63, 7u, &v220);
                }
                p_wFormatTag = &v102->wFormatTag;
                goto LABEL_135;
              }
              p_wFormatTag = &v102->wFormatTag;
              if ( v102->wFormatTag == 0xFFFE )
              {
                if ( v102->cbSize != 22
                  && (*(_QWORD *)((char *)&v102[1].nSamplesPerSec + 2) != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
                   || *(_QWORD *)&v102[1].wBitsPerSample != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4)
                  && (*(_QWORD *)((char *)&v102[1].nSamplesPerSec + 2) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
                   || *(_QWORD *)&v102[1].wBitsPerSample != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
                {
                  goto LABEL_133;
                }
                Buf1 = *(_OWORD *)&v102->wFormatTag;
                *(_OWORD *)v123 = *(_OWORD *)&v102->cbSize;
                *(_QWORD *)&v123[16] = *(_QWORD *)&v102[1].wBitsPerSample;
                *(_WORD *)v123 = 22;
                v50 = *(_DWORD *)&v123[4];
                v83 = (unsigned __int16)Buf1;
              }
              else
              {
                if ( v102->cbSize && ((v102->wFormatTag - 1) & 0xFFFD) != 0 )
                  goto LABEL_133;
                nChannels = v102->nChannels;
                if ( (unsigned __int16)(nChannels - 1) > 1u )
                  goto LABEL_133;
                wBitsPerSample = v102->wBitsPerSample;
                LODWORD(v39) = v89;
                if ( ((wBitsPerSample - (_WORD)v99) & 0xFFE7) != 0 )
                  goto LABEL_133;
                Buf1 = *(_OWORD *)&v102->wFormatTag;
                v83 = 65534;
                LOWORD(Buf1) = -2;
                *(_WORD *)v123 = 22;
                *(_WORD *)&v123[2] = wBitsPerSample;
                *(GUID *)&v123[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
                *(_DWORD *)&v123[8] = v102->wFormatTag;
                v50 = 4 - (nChannels != 1);
              }
              if ( (_WORD)v124 == 0xFFFE )
              {
                if ( LOWORD(v125[0]) == 22
                  || *(_OWORD *)((char *)v125 + 8) == *(_OWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71
                  || *(_OWORD *)((char *)v125 + 8) == *(_OWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71 )
                {
                  Buf2 = v124;
                  *(_OWORD *)v121 = v125[0];
                  *(_QWORD *)&v121[16] = *(_QWORD *)&v125[1];
                  *(_WORD *)v121 = 22;
                  v53 = DWORD1(v125[0]);
                  v54 = v124;
                  goto LABEL_112;
                }
              }
              else if ( (!LOWORD(v125[0]) || (((_WORD)v124 - 1) & 0xFFFD) == 0)
                     && (unsigned __int16)(WORD1(v124) - 1) <= 1u
                     && ((HIWORD(v124) - 8) & 0xFFE7) == 0 )
              {
                Buf2 = v124;
                v54 = -2;
                LOWORD(Buf2) = -2;
                *(_WORD *)v121 = 22;
                *(_WORD *)&v121[2] = HIWORD(v124);
                *(GUID *)&v121[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
                *(_DWORD *)&v121[8] = (unsigned __int16)v124;
                v53 = 4 - (WORD1(v124) != 1);
LABEL_112:
                if ( WORD1(Buf1) )
                {
                  v55 = WORD1(Buf2);
                }
                else
                {
                  v55 = 0;
                  WORD1(Buf2) = 0;
                  DWORD2(Buf2) = 0;
                  WORD6(Buf2) = 0;
                }
                if ( DWORD1(Buf1) )
                {
                  v56 = DWORD1(Buf2);
                }
                else
                {
                  v56 = 0;
                  *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
                }
                if ( HIWORD(Buf1) )
                {
                  v57 = HIWORD(Buf2);
                }
                else
                {
                  v57 = 0;
                  HIDWORD(Buf2) = 0;
                }
                *(_DWORD *)&v121[4] = v50 != 0 ? v53 : 0;
                if ( !(_WORD)v83 )
                {
                  v54 = 0;
                  LOWORD(Buf2) = 0;
                }
                if ( !v55 )
                {
                  WORD1(Buf1) = 0;
                  DWORD2(Buf1) = 0;
                  WORD6(Buf1) = 0;
                }
                if ( !v56 )
                  *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
                if ( !v57 )
                  HIDWORD(Buf1) = 0;
                *(_DWORD *)&v123[4] = (v50 != 0 ? v53 : 0) != 0 ? v50 : 0;
                if ( !v54 )
                  LOWORD(Buf1) = 0;
                if ( *(_OWORD *)&v123[8] == *(_OWORD *)&v121[8] && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
                {
                  v64 = v69 && !*(_BYTE *)(a1 + 76);
                  *(_DWORD *)a7 = v64;
                  *((_DWORD *)a7 + 15) = v69;
                  v12 = 834LL * v45;
                  *(_OWORD *)(a7 + 12) = *(_OWORD *)((char *)v249 + v12);
                  if ( v64 && (a7[64] & 4) == 0 && *(_DWORD *)((char *)&v249[1] + 834 * v45 + 8) )
                    *((_DWORD *)a7 + 17) = 1;
                  if ( v129 != *(_OWORD *)(a7 + 12) && v129 != *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 )
                    *(_OWORD *)(a7 + 28) = v129;
                  goto LABEL_164;
                }
              }
LABEL_133:
              if ( (unsigned int)hProvider > 4 )
              {
                TlgCreateWsz(&v214, pwsz);
                v215 = v94;
                v216 = 16LL;
                TlgCreateWsz(&v217, (LPCWSTR)&v248[v95]);
                v218 = &v91;
                v219 = 4LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017B041, v58, v59, 6u, &v213);
              }
LABEL_135:
              v60 = v82;
              v12 = 0xFFFFFFFFLL;
              if ( v82 == -1 || (v82 = -1, v45 == v60) )
              {
                if ( v81 == -1 )
                {
                  if ( v70 )
                  {
                    v70 = 0;
                    v45 = v92;
                    if ( (_DWORD)v39 != -1 )
                      v45 = v39;
                    v69 = v69 && (_DWORD)v39 != -1;
                  }
                  else
                  {
                    v45 = -1;
                  }
                }
                else
                {
                  v45 = v81;
                  v81 = -1;
                }
              }
              else
              {
                v45 = v60;
              }
              if ( v45 == -1 )
                goto LABEL_164;
            }
          }
        }
      }
    }
  }
LABEL_166:
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v65 = v103;
  v66 = *(_QWORD **)(v103 + 56);
  if ( v66 )
  {
    LOBYTE(v12) = v66 != (_QWORD *)v103;
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*v66 + 32LL))(v66, v12, *v66);
    *(_QWORD *)(v65 + 56) = 0LL;
  }
  return (unsigned int)AsUInt32With;
}
