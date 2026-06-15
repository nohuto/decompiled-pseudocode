/*
 * XREFs of ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800090F0
 * Callers:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180008A64 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18000B570 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 * Callees:
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18000385C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x180008FC0 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x1800090B4 (-InitSpatialTechList@CSpatialProperties@@AEAAJXZ.c)
 *     ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x18000B2F0 (--0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18000BF08 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000C080 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z @ 0x18000C294 (-GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001B6B0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001E08C (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     BlockSpatialAudioRegistryGates @ 0x180029F88 (BlockSpatialAudioRegistryGates.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180037438 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGKPEAU3@AEAK9999PEAU2@@Z @ 0x180068C10 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 *     memcmp_0 @ 0x18006C957 (memcmp_0.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x18012D994 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=6
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
  struct tWAVEFORMATEX *v11; // r14
  bool v12; // r15
  BYTE *v13; // rdi
  int v14; // eax
  char v15; // di
  unsigned int v16; // esi
  int v17; // r9d
  unsigned int v18; // ecx
  __int64 v19; // r11
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  unsigned int v22; // edx
  unsigned int v23; // eax
  __int64 v24; // r9
  __int64 v25; // r9
  int v26; // r10d
  char v27; // si
  int v28; // eax
  LPCGUID v29; // r8
  LPCGUID v30; // r9
  UINT32 cData; // r11d
  int v32; // edx
  int v33; // r12d
  __int64 (__fastcall ***v34)(_QWORD, _BYTE *); // rcx
  const WCHAR *v35; // r15
  unsigned __int16 *v36; // rsi
  const GUID *v37; // r8
  __int64 v38; // r13
  const wchar_t *v39; // r9
  int v40; // r10d
  GUID *v41; // rax
  const WCHAR *v42; // rdx
  LPCGUID v43; // r8
  LPCGUID v44; // r9
  unsigned int v45; // r15d
  int v46; // esi
  int v47; // r14d
  bool v48; // al
  const struct CSpatialAudioTech *TechnologyByID; // r12
  __int64 v50; // rax
  char v51; // r12
  int v52; // r14d
  __int16 v53; // si
  unsigned __int16 v54; // cx
  unsigned __int16 v55; // dx
  int v56; // r10d
  __int16 v57; // r11
  __int16 v58; // r9
  int v59; // r8d
  __int16 v60; // dx
  int v61; // eax
  char v62; // si
  int v63; // eax
  int v64; // esi
  __int16 v65; // r14
  WORD nChannels; // cx
  WORD wBitsPerSample; // dx
  int v68; // r11d
  __int16 v69; // r10
  __int16 v70; // dx
  char v71; // si
  LPCGUID v72; // r8
  LPCGUID v73; // r9
  LPCWSTR v74; // r9
  LPCGUID v75; // r8
  LPCGUID v76; // r9
  unsigned int v77; // eax
  __int64 v78; // rcx
  bool v79; // cf
  bool v80; // r8
  GUID *v81; // rax
  GUID *v82; // rcx
  GUID v83; // xmm1
  GUID *v84; // rax
  GUID *v85; // rax
  int v86; // edx
  int v87; // eax
  bool v88; // si
  unsigned __int64 v89; // r12
  unsigned __int64 v90; // r15
  __int64 v91; // r14
  __int64 v92; // r8
  const WCHAR *v93; // r14
  LPCGUID v94; // r8
  LPCGUID v95; // r9
  unsigned int v96; // ecx
  unsigned int v97; // eax
  __int64 v98; // rcx
  LPCGUID v99; // r8
  LPCGUID v100; // r9
  int v101; // eax
  LPCGUID v102; // r8
  LPCGUID v103; // r9
  LPCGUID v104; // r8
  LPCGUID v105; // r9
  __m128i v106; // xmm6
  __int64 v107; // rax
  LPCGUID v108; // r8
  LPCGUID v109; // r9
  int v110; // edi
  LPCGUID v111; // r8
  LPCGUID v112; // r9
  __int64 v113; // rdx
  __int64 v114; // rbx
  __int64 v115; // rcx
  char v116; // [rsp+48h] [rbp-D8h]
  bool v117; // [rsp+A0h] [rbp-80h]
  int AsUInt32With; // [rsp+A4h] [rbp-7Ch] BYREF
  char v119; // [rsp+A8h] [rbp-78h]
  char v120; // [rsp+A9h] [rbp-77h] BYREF
  char v121; // [rsp+AAh] [rbp-76h]
  unsigned __int8 v122; // [rsp+ABh] [rbp-75h]
  int v123; // [rsp+ACh] [rbp-74h] BYREF
  unsigned int v124; // [rsp+B0h] [rbp-70h] BYREF
  int v125; // [rsp+B4h] [rbp-6Ch] BYREF
  int v126; // [rsp+B8h] [rbp-68h] BYREF
  struct tWAVEFORMATEX *v127; // [rsp+C0h] [rbp-60h]
  char v128; // [rsp+C8h] [rbp-58h] BYREF
  char v129; // [rsp+C9h] [rbp-57h] BYREF
  char v130; // [rsp+CAh] [rbp-56h] BYREF
  char v131; // [rsp+CBh] [rbp-55h] BYREF
  char v132; // [rsp+CCh] [rbp-54h] BYREF
  bool v133; // [rsp+CDh] [rbp-53h] BYREF
  char v134; // [rsp+CEh] [rbp-52h] BYREF
  char v135; // [rsp+CFh] [rbp-51h] BYREF
  char v136; // [rsp+D0h] [rbp-50h] BYREF
  char v137; // [rsp+D1h] [rbp-4Fh] BYREF
  bool v138; // [rsp+D2h] [rbp-4Eh] BYREF
  char v139; // [rsp+D3h] [rbp-4Dh] BYREF
  char v140; // [rsp+D4h] [rbp-4Ch] BYREF
  char v141; // [rsp+D5h] [rbp-4Bh] BYREF
  char v142; // [rsp+D6h] [rbp-4Ah] BYREF
  int v143; // [rsp+D8h] [rbp-48h] BYREF
  char v144; // [rsp+DCh] [rbp-44h] BYREF
  char v145; // [rsp+DDh] [rbp-43h] BYREF
  char v146; // [rsp+DEh] [rbp-42h] BYREF
  unsigned int v147; // [rsp+E0h] [rbp-40h] BYREF
  char v148; // [rsp+E4h] [rbp-3Ch] BYREF
  unsigned int v149; // [rsp+E8h] [rbp-38h] BYREF
  int v150; // [rsp+ECh] [rbp-34h] BYREF
  LPCWSTR pwsz; // [rsp+F0h] [rbp-30h]
  __int16 v152; // [rsp+F8h] [rbp-28h] BYREF
  __int16 v153; // [rsp+FAh] [rbp-26h] BYREF
  unsigned int v154; // [rsp+FCh] [rbp-24h] BYREF
  int v155; // [rsp+100h] [rbp-20h] BYREF
  int v156; // [rsp+104h] [rbp-1Ch] BYREF
  int v157; // [rsp+108h] [rbp-18h] BYREF
  unsigned int v158; // [rsp+10Ch] [rbp-14h] BYREF
  int v159; // [rsp+110h] [rbp-10h] BYREF
  int v160; // [rsp+114h] [rbp-Ch]
  __int16 v161; // [rsp+118h] [rbp-8h] BYREF
  int v162; // [rsp+11Ch] [rbp-4h] BYREF
  int v163; // [rsp+120h] [rbp+0h] BYREF
  int v164; // [rsp+124h] [rbp+4h] BYREF
  __int64 v165; // [rsp+128h] [rbp+8h]
  unsigned __int16 *v166; // [rsp+130h] [rbp+10h]
  __int64 v167; // [rsp+138h] [rbp+18h] BYREF
  _BYTE *v168; // [rsp+140h] [rbp+20h]
  const struct CSpatialAudioTech *v169; // [rsp+148h] [rbp+28h] BYREF
  int v170; // [rsp+150h] [rbp+30h] BYREF
  int v171; // [rsp+154h] [rbp+34h] BYREF
  int v172; // [rsp+158h] [rbp+38h] BYREF
  int v173; // [rsp+15Ch] [rbp+3Ch] BYREF
  int v174; // [rsp+160h] [rbp+40h] BYREF
  int v175; // [rsp+164h] [rbp+44h] BYREF
  int v176; // [rsp+168h] [rbp+48h] BYREF
  int v177; // [rsp+16Ch] [rbp+4Ch] BYREF
  int v178; // [rsp+170h] [rbp+50h]
  int v179; // [rsp+174h] [rbp+54h] BYREF
  unsigned int v180; // [rsp+178h] [rbp+58h] BYREF
  __int64 v181; // [rsp+180h] [rbp+60h]
  int v182; // [rsp+188h] [rbp+68h] BYREF
  __int64 v183; // [rsp+190h] [rbp+70h] BYREF
  __int64 v184; // [rsp+198h] [rbp+78h]
  struct tagPROPVARIANT v185; // [rsp+1A0h] [rbp+80h] BYREF
  PROPVARIANT pvar; // [rsp+1B8h] [rbp+98h] BYREF
  __int64 v187; // [rsp+1C0h] [rbp+A0h]
  __int64 v188; // [rsp+1C8h] [rbp+A8h]
  _DWORD v189[2]; // [rsp+1D0h] [rbp+B0h] BYREF
  __int64 v190; // [rsp+1D8h] [rbp+B8h]
  PROPERTYKEY v191; // [rsp+1E0h] [rbp+C0h] BYREF
  __int128 v192; // [rsp+200h] [rbp+E0h] BYREF
  int v193; // [rsp+210h] [rbp+F0h]
  __int64 v194; // [rsp+220h] [rbp+100h]
  __int64 v195; // [rsp+228h] [rbp+108h]
  __int64 v196; // [rsp+230h] [rbp+110h]
  _BYTE v197[56]; // [rsp+238h] [rbp+118h] BYREF
  __int64 v198; // [rsp+270h] [rbp+150h]
  char v199[72]; // [rsp+278h] [rbp+158h] BYREF
  GUID v200; // [rsp+2C0h] [rbp+1A0h] BYREF
  __int128 v201; // [rsp+2D0h] [rbp+1B0h] BYREF
  _BYTE v202[24]; // [rsp+2E0h] [rbp+1C0h]
  __int128 v203; // [rsp+2F8h] [rbp+1D8h] BYREF
  _BYTE v204[24]; // [rsp+308h] [rbp+1E8h]
  __int128 Buf2; // [rsp+320h] [rbp+200h] BYREF
  _BYTE v206[24]; // [rsp+330h] [rbp+210h]
  __int128 Buf1; // [rsp+348h] [rbp+228h] BYREF
  _BYTE v208[24]; // [rsp+358h] [rbp+238h]
  __int128 v209; // [rsp+370h] [rbp+250h] BYREF
  _OWORD v210[2]; // [rsp+380h] [rbp+260h]
  _BYTE v211[64]; // [rsp+3A0h] [rbp+280h] BYREF
  __int64 v212; // [rsp+3E0h] [rbp+2C0h]
  __int128 v213; // [rsp+3F0h] [rbp+2D0h] BYREF
  _OWORD v214[2]; // [rsp+400h] [rbp+2E0h] BYREF
  __int128 v215; // [rsp+420h] [rbp+300h]
  __int64 v216; // [rsp+430h] [rbp+310h]
  _BYTE v217[4]; // [rsp+440h] [rbp+320h] BYREF
  int v218; // [rsp+444h] [rbp+324h]
  char v219; // [rsp+448h] [rbp+328h] BYREF
  char v220; // [rsp+44Ah] [rbp+32Ah] BYREF
  char v221; // [rsp+44Ch] [rbp+32Ch] BYREF
  int v222; // [rsp+45Ch] [rbp+33Ch]
  _BYTE v223[4]; // [rsp+460h] [rbp+340h] BYREF
  int v224; // [rsp+464h] [rbp+344h]
  char v225; // [rsp+468h] [rbp+348h] BYREF
  char v226; // [rsp+46Ah] [rbp+34Ah] BYREF
  char v227; // [rsp+46Ch] [rbp+34Ch] BYREF
  int v228; // [rsp+47Ch] [rbp+35Ch]
  GUID v229; // [rsp+480h] [rbp+360h]
  void *v230; // [rsp+490h] [rbp+370h] BYREF
  int v231; // [rsp+498h] [rbp+378h]
  int v232; // [rsp+49Ch] [rbp+37Ch]
  void *v233; // [rsp+4A0h] [rbp+380h]
  int v234; // [rsp+4A8h] [rbp+388h]
  int v235; // [rsp+4ACh] [rbp+38Ch]
  unsigned int *v236; // [rsp+4B0h] [rbp+390h]
  __int64 v237; // [rsp+4B8h] [rbp+398h]
  _BYTE *v238; // [rsp+4C0h] [rbp+3A0h]
  __int64 v239; // [rsp+4C8h] [rbp+3A8h]
  char *v240; // [rsp+4D0h] [rbp+3B0h]
  __int64 v241; // [rsp+4D8h] [rbp+3B8h]
  char *v242; // [rsp+4E0h] [rbp+3C0h]
  __int64 v243; // [rsp+4E8h] [rbp+3C8h]
  char *v244; // [rsp+4F0h] [rbp+3D0h]
  __int64 v245; // [rsp+4F8h] [rbp+3D8h]
  char *v246; // [rsp+500h] [rbp+3E0h]
  __int64 v247; // [rsp+508h] [rbp+3E8h]
  _BYTE *v248; // [rsp+510h] [rbp+3F0h]
  __int64 v249; // [rsp+518h] [rbp+3F8h]
  _BYTE *v250; // [rsp+520h] [rbp+400h]
  __int64 v251; // [rsp+528h] [rbp+408h]
  _BYTE *v252; // [rsp+530h] [rbp+410h]
  __int64 v253; // [rsp+538h] [rbp+418h]
  _BYTE *v254; // [rsp+540h] [rbp+420h]
  __int64 v255; // [rsp+548h] [rbp+428h]
  _BYTE *v256; // [rsp+550h] [rbp+430h]
  __int64 v257; // [rsp+558h] [rbp+438h]
  _BYTE *v258; // [rsp+560h] [rbp+440h]
  __int64 v259; // [rsp+568h] [rbp+448h]
  _BYTE *v260; // [rsp+570h] [rbp+450h]
  __int64 v261; // [rsp+578h] [rbp+458h]
  struct _EVENT_DATA_DESCRIPTOR v262; // [rsp+580h] [rbp+460h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v263; // [rsp+590h] [rbp+470h] BYREF
  EVENT_DATA_DESCRIPTOR v264; // [rsp+5A0h] [rbp+480h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v265; // [rsp+5C0h] [rbp+4A0h] BYREF
  char *v266; // [rsp+5D0h] [rbp+4B0h]
  __int64 v267; // [rsp+5D8h] [rbp+4B8h]
  char *v268; // [rsp+5E0h] [rbp+4C0h]
  __int64 v269; // [rsp+5E8h] [rbp+4C8h]
  _BYTE *v270; // [rsp+5F0h] [rbp+4D0h]
  __int64 v271; // [rsp+5F8h] [rbp+4D8h]
  char *v272; // [rsp+600h] [rbp+4E0h]
  __int64 v273; // [rsp+608h] [rbp+4E8h]
  int *v274; // [rsp+610h] [rbp+4F0h]
  __int64 v275; // [rsp+618h] [rbp+4F8h]
  GUID *v276; // [rsp+620h] [rbp+500h]
  __int64 v277; // [rsp+628h] [rbp+508h]
  unsigned int *v278; // [rsp+630h] [rbp+510h]
  __int64 v279; // [rsp+638h] [rbp+518h]
  int *v280; // [rsp+640h] [rbp+520h]
  __int64 v281; // [rsp+648h] [rbp+528h]
  char *v282; // [rsp+650h] [rbp+530h]
  __int64 v283; // [rsp+658h] [rbp+538h]
  bool *v284; // [rsp+660h] [rbp+540h]
  __int64 v285; // [rsp+668h] [rbp+548h]
  _BYTE *v286; // [rsp+670h] [rbp+550h]
  __int64 v287; // [rsp+678h] [rbp+558h]
  int *v288; // [rsp+680h] [rbp+560h]
  __int64 v289; // [rsp+688h] [rbp+568h]
  int *v290; // [rsp+690h] [rbp+570h]
  __int64 v291; // [rsp+698h] [rbp+578h]
  char *v292; // [rsp+6A0h] [rbp+580h]
  __int64 v293; // [rsp+6A8h] [rbp+588h]
  char *v294; // [rsp+6B0h] [rbp+590h]
  __int64 v295; // [rsp+6B8h] [rbp+598h]
  char *v296; // [rsp+6C0h] [rbp+5A0h]
  __int64 v297; // [rsp+6C8h] [rbp+5A8h]
  _BYTE *v298; // [rsp+6D0h] [rbp+5B0h]
  __int64 v299; // [rsp+6D8h] [rbp+5B8h]
  _BYTE *v300; // [rsp+6E0h] [rbp+5C0h]
  __int64 v301; // [rsp+6E8h] [rbp+5C8h]
  const struct CSpatialAudioTech **v302; // [rsp+6F0h] [rbp+5D0h]
  __int64 v303; // [rsp+6F8h] [rbp+5D8h]
  __int64 *v304; // [rsp+700h] [rbp+5E0h]
  __int64 v305; // [rsp+708h] [rbp+5E8h]
  char *v306; // [rsp+710h] [rbp+5F0h]
  __int64 v307; // [rsp+718h] [rbp+5F8h]
  char *v308; // [rsp+720h] [rbp+600h]
  __int64 v309; // [rsp+728h] [rbp+608h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+730h] [rbp+610h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+750h] [rbp+630h] BYREF
  char *v312; // [rsp+760h] [rbp+640h]
  __int64 v313; // [rsp+768h] [rbp+648h]
  char *v314; // [rsp+770h] [rbp+650h]
  __int64 v315; // [rsp+778h] [rbp+658h]
  char *v316; // [rsp+780h] [rbp+660h]
  __int64 v317; // [rsp+788h] [rbp+668h]
  char *v318; // [rsp+790h] [rbp+670h]
  __int64 v319; // [rsp+798h] [rbp+678h]
  __int16 *v320; // [rsp+7A0h] [rbp+680h]
  __int64 v321; // [rsp+7A8h] [rbp+688h]
  __int16 *v322; // [rsp+7B0h] [rbp+690h]
  __int64 v323; // [rsp+7B8h] [rbp+698h]
  __int16 *v324; // [rsp+7C0h] [rbp+6A0h]
  __int64 v325; // [rsp+7C8h] [rbp+6A8h]
  GUID *v326; // [rsp+7D0h] [rbp+6B0h]
  __int64 v327; // [rsp+7D8h] [rbp+6B8h]
  int *p_AsUInt32With; // [rsp+7E0h] [rbp+6C0h]
  __int64 v329; // [rsp+7E8h] [rbp+6C8h]
  unsigned int *v330; // [rsp+7F0h] [rbp+6D0h]
  __int64 v331; // [rsp+7F8h] [rbp+6D8h]
  _BYTE *v332; // [rsp+800h] [rbp+6E0h]
  __int64 v333; // [rsp+808h] [rbp+6E8h]
  int *v334; // [rsp+810h] [rbp+6F0h]
  __int64 v335; // [rsp+818h] [rbp+6F8h]
  int *v336; // [rsp+820h] [rbp+700h]
  __int64 v337; // [rsp+828h] [rbp+708h]
  char *v338; // [rsp+830h] [rbp+710h]
  __int64 v339; // [rsp+838h] [rbp+718h]
  char *v340; // [rsp+840h] [rbp+720h]
  __int64 v341; // [rsp+848h] [rbp+728h]
  char *v342; // [rsp+850h] [rbp+730h]
  __int64 v343; // [rsp+858h] [rbp+738h]
  int *v344; // [rsp+860h] [rbp+740h]
  __int64 v345; // [rsp+868h] [rbp+748h]
  char *v346; // [rsp+870h] [rbp+750h]
  __int64 v347; // [rsp+878h] [rbp+758h]
  char *v348; // [rsp+880h] [rbp+760h]
  __int64 v349; // [rsp+888h] [rbp+768h]
  EVENT_DATA_DESCRIPTOR v350; // [rsp+890h] [rbp+770h] BYREF
  int *v351; // [rsp+8B0h] [rbp+790h]
  __int64 v352; // [rsp+8B8h] [rbp+798h]
  _BYTE *v353; // [rsp+8C0h] [rbp+7A0h]
  __int64 v354; // [rsp+8C8h] [rbp+7A8h]
  char *v355; // [rsp+8D0h] [rbp+7B0h]
  __int64 v356; // [rsp+8D8h] [rbp+7B8h]
  char *v357; // [rsp+8E0h] [rbp+7C0h]
  __int64 v358; // [rsp+8E8h] [rbp+7C8h]
  char *v359; // [rsp+8F0h] [rbp+7D0h]
  __int64 v360; // [rsp+8F8h] [rbp+7D8h]
  char *v361; // [rsp+900h] [rbp+7E0h]
  __int64 v362; // [rsp+908h] [rbp+7E8h]
  _BYTE *v363; // [rsp+910h] [rbp+7F0h]
  __int64 v364; // [rsp+918h] [rbp+7F8h]
  _BYTE *v365; // [rsp+920h] [rbp+800h]
  __int64 v366; // [rsp+928h] [rbp+808h]
  _BYTE *v367; // [rsp+930h] [rbp+810h]
  __int64 v368; // [rsp+938h] [rbp+818h]
  _BYTE *v369; // [rsp+940h] [rbp+820h]
  __int64 v370; // [rsp+948h] [rbp+828h]
  _BYTE *v371; // [rsp+950h] [rbp+830h]
  __int64 v372; // [rsp+958h] [rbp+838h]
  _BYTE *v373; // [rsp+960h] [rbp+840h]
  __int64 v374; // [rsp+968h] [rbp+848h]
  _BYTE *v375; // [rsp+970h] [rbp+850h]
  __int64 v376; // [rsp+978h] [rbp+858h]
  struct _EVENT_DATA_DESCRIPTOR v377; // [rsp+980h] [rbp+860h] BYREF
  EVENT_DATA_DESCRIPTOR v378; // [rsp+990h] [rbp+870h] BYREF
  int *v379; // [rsp+9B0h] [rbp+890h]
  __int64 v380; // [rsp+9B8h] [rbp+898h]
  unsigned int *v381; // [rsp+9C0h] [rbp+8A0h]
  __int64 v382; // [rsp+9C8h] [rbp+8A8h]
  int *v383; // [rsp+9D0h] [rbp+8B0h]
  __int64 v384; // [rsp+9D8h] [rbp+8B8h]
  int *v385; // [rsp+9E0h] [rbp+8C0h]
  __int64 v386; // [rsp+9E8h] [rbp+8C8h]
  char *v387; // [rsp+9F0h] [rbp+8D0h]
  __int64 v388; // [rsp+9F8h] [rbp+8D8h]
  bool *v389; // [rsp+A00h] [rbp+8E0h]
  __int64 v390; // [rsp+A08h] [rbp+8E8h]
  EVENT_DATA_DESCRIPTOR v391; // [rsp+A10h] [rbp+8F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v392; // [rsp+A30h] [rbp+910h] BYREF
  int *v393; // [rsp+A40h] [rbp+920h]
  __int64 v394; // [rsp+A48h] [rbp+928h]
  int *v395; // [rsp+A50h] [rbp+930h]
  __int64 v396; // [rsp+A58h] [rbp+938h]
  EVENT_DATA_DESCRIPTOR v397; // [rsp+A60h] [rbp+940h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v398; // [rsp+A80h] [rbp+960h] BYREF
  _BYTE *v399; // [rsp+A90h] [rbp+970h]
  __int64 v400; // [rsp+A98h] [rbp+978h]
  struct _EVENT_DATA_DESCRIPTOR v401; // [rsp+AA0h] [rbp+980h] BYREF
  int *v402; // [rsp+AB0h] [rbp+990h]
  __int64 v403; // [rsp+AB8h] [rbp+998h]
  EVENT_DATA_DESCRIPTOR v404; // [rsp+AC0h] [rbp+9A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v405; // [rsp+AE0h] [rbp+9C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v406; // [rsp+AF0h] [rbp+9D0h] BYREF
  _BYTE *v407; // [rsp+B00h] [rbp+9E0h]
  __int64 v408; // [rsp+B08h] [rbp+9E8h]
  struct _EVENT_DATA_DESCRIPTOR v409; // [rsp+B10h] [rbp+9F0h] BYREF
  int *v410; // [rsp+B20h] [rbp+A00h]
  __int64 v411; // [rsp+B28h] [rbp+A08h]
  EVENT_DATA_DESCRIPTOR v412; // [rsp+B30h] [rbp+A10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v413; // [rsp+B50h] [rbp+A30h] BYREF
  int *v414; // [rsp+B60h] [rbp+A40h]
  __int64 v415; // [rsp+B68h] [rbp+A48h]
  EVENT_DATA_DESCRIPTOR v416; // [rsp+B70h] [rbp+A50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v417; // [rsp+B90h] [rbp+A70h] BYREF
  int *v418; // [rsp+BA0h] [rbp+A80h]
  __int64 v419; // [rsp+BA8h] [rbp+A88h]
  EVENT_DATA_DESCRIPTOR v420; // [rsp+BB0h] [rbp+A90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v421; // [rsp+BD0h] [rbp+AB0h] BYREF
  int *v422; // [rsp+BE0h] [rbp+AC0h]
  __int64 v423; // [rsp+BE8h] [rbp+AC8h]
  EVENT_DATA_DESCRIPTOR v424; // [rsp+BF0h] [rbp+AD0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v425; // [rsp+C10h] [rbp+AF0h] BYREF
  int *v426; // [rsp+C20h] [rbp+B00h]
  __int64 v427; // [rsp+C28h] [rbp+B08h]
  EVENT_DATA_DESCRIPTOR v428; // [rsp+C30h] [rbp+B10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v429; // [rsp+C50h] [rbp+B30h] BYREF
  GUID *v430; // [rsp+C60h] [rbp+B40h]
  __int64 v431; // [rsp+C68h] [rbp+B48h]
  struct _EVENT_DATA_DESCRIPTOR v432; // [rsp+C70h] [rbp+B50h] BYREF
  _BYTE v433[768]; // [rsp+C80h] [rbp+B60h] BYREF
  _BYTE v434[5904]; // [rsp+F80h] [rbp+E60h] BYREF
  _BYTE Src[6672]; // [rsp+2690h] [rbp+2570h] BYREF

  v194 = -2LL;
  v7 = a4;
  v165 = a4;
  v9 = a2;
  pwsz = a2;
  v11 = a5;
  v127 = a5;
  v181 = a6;
  v195 = a6;
  v184 = a7;
  v149 = 10;
  v157 = 2;
  v160 = 0;
  v147 = 0;
  v162 = -1;
  v155 = -1;
  v156 = -1;
  v158 = -1;
  v164 = -1;
  v12 = 0;
  v117 = 0;
  v121 = 0;
  v122 = 0;
  memset_0(&v201, 0, 0x28uLL);
  v119 = 0;
  v124 = 0;
  memset_0(&v213, 0, 0x48uLL);
  v143 = 0;
  v150 = 0;
  v200 = GUID_00000000_0000_0000_0000_000000000000;
  memset_0(v211, 0, 0x48uLL);
  memset_0(v433, 0, 0x1A10uLL);
  v166 = 0LL;
  v183 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  memset(&v185, 0, sizeof(v185));
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v196 = a1;
  v191 = PKEY_AudioEndpoint_FormFactor;
  AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                   (__int64)&v183,
                   (__int128 *)&v191,
                   10,
                   &v149);
  if ( AsUInt32With < 0 )
    goto LABEL_287;
  v192 = PKEY_Endpoint_PreferedPcmChannelCountForHrtf;
  v193 = 2;
  AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                   (__int64)&v183,
                   &v192,
                   2,
                   &v157);
  if ( AsUInt32With < 0 )
    goto LABEL_287;
  if ( v149 != 9
    && (*(int (__fastcall **)(__int64, const PROPERTYKEY *, struct tagPROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
         v7,
         &PKEY_AudioEngine_OEMFormat,
         &v185) >= 0
    && v185.vt == 65
    && IsValidWfxBlob(&v185) )
  {
    v13 = v185.bstrblobVal.pData;
    if ( (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)v185.bstrblobVal.pData) >= 0 )
    {
      v166 = (unsigned __int16 *)v13;
      if ( a5 )
        v166 = (unsigned __int16 *)((unsigned __int64)v13 & -(__int64)((unsigned int)CompareWaveFormat(
                                                                                       (const struct tWAVEFORMATEX *)v13,
                                                                                       a5) != 0));
      v12 = 0;
    }
  }
  AsUInt32With = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
  if ( AsUInt32With < 0 )
    goto LABEL_287;
  AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(*(_QWORD *)(a1 + 56), &v143);
  if ( AsUInt32With < 0 )
    goto LABEL_287;
  AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 40LL))(*(_QWORD *)(a1 + 56), &v150);
  if ( AsUInt32With < 0 )
    goto LABEL_287;
  AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**(_QWORD **)(a1 + 56) + 48LL))(
                   *(_QWORD *)(a1 + 56),
                   &v200);
  if ( AsUInt32With < 0 )
    goto LABEL_287;
  v229 = v200;
  v14 = a3;
  v15 = 1;
  if ( v143 )
    v14 = 1;
  v178 = v14;
  AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 48) + 96LL))(
                   *(_QWORD *)(a1 + 48),
                   &v124);
  v16 = v124;
  if ( AsUInt32With >= 0 && v124 <= 8 )
  {
    AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _BYTE *, _QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(
                     *(_QWORD *)(a1 + 48),
                     &v213,
                     Src,
                     834 * v124);
    v16 = v124;
  }
  AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)v223, a5);
  v18 = (unsigned int)hProvider;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&pDesc, v9);
    v120 = v213;
    v312 = &v120;
    v313 = 1LL;
    v144 = BYTE12(v215);
    v314 = &v144;
    v315 = 1LL;
    v316 = (char *)&v213 + 12;
    v317 = 16LL;
    v145 = BYTE8(v213);
    v318 = &v145;
    v319 = 1LL;
    v153 = WORD2(v216);
    v320 = &v153;
    v321 = 2LL;
    v161 = v143;
    v322 = &v161;
    v323 = 2LL;
    v152 = v149;
    v324 = &v152;
    v325 = 2LL;
    v326 = &v200;
    v327 = 16LL;
    p_AsUInt32With = &AsUInt32With;
    v329 = v19;
    v330 = &v124;
    v331 = v19;
    v332 = v223;
    v333 = 2LL;
    v174 = v228;
    v334 = &v174;
    v335 = v19;
    v175 = v224;
    v336 = &v175;
    v337 = v19;
    v338 = &v227;
    v339 = 16LL;
    v340 = &v225;
    v341 = 2LL;
    v342 = &v226;
    v343 = 2LL;
    v176 = v216;
    v344 = &v176;
    v345 = v19;
    v146 = BYTE4(v213);
    v346 = &v146;
    v347 = 1LL;
    v348 = (char *)v214 + 12;
    v349 = 16LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017B6F0, v20, v21, 0x16u, &pData);
    v17 = AsUInt32With;
    v16 = v124;
    v18 = (unsigned int)hProvider;
  }
  v22 = 0;
  v23 = 0;
  v154 = 0;
  if ( v17 < 0 )
    goto LABEL_44;
  do
  {
    if ( v22 >= v16 )
      break;
    if ( v18 > 4 )
    {
      v236 = &v154;
      v237 = 4LL;
      v24 = 834LL * v22;
      v238 = &Src[v24 + 768];
      v239 = 16LL;
      v148 = Src[v24 + 784];
      v240 = &v148;
      v241 = 1LL;
      v128 = Src[v24 + 788];
      v242 = &v128;
      v243 = 1LL;
      v129 = Src[v24 + 792];
      v244 = &v129;
      v245 = 1LL;
      v130 = Src[v24 + 796];
      v246 = &v130;
      v247 = 1LL;
      v248 = &Src[v24 + 800];
      v249 = 4LL;
      v250 = &Src[v24 + 804];
      v251 = 4LL;
      v252 = &Src[v24 + 808];
      v253 = 4LL;
      v254 = &Src[v24 + 812];
      v255 = 16LL;
      v256 = &Src[v24 + 828];
      v257 = 2LL;
      v258 = &Src[v24 + 830];
      v259 = 2LL;
      v260 = &Src[v24 + 832];
      v261 = 2LL;
      TlgCreateWsz(&v262, (LPCWSTR)&Src[v24 + 512]);
      TlgCreateWsz(&v263, (LPCWSTR)&Src[v25]);
      v189[0] = 184549376;
      v189[1] = 4;
      v190 = 0LL;
      v230 = off_1801B5488;
      v231 = *(unsigned __int16 *)off_1801B5488;
      v232 = v26;
      v233 = &unk_18017B5FB;
      v234 = 244;
      v235 = 1;
      LODWORD(v168) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(qword_1801B54A0, v189, 0LL, 0LL, 17, &v230);
      v17 = AsUInt32With;
      v16 = v124;
      v23 = v154;
      v18 = (unsigned int)hProvider;
    }
    v154 = ++v23;
    v22 = v23;
  }
  while ( v17 >= 0 );
  v7 = v165;
  if ( v17 < 0 || v16 > 8 )
  {
LABEL_44:
    v27 = 0;
    if ( !*(_BYTE *)(a1 + 73) )
    {
      AsUInt32With = 0;
      goto LABEL_287;
    }
    if ( v18 > 4 )
    {
      TlgCreateWsz(&v413, v9);
      v414 = &AsUInt32With;
      v415 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180179FEB, v29, v30, cData, &v412);
    }
    v124 = 0;
    memset_0(&v213, 0, 0x48uLL);
    memset_0(Src, 0, sizeof(Src));
    goto LABEL_49;
  }
  if ( !*(_BYTE *)(a1 + 6852) )
  {
    *(_BYTE *)(a1 + 6852) = 1;
    *(_OWORD *)(a1 + 104) = v213;
    *(_OWORD *)(a1 + 120) = v214[0];
    *(_OWORD *)(a1 + 136) = v214[1];
    *(_OWORD *)(a1 + 152) = v215;
    *(_QWORD *)(a1 + 168) = v216;
    *(_DWORD *)(a1 + 176) = v16;
    memcpy_0((void *)(a1 + 180), Src, 834LL * v16);
  }
  if ( v16 )
  {
    v27 = 0;
    if ( !*(_BYTE *)(a1 + 76) )
    {
      v28 = HIDWORD(v215);
      if ( HIDWORD(v215) != (_DWORD)v213 )
      {
        if ( !*(_DWORD *)(a1 + 164) || *(_DWORD *)(a1 + 104) )
        {
          v28 = v213;
          HIDWORD(v215) = v213;
        }
        else
        {
          LODWORD(v213) = HIDWORD(v215);
        }
      }
      goto LABEL_43;
    }
  }
  else
  {
    v27 = 0;
  }
  v28 = HIDWORD(v215);
LABEL_43:
  v12 = v28 != 0;
  v117 = v28 != 0;
  v119 = 1;
LABEL_49:
  AsUInt32With = CSpatialProperties::InitSpatialTechList((CSpatialProperties *)a1);
  if ( AsUInt32With < 0 )
    goto LABEL_287;
  CSpatialAudioTechnologies::RegistryGates();
  if ( (unsigned int)g_ListOfSpatialTech > 8 )
  {
    AsUInt32With = -2147418113;
    goto LABEL_287;
  }
  v33 = BlockSpatialAudioRegistryGates();
  v123 = v33;
  v168 = v197;
  if ( v12 || (v33 & 8) != 0 )
    v27 = 1;
  v198 = 0LL;
  v34 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(v181 + 56);
  if ( v34 )
    v198 = (**v34)(v34, v197);
  v35 = pwsz;
  v116 = v27;
  v36 = v166;
  LOBYTE(v32) = v119;
  v147 = CSpatialProperties::EnumerateSpatialEncoders(
           a1,
           v32,
           (unsigned int)&v213,
           v124,
           (__int64)Src,
           v149,
           v143,
           (__int64)a5,
           (__int64)v166,
           v116,
           (__int64)v197,
           (__int64)pwsz,
           v157,
           (__int64)v433,
           (__int64)&v162,
           (__int64)&v155,
           (__int64)&v156,
           (__int64)&v158,
           (__int64)&v164,
           (__int64)&v213);
  v38 = v158;
  v39 = 0LL;
  if ( !v119 )
  {
    v117 = v158 != -1;
    if ( (unsigned int)hProvider > 4 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        TlgCreateWsz(&v429, v35);
        if ( (_DWORD)v38 == v40 )
          v41 = &GUID_00000000_0000_0000_0000_000000000000;
        else
          v41 = (GUID *)&v434[834 * v38];
        v430 = v41;
        v431 = 16LL;
        if ( (_DWORD)v38 == v40 )
          v42 = L"<none>";
        else
          v42 = (const WCHAR *)&v433[834 * v38];
        TlgCreateWsz(&v432, v42);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A088, v43, v44, 5u, &v428);
        v39 = 0LL;
      }
    }
  }
  v120 = 1;
  v45 = v162;
  if ( v162 == -1 )
  {
    v45 = v38;
    v120 = (char)v39;
    if ( (_DWORD)v38 == -1 )
    {
      v46 = v155;
      v47 = v156;
      v48 = v117;
      goto LABEL_203;
    }
  }
  v126 = v155;
  v125 = v156;
  while ( 1 )
  {
    v131 = 0;
    v177 = 0;
    v167 = 834LL * v45;
    v168 = &v434[v167];
    TechnologyByID = CSpatialAudioTechnologies::GetTechnologyByID(
                       (CSpatialAudioTechnologies *)v434,
                       (const struct _GUID *)&v434[v167]);
    v169 = TechnologyByID;
    v50 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
            v199,
            v181);
    v51 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *, _QWORD, struct tWAVEFORMATEX *, unsigned __int16 *, __int64, int, int *, char *, __int128 *))(*(_QWORD *)TechnologyByID + 40LL))(
            TechnologyByID,
            v149,
            v11,
            v36,
            v50,
            v157,
            &v177,
            &v131,
            &v201);
    if ( !v36 )
    {
LABEL_116:
      v62 = 0;
      goto LABEL_117;
    }
    if ( *v36 == 0xFFFE )
    {
      if ( v36[8] != 22
        && (*((_QWORD *)v36 + 3) != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
         || *((_QWORD *)v36 + 4) != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4)
        && (*((_QWORD *)v36 + 3) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
         || *((_QWORD *)v36 + 4) != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
      {
        goto LABEL_129;
      }
      Buf1 = *(_OWORD *)v36;
      *(_OWORD *)v208 = *((_OWORD *)v36 + 1);
      *(_QWORD *)&v208[16] = *((_QWORD *)v36 + 4);
      *(_WORD *)v208 = 22;
      v52 = *(_DWORD *)&v208[4];
      v53 = Buf1;
    }
    else
    {
      if ( v36[8] && ((*v36 - 1) & 0xFFFD) != 0 )
        goto LABEL_129;
      v54 = v36[1];
      if ( (unsigned __int16)(v54 - 1) > 1u )
        goto LABEL_129;
      v55 = v36[7];
      LODWORD(v38) = v158;
      if ( ((v55 - 8) & 0xFFE7) != 0 )
        goto LABEL_129;
      Buf1 = *(_OWORD *)v36;
      v53 = -2;
      LOWORD(Buf1) = -2;
      *(_WORD *)v208 = 22;
      *(_WORD *)&v208[2] = v55;
      *(GUID *)&v208[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v208[8] = *v166;
      v52 = 4 - (v54 != 1);
    }
    if ( (_WORD)v201 == 0xFFFE )
    {
      if ( *(_WORD *)v202 != 22
        && *(_OWORD *)&v202[8] != *(_OWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71
        && (*(_QWORD *)&v202[8] != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
         || *(_QWORD *)&v202[16] != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
      {
        goto LABEL_128;
      }
      Buf2 = v201;
      *(_OWORD *)v206 = *(_OWORD *)v202;
      *(_QWORD *)&v206[16] = *(_QWORD *)&v202[16];
      *(_WORD *)v206 = 22;
      v56 = *(_DWORD *)&v202[4];
      v57 = v201;
    }
    else
    {
      if ( *(_WORD *)v202 && (((_WORD)v201 - 1) & 0xFFFD) != 0
        || (unsigned __int16)(WORD1(v201) - 1) > 1u
        || ((HIWORD(v201) - 8) & 0xFFE7) != 0 )
      {
        goto LABEL_128;
      }
      Buf2 = v201;
      v57 = -2;
      LOWORD(Buf2) = -2;
      *(_WORD *)v206 = 22;
      *(_WORD *)&v206[2] = HIWORD(v201);
      *(GUID *)&v206[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v206[8] = (unsigned __int16)v201;
      v56 = 4 - (WORD1(v201) != 1);
    }
    if ( WORD1(Buf1) )
    {
      v58 = WORD1(Buf2);
    }
    else
    {
      v58 = 0;
      WORD1(Buf2) = 0;
      DWORD2(Buf2) = 0;
      WORD6(Buf2) = 0;
    }
    if ( DWORD1(Buf1) )
    {
      v59 = DWORD1(Buf2);
    }
    else
    {
      v59 = 0;
      *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
    }
    if ( HIWORD(Buf1) )
    {
      v60 = HIWORD(Buf2);
    }
    else
    {
      v60 = 0;
      HIDWORD(Buf2) = 0;
    }
    *(_DWORD *)&v206[4] = v52 != 0 ? v56 : 0;
    if ( !v53 )
    {
      v57 = 0;
      LOWORD(Buf2) = 0;
    }
    if ( !v58 )
    {
      WORD1(Buf1) = 0;
      DWORD2(Buf1) = 0;
      WORD6(Buf1) = 0;
    }
    if ( !v59 )
      *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
    if ( !v60 )
      HIDWORD(Buf1) = 0;
    *(_DWORD *)&v208[4] = (v52 != 0 ? v56 : 0) != 0 ? v52 : 0;
    if ( !v57 )
      LOWORD(Buf1) = 0;
    if ( *(_OWORD *)&v208[8] != *(_OWORD *)&v206[8] )
    {
LABEL_128:
      v11 = v127;
      goto LABEL_129;
    }
    v61 = memcmp_0(&Buf1, &Buf2, 0x28uLL);
    v11 = v127;
    if ( !v61 )
      goto LABEL_116;
LABEL_129:
    v62 = 1;
LABEL_117:
    v63 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *, LPCWSTR))(*(_QWORD *)v169 + 32LL))(v169, pwsz);
    v163 = v63;
    if ( !v51 )
    {
      v39 = L"OEM format supplied";
      if ( !v62 )
        v39 = L"Encoder not supported";
      goto LABEL_176;
    }
    if ( v62 || v63 < 0 )
    {
      v39 = L"Encoder Not licensed";
LABEL_176:
      if ( (unsigned int)hProvider > 4 )
      {
        TlgCreateWsz(&v405, pwsz);
        TlgCreateWsz(&v406, v74);
        v407 = v168;
        v408 = 16LL;
        TlgCreateWsz(&v409, (LPCWSTR)&v433[v167]);
        v410 = &v163;
        v411 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180179ED7, v75, v76, 7u, &v404);
      }
      goto LABEL_178;
    }
    if ( !v11 )
      goto LABEL_169;
    v39 = *(const wchar_t **)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    v37 = *(const GUID **)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( v11->wFormatTag == 0xFFFE )
    {
      if ( v11->cbSize != 22
        && (*(_QWORD *)((char *)&v11[1].nSamplesPerSec + 2) != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
         || *(_QWORD *)&v11[1].wBitsPerSample != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4)
        && (*(_QWORD *)((char *)&v11[1].nSamplesPerSec + 2) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
         || *(_QWORD *)&v11[1].wBitsPerSample != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
      {
        goto LABEL_169;
      }
      v203 = *(_OWORD *)&v11->wFormatTag;
      *(_OWORD *)v204 = *(_OWORD *)&v11->cbSize;
      *(_QWORD *)&v204[16] = *(_QWORD *)&v11[1].wBitsPerSample;
      *(_WORD *)v204 = 22;
      v64 = *(_DWORD *)&v204[4];
      v65 = v203;
    }
    else
    {
      if ( v11->cbSize && ((v11->wFormatTag - 1) & 0xFFFD) != 0 )
        goto LABEL_169;
      nChannels = v11->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u )
        goto LABEL_169;
      wBitsPerSample = v11->wBitsPerSample;
      if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
        goto LABEL_169;
      v203 = *(_OWORD *)&v11->wFormatTag;
      v65 = -2;
      LOWORD(v203) = -2;
      *(_WORD *)v204 = 22;
      *(_WORD *)&v204[2] = wBitsPerSample;
      *(GUID *)&v204[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v204[8] = v127->wFormatTag;
      v64 = 4 - (nChannels != 1);
    }
    if ( (_WORD)v201 != 0xFFFE )
      break;
    if ( *(_WORD *)v202 == 22
      || *(_QWORD *)&v202[8] == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
      && *(_QWORD *)&v202[16] == *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4
      || *(_QWORD *)&v202[8] == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
      && *(_QWORD *)&v202[16] == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 )
    {
      v209 = v201;
      v210[0] = *(_OWORD *)v202;
      *(_QWORD *)&v210[1] = *(_QWORD *)&v202[16];
      LOWORD(v210[0]) = 22;
      v68 = *(_DWORD *)&v202[4];
      v69 = v201;
      goto LABEL_147;
    }
LABEL_168:
    v11 = v127;
LABEL_169:
    v71 = 1;
    if ( (_BYTE)v178 || *(_BYTE *)(a1 + 76) )
      goto LABEL_194;
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&v398, pwsz);
      v399 = v168;
      v400 = 16LL;
      TlgCreateWsz(&v401, (LPCWSTR)&v433[v167]);
      v402 = &v163;
      v403 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A021, v72, v73, 6u, &v397);
    }
LABEL_178:
    v46 = v126;
    if ( v126 == -1 || (v77 = v126, v46 = -1, v126 = -1, v45 == v77) )
    {
      if ( v125 == -1 )
      {
        if ( v120 )
        {
          v120 = 0;
          v45 = v164;
          if ( (_DWORD)v38 != -1 )
            v45 = v38;
          v117 = v117 && (_DWORD)v38 != -1;
        }
        else
        {
          v45 = -1;
        }
      }
      else
      {
        v45 = v125;
        v125 = -1;
      }
    }
    else
    {
      v45 = v77;
    }
    if ( v45 == -1 )
    {
      v48 = v117;
      goto LABEL_202;
    }
    v36 = v166;
  }
  v39 = (const wchar_t *)*(unsigned __int16 *)v202;
  if ( *(_WORD *)v202 && (((_WORD)v201 - 1) & 0xFFFD) != 0 )
    goto LABEL_168;
  if ( (unsigned __int16)(WORD1(v201) - 1) > 1u )
    goto LABEL_168;
  v37 = (const GUID *)HIWORD(v201);
  if ( ((HIWORD(v201) - 8) & 0xFFE7) != 0 )
    goto LABEL_168;
  v209 = v201;
  v69 = -2;
  LOWORD(v209) = -2;
  LOWORD(v210[0]) = 22;
  WORD1(v210[0]) = HIWORD(v201);
  *(GUID *)((char *)v210 + 8) = GUID_00000000_0000_0010_8000_00aa00389b71;
  DWORD2(v210[0]) = (unsigned __int16)v201;
  v68 = 4 - (WORD1(v201) != 1);
LABEL_147:
  if ( WORD1(v203) )
  {
    v39 = (const wchar_t *)WORD1(v209);
  }
  else
  {
    v39 = 0LL;
    WORD1(v209) = 0;
    DWORD2(v209) = 0;
    WORD6(v209) = 0;
  }
  if ( DWORD1(v203) )
  {
    v37 = (const GUID *)DWORD1(v209);
  }
  else
  {
    v37 = 0LL;
    *(_QWORD *)((char *)&v209 + 4) = 0LL;
  }
  if ( HIWORD(v203) )
  {
    v70 = HIWORD(v209);
  }
  else
  {
    v70 = 0;
    HIDWORD(v209) = 0;
  }
  DWORD1(v210[0]) = v64 != 0 ? v68 : 0;
  if ( !v65 )
  {
    v69 = 0;
    LOWORD(v209) = 0;
  }
  if ( !(_WORD)v39 )
  {
    WORD1(v203) = 0;
    DWORD2(v203) = 0;
    WORD6(v203) = 0;
  }
  if ( !(_DWORD)v37 )
    *(_QWORD *)((char *)&v203 + 4) = 0LL;
  if ( !v70 )
    HIDWORD(v203) = 0;
  *(_DWORD *)&v204[4] = (v64 != 0 ? v68 : 0) != 0 ? v64 : 0;
  if ( !v69 )
    LOWORD(v203) = 0;
  if ( *(_OWORD *)&v204[8] != *(_OWORD *)((char *)v210 + 8) || memcmp_0(&v203, &v209, 0x28uLL) )
    goto LABEL_168;
  v71 = 0;
LABEL_194:
  v121 = 1;
  v122 = (*(__int64 (__fastcall **)(const struct CSpatialAudioTech *))(*(_QWORD *)v169 + 48LL))(v169);
  v126 = v45;
  v48 = v117;
  if ( v117 && !*(_BYTE *)(a1 + 76) )
  {
    if ( v71 )
    {
      v78 = v184;
      *(_OWORD *)v184 = v201;
      *(_OWORD *)(v78 + 16) = *(_OWORD *)v202;
      *(_QWORD *)(v78 + 32) = *(_QWORD *)&v202[16];
    }
    v160 = v119 && DWORD2(v213);
  }
  v46 = v126;
LABEL_202:
  v33 = v123;
  v47 = v125;
LABEL_203:
  if ( (unsigned int)hProvider > 5 )
  {
    v179 = v47;
    v379 = &v179;
    v380 = 4LL;
    v180 = v45;
    v381 = &v180;
    v382 = 4LL;
    v170 = v46;
    v383 = &v170;
    v384 = 4LL;
    v171 = v38;
    v385 = &v171;
    v386 = 4LL;
    v132 = v121;
    v387 = &v132;
    v388 = 1LL;
    v133 = v48;
    v389 = &v133;
    v390 = 1LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017B475, v37, (LPCGUID)v39, 8u, &v378);
  }
  v79 = v121 != 0;
  v121 = -v121;
  v80 = v79 && v117;
  if ( v45 == -1 )
  {
    v82 = &GUID_00000000_0000_0000_0000_000000000000;
    v81 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v81 = (GUID *)&v434[834 * v45];
    v82 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  v83 = *v81;
  v200 = *v81;
  if ( v46 == -1 )
  {
    v84 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v84 = (GUID *)&v434[834 * v46];
    v82 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  *(GUID *)&v211[12] = *v84;
  if ( v47 == -1 )
  {
    v85 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v85 = (GUID *)&v434[834 * v47];
    v82 = &GUID_00000000_0000_0000_0000_000000000000;
  }
  *(GUID *)&v211[28] = *v85;
  if ( (_DWORD)v38 != -1 )
    v82 = (GUID *)&v434[834 * (unsigned int)v38];
  *(GUID *)&v211[44] = *v82;
  if ( *(_BYTE *)(a1 + 76) || (v86 = 1, !v80) )
    v86 = 0;
  *(_DWORD *)v211 = v86;
  *(_DWORD *)&v211[60] = v80;
  *(_DWORD *)&v211[4] = v122;
  if ( v119 )
  {
    v87 = DWORD2(v213);
    goto LABEL_223;
  }
  if ( v45 == -1 )
  {
    v87 = *(_DWORD *)&v211[8];
  }
  else
  {
    v87 = *(_DWORD *)&v434[834 * v45 + 24];
LABEL_223:
    *(_DWORD *)&v211[8] = v87;
  }
  LODWORD(v212) = v33;
  v7 = v165;
  if ( (v33 & 2) != 0 )
  {
    if ( v149 == 1 )
    {
      pvar = 0LL;
      v187 = 0LL;
      v188 = 0LL;
      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v165 + 40LL))(
             v165,
             &PKEY_Endpoint_SpatialNotAllowed,
             &pvar) < 0
        || !(_WORD)pvar
        || (_WORD)pvar == 11 && !(_WORD)v187 )
      {
        LODWORD(v212) = v212 & 0xFFFFFFFD;
      }
      PropVariantClear(&pvar);
      v83 = v200;
      v33 = v212;
      v87 = *(_DWORD *)&v211[8];
      v86 = *(_DWORD *)v211;
    }
    else
    {
      v33 &= ~2u;
      LODWORD(v212) = v33;
    }
    v123 = v33;
  }
  if ( (v33 & 3) != 0 )
  {
    v86 = 0;
    *(_DWORD *)v211 = 0;
    *(_DWORD *)&v211[60] = 0;
    v87 = 0;
  }
  if ( (v212 & 4) != 0 )
    v87 = 0;
  *(_DWORD *)&v211[8] = v87;
  if ( !v86 || (HIDWORD(v212) = 1, !v87) )
    HIDWORD(v212) = 0;
  if ( !v86 && !v143 )
  {
    v83 = GUID_00000000_0000_0000_0000_000000000000;
    v200 = GUID_00000000_0000_0000_0000_000000000000;
  }
  *(GUID *)(a1 + 6856) = v83;
  v88 = 0;
  if ( v143 && !v150 )
    v88 = HIDWORD(v216) != 0;
  v89 = *(_QWORD *)v229.Data4;
  v90 = *(_QWORD *)&v229.Data1;
  v91 = v147;
  if ( v124 != v147
    || memcmp_0(&v213, v211, 0x48uLL)
    || memcmp_0(Src, v433, 834 * v91)
    || __PAIR128__(v89, v90) != *(_OWORD *)&v200
    || v88 )
  {
    AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)v217, (const struct tWAVEFORMATEX *)&v201);
    v93 = pwsz;
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&v265, pwsz);
      v134 = v211[0];
      v266 = &v134;
      v267 = 1LL;
      v135 = v211[60];
      v268 = &v135;
      v269 = 1LL;
      v270 = &v211[12];
      v271 = 16LL;
      v136 = v211[8];
      v272 = &v136;
      v273 = 1LL;
      LOWORD(v125) = WORD2(v212);
      v274 = &v125;
      v275 = 2LL;
      v276 = &v200;
      v277 = 16LL;
      v278 = &v147;
      v279 = 4LL;
      v172 = v123;
      v280 = &v172;
      v281 = 4LL;
      v137 = v211[4];
      v282 = &v137;
      v283 = 1LL;
      v138 = v88;
      v284 = &v138;
      v285 = 1LL;
      v286 = v217;
      v287 = 2LL;
      v173 = v222;
      v288 = &v173;
      v289 = 4LL;
      v182 = v218;
      v290 = &v182;
      v291 = 4LL;
      v292 = &v221;
      v293 = 16LL;
      v294 = &v219;
      v295 = 2LL;
      v296 = &v220;
      v297 = 2LL;
      v298 = &v211[28];
      v299 = 16LL;
      v300 = &v211[44];
      v301 = 16LL;
      LODWORD(v169) = v213;
      v302 = &v169;
      v303 = 4LL;
      LODWORD(v167) = HIDWORD(v215);
      v304 = &v167;
      v305 = 4LL;
      v306 = (char *)&v213 + 12;
      v307 = 16LL;
      v308 = (char *)v214 + 12;
      v309 = 16LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017B290, v94, v95, 0x19u, &v264);
    }
    v96 = 0;
    v97 = 0;
    v159 = 0;
    if ( v147 )
    {
      do
      {
        if ( (unsigned int)hProvider > 5 )
        {
          v351 = &v159;
          v352 = 4LL;
          v98 = 834LL * v96;
          v353 = &v434[v98];
          v354 = 16LL;
          v139 = v434[v98 + 16];
          v355 = &v139;
          v356 = 1LL;
          v140 = v434[v98 + 20];
          v357 = &v140;
          v358 = 1LL;
          v141 = v434[v98 + 24];
          v359 = &v141;
          v360 = 1LL;
          v142 = v434[v98 + 28];
          v361 = &v142;
          v362 = 1LL;
          v363 = &v434[v98 + 32];
          v364 = 4LL;
          v365 = &v434[v98 + 36];
          v366 = 4LL;
          v367 = &v434[v98 + 40];
          v368 = 4LL;
          v369 = &v434[v98 + 44];
          v370 = 16LL;
          v371 = &v434[v98 + 60];
          v372 = 2LL;
          v373 = &v434[v98 + 62];
          v374 = 2LL;
          v375 = &v434[v98 + 64];
          v376 = 2LL;
          TlgCreateWsz(&v377, (LPCWSTR)&v433[v98]);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017B4FD, v99, v100, (UINT32)v100, &v350);
          v97 = v159;
        }
        v159 = ++v97;
        v96 = v97;
      }
      while ( v97 < v147 );
      v7 = v165;
    }
    if ( __PAIR128__(v89, v90) == *(_OWORD *)&v200 )
    {
LABEL_266:
      v101 = AsUInt32With;
      goto LABEL_267;
    }
    v101 = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**(_QWORD **)(a1 + 64) + 56LL))(*(_QWORD *)(a1 + 64), &v200);
    AsUInt32With = v101;
    if ( v101 >= 0 )
      goto LABEL_269;
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateWsz(&v417, v93);
      v418 = &AsUInt32With;
      v419 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A9AF, v102, v103, 4u, &v416);
      goto LABEL_266;
    }
LABEL_267:
    if ( v101 >= 0 )
    {
LABEL_269:
      if ( !v143 || v150 )
        goto LABEL_273;
      v150 = 1;
      v101 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 64) + 48LL))(
               *(_QWORD *)(a1 + 64),
               1LL,
               v92,
               0LL);
      AsUInt32With = v101;
      if ( v101 >= 0 )
        goto LABEL_274;
      if ( (unsigned int)hProvider > 2 )
      {
        TlgCreateWsz(&v421, v93);
        v422 = &AsUInt32With;
        v423 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A96E, v104, v105, 4u, &v420);
        v101 = AsUInt32With;
      }
LABEL_273:
      if ( v101 >= 0 )
      {
LABEL_274:
        AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _BYTE *, _QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(
                         *(_QWORD *)(a1 + 40),
                         v211,
                         v433,
                         834 * v147);
        if ( AsUInt32With < 0 )
        {
          if ( (unsigned int)hProvider > 2 )
          {
            TlgCreateWsz(&v425, v93);
            v426 = &AsUInt32With;
            v427 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017B257, v108, v109, 4u, &v424);
          }
        }
        else
        {
          v106 = *(__m128i *)v211;
          *(_OWORD *)(a1 + 104) = *(_OWORD *)v211;
          *(_OWORD *)(a1 + 120) = *(_OWORD *)&v211[16];
          *(_OWORD *)(a1 + 136) = *(_OWORD *)&v211[32];
          *(_OWORD *)(a1 + 152) = *(_OWORD *)&v211[48];
          *(_QWORD *)(a1 + 168) = v212;
          v107 = v147;
          *(_DWORD *)(a1 + 176) = v147;
          memcpy_0((void *)(a1 + 180), v433, 834 * v107);
          *(_BYTE *)(a1 + 6852) = 1;
          *(_DWORD *)v211 = _mm_cvtsi128_si32(v106);
          if ( !*(_DWORD *)v211
            || *(_WORD *)v184 != 0xFFFE
            || *(_QWORD *)(v184 + 24) != *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1
            || *(_QWORD *)(v184 + 32) != *(_QWORD *)GUID_0000000c_0cea_0010_8000_00aa00389b71.Data4 )
          {
            v15 = 0;
          }
          *(_BYTE *)(a1 + 72) = v15;
        }
      }
    }
  }
  v110 = v160;
  v9 = pwsz;
  if ( v160 != *(_DWORD *)(a1 + 80) )
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&v392, pwsz);
      LOWORD(v126) = *(_WORD *)(a1 + 80);
      v393 = &v126;
      v394 = 2LL;
      LOWORD(v123) = v110;
      v395 = &v123;
      v396 = 2LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A9F4, v111, v112, 5u, &v391);
    }
    *(_DWORD *)(a1 + 80) = v110;
  }
LABEL_287:
  PropVariantClear((PROPVARIANT *)&v185);
  if ( AsUInt32With < 0 )
    CSpatialProperties::ClearSpatialAudioSettings((CSpatialProperties *)a1, v9);
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v114 = v181;
  v115 = *(_QWORD *)(v181 + 56);
  if ( v115 )
  {
    LOBYTE(v113) = v115 != v181;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v115 + 32LL))(v115, v113);
    *(_QWORD *)(v114 + 56) = 0LL;
  }
}
