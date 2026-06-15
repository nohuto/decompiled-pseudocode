/*
 * XREFs of ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800564A0
 * Callers:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180056E8C (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEBGAEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x180122F84 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEBGAEBU_tagpropertykey@@PEAUIPropertyStore@@PEA.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800352F0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     BlockSpatialAudioRegistryGates @ 0x18004C7C4 (BlockSpatialAudioRegistryGates.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGPEAU3@AEAK9999PEAU2@@Z @ 0x1800526B0 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180056038 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x1800562EC (-InitSpatialTechList@CSpatialProperties@@AEAAJXZ.c)
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x180056D00 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180056DE4 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x180056E2C (--0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _alloca_probe @ 0x180068810 (_alloca_probe.c)
 *     memcmp_0 @ 0x180068897 (memcmp_0.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800E2AB8 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18010C51C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x180120F64 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z.c)
 *     ?GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z @ 0x180124F70 (-GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSpatialProperties::SetSpatialAudioSettingsInternal(
        __int64 a1,
        const WCHAR *a2,
        unsigned __int8 a3,
        __int64 a4,
        struct tWAVEFORMATEX *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r13
  const WCHAR *v9; // r12
  __int64 v11; // r15
  __int64 v12; // r8
  int v13; // eax
  char v14; // si
  unsigned int v15; // edi
  int v16; // r9d
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // r8d
  int v21; // eax
  bool v22; // r14
  char v23; // di
  int v24; // r12d
  __int64 v25; // rax
  const WCHAR *v26; // r14
  __int64 v27; // rdi
  char v28; // r15
  const GUID *Ptr_high; // r8
  __int64 v30; // r13
  const GUID *v31; // r9
  unsigned int v32; // r15d
  int v33; // r14d
  int v34; // edi
  bool v35; // al
  bool v36; // cf
  bool v37; // r8
  GUID *v38; // rcx
  GUID *v39; // rax
  GUID v40; // xmm1
  GUID *v41; // rax
  GUID *v42; // rax
  int v43; // edx
  int v44; // eax
  bool v45; // r14
  __int64 v46; // rdi
  __int64 v47; // r15
  __int64 v48; // rax
  int v49; // edi
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // r11
  LPCGUID v55; // r8
  LPCGUID v56; // r9
  UINT32 cData; // r10d
  __int64 v58; // r10
  __int64 v59; // r10
  LPCGUID v60; // r8
  LPCGUID v61; // r9
  LPCGUID v62; // r8
  LPCGUID v63; // r9
  UINT32 v64; // r11d
  int v65; // r11d
  GUID *v66; // rax
  const WCHAR *v67; // rdx
  LPCGUID v68; // r8
  LPCGUID v69; // r9
  const struct CSpatialAudioTech *TechnologyByID; // r12
  __int64 v71; // rax
  char v72; // r12
  __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // r14d
  __int16 Ptr; // di
  unsigned __int16 v78; // cx
  unsigned __int16 v79; // dx
  __int64 v80; // rcx
  __int64 v81; // rax
  int v82; // r10d
  __int16 v83; // r11
  __int16 v84; // r9
  __int16 v85; // dx
  __int64 v86; // rax
  int v87; // eax
  char v88; // al
  __int64 v89; // r12
  char v90; // al
  __int64 Reserved2; // rdx
  __int64 v92; // rax
  __int64 v93; // rax
  int v94; // r14d
  __int16 v95; // di
  __int16 v96; // cx
  __int64 v97; // rcx
  __int64 v98; // rax
  int v99; // r10d
  __int16 v100; // r11
  __int16 v101; // r9
  __int64 v102; // rax
  int v103; // eax
  char v104; // di
  __int64 v105; // rcx
  LPCGUID v106; // r8
  LPCGUID v107; // r9
  unsigned int v108; // eax
  LPCWSTR v109; // r10
  LPCGUID v110; // r8
  LPCGUID v111; // r9
  const WCHAR *v112; // r15
  LPCGUID v113; // r8
  LPCGUID v114; // r9
  unsigned int v115; // eax
  unsigned int v116; // ecx
  __int64 v117; // rcx
  LPCGUID v118; // r8
  LPCGUID v119; // r9
  UINT32 v120; // r10d
  __int64 v121; // rdi
  int v122; // eax
  LPCGUID v123; // r8
  LPCGUID v124; // r9
  LPCGUID v125; // r8
  LPCGUID v126; // r9
  __m128i v127; // xmm6
  __int64 v128; // rax
  __int64 v129; // rax
  LPCGUID v130; // r8
  LPCGUID v131; // r9
  LPCGUID v132; // r8
  LPCGUID v133; // r9
  __int64 v134; // [rsp+40h] [rbp-E0h]
  char v135; // [rsp+48h] [rbp-D8h]
  char v136; // [rsp+A0h] [rbp-80h] BYREF
  bool v137; // [rsp+A1h] [rbp-7Fh]
  char v138; // [rsp+A2h] [rbp-7Eh] BYREF
  char v139; // [rsp+A3h] [rbp-7Dh] BYREF
  char v140; // [rsp+A4h] [rbp-7Ch] BYREF
  _BYTE v141[3]; // [rsp+A5h] [rbp-7Bh] BYREF
  int AsUInt32With; // [rsp+A8h] [rbp-78h] BYREF
  int v143; // [rsp+ACh] [rbp-74h] BYREF
  char v144; // [rsp+B0h] [rbp-70h]
  char v145[7]; // [rsp+B1h] [rbp-6Fh] BYREF
  int v146; // [rsp+B8h] [rbp-68h] BYREF
  int v147; // [rsp+BCh] [rbp-64h] BYREF
  int v148; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v149; // [rsp+C4h] [rbp-5Ch] BYREF
  __int64 v150; // [rsp+C8h] [rbp-58h] BYREF
  int v151; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v152; // [rsp+D8h] [rbp-48h]
  int v153; // [rsp+E0h] [rbp-40h] BYREF
  _DWORD pwsz[3]; // [rsp+E4h] [rbp-3Ch] BYREF
  unsigned int v155; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v156; // [rsp+F8h] [rbp-28h] BYREF
  _BYTE *v157; // [rsp+100h] [rbp-20h] BYREF
  __int64 v158; // [rsp+108h] [rbp-18h] BYREF
  unsigned __int16 *v159; // [rsp+110h] [rbp-10h]
  __int64 v160; // [rsp+118h] [rbp-8h] BYREF
  __int64 v161; // [rsp+120h] [rbp+0h] BYREF
  __int64 v162; // [rsp+128h] [rbp+8h]
  __int64 v163; // [rsp+130h] [rbp+10h]
  __int64 v164; // [rsp+138h] [rbp+18h]
  struct tagPROPVARIANT v165; // [rsp+140h] [rbp+20h] BYREF
  _QWORD v166[4]; // [rsp+158h] [rbp+38h] BYREF
  PROPVARIANT pvar[2]; // [rsp+178h] [rbp+58h] BYREF
  _BYTE v168[24]; // [rsp+188h] [rbp+68h]
  GUID v169; // [rsp+1A0h] [rbp+80h] BYREF
  _BYTE v170[32]; // [rsp+1B0h] [rbp+90h] BYREF
  __int64 v171; // [rsp+1D0h] [rbp+B0h]
  _BYTE Buf2[64]; // [rsp+1E0h] [rbp+C0h] BYREF
  __int64 v173; // [rsp+220h] [rbp+100h]
  __int128 Buf1; // [rsp+230h] [rbp+110h] BYREF
  _OWORD v175[2]; // [rsp+240h] [rbp+120h] BYREF
  __int128 v176; // [rsp+260h] [rbp+140h]
  __int64 v177; // [rsp+270h] [rbp+150h]
  PROPERTYKEY v178; // [rsp+280h] [rbp+160h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2A0h] [rbp+180h] BYREF
  _BYTE v180[24]; // [rsp+2B0h] [rbp+190h] BYREF
  __int64 pDesc_8; // [rsp+2C8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v182; // [rsp+2D0h] [rbp+1B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v183; // [rsp+2E0h] [rbp+1C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v184; // [rsp+2F0h] [rbp+1D0h] BYREF
  char *v185; // [rsp+300h] [rbp+1E0h]
  __int64 v186; // [rsp+308h] [rbp+1E8h]
  char *v187; // [rsp+310h] [rbp+1F0h]
  __int64 v188; // [rsp+318h] [rbp+1F8h]
  GUID *v189; // [rsp+320h] [rbp+200h]
  __int64 v190; // [rsp+328h] [rbp+208h]
  int *v191; // [rsp+330h] [rbp+210h]
  __int64 v192; // [rsp+338h] [rbp+218h]
  GUID *v193; // [rsp+340h] [rbp+220h]
  __int64 v194; // [rsp+348h] [rbp+228h]
  int *p_AsUInt32With; // [rsp+350h] [rbp+230h]
  __int64 v196; // [rsp+358h] [rbp+238h]
  int *v197; // [rsp+360h] [rbp+240h]
  __int64 v198; // [rsp+368h] [rbp+248h]
  PROPVARIANT *v199; // [rsp+370h] [rbp+250h]
  __int64 v200; // [rsp+378h] [rbp+258h]
  __int64 *v201; // [rsp+380h] [rbp+260h]
  __int64 v202; // [rsp+388h] [rbp+268h]
  struct _EVENT_DATA_DESCRIPTOR v203; // [rsp+390h] [rbp+270h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v204; // [rsp+3A0h] [rbp+280h] BYREF
  PROPVARIANT *v205; // [rsp+3B0h] [rbp+290h]
  __int64 v206; // [rsp+3B8h] [rbp+298h]
  char *v207; // [rsp+3C0h] [rbp+2A0h]
  __int64 v208; // [rsp+3C8h] [rbp+2A8h]
  unsigned int *v209; // [rsp+3D0h] [rbp+2B0h]
  __int64 v210; // [rsp+3D8h] [rbp+2B8h]
  char *v211; // [rsp+3E0h] [rbp+2C0h]
  __int64 v212; // [rsp+3E8h] [rbp+2C8h]
  __int64 *v213; // [rsp+3F0h] [rbp+2D0h]
  __int64 v214; // [rsp+3F8h] [rbp+2D8h]
  _DWORD *v215; // [rsp+400h] [rbp+2E0h]
  __int64 v216; // [rsp+408h] [rbp+2E8h]
  char *v217; // [rsp+410h] [rbp+2F0h]
  __int64 v218; // [rsp+418h] [rbp+2F8h]
  char *v219; // [rsp+420h] [rbp+300h]
  __int64 v220; // [rsp+428h] [rbp+308h]
  __int64 v221[96]; // [rsp+430h] [rbp+310h] BYREF
  _BYTE v222[5904]; // [rsp+730h] [rbp+610h] BYREF
  _BYTE Src[6672]; // [rsp+1E40h] [rbp+1D20h] BYREF

  v166[1] = -2LL;
  v7 = a4;
  v162 = a4;
  v9 = a2;
  *(_QWORD *)&pwsz[1] = a2;
  v152 = (__int64)a5;
  v163 = a6;
  v166[2] = a6;
  v164 = a7;
  AsUInt32With = 0;
  v149 = 0;
  LODWORD(v160) = -1;
  v158 = 0xFFFFFFFFLL;
  LODWORD(v161) = -1;
  v150 = 0xAFFFFFFFFLL;
  pwsz[0] = -1;
  v137 = 0;
  v144 = 0;
  v141[0] = 0;
  memset_0(v170, 0, 0x28uLL);
  v145[0] = 0;
  v146 = 0;
  memset_0(&Buf1, 0, 0x48uLL);
  v148 = 0;
  v153 = 0;
  v169 = GUID_00000000_0000_0000_0000_000000000000;
  memset_0(Buf2, 0, 0x48uLL);
  memset_0(v221, 0, 0x1A10uLL);
  v11 = 0LL;
  v159 = 0LL;
  v166[0] = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  memset(&v165, 0, sizeof(v165));
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v166[3] = a1;
  v178 = PKEY_AudioEndpoint_FormFactor;
  AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                   v166,
                   &v178,
                   v12,
                   (char *)&v150 + 4);
  if ( AsUInt32With >= 0 )
  {
    if ( HIDWORD(v150) != 9
      && (*(int (__fastcall **)(__int64, const PROPERTYKEY *, struct tagPROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
           v7,
           &PKEY_AudioEngine_OEMFormat,
           &v165) >= 0
      && v165.vt == 65 )
    {
      if ( (unsigned int)IsValidWfxBlob(&v165) )
      {
        v53 = (__int64)v165.bstrblobVal.pData;
        if ( (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)v165.bstrblobVal.pData) >= 0 )
        {
          v11 = v53;
          v159 = (unsigned __int16 *)v53;
          if ( a5 )
          {
            v11 = v53 & -(__int64)((unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)v53, a5) != 0);
            v159 = (unsigned __int16 *)v11;
          }
        }
      }
    }
    AsUInt32With = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
    if ( AsUInt32With >= 0 )
    {
      AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(
                       *(_QWORD *)(a1 + 56),
                       &v148);
      if ( AsUInt32With >= 0 )
      {
        AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 40LL))(
                         *(_QWORD *)(a1 + 56),
                         &v153);
        if ( AsUInt32With >= 0 )
        {
          AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**(_QWORD **)(a1 + 56) + 48LL))(
                           *(_QWORD *)(a1 + 56),
                           &v169);
          if ( AsUInt32With >= 0 )
          {
            v178.fmtid = v169;
            v13 = a3;
            v14 = 1;
            if ( v148 )
              v13 = 1;
            v151 = v13;
            AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 48) + 96LL))(
                             *(_QWORD *)(a1 + 48),
                             &v146);
            v15 = v146;
            if ( AsUInt32With >= 0 && (unsigned int)v146 <= 8 )
            {
              AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _BYTE *, _QWORD))(**(_QWORD **)(a1 + 48)
                                                                                            + 104LL))(
                               *(_QWORD *)(a1 + 48),
                               &Buf1,
                               Src,
                               (unsigned int)(834 * v146));
              v15 = v146;
            }
            AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)pvar, a5);
            v17 = (unsigned int)hProvider;
            if ( (unsigned int)hProvider > 4 )
            {
              TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v180[16], v9);
              v138 = Buf1;
              v182.Ptr = (ULONGLONG)&v138;
              *(_QWORD *)&v182.Size = 1LL;
              v140 = BYTE12(v176);
              v183.Ptr = (ULONGLONG)&v140;
              *(_QWORD *)&v183.Size = 1LL;
              v184.Ptr = (ULONGLONG)&Buf1 + 12;
              *(_QWORD *)&v184.Size = 16LL;
              v139 = BYTE8(Buf1);
              v185 = &v139;
              v186 = 1LL;
              LOWORD(v147) = WORD2(v177);
              v187 = (char *)&v147;
              v188 = 2LL;
              *(_WORD *)&v145[3] = v148;
              v189 = (GUID *)&v145[3];
              v190 = 2LL;
              LOWORD(v143) = WORD2(v150);
              v191 = &v143;
              v192 = 2LL;
              v193 = &v169;
              v194 = 16LL;
              p_AsUInt32With = &AsUInt32With;
              v196 = v54;
              v197 = &v146;
              v198 = v54;
              v199 = pvar;
              v200 = 2LL;
              LODWORD(v156) = *(_DWORD *)&v168[12];
              v201 = &v156;
              v202 = v54;
              LODWORD(v157) = HIDWORD(pvar[0]);
              v203.Ptr = (ULONGLONG)&v157;
              *(_QWORD *)&v203.Size = v54;
              v204.Ptr = (ULONGLONG)&pvar[1] + 4;
              *(_QWORD *)&v204.Size = 16LL;
              v205 = &pvar[1];
              v206 = 2LL;
              v207 = (char *)&pvar[1] + 2;
              v208 = 2LL;
              v155 = v177;
              v209 = &v155;
              v210 = v54;
              v136 = BYTE4(Buf1);
              v211 = &v136;
              v212 = 1LL;
              v213 = (__int64 *)((char *)v175 + 12);
              v214 = 16LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801773D2, v55, v56, cData, &pData);
              v16 = AsUInt32With;
              v15 = v146;
              v17 = (unsigned int)hProvider;
            }
            v18 = 0;
            v143 = 0;
            if ( v16 < 0 )
              goto LABEL_314;
            v19 = 0;
            v20 = 0;
            do
            {
              if ( v19 >= v15 )
                break;
              if ( v17 > 4 )
              {
                *(_QWORD *)&v180[16] = &v143;
                pDesc_8 = 4LL;
                v58 = 834LL * v20;
                v182.Ptr = (ULONGLONG)&Src[v58 + 768];
                *(_QWORD *)&v182.Size = 16LL;
                v136 = Src[v58 + 784];
                v183.Ptr = (ULONGLONG)&v136;
                *(_QWORD *)&v183.Size = 1LL;
                v139 = Src[v58 + 788];
                v184.Ptr = (ULONGLONG)&v139;
                *(_QWORD *)&v184.Size = 1LL;
                v140 = Src[v58 + 792];
                v185 = &v140;
                v186 = 1LL;
                v138 = Src[v58 + 796];
                v187 = &v138;
                v188 = 1LL;
                v189 = (GUID *)&Src[v58 + 800];
                v190 = 4LL;
                v191 = (int *)&Src[v58 + 804];
                v192 = 4LL;
                v193 = (GUID *)&Src[v58 + 808];
                v194 = 4LL;
                p_AsUInt32With = (int *)&Src[v58 + 812];
                v196 = 16LL;
                v197 = (int *)&Src[v58 + 828];
                v198 = 2LL;
                v199 = (PROPVARIANT *)&Src[v58 + 830];
                v200 = 2LL;
                v201 = (__int64 *)&Src[v58 + 832];
                v202 = 2LL;
                TlgCreateWsz(&v203, (LPCWSTR)&Src[v58 + 512]);
                TlgCreateWsz(&v204, (LPCWSTR)&Src[v59]);
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180177560, v60, v61, 0x11u, &pData);
                v16 = AsUInt32With;
                v15 = v146;
                v18 = v143;
                v17 = (unsigned int)hProvider;
              }
              v143 = ++v18;
              v19 = v18;
              v20 = v18;
            }
            while ( v16 >= 0 );
            if ( v16 < 0 || v15 > 8 )
            {
LABEL_314:
              if ( !*(_BYTE *)(a1 + 73) )
              {
                AsUInt32With = 0;
                goto LABEL_80;
              }
              if ( v17 > 4 )
              {
                TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v180[16], v9);
                v182.Ptr = (ULONGLONG)&AsUInt32With;
                *(_QWORD *)&v182.Size = 4LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180175DDF, v62, v63, v64, &pData);
              }
              v146 = 0;
              memset_0(&Buf1, 0, 0x48uLL);
              memset_0(Src, 0, sizeof(Src));
              v22 = v137;
            }
            else
            {
              if ( !*(_BYTE *)(a1 + 6852) )
              {
                *(_BYTE *)(a1 + 6852) = 1;
                *(_OWORD *)(a1 + 104) = Buf1;
                *(_OWORD *)(a1 + 120) = v175[0];
                *(_OWORD *)(a1 + 136) = v175[1];
                *(_OWORD *)(a1 + 152) = v176;
                *(_QWORD *)(a1 + 168) = v177;
                *(_DWORD *)(a1 + 176) = v15;
                memcpy_0((void *)(a1 + 180), Src, 834LL * v15);
              }
              if ( !v15 || *(_BYTE *)(a1 + 76) )
              {
                v21 = HIDWORD(v176);
              }
              else
              {
                v21 = HIDWORD(v176);
                if ( HIDWORD(v176) != (_DWORD)Buf1 )
                {
                  if ( !*(_DWORD *)(a1 + 164) || *(_DWORD *)(a1 + 104) )
                  {
                    v21 = Buf1;
                    HIDWORD(v176) = Buf1;
                  }
                  else
                  {
                    LODWORD(Buf1) = HIDWORD(v176);
                  }
                }
              }
              v22 = v21 != 0;
              v137 = v21 != 0;
              v145[0] = 1;
            }
            AsUInt32With = CSpatialProperties::InitSpatialTechList((CSpatialProperties *)a1);
            v23 = 0;
            if ( AsUInt32With >= 0 )
            {
              CSpatialAudioTechnologies::RegistryGates();
              if ( g_ListOfSpatialTech[0] > 8u )
              {
                AsUInt32With = -2147418113;
                goto LABEL_80;
              }
              v24 = BlockSpatialAudioRegistryGates();
              v147 = v24;
              if ( v22 || (v24 & 8) != 0 )
                v23 = 1;
              v25 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                      &pData,
                      v163);
              v26 = *(const WCHAR **)&pwsz[1];
              v135 = v23;
              v134 = v11;
              v27 = v152;
              v28 = v145[0];
              v149 = CSpatialProperties::EnumerateSpatialEncoders(
                       (EVENT_DATA_DESCRIPTOR *)a1,
                       v145[0],
                       (__int64)&Buf1,
                       v146,
                       (CSpatialAudioTechnologies *)Src,
                       HIDWORD(v150),
                       v148,
                       v152,
                       v134,
                       v135,
                       v25,
                       *(const WCHAR **)&pwsz[1],
                       (__int64)v221,
                       (unsigned int *)&v160,
                       (unsigned int *)&v158,
                       (unsigned int *)&v161,
                       (__int64)&v150,
                       (__int64)pwsz,
                       (__int64)&Buf1);
              v30 = (unsigned int)v150;
              v31 = 0LL;
              if ( !v28 )
              {
                v137 = (_DWORD)v150 != -1;
                if ( (unsigned int)hProvider > 4 )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
                  {
                    TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v180[16], v26);
                    if ( (_DWORD)v30 == v65 )
                      v66 = &GUID_00000000_0000_0000_0000_000000000000;
                    else
                      v66 = (GUID *)&v222[834 * v30];
                    v182.Ptr = (ULONGLONG)v66;
                    *(_QWORD *)&v182.Size = 16LL;
                    if ( (_DWORD)v30 == v65 )
                      v67 = L"<none>";
                    else
                      v67 = (const WCHAR *)v221 + 417 * v30;
                    TlgCreateWsz(&v183, v67);
                    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180175E6A, v68, v69, 5u, &pData);
                    v31 = 0LL;
                  }
                }
              }
              v138 = 1;
              v32 = v160;
              if ( (_DWORD)v160 == -1 )
              {
                v32 = v30;
                v138 = (char)v31;
                if ( (_DWORD)v30 == -1 )
                {
                  v33 = v158;
                  v34 = v161;
                  v35 = v137;
                  goto LABEL_40;
                }
              }
              v33 = v158;
              v143 = v158;
              *(_DWORD *)&v145[3] = v161;
              while ( 1 )
              {
                v136 = (char)v31;
                v155 = (unsigned int)v31;
                v156 = 834LL * v32;
                v157 = &v222[v156];
                TechnologyByID = CSpatialAudioTechnologies::GetTechnologyByID(
                                   (CSpatialAudioTechnologies *)v222,
                                   (const struct _GUID *)&v222[v156]);
                v160 = (__int64)TechnologyByID;
                v71 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                        &pData,
                        v163);
                v72 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *, _QWORD, __int64, unsigned __int16 *, __int64, unsigned int *, char *, _BYTE *))(*(_QWORD *)TechnologyByID + 40LL))(
                        TechnologyByID,
                        HIDWORD(v150),
                        v27,
                        v159,
                        v71,
                        &v155,
                        &v136,
                        v170);
                v73 = 0LL;
                if ( v159 )
                {
                  v73 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
                  Ptr_high = *(const GUID **)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
                  if ( *v159 == 0xFFFE )
                  {
                    if ( v159[8] != 22 )
                    {
                      v74 = *((_QWORD *)v159 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
                      if ( !v74 )
                        v74 = *((_QWORD *)v159 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
                      if ( v74 )
                      {
                        v75 = *((_QWORD *)v159 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                        if ( !v75 )
                          v75 = *((_QWORD *)v159 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                        if ( v75 )
                          goto LABEL_185;
                      }
                    }
                    pData = *(EVENT_DATA_DESCRIPTOR *)v159;
                    *(_OWORD *)v180 = *((_OWORD *)v159 + 1);
                    *(_QWORD *)&v180[16] = *((_QWORD *)v159 + 4);
                    *(_WORD *)v180 = 22;
                    v76 = *(_DWORD *)&v180[4];
                    Ptr = pData.Ptr;
                  }
                  else
                  {
                    if ( v159[8] && ((*v159 - 1) & 0xFFFD) != 0 )
                      goto LABEL_185;
                    v78 = v159[1];
                    if ( (unsigned __int16)(v78 - 1) > 1u )
                      goto LABEL_185;
                    v79 = v159[7];
                    LODWORD(v30) = v150;
                    if ( ((v79 - 8) & 0xFFE7) != 0 )
                      goto LABEL_185;
                    pData = *(EVENT_DATA_DESCRIPTOR *)v159;
                    Ptr = -2;
                    LOWORD(pData.Ptr) = -2;
                    *(_WORD *)v180 = 22;
                    *(_WORD *)&v180[2] = v79;
                    *(GUID *)&v180[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
                    *(_DWORD *)&v180[8] = *v159;
                    v76 = 4 - (v78 != 1);
                  }
                  if ( *(_WORD *)v170 == 0xFFFE )
                  {
                    if ( *(_WORD *)&v170[16] != 22 )
                    {
                      v80 = *(_QWORD *)&v170[24] - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
                      if ( *(_QWORD *)&v170[24] == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 )
                        v80 = v171 - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
                      v73 = 0LL;
                      if ( v80 )
                      {
                        v81 = *(_QWORD *)&v170[24] - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                        if ( *(_QWORD *)&v170[24] == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 )
                          v81 = v171 - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                        if ( v81 )
                        {
LABEL_184:
                          v27 = v152;
                          v33 = v143;
LABEL_185:
                          v88 = 1;
                          goto LABEL_171;
                        }
                      }
                    }
                    *(_OWORD *)pvar = *(_OWORD *)v170;
                    *(_OWORD *)v168 = *(_OWORD *)&v170[16];
                    *(_QWORD *)&v168[16] = v171;
                    *(_WORD *)v168 = 22;
                    v82 = *(_DWORD *)&v170[20];
                    v83 = *(_WORD *)v170;
                  }
                  else
                  {
                    v73 = *(unsigned __int16 *)&v170[16];
                    if ( *(_WORD *)&v170[16] && ((*(_WORD *)v170 - 1) & 0xFFFD) != 0 )
                      goto LABEL_184;
                    if ( (unsigned __int16)(*(_WORD *)&v170[2] - 1) > 1u )
                      goto LABEL_184;
                    Ptr_high = (const GUID *)*(unsigned __int16 *)&v170[14];
                    if ( ((*(_WORD *)&v170[14] - 8) & 0xFFE7) != 0 )
                      goto LABEL_184;
                    *(_OWORD *)pvar = *(_OWORD *)v170;
                    v83 = -2;
                    LOWORD(pvar[0]) = -2;
                    *(_WORD *)v168 = 22;
                    *(_WORD *)&v168[2] = *(_WORD *)&v170[14];
                    *(GUID *)&v168[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
                    *(_DWORD *)&v168[8] = *(unsigned __int16 *)v170;
                    v82 = 4 - (*(_WORD *)&v170[2] != 1);
                  }
                  if ( WORD1(pData.Ptr) )
                  {
                    v84 = WORD1(pvar[0]);
                  }
                  else
                  {
                    v84 = 0;
                    WORD1(pvar[0]) = 0;
                    LODWORD(pvar[1]) = 0;
                    WORD2(pvar[1]) = 0;
                  }
                  if ( HIDWORD(pData.Ptr) )
                  {
                    Ptr_high = (const GUID *)HIDWORD(pvar[0]);
                  }
                  else
                  {
                    Ptr_high = 0LL;
                    *(PROPVARIANT *)((char *)pvar + 4) = 0LL;
                  }
                  if ( pData.Reserved2 )
                  {
                    v85 = HIWORD(pvar[1]);
                  }
                  else
                  {
                    v85 = 0;
                    HIDWORD(pvar[1]) = 0;
                  }
                  *(_DWORD *)&v168[4] = v76 != 0 ? v82 : 0;
                  if ( !Ptr )
                  {
                    v83 = 0;
                    LOWORD(pvar[0]) = 0;
                  }
                  if ( v84 )
                  {
                    v73 = 0LL;
                  }
                  else
                  {
                    v73 = 0LL;
                    WORD1(pData.Ptr) = 0;
                    pData.Size = 0;
                    LOWORD(pData.Reserved) = 0;
                  }
                  if ( !(_DWORD)Ptr_high )
                    *(ULONGLONG *)((char *)&pData.Ptr + 4) = 0LL;
                  if ( !v85 )
                    pData.Reserved = 0;
                  *(_DWORD *)&v180[4] = (v76 != 0 ? v82 : 0) != 0 ? v76 : 0;
                  if ( !v83 )
                    LOWORD(pData.Ptr) = 0;
                  v86 = *(_QWORD *)&v180[8] - *(_QWORD *)&v168[8];
                  if ( *(_QWORD *)&v180[8] == *(_QWORD *)&v168[8] )
                    v86 = *(_QWORD *)&v180[16] - *(_QWORD *)&v168[16];
                  if ( v86 )
                    goto LABEL_184;
                  v87 = memcmp_0(&pData, pvar, 0x28uLL);
                  v73 = 0LL;
                  v33 = v143;
                  v27 = v152;
                  if ( v87 )
                    goto LABEL_185;
                }
                v88 = 0;
LABEL_171:
                if ( !v72
                  || v88
                  || (v89 = v160,
                      v90 = (*(__int64 (__fastcall **)(__int64, _QWORD, const GUID *, __int64))(*(_QWORD *)v160 + 32LL))(
                              v160,
                              *(_QWORD *)&pwsz[1],
                              Ptr_high,
                              v73),
                      v31 = 0LL,
                      !v90) )
                {
                  if ( (unsigned int)hProvider > 4 )
                  {
                    TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v180[16], *(LPCWSTR *)&pwsz[1]);
                    TlgCreateWsz(&v182, v109);
                    v183.Ptr = (ULONGLONG)v157;
                    *(_QWORD *)&v183.Size = 16LL;
                    TlgCreateWsz(&v184, (LPCWSTR)((char *)v221 + v156));
                    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180175CDD, v110, v111, 6u, &pData);
                  }
                  v31 = 0LL;
                  goto LABEL_243;
                }
                if ( v27 )
                {
                  Ptr_high = *(const GUID **)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
                  if ( *(_WORD *)v27 == 0xFFFE )
                  {
                    Reserved2 = 22LL;
                    if ( *(_WORD *)(v27 + 16) != 22 )
                    {
                      v92 = *(_QWORD *)(v27 + 24) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
                      if ( !v92 )
                        v92 = *(_QWORD *)(v27 + 32) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
                      if ( v92 )
                      {
                        v93 = *(_QWORD *)(v27 + 24) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                        if ( !v93 )
                          v93 = *(_QWORD *)(v27 + 32) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                        if ( v93 )
                          goto LABEL_237;
                      }
                    }
                    *(_OWORD *)pvar = *(_OWORD *)v27;
                    *(_OWORD *)v168 = *(_OWORD *)(v27 + 16);
                    *(_QWORD *)&v168[16] = *(_QWORD *)(v27 + 32);
                    *(_WORD *)v168 = 22;
                    v94 = *(_DWORD *)&v168[4];
                    v95 = (__int16)pvar[0];
                  }
                  else
                  {
                    if ( *(_WORD *)(v27 + 16) && ((*(_WORD *)v27 - 1) & 0xFFFD) != 0 )
                      goto LABEL_237;
                    v96 = *(_WORD *)(v27 + 2);
                    if ( (unsigned __int16)(v96 - 1) > 1u )
                      goto LABEL_237;
                    Reserved2 = *(unsigned __int16 *)(v27 + 14);
                    if ( (((_WORD)Reserved2 - 8) & 0xFFE7) != 0 )
                      goto LABEL_237;
                    *(_OWORD *)pvar = *(_OWORD *)v27;
                    v95 = -2;
                    LOWORD(pvar[0]) = -2;
                    *(_WORD *)v168 = 22;
                    *(_WORD *)&v168[2] = Reserved2;
                    *(GUID *)&v168[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
                    *(_DWORD *)&v168[8] = *(unsigned __int16 *)v152;
                    v94 = 4 - (v96 != 1);
                  }
                  Reserved2 = *(unsigned __int16 *)v170;
                  if ( *(_WORD *)v170 != 0xFFFE )
                  {
                    if ( (!*(_WORD *)&v170[16] || ((*(_WORD *)v170 - 1) & 0xFFFD) == 0)
                      && (unsigned __int16)(*(_WORD *)&v170[2] - 1) <= 1u )
                    {
                      Ptr_high = (const GUID *)*(unsigned __int16 *)&v170[14];
                      if ( ((*(_WORD *)&v170[14] - 8) & 0xFFE7) == 0 )
                      {
                        pData = *(EVENT_DATA_DESCRIPTOR *)v170;
                        v100 = -2;
                        LOWORD(pData.Ptr) = -2;
                        *(_WORD *)v180 = 22;
                        *(_WORD *)&v180[2] = *(_WORD *)&v170[14];
                        *(GUID *)&v180[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
                        *(_DWORD *)&v180[8] = *(unsigned __int16 *)v170;
                        v99 = 4 - (*(_WORD *)&v170[2] != 1);
LABEL_205:
                        if ( WORD1(pvar[0]) )
                        {
                          v101 = WORD1(pData.Ptr);
                        }
                        else
                        {
                          v101 = 0;
                          WORD1(pData.Ptr) = 0;
                          pData.Size = 0;
                          LOWORD(pData.Reserved) = 0;
                        }
                        if ( HIDWORD(pvar[0]) )
                        {
                          Ptr_high = (const GUID *)HIDWORD(pData.Ptr);
                        }
                        else
                        {
                          Ptr_high = 0LL;
                          *(ULONGLONG *)((char *)&pData.Ptr + 4) = 0LL;
                        }
                        if ( HIWORD(pvar[1]) )
                        {
                          Reserved2 = pData.Reserved2;
                        }
                        else
                        {
                          Reserved2 = 0LL;
                          pData.Reserved = 0;
                        }
                        *(_DWORD *)&v180[4] = v94 != 0 ? v99 : 0;
                        if ( !v95 )
                        {
                          v100 = 0;
                          LOWORD(pData.Ptr) = 0;
                        }
                        if ( v101 )
                        {
                          v31 = 0LL;
                        }
                        else
                        {
                          v31 = 0LL;
                          WORD1(pvar[0]) = 0;
                          LODWORD(pvar[1]) = 0;
                          WORD2(pvar[1]) = 0;
                        }
                        if ( !(_DWORD)Ptr_high )
                          *(PROPVARIANT *)((char *)pvar + 4) = 0LL;
                        if ( !(_WORD)Reserved2 )
                          HIDWORD(pvar[1]) = 0;
                        *(_DWORD *)&v168[4] = (v94 != 0 ? v99 : 0) != 0 ? v94 : 0;
                        if ( !v100 )
                          LOWORD(pvar[0]) = 0;
                        v102 = *(_QWORD *)&v168[8] - *(_QWORD *)&v180[8];
                        if ( *(_QWORD *)&v168[8] == *(_QWORD *)&v180[8] )
                          v102 = *(_QWORD *)&v168[16] - *(_QWORD *)&v180[16];
                        if ( !v102 )
                        {
                          v103 = memcmp_0(pvar, &pData, 0x28uLL);
                          v31 = 0LL;
                          if ( !v103 )
                          {
                            v104 = 0;
LABEL_230:
                            v144 = 1;
                            v141[0] = (*(__int64 (__fastcall **)(__int64, __int64, const GUID *, _QWORD))(*(_QWORD *)v89 + 48LL))(
                                        v89,
                                        Reserved2,
                                        Ptr_high,
                                        0LL);
                            v33 = v32;
                            v35 = v137;
                            v31 = 0LL;
                            if ( v137 && !*(_BYTE *)(a1 + 76) )
                            {
                              if ( v104 )
                              {
                                v105 = v164;
                                *(_OWORD *)v164 = *(_OWORD *)v170;
                                *(_OWORD *)(v105 + 16) = *(_OWORD *)&v170[16];
                                *(_QWORD *)(v105 + 32) = v171;
                              }
                              HIDWORD(v158) = v145[0] && DWORD2(Buf1);
                            }
LABEL_263:
                            v24 = v147;
                            v34 = *(_DWORD *)&v145[3];
LABEL_40:
                            if ( (unsigned int)hProvider > 5 )
                            {
                              v151 = v34;
                              *(_QWORD *)&v180[16] = &v151;
                              pDesc_8 = 4LL;
                              v155 = v32;
                              v182.Ptr = (ULONGLONG)&v155;
                              *(_QWORD *)&v182.Size = 4LL;
                              LODWORD(v157) = v33;
                              v183.Ptr = (ULONGLONG)&v157;
                              *(_QWORD *)&v183.Size = 4LL;
                              LODWORD(v156) = v30;
                              v184.Ptr = (ULONGLONG)&v156;
                              *(_QWORD *)&v184.Size = 4LL;
                              v136 = v144;
                              v185 = &v136;
                              v186 = 1LL;
                              v139 = v35;
                              v187 = &v139;
                              v188 = 1LL;
                              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017734A, Ptr_high, v31, 8u, &pData);
                            }
                            v36 = v144 != 0;
                            v144 = -v144;
                            v37 = v36 && v137;
                            if ( v32 == -1 )
                            {
                              v38 = &GUID_00000000_0000_0000_0000_000000000000;
                              v39 = &GUID_00000000_0000_0000_0000_000000000000;
                            }
                            else
                            {
                              v39 = (GUID *)&v222[834 * v32];
                              v38 = &GUID_00000000_0000_0000_0000_000000000000;
                            }
                            v40 = *v39;
                            v169 = *v39;
                            if ( v33 == -1 )
                            {
                              v41 = &GUID_00000000_0000_0000_0000_000000000000;
                            }
                            else
                            {
                              v41 = (GUID *)&v222[834 * v33];
                              v38 = &GUID_00000000_0000_0000_0000_000000000000;
                            }
                            *(GUID *)&Buf2[12] = *v41;
                            if ( v34 == -1 )
                            {
                              v42 = &GUID_00000000_0000_0000_0000_000000000000;
                            }
                            else
                            {
                              v42 = (GUID *)&v222[834 * v34];
                              v38 = &GUID_00000000_0000_0000_0000_000000000000;
                            }
                            *(GUID *)&Buf2[28] = *v42;
                            if ( (_DWORD)v30 != -1 )
                              v38 = (GUID *)&v222[834 * (unsigned int)v30];
                            *(GUID *)&Buf2[44] = *v38;
                            if ( *(_BYTE *)(a1 + 76) || (v43 = 1, !v37) )
                              v43 = 0;
                            *(_DWORD *)Buf2 = v43;
                            *(_DWORD *)&Buf2[60] = v37;
                            *(_DWORD *)&Buf2[4] = v141[0];
                            if ( v145[0] )
                            {
                              v44 = DWORD2(Buf1);
                              goto LABEL_55;
                            }
                            if ( v32 == -1 )
                            {
                              v44 = *(_DWORD *)&Buf2[8];
                            }
                            else
                            {
                              v44 = *(_DWORD *)&v222[834 * v32 + 24];
LABEL_55:
                              *(_DWORD *)&Buf2[8] = v44;
                            }
                            LODWORD(v173) = v24;
                            v7 = v162;
                            if ( (v24 & 2) != 0 )
                            {
                              if ( HIDWORD(v150) == 1 )
                              {
                                pvar[0] = 0LL;
                                pvar[1] = 0LL;
                                *(_QWORD *)v168 = 0LL;
                                if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v162 + 40LL))(
                                       v162,
                                       &PKEY_Endpoint_SpatialNotAllowed,
                                       pvar) < 0
                                  || !LOWORD(pvar[0])
                                  || LOWORD(pvar[0]) == 11 && !LOWORD(pvar[1]) )
                                {
                                  LODWORD(v173) = v173 & 0xFFFFFFFD;
                                }
                                PropVariantClear(pvar);
                                v40 = v169;
                                v24 = v173;
                                v44 = *(_DWORD *)&Buf2[8];
                                v43 = *(_DWORD *)Buf2;
                              }
                              else
                              {
                                v24 &= ~2u;
                                LODWORD(v173) = v24;
                              }
                            }
                            if ( (v24 & 3) != 0 )
                            {
                              v43 = 0;
                              *(_DWORD *)Buf2 = 0;
                              *(_DWORD *)&Buf2[60] = 0;
                              v44 = 0;
                            }
                            if ( (v173 & 4) != 0 )
                              v44 = 0;
                            *(_DWORD *)&Buf2[8] = v44;
                            if ( !v43 || (HIDWORD(v173) = 1, !v44) )
                              HIDWORD(v173) = 0;
                            if ( !v43 && !v148 )
                            {
                              v40 = GUID_00000000_0000_0000_0000_000000000000;
                              v169 = GUID_00000000_0000_0000_0000_000000000000;
                            }
                            *(GUID *)(a1 + 6856) = v40;
                            v45 = 0;
                            if ( v148 && !v153 )
                              v45 = HIDWORD(v177) != 0;
                            v46 = *(_QWORD *)&v178.fmtid.Data1;
                            v47 = v149;
                            if ( v146 == v149 && !memcmp_0(&Buf1, Buf2, 0x48uLL) && !memcmp_0(Src, v221, 834 * v47) )
                            {
                              v48 = v46 - *(_QWORD *)&v169.Data1;
                              if ( v46 == *(_QWORD *)&v169.Data1 )
                                v48 = *(_QWORD *)v178.fmtid.Data4 - *(_QWORD *)v169.Data4;
                              if ( !v48 && !v45 )
                              {
LABEL_79:
                                v49 = HIDWORD(v158);
                                v9 = *(const WCHAR **)&pwsz[1];
                                if ( HIDWORD(v158) != *(_DWORD *)(a1 + 80) )
                                {
                                  if ( (unsigned int)hProvider > 4 )
                                  {
                                    TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v180[16], *(LPCWSTR *)&pwsz[1]);
                                    LOWORD(v143) = *(_WORD *)(a1 + 80);
                                    v182.Ptr = (ULONGLONG)&v143;
                                    *(_QWORD *)&v182.Size = 2LL;
                                    *(_WORD *)&v145[3] = v49;
                                    v183.Ptr = (ULONGLONG)&v145[3];
                                    *(_QWORD *)&v183.Size = 2LL;
                                    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801767D6, v132, v133, 5u, &pData);
                                  }
                                  *(_DWORD *)(a1 + 80) = v49;
                                }
                                break;
                              }
                            }
                            AudioFormatForLogging::AudioFormatForLogging(
                              (AudioFormatForLogging *)pvar,
                              (const struct tWAVEFORMATEX *)v170);
                            v112 = *(const WCHAR **)&pwsz[1];
                            if ( (unsigned int)hProvider > 4 )
                            {
                              TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v180[16], *(LPCWSTR *)&pwsz[1]);
                              v136 = Buf2[0];
                              v182.Ptr = (ULONGLONG)&v136;
                              *(_QWORD *)&v182.Size = 1LL;
                              v139 = Buf2[60];
                              v183.Ptr = (ULONGLONG)&v139;
                              *(_QWORD *)&v183.Size = 1LL;
                              v184.Ptr = (ULONGLONG)&Buf2[12];
                              *(_QWORD *)&v184.Size = 16LL;
                              v140 = Buf2[8];
                              v185 = &v140;
                              v186 = 1LL;
                              LOWORD(v143) = WORD2(v173);
                              v187 = (char *)&v143;
                              v188 = 2LL;
                              v189 = &v169;
                              v190 = 16LL;
                              v191 = (int *)&v149;
                              v192 = 4LL;
                              v151 = v24;
                              v193 = (GUID *)&v151;
                              v194 = 4LL;
                              v141[0] = Buf2[4];
                              p_AsUInt32With = (int *)v141;
                              v196 = 1LL;
                              v138 = v45;
                              v197 = (int *)&v138;
                              v198 = 1LL;
                              v199 = pvar;
                              v200 = 2LL;
                              v155 = *(_DWORD *)&v168[12];
                              v201 = (__int64 *)&v155;
                              v202 = 4LL;
                              LODWORD(v157) = HIDWORD(pvar[0]);
                              v203.Ptr = (ULONGLONG)&v157;
                              *(_QWORD *)&v203.Size = 4LL;
                              v204.Ptr = (ULONGLONG)&pvar[1] + 4;
                              *(_QWORD *)&v204.Size = 16LL;
                              v205 = &pvar[1];
                              v206 = 2LL;
                              v207 = (char *)&pvar[1] + 2;
                              v208 = 2LL;
                              v209 = (unsigned int *)&Buf2[28];
                              v210 = 16LL;
                              v211 = &Buf2[44];
                              v212 = 16LL;
                              LODWORD(v156) = Buf1;
                              v213 = &v156;
                              v214 = 4LL;
                              pwsz[0] = HIDWORD(v176);
                              v215 = pwsz;
                              v216 = 4LL;
                              v217 = (char *)&Buf1 + 12;
                              v218 = 16LL;
                              v219 = (char *)v175 + 12;
                              v220 = 16LL;
                              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180177165, v113, v114, 0x19u, &pData);
                            }
                            v115 = 0;
                            LODWORD(v150) = 0;
                            if ( v149 )
                            {
                              v116 = 0;
                              do
                              {
                                if ( (unsigned int)hProvider > 5 )
                                {
                                  *(_QWORD *)&v180[16] = &v150;
                                  pDesc_8 = 4LL;
                                  v117 = 834LL * v116;
                                  v182.Ptr = (ULONGLONG)&v222[v117];
                                  *(_QWORD *)&v182.Size = 16LL;
                                  v136 = v222[v117 + 16];
                                  v183.Ptr = (ULONGLONG)&v136;
                                  *(_QWORD *)&v183.Size = 1LL;
                                  v139 = v222[v117 + 20];
                                  v184.Ptr = (ULONGLONG)&v139;
                                  *(_QWORD *)&v184.Size = 1LL;
                                  v140 = v222[v117 + 24];
                                  v185 = &v140;
                                  v186 = 1LL;
                                  v141[0] = v222[v117 + 28];
                                  v187 = v141;
                                  v188 = 1LL;
                                  v189 = (GUID *)&v222[v117 + 32];
                                  v190 = 4LL;
                                  v191 = (int *)&v222[v117 + 36];
                                  v192 = 4LL;
                                  v193 = (GUID *)&v222[v117 + 40];
                                  v194 = 4LL;
                                  p_AsUInt32With = (int *)&v222[v117 + 44];
                                  v196 = 16LL;
                                  v197 = (int *)&v222[v117 + 60];
                                  v198 = 2LL;
                                  v199 = (PROPVARIANT *)&v222[v117 + 62];
                                  v200 = 2LL;
                                  v201 = (__int64 *)&v222[v117 + 64];
                                  v202 = 2LL;
                                  TlgCreateWsz(&v203, (LPCWSTR)((char *)v221 + v117));
                                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180177072, v118, v119, v120, &pData);
                                  v115 = v150;
                                }
                                LODWORD(v150) = ++v115;
                                v116 = v115;
                              }
                              while ( v115 < v149 );
                            }
                            v121 = v46 - *(_QWORD *)&v169.Data1;
                            if ( !v121 )
                              v121 = *(_QWORD *)v178.fmtid.Data4 - *(_QWORD *)v169.Data4;
                            if ( !v121 )
                            {
LABEL_291:
                              v122 = AsUInt32With;
                              goto LABEL_292;
                            }
                            v122 = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**(_QWORD **)(a1 + 64) + 56LL))(
                                     *(_QWORD *)(a1 + 64),
                                     &v169);
                            AsUInt32With = v122;
                            if ( v122 < 0 )
                            {
                              if ( (unsigned int)hProvider > 2 )
                              {
                                TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v180[16], v112);
                                v182.Ptr = (ULONGLONG)&AsUInt32With;
                                *(_QWORD *)&v182.Size = 4LL;
                                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176791, v123, v124, 4u, &pData);
                                goto LABEL_291;
                              }
LABEL_292:
                              if ( v122 < 0 )
                                goto LABEL_79;
                            }
                            if ( !v148 || v153 )
                            {
LABEL_298:
                              if ( v122 < 0 )
                                goto LABEL_79;
                            }
                            else
                            {
                              v153 = 1;
                              v122 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 48LL))(
                                       *(_QWORD *)(a1 + 64),
                                       1LL);
                              AsUInt32With = v122;
                              if ( v122 < 0 )
                              {
                                if ( (unsigned int)hProvider > 2 )
                                {
                                  TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v180[16], v112);
                                  v182.Ptr = (ULONGLONG)&AsUInt32With;
                                  *(_QWORD *)&v182.Size = 4LL;
                                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176750, v125, v126, 4u, &pData);
                                  v122 = AsUInt32With;
                                }
                                goto LABEL_298;
                              }
                            }
                            AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64 *, _QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(
                                             *(_QWORD *)(a1 + 40),
                                             Buf2,
                                             v221,
                                             834 * v149);
                            if ( AsUInt32With < 0 )
                            {
                              if ( (unsigned int)hProvider > 2 )
                              {
                                TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v180[16], v112);
                                v182.Ptr = (ULONGLONG)&AsUInt32With;
                                *(_QWORD *)&v182.Size = 4LL;
                                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180177039, v130, v131, 4u, &pData);
                              }
                            }
                            else
                            {
                              v127 = *(__m128i *)Buf2;
                              *(_OWORD *)(a1 + 104) = *(_OWORD *)Buf2;
                              *(_OWORD *)(a1 + 120) = *(_OWORD *)&Buf2[16];
                              *(_OWORD *)(a1 + 136) = *(_OWORD *)&Buf2[32];
                              *(_OWORD *)(a1 + 152) = *(_OWORD *)&Buf2[48];
                              *(_QWORD *)(a1 + 168) = v173;
                              v128 = v149;
                              *(_DWORD *)(a1 + 176) = v149;
                              memcpy_0((void *)(a1 + 180), v221, 834 * v128);
                              *(_BYTE *)(a1 + 6852) = 1;
                              *(_DWORD *)Buf2 = _mm_cvtsi128_si32(v127);
                              if ( !*(_DWORD *)Buf2 || *(_WORD *)v164 != 0xFFFE )
                                goto LABEL_305;
                              v129 = *(_QWORD *)(v164 + 24)
                                   - *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1;
                              if ( !v129 )
                                v129 = *(_QWORD *)(v164 + 32)
                                     - *(_QWORD *)GUID_0000000c_0cea_0010_8000_00aa00389b71.Data4;
                              if ( v129 )
LABEL_305:
                                v14 = 0;
                              *(_BYTE *)(a1 + 72) = v14;
                            }
                            goto LABEL_79;
                          }
                        }
                        goto LABEL_238;
                      }
                    }
LABEL_237:
                    v31 = 0LL;
                    goto LABEL_238;
                  }
                  Reserved2 = 22LL;
                  if ( *(_WORD *)&v170[16] == 22 )
                    goto LABEL_199;
                  v97 = *(_QWORD *)&v170[24] - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
                  if ( *(_QWORD *)&v170[24] == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 )
                    v97 = v171 - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
                  v31 = 0LL;
                  if ( !v97 )
                    goto LABEL_199;
                  v98 = *(_QWORD *)&v170[24] - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                  if ( *(_QWORD *)&v170[24] == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 )
                    v98 = v171 - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                  if ( !v98 )
                  {
LABEL_199:
                    pData = *(EVENT_DATA_DESCRIPTOR *)v170;
                    *(_OWORD *)v180 = *(_OWORD *)&v170[16];
                    *(_QWORD *)&v180[16] = v171;
                    *(_WORD *)v180 = 22;
                    v99 = *(_DWORD *)&v170[20];
                    v100 = *(_WORD *)v170;
                    goto LABEL_205;
                  }
                }
LABEL_238:
                v104 = 1;
                if ( (_BYTE)v151 || *(_BYTE *)(a1 + 76) )
                  goto LABEL_230;
                if ( (unsigned int)hProvider > 4 )
                {
                  TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v180[16], *(LPCWSTR *)&pwsz[1]);
                  v182.Ptr = (ULONGLONG)v157;
                  *(_QWORD *)&v182.Size = 16LL;
                  TlgCreateWsz(&v183, (LPCWSTR)((char *)v221 + v156));
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180175E15, v106, v107, 5u, &pData);
                  v31 = 0LL;
                }
                v33 = v143;
LABEL_243:
                if ( v33 == -1 || (v108 = v33, v33 = -1, v143 = -1, v32 == v108) )
                {
                  if ( *(_DWORD *)&v145[3] != -1 )
                  {
                    v32 = *(_DWORD *)&v145[3];
                    *(_DWORD *)&v145[3] = -1;
                    goto LABEL_261;
                  }
                  if ( v138 )
                  {
                    v138 = 0;
                    v32 = pwsz[0];
                    if ( (_DWORD)v30 != -1 )
                      v32 = v30;
                    v137 = v137 && (_DWORD)v30 != -1;
                  }
                  else
                  {
                    v32 = -1;
                  }
                }
                else
                {
                  v32 = v108;
                }
                if ( v32 == -1 )
                {
                  v35 = v137;
                  goto LABEL_263;
                }
LABEL_261:
                v27 = v152;
              }
            }
          }
        }
      }
    }
  }
LABEL_80:
  PropVariantClear((PROPVARIANT *)&v165);
  if ( AsUInt32With < 0 )
    CSpatialProperties::ClearSpatialAudioSettings((CSpatialProperties *)a1, v9);
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v51 = v163;
  v52 = *(_QWORD *)(v163 + 56);
  if ( v52 )
  {
    LOBYTE(v50) = v52 != v163;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v52 + 32LL))(v52, v50);
    *(_QWORD *)(v51 + 56) = 0LL;
  }
}
