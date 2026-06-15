/*
 * XREFs of ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x180121D18
 * Callers:
 *     ?GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18010B620 (-GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUtWAVEFORMA.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
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
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     IsSpatialOnlyFormat @ 0x180122ECC (IsSpatialOnlyFormat.c)
 *     ?GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z @ 0x180124F70 (-GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSpatialProperties::GetSpatialFormatForAudioFormat(
        __int64 a1,
        const WCHAR *a2,
        char a3,
        struct tWAVEFORMATEX *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8)
{
  struct tWAVEFORMATEX *v8; // r13
  __int64 v12; // rsi
  char v13; // r14
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r8
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  int AsUInt32With; // ebx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v23; // rdx
  int v24; // r9d
  const WCHAR *v25; // rbx
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  unsigned int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // r10
  __int64 v31; // r10
  LPCGUID v32; // r8
  LPCGUID v33; // r9
  LPCGUID v34; // r8
  LPCGUID v35; // r9
  int v36; // eax
  LPCGUID v37; // r8
  LPCGUID v38; // r9
  LPCGUID v39; // r8
  LPCGUID v40; // r9
  char v41; // bl
  __int64 v42; // rax
  __int64 v43; // r12
  int v44; // r11d
  GUID *v45; // rax
  const WCHAR *v46; // rdx
  LPCGUID v47; // r8
  LPCGUID v48; // r9
  unsigned int v49; // ebx
  __int64 v50; // rax
  const struct CSpatialAudioTech *TechnologyByID; // r14
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // r13d
  __int16 Ptr; // r14
  unsigned __int16 nChannels; // cx
  unsigned __int16 wBitsPerSample; // dx
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // r11d
  __int16 v62; // r10
  __int16 v63; // r9
  int v64; // edx
  __int16 v65; // r8
  __int64 v66; // rax
  LPCGUID v67; // r8
  LPCGUID v68; // r9
  LPCWSTR v69; // r10
  LPCGUID v70; // r8
  LPCGUID v71; // r9
  unsigned int v72; // ecx
  BOOL v73; // ecx
  __int64 v74; // rcx
  __int64 v75; // rax
  bool v76; // [rsp+A0h] [rbp-80h]
  char v77; // [rsp+A1h] [rbp-7Fh] BYREF
  _BYTE v78[2]; // [rsp+A2h] [rbp-7Eh] BYREF
  int v79; // [rsp+A4h] [rbp-7Ch] BYREF
  char v80; // [rsp+A8h] [rbp-78h] BYREF
  _BYTE v81[3]; // [rsp+A9h] [rbp-77h] BYREF
  int v82; // [rsp+ACh] [rbp-74h] BYREF
  unsigned int v83; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v84; // [rsp+B4h] [rbp-6Ch] BYREF
  unsigned int v85; // [rsp+BCh] [rbp-64h] BYREF
  int v86; // [rsp+C0h] [rbp-60h] BYREF
  LPCWSTR pwsz; // [rsp+C8h] [rbp-58h]
  struct tWAVEFORMATEX *v88; // [rsp+D0h] [rbp-50h]
  __int64 v89; // [rsp+D8h] [rbp-48h]
  int v90; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v91; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v92; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v93; // [rsp+F8h] [rbp-28h] BYREF
  char *v94; // [rsp+100h] [rbp-20h] BYREF
  int v95; // [rsp+108h] [rbp-18h] BYREF
  __int64 v96; // [rsp+110h] [rbp-10h]
  unsigned int v97; // [rsp+118h] [rbp-8h] BYREF
  _QWORD v98[4]; // [rsp+120h] [rbp+0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+140h] [rbp+20h] BYREF
  _BYTE v100[24]; // [rsp+150h] [rbp+30h]
  __int128 v101; // [rsp+170h] [rbp+50h] BYREF
  __int128 v102; // [rsp+180h] [rbp+60h]
  __int64 v103; // [rsp+190h] [rbp+70h]
  int v104; // [rsp+1A0h] [rbp+80h] BYREF
  char v105; // [rsp+1A4h] [rbp+84h]
  char v106; // [rsp+1A8h] [rbp+88h]
  __int128 v107; // [rsp+1ACh] [rbp+8Ch] BYREF
  char v108; // [rsp+1BCh] [rbp+9Ch] BYREF
  int v109; // [rsp+1DCh] [rbp+BCh]
  int v110; // [rsp+1E0h] [rbp+C0h]
  __int16 v111; // [rsp+1E4h] [rbp+C4h]
  GUID v112; // [rsp+1F0h] [rbp+D0h] BYREF
  EVENT_DATA_DESCRIPTOR Buf1; // [rsp+200h] [rbp+E0h] BYREF
  _BYTE v114[24]; // [rsp+210h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+230h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+240h] [rbp+120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v117; // [rsp+250h] [rbp+130h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+260h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v119; // [rsp+280h] [rbp+160h] BYREF
  char *v120; // [rsp+290h] [rbp+170h]
  __int64 v121; // [rsp+298h] [rbp+178h]
  char *v122; // [rsp+2A0h] [rbp+180h]
  __int64 v123; // [rsp+2A8h] [rbp+188h]
  __int128 *v124; // [rsp+2B0h] [rbp+190h]
  __int64 v125; // [rsp+2B8h] [rbp+198h]
  char *v126; // [rsp+2C0h] [rbp+1A0h]
  __int64 v127; // [rsp+2C8h] [rbp+1A8h]
  char *v128; // [rsp+2D0h] [rbp+1B0h]
  __int64 v129; // [rsp+2D8h] [rbp+1B8h]
  unsigned int *v130; // [rsp+2E0h] [rbp+1C0h]
  __int64 v131; // [rsp+2E8h] [rbp+1C8h]
  GUID *v132; // [rsp+2F0h] [rbp+1D0h]
  __int64 v133; // [rsp+2F8h] [rbp+1D8h]
  int *v134; // [rsp+300h] [rbp+1E0h]
  __int64 v135; // [rsp+308h] [rbp+1E8h]
  int *v136; // [rsp+310h] [rbp+1F0h]
  __int64 v137; // [rsp+318h] [rbp+1F8h]
  PROPVARIANT *v138; // [rsp+320h] [rbp+200h]
  __int64 v139; // [rsp+328h] [rbp+208h]
  __int64 *v140; // [rsp+330h] [rbp+210h]
  __int64 v141; // [rsp+338h] [rbp+218h]
  char **v142; // [rsp+340h] [rbp+220h]
  __int64 v143; // [rsp+348h] [rbp+228h]
  struct _EVENT_DATA_DESCRIPTOR v144; // [rsp+350h] [rbp+230h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v145; // [rsp+360h] [rbp+240h] BYREF
  char *v146; // [rsp+370h] [rbp+250h]
  __int64 v147; // [rsp+378h] [rbp+258h]
  int *v148; // [rsp+380h] [rbp+260h]
  __int64 v149; // [rsp+388h] [rbp+268h]
  _BYTE *v150; // [rsp+390h] [rbp+270h]
  __int64 v151; // [rsp+398h] [rbp+278h]
  char *v152; // [rsp+3A0h] [rbp+280h]
  __int64 v153; // [rsp+3A8h] [rbp+288h]
  _BYTE v154[6672]; // [rsp+3B0h] [rbp+290h] BYREF
  __int64 v155[96]; // [rsp+1DC0h] [rbp+1CA0h] BYREF
  _OWORD v156[369]; // [rsp+20C0h] [rbp+1FA0h] BYREF

  v98[1] = -2LL;
  v8 = a4;
  v88 = a4;
  pwsz = a2;
  v12 = a5;
  v89 = a5;
  v96 = a7;
  v98[2] = a7;
  v13 = 0;
  v79 = 0;
  v86 = 10;
  v84 = -1LL;
  v91 = -1LL;
  LODWORD(v92) = -1;
  v76 = 0;
  memset_0(&v101, 0, 0x28uLL);
  v82 = 0;
  memset_0(&v104, 0, 0x48uLL);
  v85 = 0;
  v95 = 0;
  v112 = GUID_00000000_0000_0000_0000_000000000000;
  memset_0(v155, 0, 0x1A10uLL);
  v98[0] = a5;
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v98[3] = a1;
  *(_BYTE *)(a1 + 77) = 1;
  if ( !a8 )
    goto LABEL_181;
  memset_0(a8, 0, 0x48uLL);
  *(_DWORD *)a8 = 0;
  *(GUID *)(a8 + 12) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)a8 + 17) = 0;
  v15 = BlockSpatialAudioRegistryGates();
  *((_DWORD *)a8 + 16) = v15;
  if ( (v15 & 2) != 0 )
  {
    if ( v86 == 1 )
    {
      pvar[0] = 0LL;
      pvar[1] = 0LL;
      *(_QWORD *)v100 = 0LL;
      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
             a5,
             &PKEY_Endpoint_SpatialNotAllowed,
             pvar) < 0
        || !LOWORD(pvar[0])
        || LOWORD(pvar[0]) == 11 && !LOWORD(pvar[1]) )
      {
        *((_DWORD *)a8 + 16) &= ~2u;
      }
      PropVariantClear(pvar);
    }
    else
    {
      *((_DWORD *)a8 + 16) = v15 & 0xFFFFFFFD;
    }
  }
  if ( v8 && a2 && a5 && a6 )
  {
    if ( a3 )
    {
      if ( (unsigned int)hProvider > 4 )
      {
        TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v114[16], a2);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176055, v17, v18, 3u, &Buf1);
      }
      goto LABEL_20;
    }
    *(GUID *)pvar = PKEY_AudioEndpoint_FormFactor.fmtid;
    *(_DWORD *)v100 = PKEY_AudioEndpoint_FormFactor.pid;
    AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                     (__int64)v98,
                     (__int128 *)pvar,
                     v16,
                     &v86);
    v79 = AsUInt32With;
    if ( AsUInt32With >= 0 )
    {
      AsUInt32With = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
      v79 = AsUInt32With;
      if ( AsUInt32With >= 0 )
      {
        AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 56) + 32LL))(
                         *(_QWORD *)(a1 + 56),
                         &v85);
        v79 = AsUInt32With;
        if ( AsUInt32With >= 0 )
        {
          AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 40LL))(
                           *(_QWORD *)(a1 + 56),
                           &v95);
          v79 = AsUInt32With;
          if ( AsUInt32With >= 0 )
          {
            v79 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 48) + 96LL))(*(_QWORD *)(a1 + 48), &v82);
            if ( v79 >= 0 && (unsigned int)v82 <= 8 )
              v79 = (*(__int64 (__fastcall **)(_QWORD, int *, _BYTE *, _QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(
                      *(_QWORD *)(a1 + 48),
                      &v104,
                      v154,
                      (unsigned int)(834 * v82));
            AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)pvar, v8);
            v25 = pwsz;
            if ( (unsigned int)hProvider > 4 )
            {
              TlgCreateWsz(&v119, pwsz);
              v77 = v104;
              v120 = &v77;
              v121 = 1LL;
              v80 = v109;
              v122 = &v80;
              v123 = 1LL;
              v124 = &v107;
              v125 = 16LL;
              v81[0] = v106;
              v126 = v81;
              v127 = 1LL;
              LOWORD(v83) = v111;
              v128 = (char *)&v83;
              v129 = 2LL;
              v97 = v85;
              v130 = &v97;
              v131 = 4LL;
              v132 = &v112;
              v133 = 16LL;
              v134 = &v79;
              v135 = 4LL;
              v136 = &v82;
              v137 = 4LL;
              v138 = pvar;
              v139 = 2LL;
              LODWORD(v93) = *(_DWORD *)&v100[12];
              v140 = &v93;
              v141 = 4LL;
              LODWORD(v94) = HIDWORD(pvar[0]);
              v142 = &v94;
              v143 = 4LL;
              v144.Ptr = (ULONGLONG)&pvar[1] + 4;
              *(_QWORD *)&v144.Size = 16LL;
              v145.Ptr = (ULONGLONG)&pvar[1];
              *(_QWORD *)&v145.Size = 2LL;
              v146 = (char *)&pvar[1] + 2;
              v147 = 2LL;
              v90 = v110;
              v148 = &v90;
              v149 = 4LL;
              v78[0] = v105;
              v150 = v78;
              v151 = 1LL;
              v152 = &v108;
              v153 = 16LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180175EC9, v26, v27, 0x15u, &pData);
              v24 = v79;
            }
            v28 = 0;
            v83 = 0;
            if ( v24 >= 0 )
            {
              v29 = 0;
              v23 = 0LL;
              do
              {
                if ( v29 >= v82 )
                  break;
                if ( (unsigned int)hProvider > 4 )
                {
                  v119.Ptr = (ULONGLONG)&v83;
                  *(_QWORD *)&v119.Size = 4LL;
                  v30 = 834LL * (unsigned int)v23;
                  v120 = &v154[v30 + 768];
                  v121 = 16LL;
                  v78[0] = v154[v30 + 784];
                  v122 = v78;
                  v123 = 1LL;
                  v81[0] = v154[v30 + 788];
                  v124 = (__int128 *)v81;
                  v125 = 1LL;
                  v80 = v154[v30 + 792];
                  v126 = &v80;
                  v127 = 1LL;
                  v77 = v154[v30 + 796];
                  v128 = &v77;
                  v129 = 1LL;
                  v130 = (unsigned int *)&v154[v30 + 800];
                  v131 = 4LL;
                  v132 = (GUID *)&v154[v30 + 804];
                  v133 = 4LL;
                  v134 = (int *)&v154[v30 + 808];
                  v135 = 4LL;
                  v136 = (int *)&v154[v30 + 812];
                  v137 = 16LL;
                  v138 = (PROPVARIANT *)&v154[v30 + 828];
                  v139 = 2LL;
                  v140 = (__int64 *)&v154[v30 + 830];
                  v141 = 2LL;
                  v142 = (char **)&v154[v30 + 832];
                  v143 = 2LL;
                  TlgCreateWsz(&v144, (LPCWSTR)&v154[v30 + 512]);
                  TlgCreateWsz(&v145, (LPCWSTR)&v154[v31]);
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801760E5, v32, v33, 0x11u, &pData);
                  v24 = v79;
                  v28 = v83;
                }
                v83 = ++v28;
                v29 = v28;
                v23 = v28;
              }
              while ( v24 >= 0 );
              v8 = v88;
              v25 = pwsz;
            }
            if ( !v85 && v8->wFormatTag == 0xFFFE )
            {
              LOBYTE(v23) = 1;
              if ( (unsigned __int8)IsSpatialOnlyFormat((char *)&v8[1].nSamplesPerSec + 2, v23) )
              {
                if ( (unsigned int)hProvider > 2 )
                {
                  TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v114[16], v25);
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017609F, v34, v35, 3u, &Buf1);
                }
                AsUInt32With = -2147024809;
                goto LABEL_51;
              }
              v24 = v79;
            }
            if ( v24 < 0 || (unsigned int)v82 > 8 )
            {
              if ( (unsigned int)hProvider > 4 )
              {
                TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v114[16], v25);
                v115.Ptr = (ULONGLONG)&v79;
                *(_QWORD *)&v115.Size = 4LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180175DDF, v37, v38, 4u, &Buf1);
              }
              v82 = 0;
              memset_0(&v104, 0, 0x48uLL);
              memset_0(v154, 0, sizeof(v154));
            }
            else
            {
              if ( !v82 || *(_BYTE *)(a1 + 76) )
              {
                v36 = v109;
              }
              else
              {
                v36 = v109;
                if ( v109 != v104 )
                {
                  if ( !*(_DWORD *)(a1 + 164) || *(_DWORD *)(a1 + 104) )
                  {
                    v36 = v104;
                    v109 = v104;
                  }
                  else
                  {
                    v104 = v109;
                  }
                }
              }
              v76 = v36 != 0;
              v13 = 1;
            }
            AsUInt32With = CSpatialProperties::InitSpatialTechList((CSpatialProperties *)a1);
            v79 = AsUInt32With;
            if ( AsUInt32With < 0 )
              goto LABEL_21;
            CSpatialAudioTechnologies::RegistryGates();
            if ( g_ListOfSpatialTech[0] > 8u )
            {
              AsUInt32With = -2147418113;
LABEL_51:
              v79 = AsUInt32With;
              goto LABEL_21;
            }
            if ( (a8[64] & 3) != 0 )
            {
              if ( (unsigned int)hProvider > 4 )
              {
                TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v114[16], pwsz);
                v90 = *((_DWORD *)a8 + 16);
                v115.Ptr = (ULONGLONG)&v90;
                *(_QWORD *)&v115.Size = 4LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180175D9A, v39, v40, 4u, &Buf1);
              }
              goto LABEL_20;
            }
            if ( v76 || (v41 = 0, (a8[64] & 8) != 0) )
              v41 = 1;
            v42 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                    (__int64)&Buf1,
                    v96);
            CSpatialProperties::EnumerateSpatialEncoders(
              (EVENT_DATA_DESCRIPTOR *)a1,
              v13,
              (__int64)&v104,
              v82,
              (CSpatialAudioTechnologies *)v154,
              v86,
              v85,
              0LL,
              (__int64)v8,
              v41,
              v42,
              pwsz,
              (__int64)v155,
              (unsigned int *)&v91 + 1,
              (unsigned int *)&v84 + 1,
              (unsigned int *)&v84,
              (__int64)&v91,
              (__int64)&v92,
              (__int64)&v104);
            v43 = (unsigned int)v91;
            v44 = 0;
            if ( !v13 )
            {
              v76 = (_DWORD)v91 != -1;
              if ( (unsigned int)hProvider > 4 )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
                {
                  TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v114[16], pwsz);
                  if ( (_DWORD)v43 == -1 )
                    v45 = &GUID_00000000_0000_0000_0000_000000000000;
                  else
                    v45 = (GUID *)((char *)v156 + 834 * v43);
                  v115.Ptr = (ULONGLONG)v45;
                  *(_QWORD *)&v115.Size = 16LL;
                  if ( (_DWORD)v43 == -1 )
                    v46 = L"<none>";
                  else
                    v46 = (const WCHAR *)v155 + 417 * v43;
                  TlgCreateWsz(&v116, v46);
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180175E6A, v47, v48, 5u, &Buf1);
                  v44 = 0;
                }
              }
            }
            v77 = 1;
            v49 = HIDWORD(v91);
            if ( HIDWORD(v91) == -1 )
            {
              v49 = v43;
              v77 = v44;
            }
            v50 = (unsigned int)v84;
            LODWORD(v84) = v50;
            if ( (_DWORD)v50 != -1 )
              *(_OWORD *)(a8 + 28) = *(_OWORD *)((char *)v156 + 834 * v50);
            if ( (_DWORD)v43 != -1 )
              *(_OWORD *)(a8 + 44) = *(_OWORD *)((char *)v156 + 834 * v43);
            if ( v49 == -1 )
            {
LABEL_20:
              AsUInt32With = v79;
LABEL_21:
              v12 = v89;
              goto LABEL_22;
            }
            while ( 1 )
            {
              v78[0] = v44;
              v90 = v44;
              v93 = 834LL * v49;
              v94 = (char *)v156 + v93;
              TechnologyByID = CSpatialAudioTechnologies::GetTechnologyByID(
                                 (CSpatialAudioTechnologies *)v156,
                                 (const struct _GUID *)((char *)v156 + v93));
              v52 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                      (__int64)&Buf1,
                      v96);
              if ( !(*(unsigned __int8 (__fastcall **)(const struct CSpatialAudioTech *, _QWORD, _QWORD, struct tWAVEFORMATEX *, __int64, int *, _BYTE *, __int128 *))(*(_QWORD *)TechnologyByID + 40LL))(
                      TechnologyByID,
                      (unsigned int)v86,
                      0LL,
                      v8,
                      v52,
                      &v90,
                      v78,
                      &v101)
                || !(*(unsigned __int8 (__fastcall **)(const struct CSpatialAudioTech *, LPCWSTR))(*(_QWORD *)TechnologyByID
                                                                                                 + 32LL))(
                      TechnologyByID,
                      pwsz) )
              {
                if ( (unsigned int)hProvider > 4 )
                {
                  TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v114[16], pwsz);
                  TlgCreateWsz(&v115, v69);
                  v116.Ptr = (ULONGLONG)v94;
                  *(_QWORD *)&v116.Size = 16LL;
                  TlgCreateWsz(&v117, (LPCWSTR)((char *)v155 + v93));
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180175CDD, v70, v71, 6u, &Buf1);
                }
                goto LABEL_151;
              }
              if ( v8->wFormatTag == 0xFFFE )
                break;
              if ( !v8->cbSize || ((v8->wFormatTag - 1) & 0xFFFD) == 0 )
              {
                nChannels = v8->nChannels;
                if ( (unsigned __int16)(nChannels - 1) <= 1u )
                {
                  wBitsPerSample = v8->wBitsPerSample;
                  if ( ((wBitsPerSample - 8) & 0xFFE7) == 0 )
                  {
                    Buf1 = *(EVENT_DATA_DESCRIPTOR *)&v8->wFormatTag;
                    Ptr = -2;
                    LOWORD(Buf1.Ptr) = -2;
                    *(_WORD *)v114 = 22;
                    *(_WORD *)&v114[2] = wBitsPerSample;
                    *(GUID *)&v114[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
                    *(_DWORD *)&v114[8] = v8->wFormatTag;
                    v55 = 4 - (nChannels != 1);
                    goto LABEL_109;
                  }
                }
              }
LABEL_147:
              if ( (unsigned int)hProvider > 4 )
              {
                TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v114[16], pwsz);
                v115.Ptr = (ULONGLONG)v94;
                *(_QWORD *)&v115.Size = 16LL;
                TlgCreateWsz(&v116, (LPCWSTR)((char *)v155 + v93));
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180175E15, v67, v68, 5u, &Buf1);
              }
LABEL_151:
              v72 = HIDWORD(v84);
              v14 = 0xFFFFFFFFLL;
              if ( HIDWORD(v84) == -1 || (HIDWORD(v84) = -1, v49 == v72) )
              {
                v44 = 0;
                if ( (_DWORD)v84 == -1 )
                {
                  if ( v77 )
                  {
                    v77 = 0;
                    v49 = v92;
                    if ( (_DWORD)v43 != -1 )
                      v49 = v43;
                    v76 = v76 && (_DWORD)v43 != -1;
                  }
                  else
                  {
                    v49 = -1;
                  }
                }
                else
                {
                  v49 = v84;
                  LODWORD(v84) = -1;
                }
              }
              else
              {
                v49 = v72;
                v44 = 0;
              }
              if ( v49 == -1 )
                goto LABEL_20;
            }
            if ( v8->cbSize != 22 )
            {
              v53 = *(_QWORD *)((char *)&v8[1].nSamplesPerSec + 2)
                  - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
              if ( !v53 )
                v53 = *(_QWORD *)&v8[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
              if ( v53 )
              {
                v54 = *(_QWORD *)((char *)&v8[1].nSamplesPerSec + 2)
                    - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                if ( !v54 )
                  v54 = *(_QWORD *)&v8[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                if ( v54 )
                  goto LABEL_147;
              }
            }
            Buf1 = *(EVENT_DATA_DESCRIPTOR *)&v8->wFormatTag;
            *(_OWORD *)v114 = *(_OWORD *)&v8->cbSize;
            *(_QWORD *)&v114[16] = *(_QWORD *)&v8[1].wBitsPerSample;
            *(_WORD *)v114 = 22;
            v55 = *(_DWORD *)&v114[4];
            Ptr = Buf1.Ptr;
LABEL_109:
            if ( (_WORD)v101 == 0xFFFE )
            {
              if ( (_WORD)v102 == 22 )
                goto LABEL_117;
              v59 = *((_QWORD *)&v102 + 1) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
              if ( *((_QWORD *)&v102 + 1) == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 )
                v59 = v103 - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
              if ( !v59 )
                goto LABEL_117;
              v60 = *((_QWORD *)&v102 + 1) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
              if ( *((_QWORD *)&v102 + 1) == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 )
                v60 = v103 - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
              if ( !v60 )
              {
LABEL_117:
                *(_OWORD *)pvar = v101;
                *(_OWORD *)v100 = v102;
                *(_QWORD *)&v100[16] = v103;
                *(_WORD *)v100 = 22;
                v61 = DWORD1(v102);
                v62 = v101;
                goto LABEL_123;
              }
            }
            else if ( (!(_WORD)v102 || (((_WORD)v101 - 1) & 0xFFFD) == 0)
                   && (unsigned __int16)(WORD1(v101) - 1) <= 1u
                   && ((HIWORD(v101) - 8) & 0xFFE7) == 0 )
            {
              *(_OWORD *)pvar = v101;
              v62 = -2;
              LOWORD(pvar[0]) = -2;
              *(_WORD *)v100 = 22;
              *(_WORD *)&v100[2] = HIWORD(v101);
              *(GUID *)&v100[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
              *(_DWORD *)&v100[8] = (unsigned __int16)v101;
              v61 = 4 - (WORD1(v101) != 1);
LABEL_123:
              if ( WORD1(Buf1.Ptr) )
              {
                v63 = WORD1(pvar[0]);
              }
              else
              {
                v63 = 0;
                WORD1(pvar[0]) = 0;
                LODWORD(pvar[1]) = 0;
                WORD2(pvar[1]) = 0;
              }
              if ( HIDWORD(Buf1.Ptr) )
              {
                v64 = HIDWORD(pvar[0]);
              }
              else
              {
                v64 = 0;
                *(PROPVARIANT *)((char *)pvar + 4) = 0LL;
              }
              if ( Buf1.Reserved2 )
              {
                v65 = HIWORD(pvar[1]);
              }
              else
              {
                v65 = 0;
                HIDWORD(pvar[1]) = 0;
              }
              *(_DWORD *)&v100[4] = v55 != 0 ? v61 : 0;
              if ( !Ptr )
              {
                v62 = 0;
                LOWORD(pvar[0]) = 0;
              }
              if ( !v63 )
              {
                WORD1(Buf1.Ptr) = 0;
                Buf1.Size = 0;
                LOWORD(Buf1.Reserved) = 0;
              }
              if ( !v64 )
                *(ULONGLONG *)((char *)&Buf1.Ptr + 4) = 0LL;
              if ( !v65 )
                Buf1.Reserved = 0;
              *(_DWORD *)&v114[4] = (v55 != 0 ? v61 : 0) != 0 ? v55 : 0;
              if ( !v62 )
                LOWORD(Buf1.Ptr) = 0;
              v66 = *(_QWORD *)&v114[8] - *(_QWORD *)&v100[8];
              if ( *(_QWORD *)&v114[8] == *(_QWORD *)&v100[8] )
                v66 = *(_QWORD *)&v114[16] - *(_QWORD *)&v100[16];
              if ( !v66 && !memcmp_0(&Buf1, pvar, 0x28uLL) )
              {
                v73 = v76 && !*(_BYTE *)(a1 + 76);
                *(_DWORD *)a8 = v73;
                *((_DWORD *)a8 + 15) = v76;
                v14 = 834LL * v49;
                *(_OWORD *)(a8 + 12) = *(_OWORD *)((char *)v156 + v14);
                if ( v73 && (a8[64] & 4) == 0 && *(_DWORD *)((char *)&v156[1] + 834 * v49 + 8) )
                  *((_DWORD *)a8 + 17) = 1;
                v74 = v107 - *(_QWORD *)(a8 + 12);
                if ( (_QWORD)v107 == *(_QWORD *)(a8 + 12) )
                  v74 = *((_QWORD *)&v107 + 1) - *(_QWORD *)(a8 + 20);
                if ( v74 )
                {
                  v75 = v107 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
                  if ( (_QWORD)v107 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
                    v75 = *((_QWORD *)&v107 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
                  if ( v75 )
                    *(_OWORD *)(a8 + 28) = v107;
                }
                goto LABEL_20;
              }
            }
            v8 = v88;
            goto LABEL_147;
          }
        }
      }
    }
  }
  else
  {
LABEL_181:
    AsUInt32With = -2147467261;
    v79 = -2147467261;
  }
LABEL_22:
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v20 = v96;
  v21 = *(_QWORD *)(v96 + 56);
  if ( v21 )
  {
    LOBYTE(v14) = v21 != v96;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, v14);
    *(_QWORD *)(v20 + 56) = 0LL;
  }
  return (unsigned int)AsUInt32With;
}
