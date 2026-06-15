/*
 * XREFs of ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180123E6C
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x18010CFC8 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUSpatialAudioSetti.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     BlockSpatialAudioRegistryGates @ 0x18004C7C4 (BlockSpatialAudioRegistryGates.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGPEAU3@AEAK9999PEAU2@@Z @ 0x1800526B0 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 *     GetPreferredSpatialAudioEncoderId @ 0x180052D64 (GetPreferredSpatialAudioEncoderId.c)
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
 *     IsSpatialOnlyFormat @ 0x180122ECC (IsSpatialOnlyFormat.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSpatialProperties::SetSpatialAudioSettings(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rsi
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // r8
  int *v15; // r12
  char *v16; // rax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rcx
  char v21; // di
  unsigned int v22; // edx
  __int64 v23; // r10
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  __int64 v28; // rax
  const WCHAR *v29; // r15
  __int64 v30; // r8
  LPCGUID v31; // r8
  LPCGUID v32; // r9
  __int64 v33; // r15
  __int64 v34; // r12
  unsigned __int8 v35; // r10
  LPCGUID v36; // r8
  LPCGUID v37; // r9
  unsigned int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rcx
  LPCGUID v41; // r8
  LPCGUID v42; // r9
  __int64 v43; // rax
  int v44; // eax
  LPCGUID v45; // r8
  LPCGUID v46; // r9
  LPCGUID v47; // r8
  LPCGUID v48; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  LPCGUID v51; // r8
  LPCGUID v52; // r9
  LPCGUID v53; // r8
  LPCGUID v54; // r9
  _BYTE v55[4]; // [rsp+A0h] [rbp-80h] BYREF
  int AsUInt32With; // [rsp+A4h] [rbp-7Ch] BYREF
  char v57; // [rsp+A8h] [rbp-78h]
  char v58; // [rsp+A9h] [rbp-77h] BYREF
  _BYTE v59[2]; // [rsp+AAh] [rbp-76h] BYREF
  _WORD v60[2]; // [rsp+ACh] [rbp-74h] BYREF
  int v61; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v62; // [rsp+B4h] [rbp-6Ch] BYREF
  int v63; // [rsp+BCh] [rbp-64h] BYREF
  int Ptr_high; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v65[3]; // [rsp+C4h] [rbp-5Ch] BYREF
  int v66; // [rsp+D0h] [rbp-50h] BYREF
  unsigned int v67; // [rsp+D4h] [rbp-4Ch] BYREF
  int v68; // [rsp+D8h] [rbp-48h] BYREF
  int v69; // [rsp+DCh] [rbp-44h] BYREF
  __int64 v70; // [rsp+E0h] [rbp-40h]
  unsigned int v71; // [rsp+E8h] [rbp-38h] BYREF
  struct tWAVEFORMATEX *v72; // [rsp+F0h] [rbp-30h]
  __int64 v73; // [rsp+F8h] [rbp-28h]
  __int128 v74; // [rsp+100h] [rbp-20h] BYREF
  __int64 v75; // [rsp+110h] [rbp-10h]
  __int64 v76; // [rsp+118h] [rbp-8h]
  PROPVARIANT pvar[2]; // [rsp+120h] [rbp+0h] BYREF
  __int64 v78; // [rsp+130h] [rbp+10h]
  _BYTE Buf2[64]; // [rsp+140h] [rbp+20h] BYREF
  __int64 v80; // [rsp+180h] [rbp+60h]
  GUID v81; // [rsp+190h] [rbp+70h] BYREF
  __int128 v82; // [rsp+1A0h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B0h] [rbp+90h] BYREF
  unsigned int v84; // [rsp+1CCh] [rbp+ACh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1D0h] [rbp+B0h] BYREF
  int *p_AsUInt32With; // [rsp+1E0h] [rbp+C0h]
  __int64 v87; // [rsp+1E8h] [rbp+C8h]
  __int128 *v88; // [rsp+1F0h] [rbp+D0h]
  __int64 v89; // [rsp+1F8h] [rbp+D8h]
  EVENT_DATA_DESCRIPTOR v90; // [rsp+200h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+220h] [rbp+100h] BYREF
  unsigned int *v92; // [rsp+230h] [rbp+110h]
  __int64 v93; // [rsp+238h] [rbp+118h]
  char *v94; // [rsp+240h] [rbp+120h]
  __int64 v95; // [rsp+248h] [rbp+128h]
  _BYTE *v96; // [rsp+250h] [rbp+130h]
  __int64 v97; // [rsp+258h] [rbp+138h]
  char *v98; // [rsp+260h] [rbp+140h]
  __int64 v99; // [rsp+268h] [rbp+148h]
  _BYTE *v100; // [rsp+270h] [rbp+150h]
  __int64 v101; // [rsp+278h] [rbp+158h]
  GUID *v102; // [rsp+280h] [rbp+160h]
  __int64 v103; // [rsp+288h] [rbp+168h]
  EVENT_DATA_DESCRIPTOR *p_pData; // [rsp+290h] [rbp+170h]
  __int64 v105; // [rsp+298h] [rbp+178h]
  unsigned int *v106; // [rsp+2A0h] [rbp+180h]
  __int64 v107; // [rsp+2A8h] [rbp+188h]
  int *p_Ptr_high; // [rsp+2B0h] [rbp+190h]
  __int64 v109; // [rsp+2B8h] [rbp+198h]
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // [rsp+2C0h] [rbp+1A0h]
  __int64 v111; // [rsp+2C8h] [rbp+1A8h]
  ULONG *p_Size; // [rsp+2D0h] [rbp+1B0h]
  __int64 v113; // [rsp+2D8h] [rbp+1B8h]
  char *v114; // [rsp+2E0h] [rbp+1C0h]
  __int64 v115; // [rsp+2E8h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+2F0h] [rbp+1D0h] BYREF
  _BYTE Src[6672]; // [rsp+300h] [rbp+1E0h] BYREF

  v75 = -2LL;
  v72 = (struct tWAVEFORMATEX *)a4;
  *(_QWORD *)&v65[1] = a2;
  v11 = a5;
  v70 = a5;
  v73 = a7;
  v76 = a7;
  AsUInt32With = 0;
  v61 = 0;
  v69 = 0;
  v68 = 0;
  *(_QWORD *)&v74 = a5;
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  v66 = 10;
  v81 = GUID_00000000_0000_0000_0000_000000000000;
  v12 = BlockSpatialAudioRegistryGates();
  memset_0(Buf2, 0, 0x48uLL);
  memset_0(Src, 0, sizeof(Src));
  v67 = -1;
  v62 = 0xFFFFFFFFLL;
  v63 = -1;
  v57 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  *(_QWORD *)&v82 = a1;
  *(_BYTE *)(a1 + 77) = 0;
  if ( a3 && a4 && a5 && a6 && a2 )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      AsUInt32With = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a6 + 176LL))(a6, &v68);
      if ( AsUInt32With >= 0 )
      {
        AsUInt32With = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 24LL))(*(_QWORD *)(a1 + 56));
        if ( AsUInt32With >= 0 )
        {
          AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(
                           *(_QWORD *)(a1 + 56),
                           &v61);
          if ( AsUInt32With >= 0 )
          {
            AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 40LL))(
                             *(_QWORD *)(a1 + 56),
                             &v69);
            if ( AsUInt32With >= 0 )
            {
              if ( !*(_DWORD *)a3
                && !v61
                && *(_WORD *)a4 == 0xFFFE
                && IsSpatialOnlyFormat((_QWORD *)(a4 + 24), *(_BYTE *)(a1 + 72) == 0) )
              {
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40));
                AsUInt32With = -2147418113;
                goto LABEL_27;
              }
              *(GUID *)pvar = PKEY_AudioEndpoint_FormFactor.fmtid;
              LODWORD(v78) = PKEY_AudioEndpoint_FormFactor.pid;
              AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                               (__int64)&v74,
                               (__int128 *)pvar,
                               v14,
                               &v66);
              if ( AsUInt32With >= 0 )
              {
                AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**(_QWORD **)(a1 + 56) + 48LL))(
                                 *(_QWORD *)(a1 + 56),
                                 &v81);
                if ( AsUInt32With >= 0 )
                {
                  *(_OWORD *)pvar = *GetPreferredSpatialAudioEncoderId(pvar, v61, a3);
                  v15 = (int *)(a3 + 12);
                  v16 = (char *)pvar[0] - *(_QWORD *)(a3 + 12);
                  if ( pvar[0] == *(PROPVARIANT *)(a3 + 12) )
                    v16 = (char *)pvar[1] - *(_QWORD *)(a3 + 20);
                  if ( v16 )
                  {
                    if ( (unsigned int)hProvider > 2 )
                    {
                      TlgCreateWsz(&pDesc, a2);
                      p_AsUInt32With = (int *)(a3 + 12);
                      v87 = 16LL;
                      v82 = *GetPreferredSpatialAudioEncoderId(&v74, v61, a3);
                      v88 = &v82;
                      v89 = 16LL;
                      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176CF0, v17, v18, 5u, &pData);
                    }
                    AsUInt32With = -2147024846;
LABEL_26:
                    v11 = v70;
                    goto LABEL_27;
                  }
                  AsUInt32With = CSpatialProperties::InitSpatialTechList((CSpatialProperties *)a1);
                  if ( AsUInt32With >= 0 )
                  {
                    v21 = 1;
                    if ( (v12 & 2) != 0 )
                    {
                      if ( v66 == 1 )
                      {
                        pvar[0] = 0LL;
                        pvar[1] = 0LL;
                        v78 = 0LL;
                        if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v70 + 40LL))(
                               v70,
                               &PKEY_Endpoint_SpatialNotAllowed,
                               pvar) < 0
                          || !LOWORD(pvar[0])
                          || LOWORD(pvar[0]) == 11 && !LOWORD(pvar[1]) )
                        {
                          v12 &= ~2u;
                        }
                        PropVariantClear(pvar);
                      }
                      else
                      {
                        v12 &= ~2u;
                      }
                    }
                    AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&pData, v72);
                    v22 = (unsigned int)hProvider;
                    if ( (unsigned int)hProvider > 4 )
                    {
                      TlgCreateWsz(&v91, *(LPCWSTR *)&v65[1]);
                      v71 = v12;
                      v92 = &v71;
                      v93 = 4LL;
                      v55[0] = *(_BYTE *)a3;
                      v94 = v55;
                      v95 = 1LL;
                      v96 = (_BYTE *)(a3 + 12);
                      v97 = v23;
                      v60[0] = *(_WORD *)(a3 + 68);
                      v98 = (char *)v60;
                      v99 = 2LL;
                      LODWORD(pvar[0]) = v61;
                      v100 = pvar;
                      v101 = 4LL;
                      v102 = &v81;
                      v103 = v23;
                      p_pData = &pData;
                      v105 = 2LL;
                      v65[0] = v84;
                      v106 = v65;
                      v107 = 4LL;
                      Ptr_high = HIDWORD(pData.Ptr);
                      p_Ptr_high = &Ptr_high;
                      v109 = 4LL;
                      p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&pData.Reserved;
                      v111 = v23;
                      p_Size = &pData.Size;
                      v113 = 2LL;
                      v114 = (char *)&pData.Size + 2;
                      v115 = 2LL;
                      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176BFC, v24, v25, 0xFu, &v90);
                      v22 = (unsigned int)hProvider;
                    }
                    *(_DWORD *)Buf2 = *(_DWORD *)a3;
                    *(_OWORD *)&Buf2[12] = *(_OWORD *)v15;
                    HIDWORD(v80) = *(_DWORD *)(a3 + 68);
                    if ( *(_DWORD *)Buf2 && (v12 & 3) != 0 )
                    {
                      if ( v22 > 4 )
                      {
                        TlgCreateWsz(&pDesc, *(LPCWSTR *)&v65[1]);
                        Ptr_high = v12;
                        p_AsUInt32With = &Ptr_high;
                        v87 = 4LL;
                        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801768AE, v26, v27, 4u, &pData);
                      }
                      *(_DWORD *)Buf2 = 0;
                    }
                    v65[0] = -1;
                    Ptr_high = -1;
                    v28 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                            (__int64)&pData,
                            v73);
                    v29 = *(const WCHAR **)&v65[1];
                    HIDWORD(v62) = CSpatialProperties::EnumerateSpatialEncoders(
                                     (EVENT_DATA_DESCRIPTOR *)a1,
                                     1,
                                     (__int64)Buf2,
                                     0,
                                     0LL,
                                     v66,
                                     v61,
                                     0LL,
                                     (__int64)v72,
                                     0,
                                     v28,
                                     *(const WCHAR **)&v65[1],
                                     (__int64)Src,
                                     v65,
                                     &v67,
                                     (unsigned int *)&v62,
                                     (__int64)&v63,
                                     (__int64)&Ptr_high,
                                     (__int64)Buf2);
                    v30 = v67;
                    if ( *(_DWORD *)Buf2 && v67 == -1 )
                    {
                      if ( (unsigned int)hProvider > 4 )
                      {
                        TlgCreateWsz(&pDesc, v29);
                        p_AsUInt32With = v15;
                        v87 = 16LL;
                        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017685E, v31, v32, 4u, &pData);
                      }
                      AsUInt32With = -2147418113;
                      goto LABEL_26;
                    }
                    LODWORD(v80) = v12;
                    memset(&Buf2[12], 0, 48);
                    *(_DWORD *)&Buf2[60] = *(_DWORD *)Buf2;
                    if ( v68 || (v13 = 1LL, !*(_DWORD *)Buf2) )
                      v13 = 0LL;
                    *(_DWORD *)Buf2 = v13;
                    *(_QWORD *)&Buf2[4] = 0LL;
                    if ( v67 != -1 )
                    {
                      *(_OWORD *)&Buf2[12] = *(_OWORD *)&Src[834 * v67 + 768];
                      *(_DWORD *)&Buf2[4] = *(_DWORD *)&Src[834 * v67 + 788];
                      if ( *(_DWORD *)&Src[834 * v67 + 792] && HIDWORD(v80) == 1 && (_DWORD)v13 && (v12 & 4) == 0 )
                        *(_DWORD *)&Buf2[8] = 1;
                      else
                        HIDWORD(v80) = 0;
                    }
                    if ( (_DWORD)v62 != -1 )
                      *(_OWORD *)&Buf2[28] = *(_OWORD *)&Src[834 * (unsigned int)v62 + 768];
                    if ( v63 != -1 )
                      *(_OWORD *)&Buf2[28] = *(_OWORD *)&Src[834 * v63 + 768];
                    v33 = a1 + 6856;
                    *(GUID *)(a1 + 6856) = GUID_00000000_0000_0000_0000_000000000000;
                    if ( (_DWORD)v30 != -1 && ((_DWORD)v13 || v61) )
                      *(_OWORD *)v33 = *(_OWORD *)&Src[834 * v30 + 768];
                    v34 = HIDWORD(v62);
                    if ( *(_DWORD *)(a1 + 176) != HIDWORD(v62)
                      || memcmp_0((const void *)(a1 + 104), Buf2, 0x48uLL)
                      || memcmp_0((const void *)(a1 + 180), Src, 834 * v34) )
                    {
                      v57 = 1;
                    }
                    if ( (unsigned int)hProvider > 4 )
                    {
                      TlgCreateWsz(&v91, *(LPCWSTR *)&v65[1]);
                      v55[0] = Buf2[0];
                      v92 = (unsigned int *)v55;
                      v93 = 1LL;
                      v58 = Buf2[60];
                      v94 = &v58;
                      v95 = 1LL;
                      v96 = &Buf2[12];
                      v97 = 16LL;
                      v59[0] = Buf2[8];
                      v98 = v59;
                      v99 = 1LL;
                      LOWORD(v62) = WORD2(v80);
                      v100 = &v62;
                      v101 = 2LL;
                      v102 = (GUID *)(a1 + 6856);
                      v103 = 16LL;
                      Ptr_high = v35;
                      p_pData = (EVENT_DATA_DESCRIPTOR *)&Ptr_high;
                      v105 = 4LL;
                      v106 = (unsigned int *)&v62 + 1;
                      v107 = 4LL;
                      v65[0] = v12;
                      p_Ptr_high = (int *)v65;
                      v109 = 4LL;
                      LOBYTE(v60[0]) = Buf2[4];
                      p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)v60;
                      v111 = 1LL;
                      p_Size = (ULONG *)&Buf2[28];
                      v113 = 16LL;
                      v114 = &Buf2[44];
                      v115 = 16LL;
                      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801769FB, v36, v37, 0xFu, &v90);
                    }
                    v38 = 0;
                    v63 = 0;
                    if ( HIDWORD(v62) )
                    {
                      v39 = 0;
                      do
                      {
                        if ( (unsigned int)hProvider > 5 )
                        {
                          v91.Ptr = (ULONGLONG)&v63;
                          *(_QWORD *)&v91.Size = 4LL;
                          v40 = 834LL * v39;
                          v92 = (unsigned int *)&Src[v40 + 768];
                          v93 = 16LL;
                          LOBYTE(v60[0]) = Src[v40 + 784];
                          v94 = (char *)v60;
                          v95 = 1LL;
                          v59[0] = Src[v40 + 788];
                          v96 = v59;
                          v97 = 1LL;
                          v58 = Src[v40 + 792];
                          v98 = &v58;
                          v99 = 1LL;
                          v55[0] = Src[v40 + 796];
                          v100 = v55;
                          v101 = 1LL;
                          v102 = (GUID *)&Src[v40 + 800];
                          v103 = 4LL;
                          p_pData = (EVENT_DATA_DESCRIPTOR *)&Src[v40 + 804];
                          v105 = 4LL;
                          v106 = (unsigned int *)&Src[v40 + 808];
                          v107 = 4LL;
                          p_Ptr_high = (int *)&Src[v40 + 812];
                          v109 = 16LL;
                          p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&Src[v40 + 828];
                          v111 = 2LL;
                          p_Size = (ULONG *)&Src[v40 + 830];
                          v113 = 2LL;
                          v114 = &Src[v40 + 832];
                          v115 = 2LL;
                          TlgCreateWsz(&v116, (LPCWSTR)&Src[v40]);
                          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801768F2, v41, v42, 0x10u, &v90);
                          v38 = v63;
                        }
                        v63 = ++v38;
                        v39 = v38;
                      }
                      while ( v38 < HIDWORD(v62) );
                      v33 = a1 + 6856;
                    }
                    v43 = *(_QWORD *)v33 - *(_QWORD *)&v81.Data1;
                    if ( *(_QWORD *)v33 == *(_QWORD *)&v81.Data1 )
                      v43 = *(_QWORD *)(v33 + 8) - *(_QWORD *)v81.Data4;
                    if ( v43 )
                    {
                      v44 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 56LL))(
                              *(_QWORD *)(a1 + 64),
                              v33);
                      AsUInt32With = v44;
                      if ( v44 >= 0 )
                        goto LABEL_94;
                      if ( (unsigned int)hProvider <= 2 )
                      {
LABEL_93:
                        if ( v44 < 0 )
                        {
LABEL_99:
                          if ( v57 )
                          {
                            AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _BYTE *, _QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(
                                             *(_QWORD *)(a1 + 40),
                                             Buf2,
                                             Src,
                                             (unsigned int)(834 * HIDWORD(v62)));
                            if ( AsUInt32With < 0 )
                            {
                              if ( (unsigned int)hProvider > 2 )
                              {
                                TlgCreateWsz(&pDesc, *(LPCWSTR *)&v65[1]);
                                p_AsUInt32With = &AsUInt32With;
                                v87 = 4LL;
                                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176820, v51, v52, 4u, &pData);
                              }
                            }
                            else
                            {
                              *(_OWORD *)(a1 + 104) = *(_OWORD *)Buf2;
                              *(_OWORD *)(a1 + 120) = *(_OWORD *)&Buf2[16];
                              *(_OWORD *)(a1 + 136) = *(_OWORD *)&Buf2[32];
                              *(_OWORD *)(a1 + 152) = *(_OWORD *)&Buf2[48];
                              *(_QWORD *)(a1 + 168) = v80;
                              v49 = HIDWORD(v62);
                              *(_DWORD *)(a1 + 176) = HIDWORD(v62);
                              memcpy_0((void *)(a1 + 180), Src, 834 * v49);
                              *(_BYTE *)(a1 + 6852) = 1;
                              if ( !*(_DWORD *)(a1 + 104) || v72->wFormatTag != 0xFFFE )
                                goto LABEL_106;
                              v50 = *(_QWORD *)((char *)&v72[1].nSamplesPerSec + 2)
                                  - *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1;
                              if ( !v50 )
                                v50 = *(_QWORD *)&v72[1].wBitsPerSample
                                    - *(_QWORD *)GUID_0000000c_0cea_0010_8000_00aa00389b71.Data4;
                              if ( v50 )
LABEL_106:
                                v21 = 0;
                              *(_BYTE *)(a1 + 72) = v21;
                            }
                          }
                          if ( *(_DWORD *)&Buf2[8] != *(_DWORD *)(a1 + 80) )
                          {
                            if ( (unsigned int)hProvider > 4 )
                            {
                              TlgCreateWsz(&pDesc, *(LPCWSTR *)&v65[1]);
                              LOWORD(v62) = *(_WORD *)(a1 + 80);
                              p_AsUInt32With = (int *)&v62;
                              v87 = 2LL;
                              v60[0] = *(_WORD *)&Buf2[8];
                              v88 = (__int128 *)v60;
                              v89 = 2LL;
                              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801767D6, v53, v54, 5u, &pData);
                            }
                            *(_DWORD *)(a1 + 80) = *(_DWORD *)&Buf2[8];
                          }
                          goto LABEL_26;
                        }
LABEL_94:
                        if ( v61 )
                        {
                          if ( !v69 )
                          {
                            AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 48LL))(
                                             *(_QWORD *)(a1 + 64),
                                             1LL);
                            if ( AsUInt32With < 0 && (unsigned int)hProvider > 2 )
                            {
                              TlgCreateWsz(&pDesc, *(LPCWSTR *)&v65[1]);
                              p_AsUInt32With = &AsUInt32With;
                              v87 = 4LL;
                              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176750, v47, v48, 4u, &pData);
                            }
                          }
                        }
                        goto LABEL_99;
                      }
                      TlgCreateWsz(&pDesc, *(LPCWSTR *)&v65[1]);
                      p_AsUInt32With = &AsUInt32With;
                      v87 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176791, v45, v46, 4u, &pData);
                    }
                    v44 = AsUInt32With;
                    goto LABEL_93;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    AsUInt32With = -2147467261;
  }
LABEL_27:
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v19 = v73;
  v20 = *(_QWORD *)(v73 + 56);
  if ( v20 )
  {
    LOBYTE(v13) = v20 != v73;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v20, v13);
    *(_QWORD *)(v19 + 56) = 0LL;
  }
}
