/*
 * XREFs of ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEBG_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180121148
 * Callers:
 *     ?GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18010A008 (-GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUSpatialAud.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     BlockSpatialAudioRegistryGates @ 0x18004C7C4 (BlockSpatialAudioRegistryGates.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGPEAU3@AEAK9999PEAU2@@Z @ 0x1800526B0 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 *     GetPreferredSpatialAudioEncoderId @ 0x180052D64 (GetPreferredSpatialAudioEncoderId.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180056038 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x1800562EC (-InitSpatialTechList@CSpatialProperties@@AEAAJXZ.c)
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x180056D00 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180056DE4 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x180056E2C (--0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _alloca_probe @ 0x180068810 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x1800E2FA4 (-CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z.c)
 *     IsSpatialOnlyFormat @ 0x180122ECC (IsSpatialOnlyFormat.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSpatialProperties::GetAudioFormatForSpatialFormat(
        __int64 a1,
        const WCHAR *a2,
        char a3,
        __int64 a4,
        struct tWAVEFORMATEX *a5,
        struct tWAVEFORMATEX *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        struct WAVEFORMATEXTENSIBLE *a10,
        _BYTE *a11)
{
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r8
  int AsUInt32With; // ebx
  const GUID *v18; // r8
  struct tWAVEFORMATEX *v19; // r10
  struct tWAVEFORMATEX *v20; // r11
  const GUID *v21; // r9
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  PROPVARIANT v28; // rdi
  _QWORD *v29; // r14
  void *v30; // rcx
  LPCGUID v31; // r8
  LPCGUID v32; // r9
  unsigned int v33; // r9d
  int v34; // r11d
  char *v35; // rax
  LPVOID *v36; // r10
  LPCGUID v37; // r8
  LPCGUID v38; // r9
  __int64 v39; // rax
  struct tWAVEFORMATEX *v40; // rdx
  LPCGUID v41; // r8
  LPCGUID v42; // r9
  __int64 v43; // r12
  LPCGUID v44; // r8
  LPCGUID v45; // r9
  LPCGUID v46; // r8
  LPCGUID v47; // r9
  LPCGUID v48; // r8
  LPCGUID v49; // r9
  LPCGUID v50; // r8
  LPCGUID v51; // r9
  UINT32 cData; // r10d
  WORD v53; // ax
  DWORD v54; // edx
  WORD v55; // cx
  int v56; // eax
  LPCGUID v57; // r8
  LPCGUID v58; // r9
  __int64 v59; // rdi
  __int64 v60; // rcx
  char v62; // [rsp+A0h] [rbp-80h] BYREF
  char v63; // [rsp+A1h] [rbp-7Fh] BYREF
  char v64; // [rsp+A2h] [rbp-7Eh] BYREF
  char v65; // [rsp+A3h] [rbp-7Dh]
  LPVOID pv; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v67; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v68; // [rsp+B4h] [rbp-6Ch] BYREF
  int Ptr_high; // [rsp+B8h] [rbp-68h] BYREF
  int v70; // [rsp+BCh] [rbp-64h] BYREF
  int v71; // [rsp+C0h] [rbp-60h] BYREF
  __int16 v72; // [rsp+C4h] [rbp-5Ch] BYREF
  __int64 v73; // [rsp+C8h] [rbp-58h] BYREF
  _BYTE *v74; // [rsp+D0h] [rbp-50h]
  LPVOID *v75; // [rsp+D8h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v76; // [rsp+E0h] [rbp-40h]
  __int64 v77; // [rsp+E8h] [rbp-38h]
  __int64 v78; // [rsp+F0h] [rbp-30h]
  __int64 v79; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v80; // [rsp+100h] [rbp-20h]
  __int64 v81; // [rsp+108h] [rbp-18h]
  __int64 v82; // [rsp+110h] [rbp-10h]
  __int128 v83; // [rsp+118h] [rbp-8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+130h] [rbp+10h] BYREF
  __int64 v85; // [rsp+140h] [rbp+20h]
  unsigned int v86; // [rsp+14Ch] [rbp+2Ch]
  EVENT_DATA_DESCRIPTOR v87; // [rsp+150h] [rbp+30h] BYREF
  int v88; // [rsp+16Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+170h] [rbp+50h] BYREF
  LPVOID *v90; // [rsp+180h] [rbp+60h]
  __int64 v91; // [rsp+188h] [rbp+68h]
  PROPVARIANT *v92; // [rsp+190h] [rbp+70h]
  __int64 v93; // [rsp+198h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A0h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1C0h] [rbp+A0h] BYREF
  LPVOID **v96; // [rsp+1D0h] [rbp+B0h]
  __int64 v97; // [rsp+1D8h] [rbp+B8h]
  char *v98; // [rsp+1E0h] [rbp+C0h]
  __int64 v99; // [rsp+1E8h] [rbp+C8h]
  char *v100; // [rsp+1F0h] [rbp+D0h]
  __int64 v101; // [rsp+1F8h] [rbp+D8h]
  __int64 v102; // [rsp+200h] [rbp+E0h]
  __int64 v103; // [rsp+208h] [rbp+E8h]
  char *v104; // [rsp+210h] [rbp+F0h]
  __int64 v105; // [rsp+218h] [rbp+F8h]
  __int16 *v106; // [rsp+220h] [rbp+100h]
  __int64 v107; // [rsp+228h] [rbp+108h]
  int *v108; // [rsp+230h] [rbp+110h]
  __int64 v109; // [rsp+238h] [rbp+118h]
  unsigned int *v110; // [rsp+240h] [rbp+120h]
  __int64 v111; // [rsp+248h] [rbp+128h]
  PROPVARIANT *v112; // [rsp+250h] [rbp+130h]
  __int64 v113; // [rsp+258h] [rbp+138h]
  __int64 *v114; // [rsp+260h] [rbp+140h]
  __int64 v115; // [rsp+268h] [rbp+148h]
  char *v116; // [rsp+270h] [rbp+150h]
  __int64 v117; // [rsp+278h] [rbp+158h]
  char *v118; // [rsp+280h] [rbp+160h]
  __int64 v119; // [rsp+288h] [rbp+168h]
  PROPVARIANT *v120; // [rsp+290h] [rbp+170h]
  __int64 v121; // [rsp+298h] [rbp+178h]
  char *v122; // [rsp+2A0h] [rbp+180h]
  __int64 v123; // [rsp+2A8h] [rbp+188h]
  EVENT_DATA_DESCRIPTOR *v124; // [rsp+2B0h] [rbp+190h]
  __int64 v125; // [rsp+2B8h] [rbp+198h]
  int *v126; // [rsp+2C0h] [rbp+1A0h]
  __int64 v127; // [rsp+2C8h] [rbp+1A8h]
  LPVOID *p_pv; // [rsp+2D0h] [rbp+1B0h]
  __int64 v129; // [rsp+2D8h] [rbp+1B8h]
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // [rsp+2E0h] [rbp+1C0h]
  __int64 v131; // [rsp+2E8h] [rbp+1C8h]
  ULONG *p_Size; // [rsp+2F0h] [rbp+1D0h]
  __int64 v133; // [rsp+2F8h] [rbp+1D8h]
  char *v134; // [rsp+300h] [rbp+1E0h]
  __int64 v135; // [rsp+308h] [rbp+1E8h]
  EVENT_DATA_DESCRIPTOR v136; // [rsp+310h] [rbp+1F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v137; // [rsp+330h] [rbp+210h] BYREF
  EVENT_DATA_DESCRIPTOR *v138; // [rsp+340h] [rbp+220h]
  __int64 v139; // [rsp+348h] [rbp+228h]
  LPVOID *v140; // [rsp+350h] [rbp+230h]
  __int64 v141; // [rsp+358h] [rbp+238h]
  int *p_Ptr_high; // [rsp+360h] [rbp+240h]
  __int64 v143; // [rsp+368h] [rbp+248h]
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *v144; // [rsp+370h] [rbp+250h]
  __int64 v145; // [rsp+378h] [rbp+258h]
  ULONG *v146; // [rsp+380h] [rbp+260h]
  __int64 v147; // [rsp+388h] [rbp+268h]
  char *v148; // [rsp+390h] [rbp+270h]
  __int64 v149; // [rsp+398h] [rbp+278h]
  __int64 v150[834]; // [rsp+3A0h] [rbp+280h] BYREF

  v81 = -2LL;
  v80 = a4;
  v65 = a3;
  v76 = a6;
  v77 = a8;
  v78 = a9;
  v82 = a9;
  v74 = a11;
  v71 = 10;
  v14 = BlockSpatialAudioRegistryGates();
  v68 = 0;
  v79 = a7;
  if ( a7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  *(_QWORD *)&v83 = a1;
  *(_BYTE *)(a1 + 77) = 1;
  if ( !v74
    || (*v74 = 0, !a10)
    || (*(_QWORD *)&a10->Format.wFormatTag = 0LL, a10->Format.wFormatTag = 0, !a4)
    || !a2
    || !a6
    || !a7
    || !v77 )
  {
    AsUInt32With = -2147467261;
    goto LABEL_84;
  }
  *(GUID *)pvar = PKEY_AudioEndpoint_FormFactor.fmtid;
  LODWORD(v85) = PKEY_AudioEndpoint_FormFactor.pid;
  AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                   (__int64)&v79,
                   (__int128 *)pvar,
                   v16,
                   &v71);
  if ( AsUInt32With >= 0 )
  {
    AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 56) + 32LL))(
                     *(_QWORD *)(a1 + 56),
                     &v68);
    if ( AsUInt32With >= 0 )
    {
      if ( (v14 & 2) != 0 )
      {
        if ( v71 == 1 )
        {
          pvar[0] = 0LL;
          pvar[1] = 0LL;
          v85 = 0LL;
          if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a7 + 40LL))(
                 a7,
                 &PKEY_Endpoint_SpatialNotAllowed,
                 pvar) < 0
            || !LOWORD(pvar[0])
            || LOWORD(pvar[0]) == 11 && !LOWORD(pvar[1]) )
          {
            v14 &= ~2u;
          }
          PropVariantClear(pvar);
        }
        else
        {
          v14 &= ~2u;
        }
      }
      AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)pvar, a5);
      AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&v87, v76);
      v21 = (const GUID *)(unsigned int)hProvider;
      if ( (unsigned int)hProvider > 4 )
      {
        TlgCreateWsz(&pDesc, a2);
        LODWORD(v75) = v14;
        v96 = &v75;
        v97 = 4LL;
        v62 = *(_BYTE *)a4;
        v98 = &v62;
        v99 = 1LL;
        v63 = *(_BYTE *)(a4 + 60);
        v100 = &v63;
        v101 = 1LL;
        v102 = a4 + 12;
        v103 = 16LL;
        v64 = *(_BYTE *)(a4 + 8);
        v104 = &v64;
        v105 = 1LL;
        v72 = *(_WORD *)(a4 + 68);
        v106 = &v72;
        v107 = 2LL;
        LOWORD(v70) = v68;
        v108 = &v70;
        v109 = 2LL;
        LOWORD(v67) = v71;
        v110 = &v67;
        v111 = 2LL;
        v112 = pvar;
        v113 = 2LL;
        v73 = __PAIR64__(HIDWORD(pvar[0]), v86);
        v114 = &v73;
        v115 = 4LL;
        v116 = (char *)&v73 + 4;
        v117 = 4LL;
        v118 = (char *)&pvar[1] + 4;
        v119 = 16LL;
        v120 = &pvar[1];
        v121 = 2LL;
        v122 = (char *)&pvar[1] + 2;
        v123 = 2LL;
        v124 = &v87;
        v125 = 2LL;
        Ptr_high = v88;
        v126 = &Ptr_high;
        v127 = 4LL;
        LODWORD(pv) = HIDWORD(v87.Ptr);
        p_pv = &pv;
        v129 = 4LL;
        p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&v87.Reserved;
        v131 = 16LL;
        p_Size = &v87.Size;
        v133 = 2LL;
        v134 = (char *)&v87.Size + 2;
        v135 = 2LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801764EA, v22, v23, 0x17u, &pData);
        v21 = (const GUID *)(unsigned int)hProvider;
        v19 = a5;
        v20 = v76;
      }
      if ( *(_DWORD *)a4 )
      {
        if ( v65 )
        {
          if ( (unsigned int)v21 > 4 )
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801763BA, v18, v21, 2u, &v87);
          goto LABEL_30;
        }
        *(_OWORD *)pvar = *GetPreferredSpatialAudioEncoderId(pvar, v68, a4);
        v75 = (LPVOID *)(a4 + 12);
        v35 = (char *)pvar[0] - *(_QWORD *)(a4 + 12);
        if ( pvar[0] == *(PROPVARIANT *)(a4 + 12) )
          v35 = (char *)pvar[1] - *(_QWORD *)(a4 + 20);
        if ( v35 )
        {
          if ( v33 > 4 )
          {
            TlgCreateWsz(&v89, a2);
            v90 = v36;
            v91 = 16LL;
            *(_OWORD *)pvar = *GetPreferredSpatialAudioEncoderId(&v83, v68, a4);
            v92 = pvar;
            v93 = 16LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017634C, v37, v38, 5u, &v87);
          }
          goto LABEL_30;
        }
        v70 = v34;
        v73 = -1LL;
        v67 = -1;
        Ptr_high = -1;
        LODWORD(pv) = -1;
        memset_0(v150, 0, sizeof(v150));
        AsUInt32With = CSpatialProperties::InitSpatialTechList((CSpatialProperties *)a1);
        if ( AsUInt32With >= 0 )
        {
          CSpatialAudioTechnologies::RegistryGates();
          if ( g_ListOfSpatialTech[0] <= 8u )
          {
            v39 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                    (__int64)&v87,
                    v78);
            v40 = v76;
            if ( a5 )
              v40 = 0LL;
            CSpatialProperties::EnumerateSpatialEncoders(
              (EVENT_DATA_DESCRIPTOR *)a1,
              1,
              a4,
              0,
              0LL,
              v71,
              v68,
              (__int64)v40,
              (__int64)a5,
              0,
              v39,
              a2,
              (__int64)v150,
              (unsigned int *)&v73,
              &v67,
              (unsigned int *)&v73 + 1,
              (__int64)&Ptr_high,
              (__int64)&pv,
              0LL);
            if ( v67 == -1 )
            {
              if ( (unsigned int)hProvider > 2 )
              {
                TlgCreateWsz(&v89, a2);
                v90 = (LPVOID *)(a4 + 12);
                v91 = 16LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017644C, v41, v42, 4u, &v87);
              }
              goto LABEL_30;
            }
            v43 = 834LL * v67;
            if ( *(_DWORD *)((char *)&v150[98] + v43) )
            {
              AsUInt32With = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v77 + 176LL))(v77, &v70);
              if ( AsUInt32With >= 0 )
              {
                if ( v70 )
                {
                  if ( (unsigned int)hProvider > 2 )
                  {
                    TlgCreateWsz(&v89, a2);
                    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176241, v46, v47, 3u, &v87);
                  }
                  goto LABEL_30;
                }
                if ( *(_DWORD *)(v80 + 68) == 1 && (v14 & 4) != 0 )
                {
                  if ( (unsigned int)hProvider > 2 )
                  {
                    TlgCreateWsz(&v89, a2);
                    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801761FC, v48, v49, 3u, &v87);
                  }
                  goto LABEL_30;
                }
                if ( (v14 & 3) != 0 )
                {
                  if ( (unsigned int)hProvider > 2 )
                  {
                    TlgCreateWsz(&v89, a2);
                    LODWORD(pv) = v14;
                    v90 = &pv;
                    v91 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176309, v50, v51, cData, &v87);
                  }
                  goto LABEL_30;
                }
                a10->Format.wFormatTag = -2;
                v53 = *(_WORD *)((char *)&v150[103] + v43 + 4);
                a10->Format.nChannels = v53;
                v54 = *(_DWORD *)((char *)&v150[100] + v43 + 4);
                a10->Format.nSamplesPerSec = v54;
                v55 = *(_WORD *)((char *)&v150[103] + v43 + 6);
                a10->Format.wBitsPerSample = v55;
                v56 = (unsigned __int16)(v53 * (v55 >> 3));
                a10->Format.nBlockAlign = v56;
                a10->Format.nAvgBytesPerSec = v54 * v56;
                a10->Format.cbSize = 22;
                a10->dwChannelMask = *(_DWORD *)((char *)&v150[101] + v43);
                a10->SubFormat = *(GUID *)((char *)&v150[101] + v43 + 4);
                a10->Samples.wValidBitsPerSample = *(_WORD *)((char *)&v150[104] + v43);
                AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&v87, &a10->Format);
                if ( (unsigned int)hProvider > 5 )
                {
                  TlgCreateWsz(&v137, a2);
                  v138 = &v87;
                  v139 = 2LL;
                  LODWORD(pv) = v88;
                  v140 = &pv;
                  v141 = 4LL;
                  Ptr_high = HIDWORD(v87.Ptr);
                  p_Ptr_high = &Ptr_high;
                  v143 = 4LL;
                  v144 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&v87.Reserved;
                  v145 = 16LL;
                  v146 = &v87.Size;
                  v147 = 2LL;
                  v148 = (char *)&v87.Size + 2;
                  v149 = 2LL;
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176282, v57, v58, 9u, &v136);
                }
                *v74 = 1;
              }
            }
            else
            {
              if ( (unsigned int)hProvider > 2 )
              {
                TlgCreateWsz(&v89, a2);
                v90 = v75;
                v91 = 16LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801763F6, v44, v45, 4u, &v87);
              }
              AsUInt32With = -2147009035;
            }
          }
          else
          {
            AsUInt32With = -2147418113;
          }
        }
      }
      else
      {
        if ( v19 )
        {
          if ( v19->wFormatTag == 0xFFFE )
          {
            LOBYTE(v15) = 1;
            if ( (unsigned __int8)IsSpatialOnlyFormat((char *)&v19[1].nSamplesPerSec + 2, v15) )
            {
              if ( (unsigned int)hProvider > 2 )
              {
                TlgCreateWsz(&v89, a2);
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801764A3, v24, v25, 3u, &v87);
              }
LABEL_30:
              AsUInt32With = -2147024846;
              goto LABEL_84;
            }
            goto LABEL_46;
          }
LABEL_47:
          if ( (unsigned int)v21 > 4 )
          {
            TlgCreateWsz(&v89, a2);
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801766C5, v31, v32, 3u, &v87);
          }
          *v74 = 0;
          goto LABEL_84;
        }
        if ( v20->wFormatTag != 0xFFFE )
          goto LABEL_47;
        LOBYTE(v15) = *(_BYTE *)(a1 + 72) == 0;
        if ( !(unsigned __int8)IsSpatialOnlyFormat((char *)&v20[1].nSamplesPerSec + 2, v15) )
        {
LABEL_46:
          LODWORD(v21) = (_DWORD)hProvider;
          goto LABEL_47;
        }
        if ( (unsigned int)hProvider > 4 )
        {
          TlgCreateWsz(&v89, a2);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176707, v26, v27, 3u, &v87);
        }
        pv = 0LL;
        pvar[0] = &pv;
        pvar[1] = 0LL;
        LOBYTE(v85) = 1;
        AsUInt32With = (*(__int64 (__fastcall **)(__int64, const WCHAR *, __int64, PROPVARIANT *))(*(_QWORD *)v77 + 32LL))(
                         v77,
                         a2,
                         1LL,
                         &pvar[1]);
        if ( (_BYTE)v85 )
        {
          v28 = pvar[1];
          v29 = pvar[0];
          v30 = *(void **)pvar[0];
          if ( pvar[1] != *(PROPVARIANT *)pvar[0] )
          {
            if ( v30 )
              CoTaskMemFree(v30);
            *v29 = v28;
          }
        }
        if ( AsUInt32With >= 0 )
        {
          if ( (unsigned int)CopyToWaveFormatExtensible(a10, (const struct tWAVEFORMATEX *)pv) )
            *v74 = 1;
          else
            AsUInt32With = -2147418113;
        }
        if ( pv )
          CoTaskMemFree(pv);
      }
    }
  }
LABEL_84:
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( a7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 16LL))(a7);
  v59 = v78;
  v60 = *(_QWORD *)(v78 + 56);
  if ( v60 )
  {
    LOBYTE(v15) = v60 != v78;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v60 + 32LL))(v60, v15);
    *(_QWORD *)(v59 + 56) = 0LL;
  }
  return (unsigned int)AsUInt32With;
}
