/*
 * XREFs of ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180003A70
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x180004998 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMA.c)
 * Callees:
 *     GetPreferredSpatialAudioEncoderId @ 0x180003A48 (GetPreferredSpatialAudioEncoderId.c)
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x180008FC0 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x1800090B4 (-InitSpatialTechList@CSpatialProperties@@AEAAJXZ.c)
 *     ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x18000B2F0 (--0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z.c)
 *     IsSpatialOnlyFormat @ 0x18000BCC4 (IsSpatialOnlyFormat.c)
 *     ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x18000BEA4 (--1-$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18000BF08 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     BlockSpatialAudioRegistryGates @ 0x180029F88 (BlockSpatialAudioRegistryGates.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGKPEAU3@AEAK9999PEAU2@@Z @ 0x180068C10 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 *     memcmp_0 @ 0x18006C957 (memcmp_0.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSpatialProperties::SetSpatialAudioSettings(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct tWAVEFORMATEX *a4,
        __int64 a5,
        _BYTE *a6,
        __int64 a7)
{
  int v11; // esi
  __int64 v12; // rdx
  char v13; // di
  unsigned int v14; // edx
  __int64 v15; // r11
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  UINT32 cData; // r11d
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // r9
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  int v27; // edx
  __int64 v28; // r14
  __int64 v29; // r14
  LPCGUID v30; // r9
  __int64 v31; // r11
  LPCGUID v32; // r8
  unsigned int v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // rcx
  int v36; // r9d
  int v37; // eax
  int v38; // r10d
  LPCGUID v39; // r8
  LPCGUID v40; // r9
  LPCGUID v41; // r8
  LPCGUID v42; // r9
  __int64 v43; // rax
  LPCGUID v44; // r8
  LPCGUID v45; // r9
  LPCGUID v46; // r8
  LPCGUID v47; // r9
  __int64 v48; // r9
  LPCGUID v49; // r8
  LPCGUID v50; // r9
  int AsUInt32With; // [rsp+A0h] [rbp-80h] BYREF
  char v53; // [rsp+A4h] [rbp-7Ch]
  int v54; // [rsp+A8h] [rbp-78h] BYREF
  char v55; // [rsp+ACh] [rbp-74h] BYREF
  char v56; // [rsp+ADh] [rbp-73h] BYREF
  char v57; // [rsp+AEh] [rbp-72h] BYREF
  char v58; // [rsp+AFh] [rbp-71h] BYREF
  char v59; // [rsp+B0h] [rbp-70h] BYREF
  char v60; // [rsp+B1h] [rbp-6Fh] BYREF
  char v61; // [rsp+B2h] [rbp-6Eh] BYREF
  char v62; // [rsp+B3h] [rbp-6Dh] BYREF
  char v63; // [rsp+B4h] [rbp-6Ch] BYREF
  unsigned int v64; // [rsp+B8h] [rbp-68h] BYREF
  __int16 v65; // [rsp+BCh] [rbp-64h] BYREF
  __int16 v66; // [rsp+BEh] [rbp-62h] BYREF
  __int16 v67; // [rsp+C0h] [rbp-60h] BYREF
  __int16 v68; // [rsp+C2h] [rbp-5Eh] BYREF
  int v69; // [rsp+C4h] [rbp-5Ch] BYREF
  int v70; // [rsp+C8h] [rbp-58h] BYREF
  int v71; // [rsp+CCh] [rbp-54h] BYREF
  int v72; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v73; // [rsp+D8h] [rbp-48h]
  int v74; // [rsp+E0h] [rbp-40h] BYREF
  unsigned int v75; // [rsp+E4h] [rbp-3Ch] BYREF
  int v76; // [rsp+E8h] [rbp-38h] BYREF
  int v77; // [rsp+ECh] [rbp-34h] BYREF
  int v78; // [rsp+F0h] [rbp-30h] BYREF
  int v79; // [rsp+F4h] [rbp-2Ch] BYREF
  int v80; // [rsp+F8h] [rbp-28h] BYREF
  int v81; // [rsp+FCh] [rbp-24h] BYREF
  int v82; // [rsp+100h] [rbp-20h] BYREF
  int v83; // [rsp+104h] [rbp-1Ch] BYREF
  int v84; // [rsp+108h] [rbp-18h] BYREF
  int v85; // [rsp+10Ch] [rbp-14h] BYREF
  __int64 v86; // [rsp+110h] [rbp-10h] BYREF
  const struct tWAVEFORMATEX *v87; // [rsp+118h] [rbp-8h]
  __int64 v88; // [rsp+120h] [rbp+0h]
  PROPVARIANT pvar; // [rsp+128h] [rbp+8h] BYREF
  __int64 v90; // [rsp+130h] [rbp+10h]
  __int64 v91; // [rsp+138h] [rbp+18h]
  unsigned int v92; // [rsp+140h] [rbp+20h]
  _DWORD v93[2]; // [rsp+148h] [rbp+28h] BYREF
  __int64 v94; // [rsp+150h] [rbp+30h]
  PROPERTYKEY v95; // [rsp+160h] [rbp+40h] BYREF
  __int128 v96; // [rsp+180h] [rbp+60h] BYREF
  int v97; // [rsp+190h] [rbp+70h]
  __int64 v98; // [rsp+1A0h] [rbp+80h]
  __int64 v99; // [rsp+1A8h] [rbp+88h]
  __int64 v100; // [rsp+1B0h] [rbp+90h]
  __int128 v101; // [rsp+1B8h] [rbp+98h] BYREF
  __int128 v102; // [rsp+1C8h] [rbp+A8h] BYREF
  _BYTE v103[72]; // [rsp+1D8h] [rbp+B8h] BYREF
  _BYTE Buf2[64]; // [rsp+220h] [rbp+100h] BYREF
  __int64 v105; // [rsp+260h] [rbp+140h]
  GUID v106; // [rsp+270h] [rbp+150h] BYREF
  _BYTE v107[4]; // [rsp+280h] [rbp+160h] BYREF
  int v108; // [rsp+284h] [rbp+164h]
  char v109; // [rsp+288h] [rbp+168h] BYREF
  char v110; // [rsp+28Ah] [rbp+16Ah] BYREF
  char v111; // [rsp+28Ch] [rbp+16Ch] BYREF
  int v112; // [rsp+29Ch] [rbp+17Ch]
  __int128 v113; // [rsp+2A0h] [rbp+180h]
  __int128 v114; // [rsp+2B0h] [rbp+190h] BYREF
  void *v115; // [rsp+2C0h] [rbp+1A0h] BYREF
  int v116; // [rsp+2C8h] [rbp+1A8h]
  int v117; // [rsp+2CCh] [rbp+1ACh]
  void *v118; // [rsp+2D0h] [rbp+1B0h]
  int v119; // [rsp+2D8h] [rbp+1B8h]
  int v120; // [rsp+2DCh] [rbp+1BCh]
  int *v121; // [rsp+2E0h] [rbp+1C0h]
  __int64 v122; // [rsp+2E8h] [rbp+1C8h]
  _BYTE *v123; // [rsp+2F0h] [rbp+1D0h]
  __int64 v124; // [rsp+2F8h] [rbp+1D8h]
  char *v125; // [rsp+300h] [rbp+1E0h]
  __int64 v126; // [rsp+308h] [rbp+1E8h]
  char *v127; // [rsp+310h] [rbp+1F0h]
  __int64 v128; // [rsp+318h] [rbp+1F8h]
  char *v129; // [rsp+320h] [rbp+200h]
  __int64 v130; // [rsp+328h] [rbp+208h]
  char *v131; // [rsp+330h] [rbp+210h]
  __int64 v132; // [rsp+338h] [rbp+218h]
  _BYTE *v133; // [rsp+340h] [rbp+220h]
  __int64 v134; // [rsp+348h] [rbp+228h]
  _BYTE *v135; // [rsp+350h] [rbp+230h]
  __int64 v136; // [rsp+358h] [rbp+238h]
  _BYTE *v137; // [rsp+360h] [rbp+240h]
  __int64 v138; // [rsp+368h] [rbp+248h]
  _BYTE *v139; // [rsp+370h] [rbp+250h]
  __int64 v140; // [rsp+378h] [rbp+258h]
  _BYTE *v141; // [rsp+380h] [rbp+260h]
  __int64 v142; // [rsp+388h] [rbp+268h]
  _BYTE *v143; // [rsp+390h] [rbp+270h]
  __int64 v144; // [rsp+398h] [rbp+278h]
  _BYTE *v145; // [rsp+3A0h] [rbp+280h]
  __int64 v146; // [rsp+3A8h] [rbp+288h]
  struct _EVENT_DATA_DESCRIPTOR v147; // [rsp+3B0h] [rbp+290h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3C0h] [rbp+2A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+3E0h] [rbp+2C0h] BYREF
  int *v150; // [rsp+3F0h] [rbp+2D0h]
  __int64 v151; // [rsp+3F8h] [rbp+2D8h]
  char *v152; // [rsp+400h] [rbp+2E0h]
  __int64 v153; // [rsp+408h] [rbp+2E8h]
  __int64 v154; // [rsp+410h] [rbp+2F0h]
  __int64 v155; // [rsp+418h] [rbp+2F8h]
  __int16 *v156; // [rsp+420h] [rbp+300h]
  __int64 v157; // [rsp+428h] [rbp+308h]
  int *v158; // [rsp+430h] [rbp+310h]
  __int64 v159; // [rsp+438h] [rbp+318h]
  GUID *v160; // [rsp+440h] [rbp+320h]
  __int64 v161; // [rsp+448h] [rbp+328h]
  _BYTE *v162; // [rsp+450h] [rbp+330h]
  __int64 v163; // [rsp+458h] [rbp+338h]
  int *v164; // [rsp+460h] [rbp+340h]
  __int64 v165; // [rsp+468h] [rbp+348h]
  int *v166; // [rsp+470h] [rbp+350h]
  __int64 v167; // [rsp+478h] [rbp+358h]
  char *v168; // [rsp+480h] [rbp+360h]
  __int64 v169; // [rsp+488h] [rbp+368h]
  char *v170; // [rsp+490h] [rbp+370h]
  __int64 v171; // [rsp+498h] [rbp+378h]
  char *v172; // [rsp+4A0h] [rbp+380h]
  __int64 v173; // [rsp+4A8h] [rbp+388h]
  EVENT_DATA_DESCRIPTOR v174; // [rsp+4B0h] [rbp+390h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v175; // [rsp+4D0h] [rbp+3B0h] BYREF
  char *v176; // [rsp+4E0h] [rbp+3C0h]
  __int64 v177; // [rsp+4E8h] [rbp+3C8h]
  char *v178; // [rsp+4F0h] [rbp+3D0h]
  __int64 v179; // [rsp+4F8h] [rbp+3D8h]
  _BYTE *v180; // [rsp+500h] [rbp+3E0h]
  __int64 v181; // [rsp+508h] [rbp+3E8h]
  char *v182; // [rsp+510h] [rbp+3F0h]
  __int64 v183; // [rsp+518h] [rbp+3F8h]
  __int16 *v184; // [rsp+520h] [rbp+400h]
  __int64 v185; // [rsp+528h] [rbp+408h]
  __int64 v186; // [rsp+530h] [rbp+410h]
  __int64 v187; // [rsp+538h] [rbp+418h]
  int *v188; // [rsp+540h] [rbp+420h]
  __int64 v189; // [rsp+548h] [rbp+428h]
  unsigned int *v190; // [rsp+550h] [rbp+430h]
  __int64 v191; // [rsp+558h] [rbp+438h]
  int *v192; // [rsp+560h] [rbp+440h]
  __int64 v193; // [rsp+568h] [rbp+448h]
  char *v194; // [rsp+570h] [rbp+450h]
  __int64 v195; // [rsp+578h] [rbp+458h]
  _BYTE *v196; // [rsp+580h] [rbp+460h]
  __int64 v197; // [rsp+588h] [rbp+468h]
  _BYTE *v198; // [rsp+590h] [rbp+470h]
  __int64 v199; // [rsp+598h] [rbp+478h]
  EVENT_DATA_DESCRIPTOR v200; // [rsp+5A0h] [rbp+480h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v201; // [rsp+5C0h] [rbp+4A0h] BYREF
  __int16 *v202; // [rsp+5D0h] [rbp+4B0h]
  __int64 v203; // [rsp+5D8h] [rbp+4B8h]
  __int16 *v204; // [rsp+5E0h] [rbp+4C0h]
  __int64 v205; // [rsp+5E8h] [rbp+4C8h]
  EVENT_DATA_DESCRIPTOR v206; // [rsp+5F0h] [rbp+4D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v207; // [rsp+610h] [rbp+4F0h] BYREF
  __int64 v208; // [rsp+620h] [rbp+500h]
  __int64 v209; // [rsp+628h] [rbp+508h]
  __int128 *v210; // [rsp+630h] [rbp+510h]
  __int64 v211; // [rsp+638h] [rbp+518h]
  EVENT_DATA_DESCRIPTOR v212; // [rsp+640h] [rbp+520h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v213; // [rsp+660h] [rbp+540h] BYREF
  int *v214; // [rsp+670h] [rbp+550h]
  __int64 v215; // [rsp+678h] [rbp+558h]
  EVENT_DATA_DESCRIPTOR v216; // [rsp+680h] [rbp+560h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v217; // [rsp+6A0h] [rbp+580h] BYREF
  __int64 v218; // [rsp+6B0h] [rbp+590h]
  __int64 v219; // [rsp+6B8h] [rbp+598h]
  EVENT_DATA_DESCRIPTOR v220; // [rsp+6C0h] [rbp+5A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v221; // [rsp+6E0h] [rbp+5C0h] BYREF
  int *v222; // [rsp+6F0h] [rbp+5D0h]
  __int64 v223; // [rsp+6F8h] [rbp+5D8h]
  EVENT_DATA_DESCRIPTOR v224; // [rsp+700h] [rbp+5E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v225; // [rsp+720h] [rbp+600h] BYREF
  int *v226; // [rsp+730h] [rbp+610h]
  __int64 v227; // [rsp+738h] [rbp+618h]
  EVENT_DATA_DESCRIPTOR v228; // [rsp+740h] [rbp+620h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v229; // [rsp+760h] [rbp+640h] BYREF
  int *p_AsUInt32With; // [rsp+770h] [rbp+650h]
  __int64 v231; // [rsp+778h] [rbp+658h]
  _BYTE Src[6672]; // [rsp+780h] [rbp+660h] BYREF

  v98 = -2LL;
  v87 = a4;
  v73 = a2;
  v88 = a7;
  v99 = a7;
  AsUInt32With = 0;
  v54 = 0;
  v76 = 0;
  v86 = a5;
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  v69 = 10;
  v106 = GUID_00000000_0000_0000_0000_000000000000;
  v11 = BlockSpatialAudioRegistryGates();
  memset_0(Buf2, 0, 0x48uLL);
  memset_0(Src, 0, sizeof(Src));
  v64 = 0;
  v75 = -1;
  v70 = -1;
  v71 = -1;
  v53 = 0;
  v74 = 2;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v100 = a1;
  *(_BYTE *)(a1 + 77) = 0;
  if ( !a3 || !a4 || !a5 )
  {
    AsUInt32With = -2147467261;
    goto LABEL_100;
  }
  if ( *(_QWORD *)(a1 + 40) )
  {
    AsUInt32With = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 24LL))(*(_QWORD *)(a1 + 56));
    if ( AsUInt32With >= 0 )
    {
      AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(
                       *(_QWORD *)(a1 + 56),
                       &v54);
      if ( AsUInt32With >= 0 )
      {
        AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 40LL))(
                         *(_QWORD *)(a1 + 56),
                         &v76);
        if ( AsUInt32With >= 0 )
        {
          if ( !*(_DWORD *)a3 && !v54 && a4->wFormatTag == 0xFFFE )
          {
            LOBYTE(v12) = *(_BYTE *)(a1 + 72) == 0;
            if ( (unsigned __int8)IsSpatialOnlyFormat((char *)&a4[1].nSamplesPerSec + 2, v12) )
            {
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40));
LABEL_16:
              AsUInt32With = -2147418113;
              goto LABEL_100;
            }
          }
          v95 = PKEY_AudioEndpoint_FormFactor;
          AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                           &v86,
                           &v95,
                           10LL,
                           &v69);
          if ( AsUInt32With >= 0 )
          {
            v96 = PKEY_Endpoint_PreferedPcmChannelCountForHrtf;
            v97 = 2;
            AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                             &v86,
                             &v96,
                             2LL,
                             &v74);
            if ( AsUInt32With >= 0 )
            {
              AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**(_QWORD **)(a1 + 56) + 48LL))(
                               *(_QWORD *)(a1 + 56),
                               &v106);
              if ( AsUInt32With >= 0 )
              {
                v113 = *GetPreferredSpatialAudioEncoderId(&v101, v54, a3);
                if ( v113 == *(_OWORD *)(a3 + 12) )
                {
                  AsUInt32With = CSpatialProperties::InitSpatialTechList((CSpatialProperties *)a1);
                  if ( AsUInt32With < 0 )
                    goto LABEL_100;
                  v13 = 1;
                  if ( (v11 & 2) != 0 )
                  {
                    if ( v69 == 1 )
                    {
                      pvar = 0LL;
                      v90 = 0LL;
                      v91 = 0LL;
                      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
                             a5,
                             &PKEY_Endpoint_SpatialNotAllowed,
                             &pvar) < 0
                        || !(_WORD)pvar
                        || (_WORD)pvar == 11 && !(_WORD)v90 )
                      {
                        v11 &= ~2u;
                      }
                      PropVariantClear(&pvar);
                    }
                    else
                    {
                      v11 &= ~2u;
                    }
                  }
                  AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)v107, a4);
                  v14 = (unsigned int)hProvider;
                  if ( (unsigned int)hProvider > 4 )
                  {
                    TlgCreateWsz(&pDesc, *(LPCWSTR *)(v73 + 24));
                    v85 = v11;
                    v150 = &v85;
                    v151 = v15;
                    v55 = *(_BYTE *)a3;
                    v152 = &v55;
                    v153 = 1LL;
                    v154 = a3 + 12;
                    v155 = 16LL;
                    v65 = *(_WORD *)(a3 + 68);
                    v156 = &v65;
                    v157 = 2LL;
                    v77 = v54;
                    v158 = &v77;
                    v159 = v15;
                    v160 = &v106;
                    v161 = 16LL;
                    v162 = v107;
                    v163 = 2LL;
                    v78 = v112;
                    v164 = &v78;
                    v165 = v15;
                    v79 = v108;
                    v166 = &v79;
                    v167 = v15;
                    v168 = &v111;
                    v169 = 16LL;
                    v170 = &v109;
                    v171 = 2LL;
                    v172 = &v110;
                    v173 = 2LL;
                    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017AE1A, v16, v17, 0xFu, &pData);
                    v14 = (unsigned int)hProvider;
                  }
                  *(_DWORD *)Buf2 = *(_DWORD *)a3;
                  *(_OWORD *)&Buf2[12] = *(_OWORD *)(a3 + 12);
                  HIDWORD(v105) = *(_DWORD *)(a3 + 68);
                  if ( *(_DWORD *)Buf2 && (v11 & 3) != 0 )
                  {
                    if ( v14 > 4 )
                    {
                      TlgCreateWsz(&v213, *(LPCWSTR *)(v73 + 24));
                      v80 = v11;
                      v214 = &v80;
                      v215 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017AACC, v18, v19, cData, &v212);
                    }
                    *(_DWORD *)Buf2 = 0;
                  }
                  v82 = -1;
                  v81 = -1;
                  v21 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                          v103,
                          v88);
                  v22 = v21;
                  LOBYTE(v22) = 1;
                  v64 = CSpatialProperties::EnumerateSpatialEncoders(
                          a1,
                          v22,
                          (unsigned int)Buf2,
                          0,
                          0LL,
                          v69,
                          v54,
                          0LL,
                          (__int64)v87,
                          0,
                          v21,
                          *(_QWORD *)(v73 + 24),
                          v74,
                          (__int64)Src,
                          (__int64)&v82,
                          (__int64)&v75,
                          (__int64)&v70,
                          (__int64)&v71,
                          (__int64)&v81,
                          (__int64)Buf2);
                  v23 = v75;
                  v24 = 0xFFFFFFFFLL;
                  if ( *(_DWORD *)Buf2 && v75 == -1 )
                  {
                    if ( (unsigned int)hProvider > 4 )
                    {
                      TlgCreateWsz(&v217, *(LPCWSTR *)(v73 + 24));
                      v218 = a3 + 12;
                      v219 = 16LL;
                      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017AA7C, v25, v26, 4u, &v216);
                    }
                    goto LABEL_16;
                  }
                  LODWORD(v105) = v11;
                  memset(&Buf2[12], 0, 48);
                  *(_DWORD *)&Buf2[60] = *(_DWORD *)Buf2;
                  if ( *a6 || (v27 = 1, !*(_DWORD *)Buf2) )
                    v27 = 0;
                  *(_DWORD *)Buf2 = v27;
                  *(_QWORD *)&Buf2[4] = 0LL;
                  if ( v75 != -1 )
                  {
                    *(_OWORD *)&Buf2[12] = *(_OWORD *)&Src[834 * v75 + 768];
                    *(_DWORD *)&Buf2[4] = *(_DWORD *)&Src[834 * v75 + 788];
                    if ( *(_DWORD *)&Src[834 * v75 + 792] && HIDWORD(v105) == 1 && v27 && (v11 & 4) == 0 )
                      *(_DWORD *)&Buf2[8] = 1;
                    else
                      HIDWORD(v105) = 0;
                  }
                  if ( v70 != -1 )
                    *(_OWORD *)&Buf2[28] = *(_OWORD *)&Src[834 * v70 + 768];
                  if ( v71 != -1 )
                    *(_OWORD *)&Buf2[28] = *(_OWORD *)&Src[834 * v71 + 768];
                  *(GUID *)(a1 + 6856) = GUID_00000000_0000_0000_0000_000000000000;
                  if ( (_DWORD)v23 != -1 && (v27 || v54) )
                    *(_OWORD *)(a1 + 6856) = *(_OWORD *)&Src[834 * v23 + 768];
                  v28 = v64;
                  if ( *(_DWORD *)(a1 + 176) == v64
                    && !memcmp_0((const void *)(a1 + 104), Buf2, 0x48uLL)
                    && !memcmp_0((const void *)(a1 + 180), Src, 834 * v28) )
                  {
                    LOBYTE(v24) = v53;
                  }
                  else
                  {
                    LOBYTE(v24) = 1;
                    v53 = 1;
                  }
                  v29 = v73;
                  if ( (unsigned int)hProvider > 4 )
                  {
                    TlgCreateWsz(&v175, *(LPCWSTR *)(v73 + 24));
                    v56 = Buf2[0];
                    v176 = &v56;
                    v177 = 1LL;
                    v57 = Buf2[60];
                    v178 = &v57;
                    v179 = 1LL;
                    v180 = &Buf2[12];
                    v181 = 16LL;
                    v58 = Buf2[8];
                    v182 = &v58;
                    v183 = 1LL;
                    v66 = WORD2(v105);
                    v184 = &v66;
                    v185 = 2LL;
                    v186 = a1 + 6856;
                    v187 = 16LL;
                    v83 = (unsigned __int8)v30;
                    v188 = &v83;
                    v189 = v31;
                    v190 = &v64;
                    v191 = v31;
                    v84 = v105;
                    v192 = &v84;
                    v193 = v31;
                    v59 = Buf2[4];
                    v194 = &v59;
                    v195 = 1LL;
                    v196 = &Buf2[28];
                    v197 = 16LL;
                    v198 = &Buf2[44];
                    v199 = 16LL;
                    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017AC19, v32, v30, 0xFu, &v174);
                  }
                  v33 = 0;
                  v34 = 0;
                  v72 = 0;
                  if ( v64 )
                  {
                    do
                    {
                      if ( (unsigned int)hProvider > 5 )
                      {
                        v121 = &v72;
                        v122 = 4LL;
                        v35 = 834LL * v33;
                        v123 = &Src[v35 + 768];
                        v124 = 16LL;
                        v60 = Src[v35 + 784];
                        v125 = &v60;
                        v126 = 1LL;
                        v61 = Src[v35 + 788];
                        v127 = &v61;
                        v128 = 1LL;
                        v62 = Src[v35 + 792];
                        v129 = &v62;
                        v130 = 1LL;
                        v63 = Src[v35 + 796];
                        v131 = &v63;
                        v132 = 1LL;
                        v133 = &Src[v35 + 800];
                        v134 = 4LL;
                        v135 = &Src[v35 + 804];
                        v136 = 4LL;
                        v137 = &Src[v35 + 808];
                        v138 = 4LL;
                        v139 = &Src[v35 + 812];
                        v140 = 16LL;
                        v141 = &Src[v35 + 828];
                        v142 = 2LL;
                        v143 = &Src[v35 + 830];
                        v144 = 2LL;
                        v145 = &Src[v35 + 832];
                        v146 = 2LL;
                        TlgCreateWsz(&v147, (LPCWSTR)&Src[v35]);
                        v93[0] = 184549376;
                        v93[1] = 5;
                        v94 = 0LL;
                        v115 = off_1801B5488;
                        v116 = *(unsigned __int16 *)off_1801B5488;
                        v117 = v36;
                        v118 = &unk_18017AB1B;
                        v119 = 253;
                        v120 = 1;
                        v92 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                        EtwEventWriteTransfer(qword_1801B54A0, v93, 0LL, 0LL, 16, &v115);
                        v34 = v72;
                      }
                      v72 = ++v34;
                      v33 = v34;
                    }
                    while ( v34 < v64 );
                    v29 = v73;
                  }
                  if ( *(_OWORD *)(a1 + 6856) != *(_OWORD *)&v106 )
                  {
                    v37 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 64) + 56LL))(
                            *(_QWORD *)(a1 + 64),
                            a1 + 6856,
                            v23,
                            v24);
                    AsUInt32With = v37;
                    if ( v37 >= 0 )
                      goto LABEL_78;
                    if ( (unsigned int)hProvider <= 2 )
                    {
LABEL_77:
                      if ( v37 < 0 )
                      {
LABEL_83:
                        if ( v53 )
                        {
                          AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _BYTE *, _QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(
                                           *(_QWORD *)(a1 + 40),
                                           Buf2,
                                           Src,
                                           834 * v64);
                          if ( AsUInt32With < 0 )
                          {
                            if ( (unsigned int)hProvider > 2 )
                            {
                              TlgCreateWsz(&v229, *(LPCWSTR *)(v29 + 24));
                              p_AsUInt32With = &AsUInt32With;
                              v231 = 4LL;
                              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017AA3E, v44, v45, 4u, &v228);
                            }
                          }
                          else
                          {
                            *(_OWORD *)(a1 + 104) = *(_OWORD *)Buf2;
                            *(_OWORD *)(a1 + 120) = *(_OWORD *)&Buf2[16];
                            *(_OWORD *)(a1 + 136) = *(_OWORD *)&Buf2[32];
                            *(_OWORD *)(a1 + 152) = *(_OWORD *)&Buf2[48];
                            *(_QWORD *)(a1 + 168) = v105;
                            v43 = v64;
                            *(_DWORD *)(a1 + 176) = v64;
                            memcpy_0((void *)(a1 + 180), Src, 834 * v43);
                            *(_BYTE *)(a1 + 6852) = 1;
                            if ( !*(_DWORD *)(a1 + 104)
                              || v87->wFormatTag != 0xFFFE
                              || *(_QWORD *)((char *)&v87[1].nSamplesPerSec + 2) != *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1
                              || *(_QWORD *)&v87[1].wBitsPerSample != *(_QWORD *)GUID_0000000c_0cea_0010_8000_00aa00389b71.Data4 )
                            {
                              v13 = 0;
                            }
                            *(_BYTE *)(a1 + 72) = v13;
                          }
                        }
                        if ( *(_DWORD *)&Buf2[8] != *(_DWORD *)(a1 + 80) )
                        {
                          if ( (unsigned int)hProvider > 4 )
                          {
                            TlgCreateWsz(&v201, *(LPCWSTR *)(v29 + 24));
                            v67 = *(_WORD *)(a1 + 80);
                            v202 = &v67;
                            v203 = 2LL;
                            v68 = *(_WORD *)&Buf2[8];
                            v204 = &v68;
                            v205 = 2LL;
                            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A9F4, v46, v47, 5u, &v200);
                          }
                          *(_DWORD *)(a1 + 80) = *(_DWORD *)&Buf2[8];
                        }
                        goto LABEL_100;
                      }
LABEL_78:
                      if ( v54 )
                      {
                        if ( !v76 )
                        {
                          AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 48LL))(
                                           *(_QWORD *)(a1 + 64),
                                           1LL);
                          if ( AsUInt32With < 0 && (unsigned int)hProvider > 2 )
                          {
                            TlgCreateWsz(&v225, *(LPCWSTR *)(v29 + 24));
                            v226 = &AsUInt32With;
                            v227 = 4LL;
                            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A96E, v41, v42, 4u, &v224);
                          }
                        }
                      }
                      goto LABEL_83;
                    }
                    TlgCreateWsz(&v221, *(LPCWSTR *)(v29 + 24));
                    v222 = &AsUInt32With;
                    v223 = (unsigned int)(v38 + 4);
                    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A9AF, v39, v40, v38 + 4, &v220);
                  }
                  v37 = AsUInt32With;
                  goto LABEL_77;
                }
                if ( (unsigned int)hProvider > 2 )
                {
                  TlgCreateWsz(&v207, *(LPCWSTR *)(a2 + 24));
                  v208 = v48;
                  v209 = 16LL;
                  v114 = *GetPreferredSpatialAudioEncoderId(&v102, v54, a3);
                  v210 = &v114;
                  v211 = 16LL;
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017AF0E, v49, v50, 5u, &v206);
                }
                AsUInt32With = -2147024846;
              }
            }
          }
        }
      }
    }
  }
LABEL_100:
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  return std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(v88);
}
