/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0166B3C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0009B80 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0017C3C (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?Feature_ModernStandbyDFx__private_IsEnabledPreCheck@@YAHXZ @ 0x1C0032E00 (-Feature_ModernStandbyDFx__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C0034444 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0035030 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C00350DC (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0035180 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2644 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C0142860 (DpiGetPnpRegistryKeyName.c)
 *     DpiGetDriverVersion @ 0x1C0167D80 (DpiGetDriverVersion.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C01EC834 (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01F2870 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01F569C (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiEnablePowerManagement @ 0x1C029C604 (DpiEnablePowerManagement.c)
 */

__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v6; // r15d
  bool v7; // cc
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int DriverVersion; // r12d
  unsigned int NumDifferentPhysicalAdapters; // r14d
  unsigned int i; // edi
  const GUID *v16; // r8
  int AdapterInfo; // eax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  SIZE_T v21; // rax
  PVOID v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _DWORD *v27; // rax
  _DWORD *v28; // r14
  __int64 v29; // rcx
  unsigned int v30; // edi
  __int64 v31; // r13
  unsigned int v32; // esi
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // r12
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int16 v44; // dx
  __int64 v45; // rdx
  __int64 v46; // rdi
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rcx
  void *v53; // rcx
  char *v54; // rdx
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  unsigned int v62; // ecx
  char v63; // r13
  SIZE_T v64; // rax
  PVOID v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  unsigned int v74; // edx
  const GUID *k; // r8
  __int64 v76; // r10
  __int64 v77; // r9
  unsigned int v78; // edx
  __int64 v79; // rax
  __int64 v80; // rdi
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rsi
  int v85; // eax
  __int64 v86; // rax
  unsigned int v87; // ecx
  __int64 v88; // rdx
  __int64 v89; // rax
  void *v90; // rcx
  unsigned int v91; // r12d
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // rcx
  __int64 v95; // rax
  unsigned int v96; // r9d
  __int64 v97; // rsi
  unsigned int v98; // edi
  __int64 v99; // r11
  unsigned int v100; // r10d
  ADAPTER_RENDER *v101; // rcx
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rax
  ADAPTER_DISPLAY *v107; // rcx
  int v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  _QWORD *v112; // r12
  int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  ULONG TimeIncrement; // eax
  __int64 v118; // rcx
  unsigned __int64 v119; // r8
  __int64 v120; // rax
  unsigned __int64 v121; // rtt
  __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rax
  unsigned __int64 v132; // rtt
  __int64 v133; // rax
  unsigned __int64 v134; // rtt
  __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rax
  unsigned __int64 v138; // rtt
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // rax
  unsigned int v156; // r14d
  __int64 v157; // rsi
  __int64 v158; // rdi
  DXGADAPTER *v159; // rdx
  int v160; // ecx
  int v161; // ecx
  int v162; // ecx
  int v163; // ecx
  int v164; // ecx
  int v165; // ecx
  int v166; // edx
  DXGADAPTER *v167; // rcx
  __int64 v168; // r8
  DXGADAPTER **v169; // rcx
  __int64 v170; // rax
  DXGADAPTER **v171; // rcx
  unsigned __int64 v172; // rcx
  unsigned int v173; // eax
  unsigned __int64 *v174; // rdx
  __int64 v175; // r8
  unsigned __int64 v176; // rax
  bool v177; // cf
  unsigned __int64 *v178; // rdx
  unsigned int v179; // eax
  int v180; // edx
  __int64 v181; // r8
  __int64 v182; // rcx
  __int64 v183; // rax
  __int64 v184; // r8
  __int64 v185; // rdi
  __int64 v186; // r14
  NTSTATUS v187; // eax
  __int64 v188; // rdx
  __int64 v189; // rcx
  int v190; // eax
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // rax
  void *v195; // [rsp+48h] [rbp-C0h]
  unsigned int v196; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v197; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v198; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v199; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v200; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v201; // [rsp+6Ch] [rbp-9Ch] BYREF
  BOOL v202; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v203; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v204; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v205; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v206; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v207; // [rsp+84h] [rbp-84h] BYREF
  int v208; // [rsp+88h] [rbp-80h] BYREF
  int v209; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v210; // [rsp+90h] [rbp-78h] BYREF
  int v211; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v212; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v213; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v214; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v215; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v216; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v217; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v218; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v219; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v220; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v221; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v222; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v223; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v224; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v225; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v226; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v227; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v228; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v229; // [rsp+DCh] [rbp-2Ch] BYREF
  unsigned int v230; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v231; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v232; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v233; // [rsp+ECh] [rbp-1Ch] BYREF
  unsigned int v234; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v235; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v236; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v237; // [rsp+FCh] [rbp-Ch] BYREF
  int v238; // [rsp+100h] [rbp-8h] BYREF
  void *j; // [rsp+108h] [rbp+0h] BYREF
  int v240; // [rsp+110h] [rbp+8h] BYREF
  int v241; // [rsp+114h] [rbp+Ch] BYREF
  int v242; // [rsp+118h] [rbp+10h] BYREF
  int v243; // [rsp+11Ch] [rbp+14h] BYREF
  int v244; // [rsp+120h] [rbp+18h] BYREF
  int v245; // [rsp+124h] [rbp+1Ch] BYREF
  int v246; // [rsp+128h] [rbp+20h] BYREF
  int v247; // [rsp+12Ch] [rbp+24h] BYREF
  int v248; // [rsp+130h] [rbp+28h] BYREF
  int v249; // [rsp+134h] [rbp+2Ch] BYREF
  int v250; // [rsp+138h] [rbp+30h] BYREF
  int v251; // [rsp+13Ch] [rbp+34h] BYREF
  int v252; // [rsp+140h] [rbp+38h] BYREF
  int v253; // [rsp+144h] [rbp+3Ch] BYREF
  int v254; // [rsp+148h] [rbp+40h] BYREF
  int v255; // [rsp+14Ch] [rbp+44h] BYREF
  int v256; // [rsp+150h] [rbp+48h] BYREF
  int v257; // [rsp+154h] [rbp+4Ch] BYREF
  int v258; // [rsp+158h] [rbp+50h] BYREF
  int v259; // [rsp+15Ch] [rbp+54h] BYREF
  int v260; // [rsp+160h] [rbp+58h] BYREF
  int v261; // [rsp+164h] [rbp+5Ch] BYREF
  int v262; // [rsp+168h] [rbp+60h] BYREF
  int v263; // [rsp+16Ch] [rbp+64h] BYREF
  int v264; // [rsp+170h] [rbp+68h] BYREF
  int v265; // [rsp+174h] [rbp+6Ch] BYREF
  int v266; // [rsp+178h] [rbp+70h] BYREF
  int v267; // [rsp+17Ch] [rbp+74h] BYREF
  int v268; // [rsp+180h] [rbp+78h] BYREF
  int v269; // [rsp+184h] [rbp+7Ch] BYREF
  int v270; // [rsp+188h] [rbp+80h] BYREF
  int v271; // [rsp+18Ch] [rbp+84h] BYREF
  int v272; // [rsp+190h] [rbp+88h] BYREF
  int v273; // [rsp+194h] [rbp+8Ch] BYREF
  int v274; // [rsp+198h] [rbp+90h] BYREF
  int v275; // [rsp+19Ch] [rbp+94h] BYREF
  int v276; // [rsp+1A0h] [rbp+98h] BYREF
  int v277; // [rsp+1A4h] [rbp+9Ch] BYREF
  int v278; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v280; // [rsp+1E0h] [rbp+D8h]
  struct _DXGKARG_QUERYADAPTERINFO v281; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v282; // [rsp+218h] [rbp+110h] BYREF
  int v283; // [rsp+220h] [rbp+118h]
  const wchar_t *v284; // [rsp+228h] [rbp+120h]
  BOOL *v285; // [rsp+230h] [rbp+128h]
  int v286; // [rsp+238h] [rbp+130h]
  int *v287; // [rsp+240h] [rbp+138h]
  int v288; // [rsp+248h] [rbp+140h]
  __int64 v289; // [rsp+250h] [rbp+148h]
  int v290; // [rsp+258h] [rbp+150h]
  _BYTE v291[40]; // [rsp+260h] [rbp+158h] BYREF
  __int64 v292; // [rsp+288h] [rbp+180h] BYREF
  int v293; // [rsp+290h] [rbp+188h]
  const wchar_t *v294; // [rsp+298h] [rbp+190h]
  unsigned int *v295; // [rsp+2A0h] [rbp+198h]
  int v296; // [rsp+2A8h] [rbp+1A0h]
  unsigned int *v297; // [rsp+2B0h] [rbp+1A8h]
  int v298; // [rsp+2B8h] [rbp+1B0h]
  __int64 v299; // [rsp+2C0h] [rbp+1B8h]
  int v300; // [rsp+2C8h] [rbp+1C0h]
  const wchar_t *v301; // [rsp+2D0h] [rbp+1C8h]
  unsigned int *v302; // [rsp+2D8h] [rbp+1D0h]
  int v303; // [rsp+2E0h] [rbp+1D8h]
  int *v304; // [rsp+2E8h] [rbp+1E0h]
  int v305; // [rsp+2F0h] [rbp+1E8h]
  __int64 v306; // [rsp+2F8h] [rbp+1F0h]
  int v307; // [rsp+300h] [rbp+1F8h]
  const wchar_t *v308; // [rsp+308h] [rbp+200h]
  unsigned int *v309; // [rsp+310h] [rbp+208h]
  int v310; // [rsp+318h] [rbp+210h]
  int *v311; // [rsp+320h] [rbp+218h]
  int v312; // [rsp+328h] [rbp+220h]
  __int64 v313; // [rsp+330h] [rbp+228h]
  int v314; // [rsp+338h] [rbp+230h]
  const wchar_t *v315; // [rsp+340h] [rbp+238h]
  unsigned int *v316; // [rsp+348h] [rbp+240h]
  int v317; // [rsp+350h] [rbp+248h]
  int *v318; // [rsp+358h] [rbp+250h]
  int v319; // [rsp+360h] [rbp+258h]
  __int64 v320; // [rsp+368h] [rbp+260h]
  int v321; // [rsp+370h] [rbp+268h]
  const wchar_t *v322; // [rsp+378h] [rbp+270h]
  unsigned int *v323; // [rsp+380h] [rbp+278h]
  int v324; // [rsp+388h] [rbp+280h]
  int *v325; // [rsp+390h] [rbp+288h]
  int v326; // [rsp+398h] [rbp+290h]
  __int64 v327; // [rsp+3A0h] [rbp+298h]
  int v328; // [rsp+3A8h] [rbp+2A0h]
  const wchar_t *v329; // [rsp+3B0h] [rbp+2A8h]
  unsigned int *v330; // [rsp+3B8h] [rbp+2B0h]
  int v331; // [rsp+3C0h] [rbp+2B8h]
  int *v332; // [rsp+3C8h] [rbp+2C0h]
  int v333; // [rsp+3D0h] [rbp+2C8h]
  __int64 v334; // [rsp+3D8h] [rbp+2D0h]
  int v335; // [rsp+3E0h] [rbp+2D8h]
  const wchar_t *v336; // [rsp+3E8h] [rbp+2E0h]
  unsigned int *v337; // [rsp+3F0h] [rbp+2E8h]
  int v338; // [rsp+3F8h] [rbp+2F0h]
  int *v339; // [rsp+400h] [rbp+2F8h]
  int v340; // [rsp+408h] [rbp+300h]
  __int64 v341; // [rsp+410h] [rbp+308h]
  int v342; // [rsp+418h] [rbp+310h]
  const wchar_t *v343; // [rsp+420h] [rbp+318h]
  unsigned int *v344; // [rsp+428h] [rbp+320h]
  int v345; // [rsp+430h] [rbp+328h]
  int *v346; // [rsp+438h] [rbp+330h]
  int v347; // [rsp+440h] [rbp+338h]
  __int64 v348; // [rsp+448h] [rbp+340h]
  int v349; // [rsp+450h] [rbp+348h]
  const wchar_t *v350; // [rsp+458h] [rbp+350h]
  unsigned int *v351; // [rsp+460h] [rbp+358h]
  int v352; // [rsp+468h] [rbp+360h]
  int *v353; // [rsp+470h] [rbp+368h]
  int v354; // [rsp+478h] [rbp+370h]
  __int64 v355; // [rsp+480h] [rbp+378h]
  int v356; // [rsp+488h] [rbp+380h]
  const wchar_t *v357; // [rsp+490h] [rbp+388h]
  unsigned int *v358; // [rsp+498h] [rbp+390h]
  int v359; // [rsp+4A0h] [rbp+398h]
  int *v360; // [rsp+4A8h] [rbp+3A0h]
  int v361; // [rsp+4B0h] [rbp+3A8h]
  __int64 v362; // [rsp+4B8h] [rbp+3B0h]
  int v363; // [rsp+4C0h] [rbp+3B8h]
  const wchar_t *v364; // [rsp+4C8h] [rbp+3C0h]
  int *v365; // [rsp+4D0h] [rbp+3C8h]
  int v366; // [rsp+4D8h] [rbp+3D0h]
  int *v367; // [rsp+4E0h] [rbp+3D8h]
  int v368; // [rsp+4E8h] [rbp+3E0h]
  __int64 v369; // [rsp+4F0h] [rbp+3E8h]
  int v370; // [rsp+4F8h] [rbp+3F0h]
  const wchar_t *v371; // [rsp+500h] [rbp+3F8h]
  unsigned int *v372; // [rsp+508h] [rbp+400h]
  int v373; // [rsp+510h] [rbp+408h]
  int *v374; // [rsp+518h] [rbp+410h]
  int v375; // [rsp+520h] [rbp+418h]
  __int64 v376; // [rsp+528h] [rbp+420h]
  int v377; // [rsp+530h] [rbp+428h]
  const wchar_t *v378; // [rsp+538h] [rbp+430h]
  int *v379; // [rsp+540h] [rbp+438h]
  int v380; // [rsp+548h] [rbp+440h]
  int *v381; // [rsp+550h] [rbp+448h]
  int v382; // [rsp+558h] [rbp+450h]
  __int64 v383; // [rsp+560h] [rbp+458h]
  int v384; // [rsp+568h] [rbp+460h]
  const wchar_t *v385; // [rsp+570h] [rbp+468h]
  unsigned int *v386; // [rsp+578h] [rbp+470h]
  int v387; // [rsp+580h] [rbp+478h]
  int *v388; // [rsp+588h] [rbp+480h]
  int v389; // [rsp+590h] [rbp+488h]
  __int64 v390; // [rsp+598h] [rbp+490h]
  int v391; // [rsp+5A0h] [rbp+498h]
  const wchar_t *v392; // [rsp+5A8h] [rbp+4A0h]
  unsigned int *v393; // [rsp+5B0h] [rbp+4A8h]
  int v394; // [rsp+5B8h] [rbp+4B0h]
  int *v395; // [rsp+5C0h] [rbp+4B8h]
  int v396; // [rsp+5C8h] [rbp+4C0h]
  __int64 v397; // [rsp+5D0h] [rbp+4C8h]
  int v398; // [rsp+5D8h] [rbp+4D0h]
  const wchar_t *v399; // [rsp+5E0h] [rbp+4D8h]
  unsigned int *v400; // [rsp+5E8h] [rbp+4E0h]
  int v401; // [rsp+5F0h] [rbp+4E8h]
  int *v402; // [rsp+5F8h] [rbp+4F0h]
  int v403; // [rsp+600h] [rbp+4F8h]
  __int64 v404; // [rsp+608h] [rbp+500h]
  int v405; // [rsp+610h] [rbp+508h]
  const wchar_t *v406; // [rsp+618h] [rbp+510h]
  unsigned int *v407; // [rsp+620h] [rbp+518h]
  int v408; // [rsp+628h] [rbp+520h]
  int *v409; // [rsp+630h] [rbp+528h]
  int v410; // [rsp+638h] [rbp+530h]
  __int64 v411; // [rsp+640h] [rbp+538h]
  int v412; // [rsp+648h] [rbp+540h]
  const wchar_t *v413; // [rsp+650h] [rbp+548h]
  __int64 *v414; // [rsp+658h] [rbp+550h]
  int v415; // [rsp+660h] [rbp+558h]
  int *v416; // [rsp+668h] [rbp+560h]
  int v417; // [rsp+670h] [rbp+568h]
  __int64 v418; // [rsp+678h] [rbp+570h]
  int v419; // [rsp+680h] [rbp+578h]
  const wchar_t *v420; // [rsp+688h] [rbp+580h]
  unsigned int *v421; // [rsp+690h] [rbp+588h]
  int v422; // [rsp+698h] [rbp+590h]
  int *v423; // [rsp+6A0h] [rbp+598h]
  int v424; // [rsp+6A8h] [rbp+5A0h]
  __int64 v425; // [rsp+6B0h] [rbp+5A8h]
  int v426; // [rsp+6B8h] [rbp+5B0h]
  const wchar_t *v427; // [rsp+6C0h] [rbp+5B8h]
  char *v428; // [rsp+6C8h] [rbp+5C0h]
  int v429; // [rsp+6D0h] [rbp+5C8h]
  int *v430; // [rsp+6D8h] [rbp+5D0h]
  int v431; // [rsp+6E0h] [rbp+5D8h]
  __int64 v432; // [rsp+6E8h] [rbp+5E0h]
  int v433; // [rsp+6F0h] [rbp+5E8h]
  const wchar_t *v434; // [rsp+6F8h] [rbp+5F0h]
  unsigned int *v435; // [rsp+700h] [rbp+5F8h]
  int v436; // [rsp+708h] [rbp+600h]
  int *v437; // [rsp+710h] [rbp+608h]
  int v438; // [rsp+718h] [rbp+610h]
  __int64 v439; // [rsp+720h] [rbp+618h]
  int v440; // [rsp+728h] [rbp+620h]
  const wchar_t *v441; // [rsp+730h] [rbp+628h]
  int *v442; // [rsp+738h] [rbp+630h]
  int v443; // [rsp+740h] [rbp+638h]
  int *v444; // [rsp+748h] [rbp+640h]
  int v445; // [rsp+750h] [rbp+648h]
  __int64 v446; // [rsp+758h] [rbp+650h]
  int v447; // [rsp+760h] [rbp+658h]
  const wchar_t *v448; // [rsp+768h] [rbp+660h]
  int *v449; // [rsp+770h] [rbp+668h]
  int v450; // [rsp+778h] [rbp+670h]
  int *v451; // [rsp+780h] [rbp+678h]
  int v452; // [rsp+788h] [rbp+680h]
  __int64 v453; // [rsp+790h] [rbp+688h]
  int v454; // [rsp+798h] [rbp+690h]
  const wchar_t *v455; // [rsp+7A0h] [rbp+698h]
  int *v456; // [rsp+7A8h] [rbp+6A0h]
  int v457; // [rsp+7B0h] [rbp+6A8h]
  int *v458; // [rsp+7B8h] [rbp+6B0h]
  int v459; // [rsp+7C0h] [rbp+6B8h]
  __int64 v460; // [rsp+7C8h] [rbp+6C0h]
  int v461; // [rsp+7D0h] [rbp+6C8h]
  const wchar_t *v462; // [rsp+7D8h] [rbp+6D0h]
  unsigned int *v463; // [rsp+7E0h] [rbp+6D8h]
  int v464; // [rsp+7E8h] [rbp+6E0h]
  int *v465; // [rsp+7F0h] [rbp+6E8h]
  int v466; // [rsp+7F8h] [rbp+6F0h]
  __int64 v467; // [rsp+800h] [rbp+6F8h]
  int v468; // [rsp+808h] [rbp+700h]
  const wchar_t *v469; // [rsp+810h] [rbp+708h]
  unsigned int *v470; // [rsp+818h] [rbp+710h]
  int v471; // [rsp+820h] [rbp+718h]
  int *v472; // [rsp+828h] [rbp+720h]
  int v473; // [rsp+830h] [rbp+728h]
  __int64 v474; // [rsp+838h] [rbp+730h]
  int v475; // [rsp+840h] [rbp+738h]
  const wchar_t *v476; // [rsp+848h] [rbp+740h]
  unsigned int *v477; // [rsp+850h] [rbp+748h]
  int v478; // [rsp+858h] [rbp+750h]
  int *v479; // [rsp+860h] [rbp+758h]
  int v480; // [rsp+868h] [rbp+760h]
  __int64 v481; // [rsp+870h] [rbp+768h]
  int v482; // [rsp+878h] [rbp+770h]
  const wchar_t *v483; // [rsp+880h] [rbp+778h]
  unsigned int *v484; // [rsp+888h] [rbp+780h]
  int v485; // [rsp+890h] [rbp+788h]
  int *v486; // [rsp+898h] [rbp+790h]
  int v487; // [rsp+8A0h] [rbp+798h]
  __int64 v488; // [rsp+8A8h] [rbp+7A0h]
  int v489; // [rsp+8B0h] [rbp+7A8h]
  const wchar_t *v490; // [rsp+8B8h] [rbp+7B0h]
  unsigned int *v491; // [rsp+8C0h] [rbp+7B8h]
  int v492; // [rsp+8C8h] [rbp+7C0h]
  int *v493; // [rsp+8D0h] [rbp+7C8h]
  int v494; // [rsp+8D8h] [rbp+7D0h]
  __int64 v495; // [rsp+8E0h] [rbp+7D8h]
  int v496; // [rsp+8E8h] [rbp+7E0h]
  const wchar_t *v497; // [rsp+8F0h] [rbp+7E8h]
  unsigned int *v498; // [rsp+8F8h] [rbp+7F0h]
  int v499; // [rsp+900h] [rbp+7F8h]
  int *v500; // [rsp+908h] [rbp+800h]
  int v501; // [rsp+910h] [rbp+808h]
  __int64 v502; // [rsp+918h] [rbp+810h]
  int v503; // [rsp+920h] [rbp+818h]
  const wchar_t *v504; // [rsp+928h] [rbp+820h]
  unsigned int *v505; // [rsp+930h] [rbp+828h]
  int v506; // [rsp+938h] [rbp+830h]
  int *v507; // [rsp+940h] [rbp+838h]
  int v508; // [rsp+948h] [rbp+840h]
  __int64 v509; // [rsp+950h] [rbp+848h]
  int v510; // [rsp+958h] [rbp+850h]
  const wchar_t *v511; // [rsp+960h] [rbp+858h]
  unsigned int *v512; // [rsp+968h] [rbp+860h]
  int v513; // [rsp+970h] [rbp+868h]
  int *v514; // [rsp+978h] [rbp+870h]
  int v515; // [rsp+980h] [rbp+878h]
  __int64 v516; // [rsp+988h] [rbp+880h]
  int v517; // [rsp+990h] [rbp+888h]
  const wchar_t *v518; // [rsp+998h] [rbp+890h]
  unsigned int *v519; // [rsp+9A0h] [rbp+898h]
  int v520; // [rsp+9A8h] [rbp+8A0h]
  int *v521; // [rsp+9B0h] [rbp+8A8h]
  int v522; // [rsp+9B8h] [rbp+8B0h]
  __int64 v523; // [rsp+9C0h] [rbp+8B8h]
  int v524; // [rsp+9C8h] [rbp+8C0h]
  const wchar_t *v525; // [rsp+9D0h] [rbp+8C8h]
  unsigned int *v526; // [rsp+9D8h] [rbp+8D0h]
  int v527; // [rsp+9E0h] [rbp+8D8h]
  int *v528; // [rsp+9E8h] [rbp+8E0h]
  int v529; // [rsp+9F0h] [rbp+8E8h]
  __int64 v530; // [rsp+9F8h] [rbp+8F0h]
  int v531; // [rsp+A00h] [rbp+8F8h]
  const wchar_t *v532; // [rsp+A08h] [rbp+900h]
  unsigned int *v533; // [rsp+A10h] [rbp+908h]
  int v534; // [rsp+A18h] [rbp+910h]
  int *v535; // [rsp+A20h] [rbp+918h]
  int v536; // [rsp+A28h] [rbp+920h]
  __int64 v537; // [rsp+A30h] [rbp+928h]
  int v538; // [rsp+A38h] [rbp+930h]
  const wchar_t *v539; // [rsp+A40h] [rbp+938h]
  unsigned int *v540; // [rsp+A48h] [rbp+940h]
  int v541; // [rsp+A50h] [rbp+948h]
  int *v542; // [rsp+A58h] [rbp+950h]
  int v543; // [rsp+A60h] [rbp+958h]
  __int64 v544; // [rsp+A68h] [rbp+960h]
  int v545; // [rsp+A70h] [rbp+968h]
  const wchar_t *v546; // [rsp+A78h] [rbp+970h]
  unsigned int *v547; // [rsp+A80h] [rbp+978h]
  int v548; // [rsp+A88h] [rbp+980h]
  int *v549; // [rsp+A90h] [rbp+988h]
  int v550; // [rsp+A98h] [rbp+990h]
  __int64 v551; // [rsp+AA0h] [rbp+998h]
  int v552; // [rsp+AA8h] [rbp+9A0h]
  const wchar_t *v553; // [rsp+AB0h] [rbp+9A8h]
  unsigned int *v554; // [rsp+AB8h] [rbp+9B0h]
  int v555; // [rsp+AC0h] [rbp+9B8h]
  int *v556; // [rsp+AC8h] [rbp+9C0h]
  int v557; // [rsp+AD0h] [rbp+9C8h]
  __int64 v558; // [rsp+AD8h] [rbp+9D0h]
  int v559; // [rsp+AE0h] [rbp+9D8h]
  const wchar_t *v560; // [rsp+AE8h] [rbp+9E0h]
  unsigned int *v561; // [rsp+AF0h] [rbp+9E8h]
  int v562; // [rsp+AF8h] [rbp+9F0h]
  int *v563; // [rsp+B00h] [rbp+9F8h]
  int v564; // [rsp+B08h] [rbp+A00h]
  __int64 v565; // [rsp+B10h] [rbp+A08h]
  int v566; // [rsp+B18h] [rbp+A10h]
  _BYTE v567[296]; // [rsp+B20h] [rbp+A18h] BYREF
  unsigned __int16 v568[264]; // [rsp+C48h] [rbp+B40h] BYREF

  if ( !*((_BYTE *)this + 2389) )
  {
    v4 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v4 + 24) = 4424LL;
LABEL_3:
    WdLogEvent5_WdWarning(v4);
    return 0LL;
  }
  v258 = 3;
  v277 = -1;
  v206 = -1;
  v278 = 2000;
  v242 = 35000;
  v214 = 35000;
  v6 = 0;
  v207 = 2000;
  v244 = 50000;
  v217 = 50000;
  v245 = 100000;
  v218 = 100000;
  v250 = 300000;
  v236 = 300000;
  v251 = 17000;
  v235 = 17000;
  v246 = 200;
  v211 = 200;
  v247 = 200;
  v215 = 200;
  v249 = 100;
  v248 = 100;
  v252 = 25000;
  v237 = 25000;
  v254 = 300;
  v198 = 0x3840000012CLL;
  v255 = 700;
  v203 = 700;
  v256 = 900;
  v257 = 500;
  v204 = 500;
  v263 = 140000;
  v224 = 140000;
  v264 = 200000;
  v226 = 200000;
  v265 = 250000;
  v227 = 250000;
  v266 = 250000;
  v228 = 250000;
  v243 = 2000;
  v216 = 2000;
  v253 = 2000;
  v219 = 2000;
  v267 = 10000;
  v221 = 10000;
  v240 = 80;
  v212 = 80;
  v241 = 15000;
  v213 = 15000;
  v210 = 3;
  v259 = 0;
  v208 = 0;
  v260 = 0;
  v209 = 0;
  v261 = 80;
  v220 = 80;
  v262 = 80000;
  v222 = 80000;
  v7 = *((_DWORD *)this + 613) < 2400;
  v268 = 60000;
  v223 = 60000;
  v269 = 60000;
  v225 = 60000;
  v271 = 30000;
  v230 = 30000;
  v274 = 30000;
  v233 = 30000;
  v270 = 15000;
  v229 = 15000;
  v272 = 80;
  v231 = 80;
  v273 = 15000;
  v232 = 15000;
  v275 = 80000;
  v234 = 80000;
  v238 = 1;
  v202 = 1;
  v201 = 1;
  v196 = 1;
  v200 = 0;
  v197 = 0;
  if ( v7 )
  {
    v284 = L"UseSelfRefreshVRAMInS3";
    v282 = 0LL;
    v285 = &v202;
    v283 = 288;
    v287 = &v238;
    v286 = 67108868;
    v288 = 4;
    v289 = 0LL;
    v290 = 0;
    memset(v291, 0, sizeof(v291));
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v282, 0LL, 0LL);
  }
  else
  {
    v202 = (*((_DWORD *)this + 479) & 0x1000) == 0;
  }
  v292 = 0LL;
  v294 = L"EnableRuntimePowerManagement";
  v295 = &v196;
  v297 = &v201;
  v301 = L"DisableDevicePowerRequired";
  v302 = &v197;
  v304 = (int *)&v200;
  v308 = L"DefaultLatencyToleranceOther";
  v309 = &v206;
  v311 = &v277;
  v315 = L"DefaultExpectedResidency";
  v316 = &v207;
  v318 = &v278;
  v322 = L"DefaultLatencyToleranceIdle0";
  v323 = &v212;
  v325 = &v240;
  v329 = L"DefaultLatencyToleranceIdle1";
  v330 = &v213;
  v332 = &v241;
  v336 = L"DefaultLatencyToleranceNoContext";
  v337 = &v214;
  v339 = &v242;
  v343 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v344 = &v216;
  v346 = &v243;
  v293 = 288;
  v296 = 67108868;
  v298 = 4;
  v299 = 0LL;
  v300 = 288;
  v303 = 67108868;
  v305 = 4;
  v306 = 0LL;
  v307 = 288;
  v310 = 67108868;
  v312 = 4;
  v313 = 0LL;
  v314 = 288;
  v317 = 67108868;
  v319 = 4;
  v320 = 0LL;
  v321 = 288;
  v324 = 67108868;
  v326 = 4;
  v327 = 0LL;
  v328 = 288;
  v331 = 67108868;
  v333 = 4;
  v334 = 0LL;
  v335 = 288;
  v338 = 67108868;
  v340 = 4;
  v341 = 0LL;
  v342 = 288;
  v345 = 67108868;
  v347 = 4;
  v348 = 0LL;
  v349 = 288;
  v350 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v351 = &v217;
  v353 = &v244;
  v357 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v358 = &v218;
  v360 = &v245;
  v364 = L"DefaultLatencyToleranceTimerPeriod";
  v365 = &v211;
  v367 = &v246;
  v371 = L"DefaultIdleThresholdIdle0";
  v372 = &v215;
  v374 = &v247;
  v378 = L"DefaultIdleThresholdIdle0MonitorOff";
  v379 = &v248;
  v381 = &v249;
  v385 = L"MonitorLatencyTolerance";
  v386 = &v236;
  v388 = &v250;
  v392 = L"MonitorRefreshLatencyTolerance";
  v393 = &v235;
  v395 = &v251;
  v399 = L"DefaultPowerNotRequiredTimeout";
  v400 = &v237;
  v402 = &v252;
  v352 = 67108868;
  v354 = 4;
  v355 = 0LL;
  v356 = 288;
  v359 = 67108868;
  v361 = 4;
  v362 = 0LL;
  v363 = 288;
  v366 = 67108868;
  v368 = 4;
  v369 = 0LL;
  v370 = 288;
  v373 = 67108868;
  v375 = 4;
  v376 = 0LL;
  v377 = 288;
  v380 = 67108868;
  v382 = 4;
  v383 = 0LL;
  v384 = 288;
  v387 = 67108868;
  v389 = 4;
  v390 = 0LL;
  v391 = 288;
  v394 = 67108868;
  v396 = 4;
  v397 = 0LL;
  v398 = 288;
  v401 = 67108868;
  v403 = 4;
  v404 = 0LL;
  v405 = 288;
  v408 = 67108868;
  v406 = L"DefaultActiveIdleThreshold";
  v407 = &v219;
  v409 = &v253;
  v413 = L"ulow";
  v414 = &v198;
  v416 = &v254;
  v420 = L"uhigh";
  v421 = &v203;
  v423 = &v255;
  v427 = L"uglitch";
  v428 = (char *)&v198 + 4;
  v430 = &v256;
  v434 = L"uideal";
  v435 = &v204;
  v437 = &v257;
  v441 = L"lowdebounce";
  v442 = &v210;
  v444 = &v258;
  v448 = L"EnablePODebounce";
  v449 = &v208;
  v451 = &v259;
  v455 = L"DisablePStateManagement";
  v456 = &v209;
  v458 = &v260;
  v410 = 4;
  v411 = 0LL;
  v412 = 288;
  v415 = 67108868;
  v417 = 4;
  v418 = 0LL;
  v419 = 288;
  v422 = 67108868;
  v424 = 4;
  v425 = 0LL;
  v426 = 288;
  v429 = 67108868;
  v431 = 4;
  v432 = 0LL;
  v433 = 288;
  v436 = 67108868;
  v438 = 4;
  v439 = 0LL;
  v440 = 288;
  v443 = 67108868;
  v445 = 4;
  v446 = 0LL;
  v447 = 288;
  v450 = 67108868;
  v452 = 4;
  v453 = 0LL;
  v454 = 288;
  v457 = 67108868;
  v459 = 4;
  v460 = 0LL;
  v461 = 288;
  v462 = L"DefaultD3TransitionLatencyActivelyUsed";
  v463 = &v220;
  v465 = &v261;
  v469 = L"DefaultD3TransitionLatencyIdleShortTime";
  v470 = &v222;
  v472 = &v262;
  v476 = L"DefaultD3TransitionLatencyIdleLongTime";
  v477 = &v224;
  v479 = &v263;
  v483 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v484 = &v226;
  v486 = &v264;
  v490 = L"DefaultD3TransitionLatencyIdleNoContext";
  v491 = &v227;
  v493 = &v265;
  v497 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v498 = &v228;
  v500 = &v266;
  v504 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v505 = &v221;
  v507 = &v267;
  v511 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v512 = &v223;
  v514 = &v268;
  v518 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v464 = 67108868;
  v466 = 4;
  v467 = 0LL;
  v468 = 288;
  v471 = 67108868;
  v473 = 4;
  v474 = 0LL;
  v475 = 288;
  v478 = 67108868;
  v480 = 4;
  v481 = 0LL;
  v482 = 288;
  v485 = 67108868;
  v487 = 4;
  v488 = 0LL;
  v489 = 288;
  v492 = 67108868;
  v494 = 4;
  v495 = 0LL;
  v496 = 288;
  v499 = 67108868;
  v501 = 4;
  v502 = 0LL;
  v503 = 288;
  v506 = 67108868;
  v508 = 4;
  v509 = 0LL;
  v510 = 288;
  v513 = 67108868;
  v515 = 4;
  v516 = 0LL;
  v517 = 288;
  v520 = 67108868;
  v519 = &v225;
  v522 = 4;
  v521 = &v269;
  v523 = 0LL;
  v525 = L"DefaultLatencyToleranceMemory";
  v526 = &v229;
  v528 = &v270;
  v524 = 288;
  v532 = L"DefaultLatencyToleranceMemoryNoContext";
  v533 = &v230;
  v535 = &v271;
  v539 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v540 = &v231;
  v542 = &v272;
  v546 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v547 = &v232;
  v549 = &v273;
  v553 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v554 = &v233;
  v556 = &v274;
  v560 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v561 = &v234;
  v563 = &v275;
  v527 = 67108868;
  v529 = 4;
  v530 = 0LL;
  v531 = 288;
  v534 = 67108868;
  v536 = 4;
  v537 = 0LL;
  v538 = 288;
  v541 = 67108868;
  v543 = 4;
  v544 = 0LL;
  v545 = 288;
  v548 = 67108868;
  v550 = 4;
  v551 = 0LL;
  v552 = 288;
  v555 = 67108868;
  v557 = 4;
  v558 = 0LL;
  v559 = 288;
  v562 = 67108868;
  v564 = 4;
  v565 = 0LL;
  v566 = 0;
  memset(v567, 0, 0x28uLL);
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v292, 0LL, 0LL);
  if ( *((int *)this + 613) < 2400
    && (int)DpiGetPnpRegistryKeyName(*((_QWORD *)this + 24), 2LL, (__int64 *)&j) >= 0
    && (int)RtlStringCbCopyW(v568, 0x208uLL, *((size_t **)j + 1)) >= 0
    && RtlStringCbCatW(v568, 520LL, (size_t *)L"\\DxgkSettings") >= 0 )
  {
    v282 = 0LL;
    v284 = L"UseSelfRefreshVRAMInS3";
    v283 = 288;
    v286 = 67108868;
    v285 = &v202;
    v287 = &v238;
    v288 = 4;
    v289 = 0LL;
    v290 = 0;
    memset(v291, 0, sizeof(v291));
    RtlQueryRegistryValuesEx(0LL, v568, &v282, 0LL, 0LL);
  }
  if ( !v196 )
    return 0LL;
  v8 = *((_QWORD *)this + 24);
  v9 = !v202;
  *((_BYTE *)this + 180) = v197 != 0;
  *((_BYTE *)this + 183) = !v9;
  DriverVersion = DpiGetDriverVersion(v8);
  if ( DriverVersion < 0x5019 )
    NumDifferentPhysicalAdapters = 1;
  else
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
  v201 = NumDifferentPhysicalAdapters;
  LODWORD(v199) = 0;
  if ( !NumDifferentPhysicalAdapters )
    goto LABEL_205;
  for ( i = 0; i < NumDifferentPhysicalAdapters; LODWORD(v199) = i )
  {
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    ObjectAttributes.Length = 6;
    LODWORD(ObjectAttributes.SecurityDescriptor) = 4;
    *(_QWORD *)&ObjectAttributes.Attributes = &v567[4 * i + 40];
    if ( DXGADAPTER::IsDxgmms2(this) && DriverVersion >= 0x5019 )
    {
      LODWORD(ObjectAttributes.ObjectName) = 4;
      ObjectAttributes.RootDirectory = &v199;
    }
    AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(this, (struct _DXGKARG_QUERYADAPTERINFO *)&ObjectAttributes, v16);
    v18 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      v194 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v194 + 24) = this;
      *(_QWORD *)(v194 + 32) = v18;
      WdLogEvent5_WdError(v194);
      return (unsigned int)v18;
    }
    v6 += *(_DWORD *)&v567[4 * (unsigned int)v199 + 40];
    i = v199 + 1;
  }
  if ( !v6 )
  {
LABEL_205:
    v4 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v4 + 24) = 4630LL;
    goto LABEL_3;
  }
  if ( v6 > 0xFFFF )
  {
    v19 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v19 + 24) = v6;
    WdLogEvent5_WdError(v19);
    LODWORD(v20) = -1073741811;
    goto LABEL_199;
  }
  *((_DWORD *)this + 684) = v6;
  v21 = 520LL * v6;
  if ( !is_mul_ok(v6, 0x208uLL) )
    v21 = -1LL;
  v22 = operator new[](v21, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 324) = v22;
  if ( !v22
    || (memset(v22, 0, 520LL * v6), v27 = operator new[](312 * v6 + 160, 0x4B677844u, PagedPool), (v28 = v27) == 0LL) )
  {
    v49 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
    *(_QWORD *)(v49 + 24) = this;
    WdLogEvent5_WdLowResource(v49);
    LODWORD(v20) = -1073741801;
    goto LABEL_199;
  }
  memset(v27, 0, 312 * v6 + 160);
  v195 = v28;
  *v28 = 3;
  Feature_ModernStandbyDFx__private_IsEnabledPreCheck();
  *((_QWORD *)v28 + 1) = 2LL;
  *((_QWORD *)v28 + 8) = DxgkPowerRuntimeDeviceDirectedPowerUpCallback;
  v28[24] = v6;
  *((_QWORD *)v28 + 9) = DxgkPowerRuntimeDeviceDirectedPowerDownCallback;
  *((_QWORD *)v28 + 11) = this;
  *((_QWORD *)v28 + 4) = DxgkPowerRuntimeComponentIdleStateCallback;
  *((_QWORD *)v28 + 2) = DxgkPowerRuntimeComponentActiveCallback;
  *((_QWORD *)v28 + 3) = DxgkPowerRuntimeComponentIdleCallback;
  *((_QWORD *)v28 + 5) = DxgkPowerRuntimeDevicePowerRequiredCallback;
  *((_QWORD *)v28 + 6) = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  *((_QWORD *)v28 + 7) = DxgkPowerRuntimeControlCallback;
  memset(&v281, 0, sizeof(v281));
  v29 = v201;
  v30 = 0;
  v281.Type = DXGKQAITYPE_POWERCOMPONENTINFO;
  v31 = (__int64)&v28[14 * v6 + 26];
  v281.InputDataSize = 4;
  v281.OutputDataSize = 336;
  v32 = 0;
  v200 = 0;
  j = (void *)(v31 + 192LL * v6);
  v33 = 0LL;
  v34 = 0LL;
  v197 = 0;
  v196 = 0;
  do
  {
    v35 = (unsigned int)v33;
    *((_WORD *)this + v33 + 1304) = v32;
    v36 = 0;
    v280 = v35;
    v205 = 0;
    if ( !*(_DWORD *)&v567[4 * v35 + 40] )
      goto LABEL_83;
    do
    {
      v37 = 14LL * v32;
      v276 = v34 + v36;
      v281.pInputData = &v276;
      v38 = *((_QWORD *)this + 324) + 8LL;
      v199 = 520LL * v32;
      v281.pOutputData = (void *)(v38 + v199);
      v39 = DXGADAPTER::DdiQueryAdapterInfo(this, &v281, (const GUID *)v34);
      v20 = v39;
      if ( v39 < 0 )
      {
        v73 = WdLogNewEntry5_WdError(v41, v40, v42);
        *(_QWORD *)(v73 + 24) = v32;
        *(_QWORD *)(v73 + 32) = v20;
LABEL_112:
        WdLogEvent5_WdError(v73);
        goto LABEL_198;
      }
      v43 = v199;
      v44 = v205;
      *(_DWORD *)(v199 + *((_QWORD *)this + 324)) = v32;
      *(_WORD *)(v43 + *((_QWORD *)this + 324) + 4) = v44;
      v45 = v197;
      *(_WORD *)(v43 + *((_QWORD *)this + 324) + 6) = v197;
      v46 = v43 + *((_QWORD *)this + 324);
      v28[v37 + 33] = *(_DWORD *)(v46 + 8);
      if ( (unsigned int)(*(_DWORD *)(v46 + 8) - 1) > 7 )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdError(v43, v45, v42);
        v71[3] = v32;
        v72 = *(unsigned int *)(v46 + 8);
        v71[5] = 0LL;
        goto LABEL_107;
      }
      *(_OWORD *)&v28[v37 + 26] = *(_OWORD *)(v46 + 220);
      *(_BYTE *)(v46 + 275) = 0;
      v47 = *(_DWORD *)(v46 + 216);
      if ( v47 >= 0x20 )
      {
        v48 = WdLogNewEntry5_WdError(v43, v45, v42);
        *(_QWORD *)(v48 + 32) = 2LL;
        goto LABEL_104;
      }
      if ( (v47 & 4) != 0 )
        *(_QWORD *)&v28[v37 + 30] |= 1uLL;
      if ( !v208 )
        *(_QWORD *)&v28[v37 + 30] |= 2uLL;
      if ( (*(_DWORD *)(v46 + 216) & 0x10) != 0 )
      {
        if ( ((*(_DWORD *)(v46 + 208) - 3) & 0xFFFFFFFB) != 0 )
        {
          v48 = WdLogNewEntry5_WdError(v43, v45, v42);
          *(_QWORD *)(v48 + 32) = 4785LL;
          goto LABEL_104;
        }
        if ( *(_DWORD *)(v46 + 8) != 2 )
        {
          v48 = WdLogNewEntry5_WdError(v43, v45, v42);
          *(_QWORD *)(v48 + 32) = 4791LL;
          goto LABEL_104;
        }
        if ( *(_QWORD *)(v46 + 40) )
        {
          v48 = WdLogNewEntry5_WdError(v43, v45, v42);
          *(_QWORD *)(v48 + 32) = 4797LL;
          goto LABEL_104;
        }
        if ( *(_DWORD *)(v46 + 276) )
        {
          v48 = WdLogNewEntry5_WdError(v43, v45, v42);
          *(_QWORD *)(v48 + 32) = 4803LL;
LABEL_104:
          *(_QWORD *)(v48 + 24) = v32;
          WdLogEvent5_WdError(v48);
          LODWORD(v20) = -1073741811;
          goto LABEL_198;
        }
      }
      if ( *(_DWORD *)(v46 + 276) > 0x10u )
      {
LABEL_101:
        v48 = WdLogNewEntry5_WdError(v43, v45, v42);
        *(_QWORD *)(v48 + 32) = 3LL;
        goto LABEL_104;
      }
      v50 = *(_DWORD *)(v46 + 208);
      if ( v50 == 4 )
      {
        if ( *((_DWORD *)this + 686) != -1 )
        {
          v48 = WdLogNewEntry5_WdError(v43, v45, v42);
          *(_QWORD *)(v48 + 32) = 4851LL;
          goto LABEL_104;
        }
        *((_DWORD *)this + 686) = v32;
      }
      else if ( v50 == 6 )
      {
        if ( *((_DWORD *)this + 685) == -1 )
        {
          v52 = *((_QWORD *)this + 324) + v43;
          *((_QWORD *)this + 369) = v52;
          *((_DWORD *)this + 685) = v32;
          if ( *(_DWORD *)(v46 + 8) == 2 )
          {
            *((_BYTE *)this + 3032) = 1;
          }
          else if ( *(_DWORD *)(v46 + 8) > 2u )
          {
            v48 = WdLogNewEntry5_WdError(v52, v45, v42);
            *(_QWORD *)(v48 + 32) = 4841LL;
            goto LABEL_104;
          }
        }
        else
        {
          v51 = WdLogNewEntry5_WdWarning(v43, v45, v42);
          *(_QWORD *)(v51 + 24) = v32;
          *(_QWORD *)(v51 + 32) = 4825LL;
          WdLogEvent5_WdWarning(v51);
        }
      }
      v53 = j;
      v28[v37 + 36] = *(_DWORD *)(v46 + 276);
      memmove(v53, (const void *)(v46 + 280), 4LL * *(unsigned int *)(v46 + 276));
      v54 = (char *)j;
      v55 = 0LL;
      *(_QWORD *)&v28[v37 + 38] = j;
      v56 = *(unsigned int *)(v46 + 276);
      *(_QWORD *)&v28[v37 + 34] = v31;
      for ( j = &v54[4 * v56]; (unsigned int)v55 < *(_DWORD *)(v46 + 8); v55 = (unsigned int)(v55 + 1) )
      {
        v42 = 3 * v55;
        v57 = *(_QWORD *)(v46 + 24 * v55 + 16);
        *(_QWORD *)v31 = v57;
        v43 = *(_QWORD *)(v46 + 24 * v55 + 24);
        *(_QWORD *)(v31 + 8) = v43;
        v45 = *(unsigned int *)(v46 + 24 * v55 + 32);
        *(_DWORD *)(v31 + 16) = v45;
        if ( *(_QWORD *)(v46 + 24 * v55 + 16) == -1LL )
          v57 = -1LL;
        *(_QWORD *)v31 = v57;
        if ( *(_QWORD *)(v46 + 24 * v55 + 24) == -1LL )
          v43 = -1LL;
        *(_QWORD *)(v31 + 8) = v43;
        if ( *(_DWORD *)(v46 + 24 * v55 + 32) == -1 )
          v45 = 0xFFFFFFFFLL;
        *(_DWORD *)(v31 + 16) = v45;
        if ( (_DWORD)v55 )
        {
          v58 = *(unsigned int *)(v46 + 24 * v55 + 32);
          if ( (_DWORD)v58 != -1 )
          {
            v59 = *(unsigned int *)(v46 + 24 * ((unsigned int)(v55 - 1) + 1LL) + 8);
            if ( (_DWORD)v59 != -1 && (unsigned int)v58 > (unsigned int)v59 )
            {
              v48 = WdLogNewEntry5_WdError(v59, v58, v42);
              *(_QWORD *)(v48 + 32) = 5LL;
              goto LABEL_104;
            }
          }
          v60 = *(_QWORD *)(v46 + 24 * v55 + 16);
          if ( v60 != -1LL )
          {
            v61 = *(_QWORD *)(v46 + 24LL * (unsigned int)(v55 - 1) + 16);
            if ( v61 != -1LL && v60 < v61 )
            {
              v48 = WdLogNewEntry5_WdError(v61, v60, v42);
              *(_QWORD *)(v48 + 32) = 6LL;
              goto LABEL_104;
            }
          }
        }
        else
        {
          if ( ((*(_QWORD *)(v46 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*(_QWORD *)(v46 + 24) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            goto LABEL_101;
          }
          if ( !*(_DWORD *)(v46 + 24 * v55 + 32) )
          {
            v48 = WdLogNewEntry5_WdError(v43, v45, v42);
            *(_QWORD *)(v48 + 32) = 4LL;
            goto LABEL_104;
          }
        }
        v31 += 24LL;
      }
      v34 = v196;
      v62 = v200 + 1;
      if ( *(_DWORD *)(v46 + 208) )
        v62 = v200;
      v36 = v205 + 1;
      v30 = v62;
      v200 = v62;
      ++v32;
      v205 = v36;
    }
    while ( v36 < *(_DWORD *)&v567[4 * v280 + 40] );
    v29 = v201;
    v200 = v30;
LABEL_83:
    v34 = (unsigned int)(v34 + 0x10000);
    v33 = v197 + 1;
    v196 = v34;
    v197 = v33;
  }
  while ( (unsigned int)v33 < (unsigned int)v29 );
  v63 = 0;
  if ( *((int *)this + 613) < 1300 || !v30 || v209 )
    goto LABEL_139;
  if ( (unsigned int)v198 > 0x3E8
    || (v29 = v203, v203 > 0x3E8)
    || HIDWORD(v198) > 0x3E8
    || v204 > 0x3E8
    || (unsigned int)v198 >= v204
    || v204 >= v203
    || v203 >= HIDWORD(v198) )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v29, 1000LL, v34);
    v71[3] = (unsigned int)v198;
    v71[4] = v203;
    v71[5] = HIDWORD(v198);
    v71[6] = v204;
    goto LABEL_109;
  }
  v64 = 248LL * v30;
  v281.Type = DXGKQAITYPE_POWERCOMPONENTPSTATEINFO;
  v281.OutputDataSize = 136;
  if ( !is_mul_ok(v30, 0xF8uLL) )
    v64 = -1LL;
  v65 = operator new[](v64, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 488) = v65;
  *((_DWORD *)this + 978) = v30;
  if ( !v65 )
  {
    v70 = WdLogNewEntry5_WdLowResource(v67, v66, v68, v69);
    *(_QWORD *)(v70 + 24) = this;
    WdLogEvent5_WdLowResource(v70);
    LODWORD(v20) = -1073741801;
    goto LABEL_198;
  }
  memset(v65, 0, 248LL * v30);
  v74 = 0;
  for ( k = 0LL; v74 < *((_DWORD *)this + 684); ++v74 )
  {
    v76 = *((_QWORD *)this + 324);
    v77 = 520LL * v74;
    if ( !*(_DWORD *)(v77 + v76 + 208) )
    {
      *(_QWORD *)(v77 + v76 + 512) = *((_QWORD *)this + 488) + 248LL * (unsigned int)k;
      k = (const GUID *)(unsigned int)((_DWORD)k + 1);
    }
  }
  v78 = 0;
  *((_DWORD *)this + 1030) = HIDWORD(v198);
  *((_DWORD *)this + 1031) = v203;
  *((_DWORD *)this + 1032) = v198;
  *((_DWORD *)this + 1033) = v204;
  *((_DWORD *)this + 1034) = v210;
  LODWORD(v199) = 0;
  v79 = 0LL;
  while ( 2 )
  {
    v80 = *(_QWORD *)(520 * v79 + *((_QWORD *)this + 324) + 512);
    if ( !v80 )
    {
LABEL_121:
      LODWORD(v199) = ++v78;
      v79 = v78;
      if ( v78 >= v6 )
        goto LABEL_128;
      continue;
    }
    break;
  }
  v281.pOutputData = *(void **)(520 * v79 + *((_QWORD *)this + 324) + 512);
  v281.pInputData = &v199;
  v81 = DXGADAPTER::DdiQueryAdapterInfo(this, &v281, k);
  v84 = v81;
  if ( v81 >= 0 )
  {
    v85 = v199;
    *(_QWORD *)(v80 + 136) = this;
    *(_DWORD *)(v80 + 144) = v85;
    *(_QWORD *)(v80 + 152) = v80;
    KeInitializeSpinLock((PKSPIN_LOCK)(v80 + 160));
    *(_BYTE *)(v80 + 240) = 0;
    *(_DWORD *)(v80 + 244) = -1;
    v78 = v199;
    goto LABEL_121;
  }
  v86 = WdLogNewEntry5_WdTrace(v83, v82);
  *(_QWORD *)(v86 + 24) = (unsigned int)v199;
  v87 = 0;
  for ( *(_QWORD *)(v86 + 32) = v84; v87 < *((_DWORD *)this + 684); ++v87 )
  {
    v88 = 520LL * v87;
    v89 = *((_QWORD *)this + 324);
    if ( !*(_DWORD *)(v88 + v89 + 208) )
      *(_QWORD *)(v88 + v89 + 512) = 0LL;
  }
  v90 = (void *)*((_QWORD *)this + 488);
  *((_DWORD *)this + 978) = 0;
  operator delete[](v90);
  *((_QWORD *)this + 488) = 0LL;
LABEL_128:
  v91 = *((_DWORD *)this + 978);
  v92 = 0LL;
  if ( v91 )
  {
    v93 = *((_QWORD *)this + 488);
    while ( 1 )
    {
      v94 = (unsigned int)v92;
      v95 = 248LL * (unsigned int)v92;
      v96 = *(_DWORD *)(v95 + v93);
      v97 = *(unsigned int *)(v95 + v93 + 144);
      if ( v96 > 0x20 )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)v92, v92, v93);
        v71[3] = v97;
        goto LABEL_109;
      }
      v98 = 0;
      if ( v96 )
        break;
LABEL_138:
      v92 = (unsigned int)(v92 + 1);
      if ( (unsigned int)v92 >= v91 )
        goto LABEL_139;
    }
    v99 = 62LL * (unsigned int)v92;
    while ( 1 )
    {
      v100 = *(_DWORD *)(v93 + 4 * (v99 + v98) + 4);
      if ( !v100 )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdError(v94, v92, v93);
        v72 = v98;
        v71[3] = v97;
        goto LABEL_107;
      }
      if ( v98 )
      {
        v94 = v99 + v98 - 1;
        if ( v100 > *(_DWORD *)(v93 + 4 * v94 + 4) )
          break;
      }
      if ( ++v98 >= v96 )
        goto LABEL_138;
    }
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v94, v92, v93);
    v72 = v98;
    v71[3] = v97;
    v71[5] = v98 - 1;
LABEL_107:
    v71[4] = v72;
LABEL_109:
    WdLogEvent5_WdError(v71);
    LODWORD(v20) = -1073741811;
    goto LABEL_198;
  }
LABEL_139:
  v101 = (ADAPTER_RENDER *)*((_QWORD *)this + 320);
  *((_DWORD *)this + 756) = v211;
  if ( v101 )
  {
    v102 = ADAPTER_RENDER::InitializePowerManagement(v101);
    v20 = v102;
    if ( v102 < 0 )
    {
      v106 = WdLogNewEntry5_WdError(v104, v103, v105);
      *(_QWORD *)(v106 + 32) = 7LL;
      goto LABEL_197;
    }
  }
  v107 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 319);
  if ( v107 )
  {
    v108 = ADAPTER_DISPLAY::InitializePowerManagement(v107);
    v20 = v108;
    if ( v108 < 0 )
    {
      v106 = WdLogNewEntry5_WdError(v110, v109, v111);
      *(_QWORD *)(v106 + 32) = 8LL;
      goto LABEL_197;
    }
  }
  v112 = (_QWORD *)((char *)this + 2600);
  v113 = PoFxRegisterDevice(*((_QWORD *)this + 24), v28, (char *)this + 2600);
  v20 = v113;
  if ( v113 < 0 )
  {
    v106 = WdLogNewEntry5_WdError(v115, v114, v116);
    goto LABEL_197;
  }
  KeInitializeEvent((PRKEVENT)this + 115, SynchronizationEvent, 0);
  *((_QWORD *)this + 381) = (char *)this + 3040;
  *((_QWORD *)this + 380) = (char *)this + 3040;
  *((_BYTE *)this + 3028) = 0;
  TimeIncrement = KeQueryTimeIncrement();
  v118 = v212;
  v119 = TimeIncrement;
  *((_QWORD *)this + 351) = 0LL;
  *((_QWORD *)this + 353) = 0LL;
  *((_QWORD *)this + 357) = 0LL;
  *((_QWORD *)this + 359) = 0LL;
  *((_QWORD *)this + 348) = 10 * v118;
  v120 = v214;
  *((_QWORD *)this + 350) = 10LL * v213;
  v121 = 10000LL * v215;
  *((_QWORD *)this + 352) = 10 * v120;
  v122 = (unsigned int)(v121 / v119);
  v123 = v216;
  *((_QWORD *)this + 349) = v122;
  *((_QWORD *)this + 355) = v122;
  v124 = 5 * v123;
  v125 = v217;
  *((_QWORD *)this + 354) = 2 * v124;
  v126 = 5 * v125;
  v127 = v218;
  *((_QWORD *)this + 356) = 2 * v126;
  v128 = 5 * v127;
  v129 = v219;
  *((_QWORD *)this + 358) = 2 * v128;
  *((_QWORD *)this + 360) = (char *)this + 2784;
  v130 = 5 * v129;
  v131 = v220;
  *((_QWORD *)this + 392) = 2 * v130;
  v132 = 10000LL * v221;
  *((_QWORD *)this + 361) = 10 * v131;
  v133 = v222;
  *((_QWORD *)this + 362) = (unsigned int)(v132 / v119);
  v134 = 10000LL * v223;
  *((_QWORD *)this + 363) = 10 * v133;
  v135 = v224;
  *((_QWORD *)this + 364) = (unsigned int)(v134 / v119);
  v136 = 5 * v135;
  v137 = 10000LL * v225;
  *((_QWORD *)this + 365) = 2 * v136;
  v138 = v137;
  v139 = v226;
  *((_QWORD *)this + 366) = (unsigned int)(v138 / v119);
  *((_QWORD *)this + 368) = 0LL;
  v140 = 5 * v139;
  v141 = v227;
  *((_QWORD *)this + 367) = 2 * v140;
  v142 = 5 * v141;
  v143 = v228;
  *((_QWORD *)this + 370) = 2 * v142;
  v144 = 5 * v143;
  v145 = v229;
  *((_QWORD *)this + 371) = 2 * v144;
  v146 = 5 * v145;
  v147 = v230;
  *((_QWORD *)this + 372) = 2 * v146;
  v148 = 5 * v147;
  v149 = v231;
  *((_QWORD *)this + 373) = 2 * v148;
  v150 = 5 * v149;
  v151 = v232;
  *((_QWORD *)this + 374) = 2 * v150;
  v152 = 5 * v151;
  v153 = v233;
  *((_QWORD *)this + 375) = 2 * v152;
  v154 = 5 * v153;
  v155 = v234;
  *((_QWORD *)this + 376) = 2 * v154;
  *((_QWORD *)this + 377) = 10 * v155;
  *((_QWORD *)this + 386) = (char *)this + 3080;
  *((_QWORD *)this + 385) = (char *)this + 3080;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 391);
  v156 = 0;
  while ( 2 )
  {
    v157 = *((_QWORD *)this + 324);
    v158 = 520LL * v156;
    v159 = (DXGADAPTER *)(v158 + v157 + 424);
    *(_BYTE *)(v158 + v157 + 356) = 1;
    *(_QWORD *)v159 = 0LL;
    *((_QWORD *)v159 + 1) = 0LL;
    v160 = *(_DWORD *)(v158 + v157 + 208);
    if ( !v160 )
    {
      *(_BYTE *)(v158 + v157 + 357) = 1;
      v171 = (DXGADAPTER **)*((_QWORD *)this + 390);
      if ( *v171 != (DXGADAPTER *)((char *)this + 3112) )
LABEL_202:
        __fastfail(3u);
      *((_QWORD *)v159 + 1) = v171;
      *(_QWORD *)v159 = (char *)this + 3112;
      *v171 = v159;
      v172 = 0LL;
      *((_QWORD *)this + 390) = v159;
      v173 = *(_DWORD *)(v158 + v157 + 8);
      if ( v173 > 1 )
      {
        v174 = (unsigned __int64 *)(v158 + v157 + 40);
        v175 = v173 - 1;
        do
        {
          v176 = v172;
          v172 = *v174;
          v177 = v176 < *v174;
          v174 += 3;
          if ( !v177 )
            v172 = v176;
          --v175;
        }
        while ( v175 );
      }
      *(_DWORD *)(v158 + v157 + 388) = 1;
      v178 = (unsigned __int64 *)((char *)this + 2784);
      v179 = 0;
      while ( *v178 < v172 )
      {
        ++v179;
        v178 += 2;
        if ( v179 >= 2 )
          goto LABEL_179;
      }
      *(_DWORD *)(v158 + v157 + 388) = v179;
LABEL_179:
      v180 = *(_DWORD *)(v158 + v157 + 4);
      *(_DWORD *)(v158 + v157 + 384) = 2;
      DXGADAPTER::SetPowerComponentLatencyCB(this, v180, *(_QWORD *)(*((_QWORD *)this + 360) + 32LL));
      ++*((_DWORD *)this + 688);
      goto LABEL_180;
    }
    v161 = v160 - 1;
    if ( !v161 )
    {
      v170 = v236;
      goto LABEL_167;
    }
    v162 = v161 - 1;
    if ( !v162 )
    {
      v170 = v235;
LABEL_167:
      v166 = *(_DWORD *)(v158 + v157 + 4);
      v168 = 10 * v170;
      v167 = this;
      goto LABEL_159;
    }
    v163 = v162 - 1;
    if ( v163 )
    {
      v164 = v163 - 1;
      if ( v164 )
      {
        v165 = v164 - 2;
        if ( v165 )
        {
          if ( v165 == 1 )
          {
            v63 = 1;
            if ( (*(_DWORD *)(v158 + v157 + 216) & 0x10) != 0 )
            {
              *(_BYTE *)(v158 + v157 + 360) = 1;
              *(_BYTE *)(v158 + v157 + 356) = 0;
              *(_DWORD *)(v158 + v157 + 344) = 1;
            }
          }
          else
          {
            v166 = *(_DWORD *)(v158 + v157 + 4);
            v167 = this;
            if ( v206 == -1 )
              v168 = -1LL;
            else
              v168 = 10LL * v206;
LABEL_159:
            DXGADAPTER::SetPowerComponentLatencyCB(v167, v166, v168);
          }
        }
      }
    }
    else
    {
      v169 = (DXGADAPTER **)*((_QWORD *)this + 388);
      if ( *v169 != (DXGADAPTER *)((char *)this + 3096) )
        goto LABEL_202;
      *(_QWORD *)v159 = (char *)this + 3096;
      *((_QWORD *)v159 + 1) = v169;
      *v169 = v159;
      *((_QWORD *)this + 388) = v159;
      if ( (*(_DWORD *)(v158 + v157 + 216) & 0x10) != 0 )
        *(_BYTE *)(v158 + v157 + 360) = 1;
    }
LABEL_180:
    if ( v207 == -1 )
      v181 = -1LL;
    else
      v181 = 10000LL * v207;
    DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(v158 + v157 + 4), v181);
    KeInitializeSpinLock((PKSPIN_LOCK)(v158 + v157 + 504));
    if ( *(_DWORD *)(v158 + v157 + 8) <= 1u || (v182 = *(_QWORD *)(v158 + v157 + 48), v182 == -1) )
    {
      v183 = *((_QWORD *)this + 392);
    }
    else
    {
      v183 = *((_QWORD *)this + 392);
      if ( v182 > v183 )
        v183 = *(_QWORD *)(v158 + v157 + 48);
    }
    ++v156;
    *(_QWORD *)(v158 + v157 + 496) = v183;
    if ( v156 < v6 )
      continue;
    break;
  }
  DXGADAPTER::UpdateLatencyTolerances(this);
  PoFxSetDeviceIdleTimeout(*v112, 10LL * v237);
  if ( *((_DWORD *)this + 71) == 1297040209 && *((_DWORD *)this + 546) == 4608 )
  {
    KeInitializeEvent((PRKEVENT)((char *)this + 3280), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3304), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3328), SynchronizationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)this + 419);
    *((_QWORD *)this + 422) = (char *)this + 3368;
    *((_QWORD *)this + 421) = (char *)this + 3368;
    InitializeSListHead((PSLIST_HEADER)this + 212);
    v185 = 0LL;
    v186 = 8LL;
    do
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 212, (PSLIST_ENTRY)((char *)this + v185 + 3424));
      v185 += 32LL;
      --v186;
    }
    while ( v186 );
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v187 = PsCreateSystemThread(
             (PHANDLE)this + 426,
             0x1FFFFFu,
             &ObjectAttributes,
             0LL,
             0LL,
             DXGADAPTER::PowerRuntimeComponentIdleStateCallbackThread,
             this);
    v20 = v187;
    if ( v187 < 0 )
    {
      v73 = WdLogNewEntry5_WdError(v189, v188, v184);
      *(_QWORD *)(v73 + 24) = v20;
      *(_QWORD *)(v73 + 32) = 8LL;
      goto LABEL_112;
    }
  }
  LOBYTE(v184) = v63;
  v190 = DpiEnablePowerManagement(*((_QWORD *)this + 24), *v112, v184);
  v20 = v190;
  if ( v190 >= 0 )
  {
    operator delete[](v195);
    return 0LL;
  }
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  v106 = WdLogNewEntry5_WdError(v192, v191, v193);
  *(_QWORD *)(v106 + 32) = 9LL;
LABEL_197:
  *(_QWORD *)(v106 + 24) = v20;
  WdLogEvent5_WdError(v106);
LABEL_198:
  operator delete[](v195);
LABEL_199:
  if ( *((_QWORD *)this + 325) )
  {
    PoFxUnregisterDevice();
    *((_QWORD *)this + 325) = 0LL;
  }
  return (unsigned int)v20;
}
