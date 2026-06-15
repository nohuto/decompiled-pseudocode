/*
 * XREFs of ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18012DB70
 * Callers:
 *     ?GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180117214 (-GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWA.c)
 * Callees:
 *     GetPreferredSpatialAudioEncoderId @ 0x180003A48 (GetPreferredSpatialAudioEncoderId.c)
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x180008FC0 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x1800090B4 (-InitSpatialTechList@CSpatialProperties@@AEAAJXZ.c)
 *     ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x18000B2F0 (--0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z.c)
 *     IsSpatialOnlyFormat @ 0x18000BCC4 (IsSpatialOnlyFormat.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18000BF08 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x18000C238 (-CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000E10C (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     BlockSpatialAudioRegistryGates @ 0x180029F88 (BlockSpatialAudioRegistryGates.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180037438 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGKPEAU3@AEAK9999PEAU2@@Z @ 0x180068C10 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSpatialProperties::GetAudioFormatForSpatialFormat(
        __int64 a1,
        LPCWSTR *a2,
        char a3,
        __int64 a4,
        struct tWAVEFORMATEX *a5,
        struct tWAVEFORMATEX *a6,
        __int64 a7,
        _BYTE *a8,
        __int64 a9,
        struct WAVEFORMATEXTENSIBLE *a10,
        _BYTE *a11)
{
  int v14; // r14d
  void *v15; // rdx
  int AsUInt32With; // ebx
  __int64 v17; // rdi
  __int64 v18; // rcx
  const GUID *v20; // r8
  struct tWAVEFORMATEX *v21; // r10
  struct tWAVEFORMATEX *v22; // r11
  __int64 v23; // r9
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  void *v30; // rcx
  LPCGUID v31; // r8
  LPCGUID v32; // r9
  unsigned int v33; // r9d
  __int64 v34; // rax
  struct tWAVEFORMATEX *v35; // r9
  LPCGUID v36; // r8
  LPCGUID v37; // r9
  __int64 v38; // r8
  LPCGUID v39; // r8
  LPCGUID v40; // r9
  LPCGUID v41; // r8
  LPCGUID v42; // r9
  LPCGUID v43; // r8
  LPCGUID v44; // r9
  LPCGUID v45; // r8
  LPCGUID cData; // r9
  WORD v47; // ax
  DWORD v48; // edx
  WORD v49; // cx
  int v50; // eax
  LPCGUID v51; // r8
  LPCGUID v52; // r9
  LPVOID *v53; // r10
  LPCGUID v54; // r8
  LPCGUID v55; // r9
  LPVOID pv; // [rsp+A0h] [rbp-80h] BYREF
  char v57; // [rsp+A8h] [rbp-78h] BYREF
  char v58; // [rsp+A9h] [rbp-77h] BYREF
  char v59; // [rsp+AAh] [rbp-76h] BYREF
  char v60; // [rsp+ABh] [rbp-75h]
  unsigned int v61; // [rsp+ACh] [rbp-74h] BYREF
  int v62; // [rsp+B0h] [rbp-70h] BYREF
  int Ptr_high; // [rsp+B4h] [rbp-6Ch] BYREF
  int v64; // [rsp+B8h] [rbp-68h] BYREF
  unsigned int v65; // [rsp+BCh] [rbp-64h] BYREF
  __int16 v66; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v67; // [rsp+C4h] [rbp-5Ch] BYREF
  unsigned int v68; // [rsp+C8h] [rbp-58h] BYREF
  LPVOID *v69; // [rsp+D0h] [rbp-50h] BYREF
  _BYTE *v70; // [rsp+D8h] [rbp-48h]
  struct tWAVEFORMATEX *v71; // [rsp+E0h] [rbp-40h]
  __int64 v72; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v73; // [rsp+F0h] [rbp-30h]
  __int64 v74; // [rsp+F8h] [rbp-28h]
  __int64 v75; // [rsp+100h] [rbp-20h]
  __int128 v76; // [rsp+108h] [rbp-18h] BYREF
  PROPVARIANT pvar[2]; // [rsp+120h] [rbp+0h] BYREF
  __int64 v78; // [rsp+130h] [rbp+10h]
  unsigned int v79; // [rsp+13Ch] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR v80; // [rsp+140h] [rbp+20h] BYREF
  int v81; // [rsp+15Ch] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+160h] [rbp+40h] BYREF
  LPVOID *v83; // [rsp+170h] [rbp+50h]
  __int64 v84; // [rsp+178h] [rbp+58h]
  PROPVARIANT *v85; // [rsp+180h] [rbp+60h]
  __int64 v86; // [rsp+188h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B0h] [rbp+90h] BYREF
  EVENT_DATA_DESCRIPTOR *v89; // [rsp+1C0h] [rbp+A0h]
  __int64 v90; // [rsp+1C8h] [rbp+A8h]
  LPVOID *v91; // [rsp+1D0h] [rbp+B0h]
  __int64 v92; // [rsp+1D8h] [rbp+B8h]
  int *p_Ptr_high; // [rsp+1E0h] [rbp+C0h]
  __int64 v94; // [rsp+1E8h] [rbp+C8h]
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *v95; // [rsp+1F0h] [rbp+D0h]
  __int64 v96; // [rsp+1F8h] [rbp+D8h]
  ULONG *v97; // [rsp+200h] [rbp+E0h]
  __int64 v98; // [rsp+208h] [rbp+E8h]
  char *v99; // [rsp+210h] [rbp+F0h]
  __int64 v100; // [rsp+218h] [rbp+F8h]
  int *v101; // [rsp+220h] [rbp+100h]
  __int64 v102; // [rsp+228h] [rbp+108h]
  unsigned int *v103; // [rsp+230h] [rbp+110h]
  __int64 v104; // [rsp+238h] [rbp+118h]
  PROPVARIANT *v105; // [rsp+240h] [rbp+120h]
  __int64 v106; // [rsp+248h] [rbp+128h]
  unsigned int *v107; // [rsp+250h] [rbp+130h]
  __int64 v108; // [rsp+258h] [rbp+138h]
  unsigned int *v109; // [rsp+260h] [rbp+140h]
  __int64 v110; // [rsp+268h] [rbp+148h]
  char *v111; // [rsp+270h] [rbp+150h]
  __int64 v112; // [rsp+278h] [rbp+158h]
  PROPVARIANT *v113; // [rsp+280h] [rbp+160h]
  __int64 v114; // [rsp+288h] [rbp+168h]
  char *v115; // [rsp+290h] [rbp+170h]
  __int64 v116; // [rsp+298h] [rbp+178h]
  EVENT_DATA_DESCRIPTOR *v117; // [rsp+2A0h] [rbp+180h]
  __int64 v118; // [rsp+2A8h] [rbp+188h]
  int *v119; // [rsp+2B0h] [rbp+190h]
  __int64 v120; // [rsp+2B8h] [rbp+198h]
  LPVOID *p_pv; // [rsp+2C0h] [rbp+1A0h]
  __int64 v122; // [rsp+2C8h] [rbp+1A8h]
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // [rsp+2D0h] [rbp+1B0h]
  __int64 v124; // [rsp+2D8h] [rbp+1B8h]
  ULONG *p_Size; // [rsp+2E0h] [rbp+1C0h]
  __int64 v126; // [rsp+2E8h] [rbp+1C8h]
  char *v127; // [rsp+2F0h] [rbp+1D0h]
  __int64 v128; // [rsp+2F8h] [rbp+1D8h]
  _BYTE v129[6672]; // [rsp+300h] [rbp+1E0h] BYREF

  v74 = -2LL;
  v60 = a3;
  v71 = a6;
  v73 = a9;
  v75 = a9;
  v70 = a11;
  v65 = 10;
  v14 = BlockSpatialAudioRegistryGates();
  v62 = 0;
  v72 = a7;
  if ( a7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  *(_QWORD *)&v76 = a1;
  *(_BYTE *)(a1 + 77) = 1;
  if ( !v70 || (*v70 = 0, !a10) || (*(_QWORD *)&a10->Format.wFormatTag = 0LL, !a4) || !a6 || !a7 )
  {
    AsUInt32With = -2147467261;
    goto LABEL_5;
  }
  *(GUID *)pvar = PKEY_AudioEndpoint_FormFactor.fmtid;
  LODWORD(v78) = PKEY_AudioEndpoint_FormFactor.pid;
  AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                   (__int64)&v72,
                   (__int128 *)pvar,
                   10,
                   &v65);
  if ( AsUInt32With < 0 )
    goto LABEL_5;
  AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(*(_QWORD *)(a1 + 56), &v62);
  if ( AsUInt32With < 0 )
    goto LABEL_5;
  if ( (v14 & 2) != 0 )
  {
    if ( v65 == 1 )
    {
      pvar[0] = 0LL;
      pvar[1] = 0LL;
      v78 = 0LL;
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
  AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&v80, v71);
  v23 = (unsigned int)hProvider;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&pDesc, a2[3]);
    LODWORD(v69) = v14;
    v89 = (EVENT_DATA_DESCRIPTOR *)&v69;
    v90 = 4LL;
    v57 = *(_BYTE *)a4;
    v91 = (LPVOID *)&v57;
    v92 = 1LL;
    v58 = *(_BYTE *)(a4 + 60);
    p_Ptr_high = (int *)&v58;
    v94 = 1LL;
    v95 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)(a4 + 12);
    v96 = 16LL;
    v59 = *(_BYTE *)(a4 + 8);
    v97 = (ULONG *)&v59;
    v98 = 1LL;
    v66 = *(_WORD *)(a4 + 68);
    v99 = (char *)&v66;
    v100 = 2LL;
    LOWORD(v64) = v62;
    v101 = &v64;
    v102 = 2LL;
    LOWORD(v61) = v65;
    v103 = &v61;
    v104 = 2LL;
    v105 = pvar;
    v106 = 2LL;
    v67 = v79;
    v107 = &v67;
    v108 = 4LL;
    v68 = HIDWORD(pvar[0]);
    v109 = &v68;
    v110 = 4LL;
    v111 = (char *)&pvar[1] + 4;
    v112 = 16LL;
    v113 = &pvar[1];
    v114 = 2LL;
    v115 = (char *)&pvar[1] + 2;
    v116 = 2LL;
    v117 = &v80;
    v118 = 2LL;
    Ptr_high = v81;
    v119 = &Ptr_high;
    v120 = 4LL;
    LODWORD(pv) = HIDWORD(v80.Ptr);
    p_pv = &pv;
    v122 = 4LL;
    p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&v80.Reserved;
    v124 = 16LL;
    p_Size = &v80.Size;
    v126 = 2LL;
    v127 = (char *)&v80.Size + 2;
    v128 = 2LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A708, v24, v25, 0x17u, &pData);
    v23 = (unsigned int)hProvider;
    v21 = a5;
    v22 = v71;
  }
  if ( *(_DWORD *)a4 )
  {
    if ( v60 )
    {
      if ( (unsigned int)v23 > 4 )
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A5D8, v20, (LPCGUID)v23, 2u, &v80);
    }
    else
    {
      *(_OWORD *)pvar = *GetPreferredSpatialAudioEncoderId(pvar, v62, a4);
      v69 = (LPVOID *)(a4 + 12);
      if ( pvar[0] != *(PROPVARIANT *)(a4 + 12) || pvar[1] != *(PROPVARIANT *)(a4 + 20) )
      {
        if ( v33 > 4 )
        {
          TlgCreateWsz(&v82, a2[3]);
          v83 = v53;
          v84 = 16LL;
          *(_OWORD *)pvar = *GetPreferredSpatialAudioEncoderId(&v76, v62, a4);
          v85 = pvar;
          v86 = 16LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A56A, v54, v55, 5u, &v80);
        }
        goto LABEL_35;
      }
      v67 = -1;
      v61 = -1;
      v68 = -1;
      Ptr_high = -1;
      LODWORD(pv) = -1;
      v64 = 2;
      memset_0(v129, 0, sizeof(v129));
      AsUInt32With = CSpatialProperties::InitSpatialTechList((CSpatialProperties *)a1);
      if ( AsUInt32With < 0 )
        goto LABEL_5;
      CSpatialAudioTechnologies::RegistryGates();
      if ( g_ListOfSpatialTech[0] > 8u )
      {
        AsUInt32With = -2147418113;
        goto LABEL_5;
      }
      *(_OWORD *)pvar = PKEY_Endpoint_PreferedPcmChannelCountForHrtf;
      LODWORD(v78) = 2;
      AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                       (__int64)&v72,
                       (__int128 *)pvar,
                       2,
                       &v64);
      if ( AsUInt32With < 0 )
        goto LABEL_5;
      v34 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
              (__int64)&v80,
              v73);
      v35 = v71;
      if ( a5 )
        v35 = 0LL;
      CSpatialProperties::EnumerateSpatialEncoders(
        a1,
        1,
        a4,
        0,
        0LL,
        v65,
        v62,
        (__int64)v35,
        &a5->wFormatTag,
        0,
        v34,
        a2[3],
        v64,
        (__int64)v129,
        &v67,
        &v61,
        &v68,
        (__int64)&Ptr_high,
        (__int64)&pv,
        0LL);
      if ( v61 == -1 )
      {
        if ( (unsigned int)hProvider > 2 )
        {
          TlgCreateWsz(&v82, a2[3]);
          v83 = v69;
          v84 = 16LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A66A, v36, v37, 4u, &v80);
        }
        goto LABEL_35;
      }
      v38 = 834LL * v61;
      if ( !*(_DWORD *)&v129[v38 + 784] )
      {
        if ( (unsigned int)hProvider > 2 )
        {
          TlgCreateWsz(&v82, a2[3]);
          v83 = v69;
          v84 = 16LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A614, v39, v40, 4u, &v80);
        }
        AsUInt32With = -2147009035;
        goto LABEL_5;
      }
      if ( *a8 )
      {
        if ( (unsigned int)hProvider > 2 )
        {
          TlgCreateWsz(&v82, a2[3]);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A45F, v41, v42, 3u, &v80);
        }
      }
      else
      {
        if ( *(_DWORD *)(a4 + 68) != 1 || (v14 & 4) == 0 )
        {
          if ( (v14 & 3) != 0 )
          {
            if ( (unsigned int)hProvider > 2 )
            {
              TlgCreateWsz(&v82, a2[3]);
              LODWORD(pv) = v14;
              v83 = &pv;
              v84 = 4LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A527, v45, cData, (UINT32)cData, &v80);
            }
            goto LABEL_35;
          }
          a10->Format.wFormatTag = -2;
          v47 = *(_WORD *)&v129[v38 + 828];
          a10->Format.nChannels = v47;
          v48 = *(_DWORD *)&v129[v38 + 804];
          a10->Format.nSamplesPerSec = v48;
          v49 = *(_WORD *)&v129[v38 + 830];
          a10->Format.wBitsPerSample = v49;
          v50 = (unsigned __int16)(v47 * (v49 >> 3));
          a10->Format.nBlockAlign = v50;
          a10->Format.nAvgBytesPerSec = v48 * v50;
          a10->Format.cbSize = 22;
          a10->dwChannelMask = *(_DWORD *)&v129[v38 + 808];
          a10->SubFormat = *(GUID *)&v129[v38 + 812];
          a10->Samples.wValidBitsPerSample = *(_WORD *)&v129[v38 + 832];
          AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&v80, &a10->Format);
          if ( (unsigned int)hProvider > 5 )
          {
            TlgCreateWsz(&pDesc, a2[3]);
            v89 = &v80;
            v90 = 2LL;
            LODWORD(pv) = v81;
            v91 = &pv;
            v92 = 4LL;
            Ptr_high = HIDWORD(v80.Ptr);
            p_Ptr_high = &Ptr_high;
            v94 = 4LL;
            v95 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&v80.Reserved;
            v96 = 16LL;
            v97 = &v80.Size;
            v98 = 2LL;
            v99 = (char *)&v80.Size + 2;
            v100 = 2LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A4A0, v51, v52, 9u, &pData);
          }
          *v70 = 1;
          goto LABEL_5;
        }
        if ( (unsigned int)hProvider > 2 )
        {
          TlgCreateWsz(&v82, a2[3]);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A41A, v43, v44, 3u, &v80);
        }
      }
    }
    AsUInt32With = -2147024846;
    goto LABEL_5;
  }
  if ( v21 )
  {
    if ( v21->wFormatTag == 0xFFFE )
    {
      LOBYTE(v15) = 1;
      if ( IsSpatialOnlyFormat((DWORD *)((char *)&v21[1].nSamplesPerSec + 2), (__int64)v15, (__int64)v20, v23) )
      {
        if ( (unsigned int)hProvider > 2 )
        {
          TlgCreateWsz(&v82, a2[3]);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A6C1, v26, v27, 3u, &v80);
        }
LABEL_35:
        AsUInt32With = -2147024846;
        goto LABEL_5;
      }
      goto LABEL_49;
    }
LABEL_50:
    if ( (unsigned int)v23 > 4 )
    {
      TlgCreateWsz(&v82, a2[3]);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A8E3, v31, v32, 3u, &v80);
    }
    *v70 = 0;
    goto LABEL_5;
  }
  if ( v22->wFormatTag != 0xFFFE )
    goto LABEL_50;
  LOBYTE(v15) = *(_BYTE *)(a1 + 72) == 0;
  if ( !IsSpatialOnlyFormat((DWORD *)((char *)&v22[1].nSamplesPerSec + 2), (__int64)v15, (__int64)v20, v23) )
  {
LABEL_49:
    LODWORD(v23) = (_DWORD)hProvider;
    goto LABEL_50;
  }
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&v82, a2[3]);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A925, v28, v29, 3u, &v80);
  }
  pv = 0LL;
  pvar[0] = &pv;
  pvar[1] = 0LL;
  LOBYTE(v78) = 1;
  AsUInt32With = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                   (CEndpointCharacteristics *)a2,
                   0,
                   1LL,
                   (struct tWAVEFORMATEX **)&pvar[1],
                   0LL,
                   0LL,
                   0LL);
  if ( (_BYTE)v78 )
  {
    v15 = *(void **)pvar[0];
    *(_QWORD *)pvar[0] = pvar[1];
    if ( v15 )
      CoTaskMemFree(v15);
  }
  if ( AsUInt32With >= 0 )
  {
    if ( (unsigned int)CopyToWaveFormatExtensible(a10, (const struct tWAVEFORMATEX *)pv) )
      *v70 = 1;
    else
      AsUInt32With = -2147418113;
  }
  v30 = pv;
  pv = 0LL;
  if ( v30 )
    CoTaskMemFree(v30);
LABEL_5:
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( a7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 16LL))(a7);
  v17 = v73;
  v18 = *(_QWORD *)(v73 + 56);
  if ( v18 )
  {
    LOBYTE(v15) = v18 != v73;
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v18 + 32LL))(v18, v15);
    *(_QWORD *)(v17 + 56) = 0LL;
  }
  return (unsigned int)AsUInt32With;
}
