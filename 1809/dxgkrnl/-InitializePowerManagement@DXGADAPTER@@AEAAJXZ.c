/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014F6C0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0016318 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C002EC00 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002EC68 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C002F824 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C002F8D0 (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C002F974 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E5B90 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C0134E60 (DpiGetPnpRegistryKeyName.c)
 *     DpiGetDriverVersion @ 0x1C014EA10 (DpiGetDriverVersion.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C01BD244 (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01C35FC (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01C6A14 (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiEnablePowerManagement @ 0x1C0262B18 (DpiEnablePowerManagement.c)
 */

__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v6; // r15d
  int v7; // eax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int DriverVersion; // r12d
  unsigned int NumDifferentPhysicalAdapters; // r14d
  unsigned int i; // ebx
  const GUID *v16; // r8
  int AdapterInfo; // eax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rbx
  SIZE_T v21; // rax
  PVOID v22; // rax
  __int64 v23; // rcx
  char *v24; // rax
  char *v25; // r14
  unsigned int v26; // ebx
  __int64 v27; // r13
  unsigned int v28; // esi
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // r12
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int16 v37; // dx
  __int64 v38; // rdx
  __int64 v39; // rbx
  unsigned int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // eax
  void *v47; // rcx
  char *v48; // rdx
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // edx
  unsigned int v53; // edx
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  unsigned int v57; // ecx
  __int64 v58; // rcx
  SIZE_T v59; // rax
  PVOID v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned int v66; // edx
  const GUID *k; // r8
  __int64 v68; // r10
  __int64 v69; // r9
  unsigned int v70; // edx
  __int64 v71; // rax
  __int64 v72; // rbx
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rsi
  int v79; // eax
  __int64 v80; // rax
  unsigned int v81; // ecx
  __int64 v82; // rdx
  __int64 v83; // rax
  void *v84; // rcx
  unsigned int v85; // r12d
  unsigned int v86; // edx
  __int64 v87; // r8
  __int64 v88; // rcx
  __int64 v89; // rax
  unsigned int v90; // r9d
  __int64 v91; // rsi
  unsigned int v92; // ebx
  __int64 v93; // r11
  unsigned int v94; // r10d
  ADAPTER_RENDER *v95; // rcx
  int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // rax
  ADAPTER_DISPLAY *v99; // rcx
  int v100; // eax
  __int64 v101; // rcx
  _QWORD *v102; // r12
  int v103; // eax
  __int64 v104; // rcx
  unsigned __int64 TimeIncrement; // rbx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rax
  unsigned __int64 v119; // rtt
  __int64 v120; // rax
  unsigned __int64 v121; // rtt
  __int64 v122; // rax
  __int64 v123; // rcx
  unsigned __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  unsigned int v142; // r14d
  __int64 v143; // rsi
  __int64 v144; // rbx
  DXGADAPTER *v145; // rdx
  int v146; // ecx
  int v147; // ecx
  int v148; // ecx
  int v149; // ecx
  int v150; // ecx
  int v151; // ecx
  int v152; // edx
  DXGADAPTER *v153; // rcx
  __int64 v154; // r8
  DXGADAPTER **v155; // rcx
  __int64 v156; // rax
  DXGADAPTER **v157; // rcx
  unsigned __int64 v158; // rcx
  unsigned int v159; // eax
  unsigned __int64 *v160; // rdx
  __int64 v161; // r8
  unsigned __int64 v162; // rax
  bool v163; // cf
  unsigned int v164; // eax
  unsigned __int64 *v165; // rdx
  int v166; // edx
  __int64 v167; // r8
  __int64 v168; // rcx
  __int64 v169; // rax
  __int64 v170; // r8
  __int64 v171; // rbx
  __int64 v172; // r14
  NTSTATUS v173; // eax
  int v174; // eax
  __int64 v175; // rcx
  __int64 v176; // rax
  void *v177; // [rsp+48h] [rbp-C0h]
  char v178; // [rsp+50h] [rbp-B8h]
  unsigned int v179; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v180; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v181; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v182; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v183; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v184; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v185; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v186; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v187; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v188; // [rsp+80h] [rbp-88h]
  unsigned int v189; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v190; // [rsp+88h] [rbp-80h] BYREF
  int v191; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v192; // [rsp+90h] [rbp-78h] BYREF
  int v193; // [rsp+94h] [rbp-74h] BYREF
  int v194; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v195; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v196; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v197; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v198; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v199; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v200; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v201; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v202; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v203; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v204; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v205; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v206; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v207; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v208; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v209; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v210; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v211; // [rsp+DCh] [rbp-2Ch] BYREF
  unsigned int v212; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v213; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v214; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v215; // [rsp+ECh] [rbp-1Ch] BYREF
  unsigned int v216; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v217; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v218; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v219; // [rsp+FCh] [rbp-Ch] BYREF
  unsigned int v220; // [rsp+100h] [rbp-8h] BYREF
  int v221; // [rsp+104h] [rbp-4h] BYREF
  void *j; // [rsp+108h] [rbp+0h] BYREF
  int v223; // [rsp+110h] [rbp+8h] BYREF
  int v224; // [rsp+114h] [rbp+Ch] BYREF
  int v225; // [rsp+118h] [rbp+10h] BYREF
  int v226; // [rsp+11Ch] [rbp+14h] BYREF
  int v227; // [rsp+120h] [rbp+18h] BYREF
  int v228; // [rsp+124h] [rbp+1Ch] BYREF
  int v229; // [rsp+128h] [rbp+20h] BYREF
  int v230; // [rsp+12Ch] [rbp+24h] BYREF
  int v231; // [rsp+130h] [rbp+28h] BYREF
  int v232; // [rsp+134h] [rbp+2Ch] BYREF
  int v233; // [rsp+138h] [rbp+30h] BYREF
  int v234; // [rsp+13Ch] [rbp+34h] BYREF
  int v235; // [rsp+140h] [rbp+38h] BYREF
  int v236; // [rsp+144h] [rbp+3Ch] BYREF
  int v237; // [rsp+148h] [rbp+40h] BYREF
  int v238; // [rsp+14Ch] [rbp+44h] BYREF
  int v239; // [rsp+150h] [rbp+48h] BYREF
  int v240; // [rsp+154h] [rbp+4Ch] BYREF
  int v241; // [rsp+158h] [rbp+50h] BYREF
  int v242; // [rsp+15Ch] [rbp+54h] BYREF
  int v243; // [rsp+160h] [rbp+58h] BYREF
  int v244; // [rsp+164h] [rbp+5Ch] BYREF
  int v245; // [rsp+168h] [rbp+60h] BYREF
  int v246; // [rsp+16Ch] [rbp+64h] BYREF
  int v247; // [rsp+170h] [rbp+68h] BYREF
  int v248; // [rsp+174h] [rbp+6Ch] BYREF
  int v249; // [rsp+178h] [rbp+70h] BYREF
  int v250; // [rsp+17Ch] [rbp+74h] BYREF
  int v251; // [rsp+180h] [rbp+78h] BYREF
  int v252; // [rsp+184h] [rbp+7Ch] BYREF
  int v253; // [rsp+188h] [rbp+80h] BYREF
  int v254; // [rsp+18Ch] [rbp+84h] BYREF
  int v255; // [rsp+190h] [rbp+88h] BYREF
  int v256; // [rsp+194h] [rbp+8Ch] BYREF
  int v257; // [rsp+198h] [rbp+90h] BYREF
  int v258; // [rsp+19Ch] [rbp+94h] BYREF
  int v259; // [rsp+1A0h] [rbp+98h] BYREF
  int v260; // [rsp+1A4h] [rbp+9Ch] BYREF
  int v261; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v263; // [rsp+1E0h] [rbp+D8h]
  struct _DXGKARG_QUERYADAPTERINFO v264; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v265; // [rsp+218h] [rbp+110h] BYREF
  int v266; // [rsp+220h] [rbp+118h]
  const wchar_t *v267; // [rsp+228h] [rbp+120h]
  char *v268; // [rsp+230h] [rbp+128h]
  int v269; // [rsp+238h] [rbp+130h]
  int *v270; // [rsp+240h] [rbp+138h]
  int v271; // [rsp+248h] [rbp+140h]
  __int64 v272; // [rsp+250h] [rbp+148h]
  int v273; // [rsp+258h] [rbp+150h]
  _BYTE v274[40]; // [rsp+260h] [rbp+158h] BYREF
  __int64 v275; // [rsp+288h] [rbp+180h] BYREF
  int v276; // [rsp+290h] [rbp+188h]
  const wchar_t *v277; // [rsp+298h] [rbp+190h]
  unsigned int *v278; // [rsp+2A0h] [rbp+198h]
  int v279; // [rsp+2A8h] [rbp+1A0h]
  unsigned int *v280; // [rsp+2B0h] [rbp+1A8h]
  int v281; // [rsp+2B8h] [rbp+1B0h]
  __int64 v282; // [rsp+2C0h] [rbp+1B8h]
  int v283; // [rsp+2C8h] [rbp+1C0h]
  const wchar_t *v284; // [rsp+2D0h] [rbp+1C8h]
  __int64 *v285; // [rsp+2D8h] [rbp+1D0h]
  int v286; // [rsp+2E0h] [rbp+1D8h]
  int *v287; // [rsp+2E8h] [rbp+1E0h]
  int v288; // [rsp+2F0h] [rbp+1E8h]
  __int64 v289; // [rsp+2F8h] [rbp+1F0h]
  int v290; // [rsp+300h] [rbp+1F8h]
  const wchar_t *v291; // [rsp+308h] [rbp+200h]
  unsigned int *v292; // [rsp+310h] [rbp+208h]
  int v293; // [rsp+318h] [rbp+210h]
  int *v294; // [rsp+320h] [rbp+218h]
  int v295; // [rsp+328h] [rbp+220h]
  __int64 v296; // [rsp+330h] [rbp+228h]
  int v297; // [rsp+338h] [rbp+230h]
  const wchar_t *v298; // [rsp+340h] [rbp+238h]
  unsigned int *v299; // [rsp+348h] [rbp+240h]
  int v300; // [rsp+350h] [rbp+248h]
  int *v301; // [rsp+358h] [rbp+250h]
  int v302; // [rsp+360h] [rbp+258h]
  __int64 v303; // [rsp+368h] [rbp+260h]
  int v304; // [rsp+370h] [rbp+268h]
  const wchar_t *v305; // [rsp+378h] [rbp+270h]
  unsigned int *v306; // [rsp+380h] [rbp+278h]
  int v307; // [rsp+388h] [rbp+280h]
  int *v308; // [rsp+390h] [rbp+288h]
  int v309; // [rsp+398h] [rbp+290h]
  __int64 v310; // [rsp+3A0h] [rbp+298h]
  int v311; // [rsp+3A8h] [rbp+2A0h]
  const wchar_t *v312; // [rsp+3B0h] [rbp+2A8h]
  unsigned int *v313; // [rsp+3B8h] [rbp+2B0h]
  int v314; // [rsp+3C0h] [rbp+2B8h]
  int *v315; // [rsp+3C8h] [rbp+2C0h]
  int v316; // [rsp+3D0h] [rbp+2C8h]
  __int64 v317; // [rsp+3D8h] [rbp+2D0h]
  int v318; // [rsp+3E0h] [rbp+2D8h]
  const wchar_t *v319; // [rsp+3E8h] [rbp+2E0h]
  unsigned int *v320; // [rsp+3F0h] [rbp+2E8h]
  int v321; // [rsp+3F8h] [rbp+2F0h]
  int *v322; // [rsp+400h] [rbp+2F8h]
  int v323; // [rsp+408h] [rbp+300h]
  __int64 v324; // [rsp+410h] [rbp+308h]
  int v325; // [rsp+418h] [rbp+310h]
  const wchar_t *v326; // [rsp+420h] [rbp+318h]
  unsigned int *v327; // [rsp+428h] [rbp+320h]
  int v328; // [rsp+430h] [rbp+328h]
  int *v329; // [rsp+438h] [rbp+330h]
  int v330; // [rsp+440h] [rbp+338h]
  __int64 v331; // [rsp+448h] [rbp+340h]
  int v332; // [rsp+450h] [rbp+348h]
  const wchar_t *v333; // [rsp+458h] [rbp+350h]
  unsigned int *v334; // [rsp+460h] [rbp+358h]
  int v335; // [rsp+468h] [rbp+360h]
  int *v336; // [rsp+470h] [rbp+368h]
  int v337; // [rsp+478h] [rbp+370h]
  __int64 v338; // [rsp+480h] [rbp+378h]
  int v339; // [rsp+488h] [rbp+380h]
  const wchar_t *v340; // [rsp+490h] [rbp+388h]
  unsigned int *v341; // [rsp+498h] [rbp+390h]
  int v342; // [rsp+4A0h] [rbp+398h]
  int *v343; // [rsp+4A8h] [rbp+3A0h]
  int v344; // [rsp+4B0h] [rbp+3A8h]
  __int64 v345; // [rsp+4B8h] [rbp+3B0h]
  int v346; // [rsp+4C0h] [rbp+3B8h]
  const wchar_t *v347; // [rsp+4C8h] [rbp+3C0h]
  int *v348; // [rsp+4D0h] [rbp+3C8h]
  int v349; // [rsp+4D8h] [rbp+3D0h]
  int *v350; // [rsp+4E0h] [rbp+3D8h]
  int v351; // [rsp+4E8h] [rbp+3E0h]
  __int64 v352; // [rsp+4F0h] [rbp+3E8h]
  int v353; // [rsp+4F8h] [rbp+3F0h]
  const wchar_t *v354; // [rsp+500h] [rbp+3F8h]
  unsigned int *v355; // [rsp+508h] [rbp+400h]
  int v356; // [rsp+510h] [rbp+408h]
  int *v357; // [rsp+518h] [rbp+410h]
  int v358; // [rsp+520h] [rbp+418h]
  __int64 v359; // [rsp+528h] [rbp+420h]
  int v360; // [rsp+530h] [rbp+428h]
  const wchar_t *v361; // [rsp+538h] [rbp+430h]
  int *v362; // [rsp+540h] [rbp+438h]
  int v363; // [rsp+548h] [rbp+440h]
  int *v364; // [rsp+550h] [rbp+448h]
  int v365; // [rsp+558h] [rbp+450h]
  __int64 v366; // [rsp+560h] [rbp+458h]
  int v367; // [rsp+568h] [rbp+460h]
  const wchar_t *v368; // [rsp+570h] [rbp+468h]
  unsigned int *v369; // [rsp+578h] [rbp+470h]
  int v370; // [rsp+580h] [rbp+478h]
  int *v371; // [rsp+588h] [rbp+480h]
  int v372; // [rsp+590h] [rbp+488h]
  __int64 v373; // [rsp+598h] [rbp+490h]
  int v374; // [rsp+5A0h] [rbp+498h]
  const wchar_t *v375; // [rsp+5A8h] [rbp+4A0h]
  unsigned int *v376; // [rsp+5B0h] [rbp+4A8h]
  int v377; // [rsp+5B8h] [rbp+4B0h]
  int *v378; // [rsp+5C0h] [rbp+4B8h]
  int v379; // [rsp+5C8h] [rbp+4C0h]
  __int64 v380; // [rsp+5D0h] [rbp+4C8h]
  int v381; // [rsp+5D8h] [rbp+4D0h]
  const wchar_t *v382; // [rsp+5E0h] [rbp+4D8h]
  unsigned int *v383; // [rsp+5E8h] [rbp+4E0h]
  int v384; // [rsp+5F0h] [rbp+4E8h]
  int *v385; // [rsp+5F8h] [rbp+4F0h]
  int v386; // [rsp+600h] [rbp+4F8h]
  __int64 v387; // [rsp+608h] [rbp+500h]
  int v388; // [rsp+610h] [rbp+508h]
  const wchar_t *v389; // [rsp+618h] [rbp+510h]
  unsigned int *v390; // [rsp+620h] [rbp+518h]
  int v391; // [rsp+628h] [rbp+520h]
  int *v392; // [rsp+630h] [rbp+528h]
  int v393; // [rsp+638h] [rbp+530h]
  __int64 v394; // [rsp+640h] [rbp+538h]
  int v395; // [rsp+648h] [rbp+540h]
  const wchar_t *v396; // [rsp+650h] [rbp+548h]
  unsigned int *v397; // [rsp+658h] [rbp+550h]
  int v398; // [rsp+660h] [rbp+558h]
  int *v399; // [rsp+668h] [rbp+560h]
  int v400; // [rsp+670h] [rbp+568h]
  __int64 v401; // [rsp+678h] [rbp+570h]
  int v402; // [rsp+680h] [rbp+578h]
  const wchar_t *v403; // [rsp+688h] [rbp+580h]
  unsigned int *v404; // [rsp+690h] [rbp+588h]
  int v405; // [rsp+698h] [rbp+590h]
  int *v406; // [rsp+6A0h] [rbp+598h]
  int v407; // [rsp+6A8h] [rbp+5A0h]
  __int64 v408; // [rsp+6B0h] [rbp+5A8h]
  int v409; // [rsp+6B8h] [rbp+5B0h]
  const wchar_t *v410; // [rsp+6C0h] [rbp+5B8h]
  unsigned int *v411; // [rsp+6C8h] [rbp+5C0h]
  int v412; // [rsp+6D0h] [rbp+5C8h]
  int *v413; // [rsp+6D8h] [rbp+5D0h]
  int v414; // [rsp+6E0h] [rbp+5D8h]
  __int64 v415; // [rsp+6E8h] [rbp+5E0h]
  int v416; // [rsp+6F0h] [rbp+5E8h]
  const wchar_t *v417; // [rsp+6F8h] [rbp+5F0h]
  unsigned int *v418; // [rsp+700h] [rbp+5F8h]
  int v419; // [rsp+708h] [rbp+600h]
  int *v420; // [rsp+710h] [rbp+608h]
  int v421; // [rsp+718h] [rbp+610h]
  __int64 v422; // [rsp+720h] [rbp+618h]
  int v423; // [rsp+728h] [rbp+620h]
  const wchar_t *v424; // [rsp+730h] [rbp+628h]
  int *v425; // [rsp+738h] [rbp+630h]
  int v426; // [rsp+740h] [rbp+638h]
  int *v427; // [rsp+748h] [rbp+640h]
  int v428; // [rsp+750h] [rbp+648h]
  __int64 v429; // [rsp+758h] [rbp+650h]
  int v430; // [rsp+760h] [rbp+658h]
  const wchar_t *v431; // [rsp+768h] [rbp+660h]
  int *v432; // [rsp+770h] [rbp+668h]
  int v433; // [rsp+778h] [rbp+670h]
  int *v434; // [rsp+780h] [rbp+678h]
  int v435; // [rsp+788h] [rbp+680h]
  __int64 v436; // [rsp+790h] [rbp+688h]
  int v437; // [rsp+798h] [rbp+690h]
  const wchar_t *v438; // [rsp+7A0h] [rbp+698h]
  int *v439; // [rsp+7A8h] [rbp+6A0h]
  int v440; // [rsp+7B0h] [rbp+6A8h]
  int *v441; // [rsp+7B8h] [rbp+6B0h]
  int v442; // [rsp+7C0h] [rbp+6B8h]
  __int64 v443; // [rsp+7C8h] [rbp+6C0h]
  int v444; // [rsp+7D0h] [rbp+6C8h]
  const wchar_t *v445; // [rsp+7D8h] [rbp+6D0h]
  unsigned int *v446; // [rsp+7E0h] [rbp+6D8h]
  int v447; // [rsp+7E8h] [rbp+6E0h]
  int *v448; // [rsp+7F0h] [rbp+6E8h]
  int v449; // [rsp+7F8h] [rbp+6F0h]
  __int64 v450; // [rsp+800h] [rbp+6F8h]
  int v451; // [rsp+808h] [rbp+700h]
  const wchar_t *v452; // [rsp+810h] [rbp+708h]
  unsigned int *v453; // [rsp+818h] [rbp+710h]
  int v454; // [rsp+820h] [rbp+718h]
  int *v455; // [rsp+828h] [rbp+720h]
  int v456; // [rsp+830h] [rbp+728h]
  __int64 v457; // [rsp+838h] [rbp+730h]
  int v458; // [rsp+840h] [rbp+738h]
  const wchar_t *v459; // [rsp+848h] [rbp+740h]
  unsigned int *v460; // [rsp+850h] [rbp+748h]
  int v461; // [rsp+858h] [rbp+750h]
  int *v462; // [rsp+860h] [rbp+758h]
  int v463; // [rsp+868h] [rbp+760h]
  __int64 v464; // [rsp+870h] [rbp+768h]
  int v465; // [rsp+878h] [rbp+770h]
  const wchar_t *v466; // [rsp+880h] [rbp+778h]
  unsigned int *v467; // [rsp+888h] [rbp+780h]
  int v468; // [rsp+890h] [rbp+788h]
  int *v469; // [rsp+898h] [rbp+790h]
  int v470; // [rsp+8A0h] [rbp+798h]
  __int64 v471; // [rsp+8A8h] [rbp+7A0h]
  int v472; // [rsp+8B0h] [rbp+7A8h]
  const wchar_t *v473; // [rsp+8B8h] [rbp+7B0h]
  unsigned int *v474; // [rsp+8C0h] [rbp+7B8h]
  int v475; // [rsp+8C8h] [rbp+7C0h]
  int *v476; // [rsp+8D0h] [rbp+7C8h]
  int v477; // [rsp+8D8h] [rbp+7D0h]
  __int64 v478; // [rsp+8E0h] [rbp+7D8h]
  int v479; // [rsp+8E8h] [rbp+7E0h]
  const wchar_t *v480; // [rsp+8F0h] [rbp+7E8h]
  unsigned int *v481; // [rsp+8F8h] [rbp+7F0h]
  int v482; // [rsp+900h] [rbp+7F8h]
  int *v483; // [rsp+908h] [rbp+800h]
  int v484; // [rsp+910h] [rbp+808h]
  __int64 v485; // [rsp+918h] [rbp+810h]
  int v486; // [rsp+920h] [rbp+818h]
  const wchar_t *v487; // [rsp+928h] [rbp+820h]
  unsigned int *v488; // [rsp+930h] [rbp+828h]
  int v489; // [rsp+938h] [rbp+830h]
  int *v490; // [rsp+940h] [rbp+838h]
  int v491; // [rsp+948h] [rbp+840h]
  __int64 v492; // [rsp+950h] [rbp+848h]
  int v493; // [rsp+958h] [rbp+850h]
  const wchar_t *v494; // [rsp+960h] [rbp+858h]
  unsigned int *v495; // [rsp+968h] [rbp+860h]
  int v496; // [rsp+970h] [rbp+868h]
  int *v497; // [rsp+978h] [rbp+870h]
  int v498; // [rsp+980h] [rbp+878h]
  __int64 v499; // [rsp+988h] [rbp+880h]
  int v500; // [rsp+990h] [rbp+888h]
  const wchar_t *v501; // [rsp+998h] [rbp+890h]
  unsigned int *v502; // [rsp+9A0h] [rbp+898h]
  int v503; // [rsp+9A8h] [rbp+8A0h]
  int *v504; // [rsp+9B0h] [rbp+8A8h]
  int v505; // [rsp+9B8h] [rbp+8B0h]
  __int64 v506; // [rsp+9C0h] [rbp+8B8h]
  int v507; // [rsp+9C8h] [rbp+8C0h]
  const wchar_t *v508; // [rsp+9D0h] [rbp+8C8h]
  unsigned int *v509; // [rsp+9D8h] [rbp+8D0h]
  int v510; // [rsp+9E0h] [rbp+8D8h]
  int *v511; // [rsp+9E8h] [rbp+8E0h]
  int v512; // [rsp+9F0h] [rbp+8E8h]
  __int64 v513; // [rsp+9F8h] [rbp+8F0h]
  int v514; // [rsp+A00h] [rbp+8F8h]
  const wchar_t *v515; // [rsp+A08h] [rbp+900h]
  unsigned int *v516; // [rsp+A10h] [rbp+908h]
  int v517; // [rsp+A18h] [rbp+910h]
  int *v518; // [rsp+A20h] [rbp+918h]
  int v519; // [rsp+A28h] [rbp+920h]
  __int64 v520; // [rsp+A30h] [rbp+928h]
  int v521; // [rsp+A38h] [rbp+930h]
  const wchar_t *v522; // [rsp+A40h] [rbp+938h]
  unsigned int *v523; // [rsp+A48h] [rbp+940h]
  int v524; // [rsp+A50h] [rbp+948h]
  int *v525; // [rsp+A58h] [rbp+950h]
  int v526; // [rsp+A60h] [rbp+958h]
  __int64 v527; // [rsp+A68h] [rbp+960h]
  int v528; // [rsp+A70h] [rbp+968h]
  const wchar_t *v529; // [rsp+A78h] [rbp+970h]
  unsigned int *v530; // [rsp+A80h] [rbp+978h]
  int v531; // [rsp+A88h] [rbp+980h]
  int *v532; // [rsp+A90h] [rbp+988h]
  int v533; // [rsp+A98h] [rbp+990h]
  __int64 v534; // [rsp+AA0h] [rbp+998h]
  int v535; // [rsp+AA8h] [rbp+9A0h]
  const wchar_t *v536; // [rsp+AB0h] [rbp+9A8h]
  unsigned int *v537; // [rsp+AB8h] [rbp+9B0h]
  int v538; // [rsp+AC0h] [rbp+9B8h]
  int *v539; // [rsp+AC8h] [rbp+9C0h]
  int v540; // [rsp+AD0h] [rbp+9C8h]
  __int64 v541; // [rsp+AD8h] [rbp+9D0h]
  int v542; // [rsp+AE0h] [rbp+9D8h]
  const wchar_t *v543; // [rsp+AE8h] [rbp+9E0h]
  unsigned int *v544; // [rsp+AF0h] [rbp+9E8h]
  int v545; // [rsp+AF8h] [rbp+9F0h]
  int *v546; // [rsp+B00h] [rbp+9F8h]
  int v547; // [rsp+B08h] [rbp+A00h]
  __int64 v548; // [rsp+B10h] [rbp+A08h]
  int v549; // [rsp+B18h] [rbp+A10h]
  _BYTE v550[296]; // [rsp+B20h] [rbp+A18h] BYREF
  unsigned __int16 v551[264]; // [rsp+C48h] [rbp+B40h] BYREF

  if ( !*((_BYTE *)this + 2365) )
  {
    v4 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v4 + 24) = 4318LL;
LABEL_3:
    WdLogEvent5_WdWarning(v4);
    return 0LL;
  }
  v241 = 3;
  v260 = -1;
  v189 = -1;
  v261 = 2000;
  v225 = 35000;
  v197 = 35000;
  v6 = 0;
  v190 = 2000;
  v227 = 50000;
  v200 = 50000;
  v228 = 100000;
  v201 = 100000;
  v233 = 300000;
  v219 = 300000;
  v234 = 17000;
  v218 = 17000;
  v229 = 200;
  v194 = 200;
  v230 = 200;
  v198 = 200;
  v232 = 100;
  v231 = 100;
  v235 = 25000;
  v220 = 25000;
  v237 = 300;
  v182 = 300;
  v238 = 700;
  v186 = 700;
  v239 = 900;
  v183 = 900;
  v240 = 500;
  v185 = 500;
  v246 = 140000;
  v207 = 140000;
  v247 = 200000;
  v209 = 200000;
  v248 = 250000;
  v210 = 250000;
  v249 = 250000;
  v211 = 250000;
  v226 = 2000;
  v199 = 2000;
  v236 = 2000;
  v202 = 2000;
  v250 = 10000;
  v204 = 10000;
  v223 = 80;
  v195 = 80;
  v224 = 15000;
  v196 = 15000;
  v193 = 3;
  v242 = 0;
  v191 = 0;
  v243 = 0;
  v192 = 0;
  v244 = 80;
  v203 = 80;
  v245 = 80000;
  v205 = 80000;
  v251 = 60000;
  v206 = 60000;
  v252 = 60000;
  v208 = 60000;
  v258 = 80000;
  v217 = 80000;
  v254 = 30000;
  v213 = 30000;
  v257 = 30000;
  v216 = 30000;
  v253 = 15000;
  v212 = 15000;
  v255 = 80;
  v214 = 80;
  v256 = 15000;
  v215 = 15000;
  v221 = 1;
  v187 = 1;
  v179 = 1;
  v184 = 0;
  v180 = 0x100000000LL;
  if ( (int)DXGADAPTER::GetDriverVersion(this) >= 2400 )
  {
    v7 = HIDWORD(v180);
    if ( (*((_DWORD *)this + 473) & 0x1000) != 0 )
      v7 = 0;
    HIDWORD(v180) = v7;
  }
  else
  {
    v267 = L"UseSelfRefreshVRAMInS3";
    v268 = (char *)&v180 + 4;
    v265 = 0LL;
    v270 = &v221;
    v266 = 288;
    v269 = 67108868;
    v271 = 4;
    v272 = 0LL;
    v273 = 0;
    memset(v274, 0, sizeof(v274));
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v265, 0LL, 0LL);
  }
  v275 = 0LL;
  v277 = L"EnableRuntimePowerManagement";
  v278 = &v179;
  v280 = &v187;
  v284 = L"DisableDevicePowerRequired";
  v285 = &v180;
  v287 = (int *)&v184;
  v291 = L"DefaultLatencyToleranceOther";
  v292 = &v189;
  v294 = &v260;
  v298 = L"DefaultExpectedResidency";
  v299 = &v190;
  v301 = &v261;
  v305 = L"DefaultLatencyToleranceIdle0";
  v306 = &v195;
  v308 = &v223;
  v312 = L"DefaultLatencyToleranceIdle1";
  v313 = &v196;
  v315 = &v224;
  v319 = L"DefaultLatencyToleranceNoContext";
  v320 = &v197;
  v322 = &v225;
  v326 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v327 = &v199;
  v329 = &v226;
  v276 = 288;
  v279 = 67108868;
  v281 = 4;
  v282 = 0LL;
  v283 = 288;
  v286 = 67108868;
  v288 = 4;
  v289 = 0LL;
  v290 = 288;
  v293 = 67108868;
  v295 = 4;
  v296 = 0LL;
  v297 = 288;
  v300 = 67108868;
  v302 = 4;
  v303 = 0LL;
  v304 = 288;
  v307 = 67108868;
  v309 = 4;
  v310 = 0LL;
  v311 = 288;
  v314 = 67108868;
  v316 = 4;
  v317 = 0LL;
  v318 = 288;
  v321 = 67108868;
  v323 = 4;
  v324 = 0LL;
  v325 = 288;
  v328 = 67108868;
  v330 = 4;
  v331 = 0LL;
  v332 = 288;
  v333 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v334 = &v200;
  v336 = &v227;
  v340 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v341 = &v201;
  v343 = &v228;
  v347 = L"DefaultLatencyToleranceTimerPeriod";
  v348 = &v194;
  v350 = &v229;
  v354 = L"DefaultIdleThresholdIdle0";
  v355 = &v198;
  v357 = &v230;
  v361 = L"DefaultIdleThresholdIdle0MonitorOff";
  v362 = &v231;
  v364 = &v232;
  v368 = L"MonitorLatencyTolerance";
  v369 = &v219;
  v371 = &v233;
  v375 = L"MonitorRefreshLatencyTolerance";
  v376 = &v218;
  v378 = &v234;
  v382 = L"DefaultPowerNotRequiredTimeout";
  v383 = &v220;
  v385 = &v235;
  v335 = 67108868;
  v337 = 4;
  v338 = 0LL;
  v339 = 288;
  v342 = 67108868;
  v344 = 4;
  v345 = 0LL;
  v346 = 288;
  v349 = 67108868;
  v351 = 4;
  v352 = 0LL;
  v353 = 288;
  v356 = 67108868;
  v358 = 4;
  v359 = 0LL;
  v360 = 288;
  v363 = 67108868;
  v365 = 4;
  v366 = 0LL;
  v367 = 288;
  v370 = 67108868;
  v372 = 4;
  v373 = 0LL;
  v374 = 288;
  v377 = 67108868;
  v379 = 4;
  v380 = 0LL;
  v381 = 288;
  v384 = 67108868;
  v386 = 4;
  v387 = 0LL;
  v388 = 288;
  v391 = 67108868;
  v389 = L"DefaultActiveIdleThreshold";
  v390 = &v202;
  v392 = &v236;
  v396 = L"ulow";
  v397 = &v182;
  v399 = &v237;
  v403 = L"uhigh";
  v404 = &v186;
  v406 = &v238;
  v410 = L"uglitch";
  v411 = &v183;
  v413 = &v239;
  v417 = L"uideal";
  v418 = &v185;
  v420 = &v240;
  v424 = L"lowdebounce";
  v425 = &v193;
  v427 = &v241;
  v431 = L"EnablePODebounce";
  v432 = &v191;
  v434 = &v242;
  v438 = L"DisablePStateManagement";
  v439 = &v192;
  v441 = &v243;
  v393 = 4;
  v394 = 0LL;
  v395 = 288;
  v398 = 67108868;
  v400 = 4;
  v401 = 0LL;
  v402 = 288;
  v405 = 67108868;
  v407 = 4;
  v408 = 0LL;
  v409 = 288;
  v412 = 67108868;
  v414 = 4;
  v415 = 0LL;
  v416 = 288;
  v419 = 67108868;
  v421 = 4;
  v422 = 0LL;
  v423 = 288;
  v426 = 67108868;
  v428 = 4;
  v429 = 0LL;
  v430 = 288;
  v433 = 67108868;
  v435 = 4;
  v436 = 0LL;
  v437 = 288;
  v440 = 67108868;
  v442 = 4;
  v443 = 0LL;
  v444 = 288;
  v445 = L"DefaultD3TransitionLatencyActivelyUsed";
  v446 = &v203;
  v448 = &v244;
  v452 = L"DefaultD3TransitionLatencyIdleShortTime";
  v453 = &v205;
  v455 = &v245;
  v459 = L"DefaultD3TransitionLatencyIdleLongTime";
  v460 = &v207;
  v462 = &v246;
  v466 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v467 = &v209;
  v469 = &v247;
  v473 = L"DefaultD3TransitionLatencyIdleNoContext";
  v474 = &v210;
  v476 = &v248;
  v480 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v481 = &v211;
  v483 = &v249;
  v487 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v488 = &v204;
  v490 = &v250;
  v494 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v495 = &v206;
  v497 = &v251;
  v501 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v447 = 67108868;
  v449 = 4;
  v450 = 0LL;
  v451 = 288;
  v454 = 67108868;
  v456 = 4;
  v457 = 0LL;
  v458 = 288;
  v461 = 67108868;
  v463 = 4;
  v464 = 0LL;
  v465 = 288;
  v468 = 67108868;
  v470 = 4;
  v471 = 0LL;
  v472 = 288;
  v475 = 67108868;
  v477 = 4;
  v478 = 0LL;
  v479 = 288;
  v482 = 67108868;
  v484 = 4;
  v485 = 0LL;
  v486 = 288;
  v489 = 67108868;
  v491 = 4;
  v492 = 0LL;
  v493 = 288;
  v496 = 67108868;
  v498 = 4;
  v499 = 0LL;
  v500 = 288;
  v503 = 67108868;
  v502 = &v208;
  v505 = 4;
  v504 = &v252;
  v506 = 0LL;
  v508 = L"DefaultLatencyToleranceMemory";
  v509 = &v212;
  v511 = &v253;
  v507 = 288;
  v515 = L"DefaultLatencyToleranceMemoryNoContext";
  v516 = &v213;
  v518 = &v254;
  v522 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v523 = &v214;
  v525 = &v255;
  v529 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v530 = &v215;
  v532 = &v256;
  v536 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v537 = &v216;
  v539 = &v257;
  v543 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v544 = &v217;
  v546 = &v258;
  v510 = 67108868;
  v512 = 4;
  v513 = 0LL;
  v514 = 288;
  v517 = 67108868;
  v519 = 4;
  v520 = 0LL;
  v521 = 288;
  v524 = 67108868;
  v526 = 4;
  v527 = 0LL;
  v528 = 288;
  v531 = 67108868;
  v533 = 4;
  v534 = 0LL;
  v535 = 288;
  v538 = 67108868;
  v540 = 4;
  v541 = 0LL;
  v542 = 288;
  v545 = 67108868;
  v547 = 4;
  v548 = 0LL;
  v549 = 0;
  memset(v550, 0, 0x28uLL);
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v275, 0LL, 0LL);
  if ( (int)DXGADAPTER::GetDriverVersion(this) < 2400
    && (int)DpiGetPnpRegistryKeyName(*((_QWORD *)this + 24), 2, (__int64 *)&j) >= 0
    && (int)RtlStringCbCopyW(v551, 0x208uLL, *((size_t **)j + 1)) >= 0
    && RtlStringCbCatW(v551, 520LL, (size_t *)L"\\DxgkSettings") >= 0 )
  {
    v265 = 0LL;
    v267 = L"UseSelfRefreshVRAMInS3";
    v266 = 288;
    v269 = 67108868;
    v268 = (char *)&v180 + 4;
    v270 = &v221;
    v271 = 4;
    v272 = 0LL;
    v273 = 0;
    memset(v274, 0, sizeof(v274));
    RtlQueryRegistryValuesEx(0LL, v551, &v265, 0LL, 0LL);
  }
  if ( !v179 )
    return 0LL;
  v8 = *((_QWORD *)this + 24);
  v9 = HIDWORD(v180) == 0;
  *((_BYTE *)this + 180) = (_DWORD)v180 != 0;
  *((_BYTE *)this + 183) = !v9;
  DriverVersion = DpiGetDriverVersion(v8);
  if ( DriverVersion < 0x5019 )
    NumDifferentPhysicalAdapters = 1;
  else
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
  v187 = NumDifferentPhysicalAdapters;
  LODWORD(v181) = 0;
  if ( !NumDifferentPhysicalAdapters )
    goto LABEL_207;
  for ( i = 0; i < NumDifferentPhysicalAdapters; LODWORD(v181) = i )
  {
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    ObjectAttributes.Length = 6;
    LODWORD(ObjectAttributes.SecurityDescriptor) = 4;
    *(_QWORD *)&ObjectAttributes.Attributes = &v550[4 * i + 40];
    if ( DXGADAPTER::IsDxgmms2(this) && DriverVersion >= 0x5019 )
    {
      LODWORD(ObjectAttributes.ObjectName) = 4;
      ObjectAttributes.RootDirectory = &v181;
    }
    AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(this, (struct _DXGKARG_QUERYADAPTERINFO *)&ObjectAttributes, v16);
    v18 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      v176 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v176 + 24) = this;
      *(_QWORD *)(v176 + 32) = v18;
      WdLogEvent5_WdError(v176);
      return (unsigned int)v18;
    }
    v6 += *(_DWORD *)&v550[4 * (unsigned int)v181 + 40];
    i = v181 + 1;
  }
  if ( !v6 )
  {
LABEL_207:
    v4 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v4 + 24) = 4524LL;
    goto LABEL_3;
  }
  if ( v6 > 0xFFFF )
  {
    v19 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v19 + 24) = v6;
    WdLogEvent5_WdError(v19);
    LODWORD(v20) = -1073741811;
    goto LABEL_202;
  }
  *((_DWORD *)this + 676) = v6;
  v21 = 520LL * v6;
  if ( !is_mul_ok(v6, 0x208uLL) )
    v21 = -1LL;
  v22 = operator new[](v21, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 320) = v22;
  if ( !v22
    || (memset(v22, 0, 520LL * v6),
        v24 = (char *)operator new[](312 * v6 + 136, 0x4B677844u, PagedPool),
        (v25 = v24) == 0LL) )
  {
    v42 = WdLogNewEntry5_WdLowResource(v23);
    *(_QWORD *)(v42 + 24) = this;
    WdLogEvent5_WdLowResource(v42);
    LODWORD(v20) = -1073741801;
    goto LABEL_202;
  }
  memset(v24, 0, 312 * v6 + 136);
  v177 = v25;
  *((_QWORD *)v25 + 4) = DxgkPowerRuntimeComponentIdleStateCallback;
  *(_DWORD *)v25 = 2;
  *((_QWORD *)v25 + 2) = DxgkPowerRuntimeComponentActiveCallback;
  *((_DWORD *)v25 + 18) = v6;
  *((_QWORD *)v25 + 3) = DxgkPowerRuntimeComponentIdleCallback;
  *((_QWORD *)v25 + 8) = this;
  *((_QWORD *)v25 + 5) = DxgkPowerRuntimeDevicePowerRequiredCallback;
  *((_QWORD *)v25 + 6) = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  *((_QWORD *)v25 + 7) = DxgkPowerRuntimeControlCallback;
  memset(&v264, 0, sizeof(v264));
  v26 = 0;
  v264.Type = DXGKQAITYPE_POWERCOMPONENTINFO;
  v264.InputDataSize = 4;
  v27 = (__int64)&v25[56 * v6 + 80];
  v264.OutputDataSize = 336;
  v184 = 0;
  v28 = 0;
  j = (void *)(v27 + 192LL * v6);
  v29 = 0LL;
  v30 = 0LL;
  LODWORD(v180) = 0;
  v179 = 0;
  do
  {
    v31 = 0;
    v263 = (unsigned int)v29;
    *((_WORD *)this + v29 + 1288) = v28;
    v188 = 0;
    if ( !*(_DWORD *)&v550[4 * v29 + 40] )
      goto LABEL_85;
    do
    {
      v32 = 56LL * v28;
      v259 = v31 + v30;
      v264.pInputData = &v259;
      v33 = *((_QWORD *)this + 320);
      v181 = 520LL * v28;
      v264.pOutputData = (void *)(v33 + 8 + v181);
      v34 = DXGADAPTER::DdiQueryAdapterInfo(this, &v264, (const GUID *)v30);
      v20 = v34;
      if ( v34 < 0 )
      {
        v65 = WdLogNewEntry5_WdError(v35);
        *(_QWORD *)(v65 + 24) = v28;
        *(_QWORD *)(v65 + 32) = v20;
        WdLogEvent5_WdError(v65);
        goto LABEL_113;
      }
      v36 = v181;
      v37 = v188;
      *(_DWORD *)(v181 + *((_QWORD *)this + 320)) = v28;
      *(_WORD *)(*((_QWORD *)this + 320) + v36 + 4) = v37;
      v38 = (unsigned int)v180;
      *(_WORD *)(*((_QWORD *)this + 320) + v36 + 6) = v180;
      v39 = v36 + *((_QWORD *)this + 320);
      *(_DWORD *)&v25[v32 + 108] = *(_DWORD *)(v39 + 8);
      if ( (unsigned int)(*(_DWORD *)(v39 + 8) - 1) > 7 )
      {
        v63 = (_QWORD *)WdLogNewEntry5_WdError(v36);
        v63[3] = v28;
        v64 = *(unsigned int *)(v39 + 8);
        v63[5] = 0LL;
        goto LABEL_109;
      }
      *(_OWORD *)&v25[v32 + 80] = *(_OWORD *)(v39 + 220);
      *(_BYTE *)(v39 + 275) = 0;
      v40 = *(_DWORD *)(v39 + 216);
      if ( v40 >= 0x20 )
      {
        v41 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v41 + 32) = 2LL;
        goto LABEL_106;
      }
      if ( (v40 & 4) != 0 )
        *(_QWORD *)&v25[v32 + 96] |= 1uLL;
      if ( !v191 )
        *(_QWORD *)&v25[v32 + 96] |= 2uLL;
      if ( (*(_DWORD *)(v39 + 216) & 0x10) != 0 )
      {
        if ( ((*(_DWORD *)(v39 + 208) - 3) & 0xFFFFFFFB) != 0 )
        {
          v41 = WdLogNewEntry5_WdError(v36);
          *(_QWORD *)(v41 + 32) = 4673LL;
        }
        else if ( *(_DWORD *)(v39 + 8) == 2 )
        {
          if ( !*(_QWORD *)(v39 + 40) )
          {
            if ( *(_DWORD *)(v39 + 276) )
            {
              v41 = WdLogNewEntry5_WdError(v36);
              *(_QWORD *)(v41 + 32) = 4691LL;
              goto LABEL_106;
            }
            goto LABEL_49;
          }
          v41 = WdLogNewEntry5_WdError(v36);
          *(_QWORD *)(v41 + 32) = 4685LL;
        }
        else
        {
          v41 = WdLogNewEntry5_WdError(v36);
          *(_QWORD *)(v41 + 32) = 4679LL;
        }
LABEL_106:
        *(_QWORD *)(v41 + 24) = v28;
        WdLogEvent5_WdError(v41);
        LODWORD(v20) = -1073741811;
LABEL_113:
        operator delete[](v25);
        goto LABEL_202;
      }
LABEL_49:
      if ( *(_DWORD *)(v39 + 276) > 0x10u )
      {
LABEL_103:
        v41 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v41 + 32) = 3LL;
        goto LABEL_106;
      }
      v43 = *(_DWORD *)(v39 + 208);
      if ( v43 == 4 )
      {
        if ( *((_DWORD *)this + 678) == -1 )
        {
          *((_DWORD *)this + 678) = v28;
          goto LABEL_60;
        }
        v41 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v41 + 32) = 4739LL;
        goto LABEL_106;
      }
      if ( v43 == 6 )
      {
        if ( *((_DWORD *)this + 677) == -1 )
        {
          v45 = *((_QWORD *)this + 320) + v36;
          *((_QWORD *)this + 365) = v45;
          *((_DWORD *)this + 677) = v28;
          v46 = *(_DWORD *)(v39 + 8);
          if ( v46 == 2 )
          {
            *((_BYTE *)this + 3000) = 1;
          }
          else if ( v46 > 2 )
          {
            v41 = WdLogNewEntry5_WdError(v45);
            *(_QWORD *)(v41 + 32) = 4729LL;
            goto LABEL_106;
          }
        }
        else
        {
          v44 = WdLogNewEntry5_WdWarning(v36, v38, 0LL);
          *(_QWORD *)(v44 + 24) = v28;
          *(_QWORD *)(v44 + 32) = 4713LL;
          WdLogEvent5_WdWarning(v44);
        }
      }
LABEL_60:
      v47 = j;
      *(_DWORD *)&v25[v32 + 120] = *(_DWORD *)(v39 + 276);
      memmove(v47, (const void *)(v39 + 280), 4LL * *(unsigned int *)(v39 + 276));
      v48 = (char *)j;
      v49 = 0LL;
      *(_QWORD *)&v25[v32 + 128] = j;
      v50 = *(unsigned int *)(v39 + 276);
      *(_QWORD *)&v25[v32 + 112] = v27;
      for ( j = &v48[4 * v50]; (unsigned int)v49 < *(_DWORD *)(v39 + 8); v49 = (unsigned int)(v49 + 1) )
      {
        v51 = *(_QWORD *)(v39 + 24 * v49 + 16);
        *(_QWORD *)v27 = v51;
        v36 = *(_QWORD *)(v39 + 24 * v49 + 24);
        *(_QWORD *)(v27 + 8) = v36;
        v52 = *(_DWORD *)(v39 + 24 * v49 + 32);
        *(_DWORD *)(v27 + 16) = v52;
        if ( *(_QWORD *)(v39 + 24 * v49 + 16) == -1LL )
          v51 = -1LL;
        *(_QWORD *)v27 = v51;
        if ( *(_QWORD *)(v39 + 24 * v49 + 24) == -1LL )
          v36 = -1LL;
        *(_QWORD *)(v27 + 8) = v36;
        if ( *(_DWORD *)(v39 + 24 * v49 + 32) == -1 )
          v52 = -1;
        *(_DWORD *)(v27 + 16) = v52;
        if ( (_DWORD)v49 )
        {
          v53 = *(_DWORD *)(v39 + 24 * v49 + 32);
          if ( v53 != -1 )
          {
            v54 = *(unsigned int *)(v39 + 24 * ((unsigned int)(v49 - 1) + 1LL) + 8);
            if ( (_DWORD)v54 != -1 && v53 > (unsigned int)v54 )
            {
              v41 = WdLogNewEntry5_WdError(v54);
              *(_QWORD *)(v41 + 32) = 5LL;
              goto LABEL_106;
            }
          }
          v55 = *(_QWORD *)(v39 + 24 * v49 + 16);
          if ( v55 != -1LL )
          {
            v56 = *(_QWORD *)(v39 + 24LL * (unsigned int)(v49 - 1) + 16);
            if ( v56 != -1LL && v55 < v56 )
            {
              v41 = WdLogNewEntry5_WdError(v56);
              *(_QWORD *)(v41 + 32) = 6LL;
              goto LABEL_106;
            }
          }
        }
        else
        {
          if ( ((*(_QWORD *)(v39 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*(_QWORD *)(v39 + 24) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            goto LABEL_103;
          }
          if ( !*(_DWORD *)(v39 + 24 * v49 + 32) )
          {
            v41 = WdLogNewEntry5_WdError(v36);
            *(_QWORD *)(v41 + 32) = 4LL;
            goto LABEL_106;
          }
        }
        v27 += 24LL;
      }
      v30 = v179;
      v57 = v184 + 1;
      if ( *(_DWORD *)(v39 + 208) )
        v57 = v184;
      ++v28;
      v26 = v57;
      v184 = v57;
      v31 = v188 + 1;
      v188 = v31;
    }
    while ( v31 < *(_DWORD *)&v550[4 * v263 + 40] );
    LODWORD(v29) = v180;
    v184 = v26;
LABEL_85:
    v29 = (unsigned int)(v29 + 1);
    v30 = (unsigned int)(v30 + 0x10000);
    LODWORD(v180) = v29;
    v179 = v30;
  }
  while ( (unsigned int)v29 < v187 );
  if ( (int)DXGADAPTER::GetDriverVersion(this) < 1300 || !v26 || v192 )
    goto LABEL_140;
  if ( v182 > 0x3E8
    || (v58 = v186, v186 > 0x3E8)
    || v183 > 0x3E8
    || v185 > 0x3E8
    || v182 >= v185
    || v185 >= v186
    || v186 >= v183 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v58);
    v63[3] = v182;
    v63[4] = v186;
    v63[5] = v183;
    v63[6] = v185;
    goto LABEL_111;
  }
  v59 = 248LL * v26;
  v264.Type = DXGKQAITYPE_POWERCOMPONENTPSTATEINFO;
  v264.OutputDataSize = 136;
  if ( !is_mul_ok(v26, 0xF8uLL) )
    v59 = -1LL;
  v60 = operator new[](v59, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 484) = v60;
  *((_DWORD *)this + 970) = v26;
  if ( !v60 )
  {
    v62 = WdLogNewEntry5_WdLowResource(v61);
    *(_QWORD *)(v62 + 24) = this;
    WdLogEvent5_WdLowResource(v62);
    LODWORD(v20) = -1073741801;
    goto LABEL_201;
  }
  memset(v60, 0, 248LL * v26);
  v66 = 0;
  for ( k = 0LL; v66 < *((_DWORD *)this + 676); ++v66 )
  {
    v68 = *((_QWORD *)this + 320);
    v69 = 520LL * v66;
    if ( !*(_DWORD *)(v69 + v68 + 208) )
    {
      *(_QWORD *)(v69 + v68 + 512) = *((_QWORD *)this + 484) + 248LL * (unsigned int)k;
      k = (const GUID *)(unsigned int)((_DWORD)k + 1);
    }
  }
  v70 = 0;
  *((_DWORD *)this + 1022) = v183;
  *((_DWORD *)this + 1023) = v186;
  *((_DWORD *)this + 1024) = v182;
  *((_DWORD *)this + 1025) = v185;
  *((_DWORD *)this + 1026) = v193;
  LODWORD(v181) = 0;
  v71 = 0LL;
  while ( 2 )
  {
    v72 = *(_QWORD *)(520 * v71 + *((_QWORD *)this + 320) + 512);
    if ( !v72 )
    {
LABEL_122:
      LODWORD(v181) = ++v70;
      v71 = v70;
      if ( v70 >= v6 )
        goto LABEL_129;
      continue;
    }
    break;
  }
  v264.pOutputData = *(void **)(520 * v71 + *((_QWORD *)this + 320) + 512);
  v264.pInputData = &v181;
  v73 = DXGADAPTER::DdiQueryAdapterInfo(this, &v264, k);
  v78 = v73;
  if ( v73 >= 0 )
  {
    v79 = v181;
    *(_QWORD *)(v72 + 136) = this;
    *(_DWORD *)(v72 + 144) = v79;
    *(_QWORD *)(v72 + 152) = v72;
    KeInitializeSpinLock((PKSPIN_LOCK)(v72 + 160));
    *(_BYTE *)(v72 + 240) = 0;
    *(_DWORD *)(v72 + 244) = -1;
    v70 = v181;
    goto LABEL_122;
  }
  v80 = WdLogNewEntry5_WdTrace(v75, v74, v76, v77);
  *(_QWORD *)(v80 + 24) = (unsigned int)v181;
  v81 = 0;
  for ( *(_QWORD *)(v80 + 32) = v78; v81 < *((_DWORD *)this + 676); ++v81 )
  {
    v82 = 520LL * v81;
    v83 = *((_QWORD *)this + 320);
    if ( !*(_DWORD *)(v82 + v83 + 208) )
      *(_QWORD *)(v82 + v83 + 512) = 0LL;
  }
  v84 = (void *)*((_QWORD *)this + 484);
  *((_DWORD *)this + 970) = 0;
  operator delete[](v84);
  *((_QWORD *)this + 484) = 0LL;
LABEL_129:
  v85 = *((_DWORD *)this + 970);
  v86 = 0;
  if ( v85 )
  {
    v87 = *((_QWORD *)this + 484);
    while ( 1 )
    {
      v88 = v86;
      v89 = 248LL * v86;
      v90 = *(_DWORD *)(v89 + v87);
      v91 = *(unsigned int *)(v89 + v87 + 144);
      if ( v90 > 0x20 )
      {
        v63 = (_QWORD *)WdLogNewEntry5_WdError(v86);
        v63[3] = v91;
        goto LABEL_111;
      }
      v92 = 0;
      if ( v90 )
        break;
LABEL_139:
      if ( ++v86 >= v85 )
        goto LABEL_140;
    }
    v93 = 62LL * v86;
    while ( 1 )
    {
      v94 = *(_DWORD *)(v87 + 4 * (v93 + v92) + 4);
      if ( !v94 )
      {
        v63 = (_QWORD *)WdLogNewEntry5_WdError(v88);
        v64 = v92;
        v63[3] = v91;
        goto LABEL_109;
      }
      if ( v92 )
      {
        v88 = v93 + v92 - 1;
        if ( v94 > *(_DWORD *)(v87 + 4 * v88 + 4) )
          break;
      }
      if ( ++v92 >= v90 )
        goto LABEL_139;
    }
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v88);
    v64 = v92;
    v63[3] = v91;
    v63[5] = v92 - 1;
LABEL_109:
    v63[4] = v64;
LABEL_111:
    WdLogEvent5_WdError(v63);
    LODWORD(v20) = -1073741811;
    goto LABEL_201;
  }
LABEL_140:
  v95 = (ADAPTER_RENDER *)*((_QWORD *)this + 316);
  *((_DWORD *)this + 748) = v194;
  if ( v95 )
  {
    v96 = ADAPTER_RENDER::InitializePowerManagement(v95);
    v20 = v96;
    if ( v96 < 0 )
    {
      v98 = WdLogNewEntry5_WdError(v97);
      *(_QWORD *)(v98 + 32) = 7LL;
      goto LABEL_200;
    }
  }
  v99 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 315);
  if ( v99 )
  {
    v100 = ADAPTER_DISPLAY::InitializePowerManagement(v99);
    v20 = v100;
    if ( v100 < 0 )
    {
LABEL_146:
      v98 = WdLogNewEntry5_WdError(v101);
      *(_QWORD *)(v98 + 32) = 8LL;
      goto LABEL_200;
    }
  }
  v102 = (_QWORD *)((char *)this + 2568);
  v103 = PoFxRegisterDevice(*((_QWORD *)this + 24), v25, (char *)this + 2568);
  v20 = v103;
  if ( v103 < 0 )
  {
    v98 = WdLogNewEntry5_WdError(v104);
    goto LABEL_200;
  }
  KeInitializeEvent((PRKEVENT)((char *)this + 2728), SynchronizationEvent, 0);
  *((_QWORD *)this + 377) = (char *)this + 3008;
  *((_QWORD *)this + 376) = (char *)this + 3008;
  *((_BYTE *)this + 2996) = 0;
  TimeIncrement = KeQueryTimeIncrement();
  memset((char *)this + 2752, 0, 0x60uLL);
  v106 = v196;
  *((_QWORD *)this + 344) = 10LL * v195;
  v107 = 5 * v106;
  v108 = v197;
  *((_QWORD *)this + 346) = 2 * v107;
  *((_QWORD *)this + 348) = 10 * v108;
  v109 = (unsigned int)(10000 * (unsigned __int64)v198 / TimeIncrement);
  v110 = v199;
  *((_QWORD *)this + 345) = v109;
  *((_QWORD *)this + 351) = v109;
  v111 = 5 * v110;
  v112 = v200;
  *((_QWORD *)this + 350) = 2 * v111;
  v113 = 5 * v112;
  v114 = v201;
  *((_QWORD *)this + 352) = 2 * v113;
  v115 = 5 * v114;
  v116 = v202;
  *((_QWORD *)this + 354) = 2 * v115;
  *((_QWORD *)this + 356) = (char *)this + 2752;
  v117 = 5 * v116;
  v118 = v203;
  *((_QWORD *)this + 388) = 2 * v117;
  v119 = 10000LL * v204;
  *((_QWORD *)this + 357) = 10 * v118;
  v120 = v205;
  *((_QWORD *)this + 358) = (unsigned int)(v119 / TimeIncrement);
  v121 = 10000LL * v206;
  *((_QWORD *)this + 359) = 10 * v120;
  v122 = v207;
  *((_QWORD *)this + 360) = (unsigned int)(v121 / TimeIncrement);
  v123 = 5 * v122;
  v124 = 10000LL * v208;
  *((_QWORD *)this + 361) = 2 * v123;
  *((_QWORD *)this + 362) = (unsigned int)(v124 / TimeIncrement);
  v125 = v209;
  *((_QWORD *)this + 364) = 0LL;
  v178 = 0;
  v126 = 5 * v125;
  v127 = v210;
  *((_QWORD *)this + 363) = 2 * v126;
  v128 = 5 * v127;
  v129 = v211;
  *((_QWORD *)this + 366) = 2 * v128;
  v130 = 5 * v129;
  v131 = v212;
  *((_QWORD *)this + 367) = 2 * v130;
  v132 = 5 * v131;
  v133 = v213;
  *((_QWORD *)this + 368) = 2 * v132;
  v134 = 5 * v133;
  v135 = v214;
  *((_QWORD *)this + 369) = 2 * v134;
  v136 = 5 * v135;
  v137 = v215;
  *((_QWORD *)this + 370) = 2 * v136;
  v138 = 5 * v137;
  v139 = v216;
  *((_QWORD *)this + 371) = 2 * v138;
  v140 = 5 * v139;
  v141 = v217;
  *((_QWORD *)this + 372) = 2 * v140;
  *((_QWORD *)this + 373) = 10 * v141;
  *((_QWORD *)this + 382) = (char *)this + 3048;
  *((_QWORD *)this + 381) = (char *)this + 3048;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 387);
  v142 = 0;
  while ( 2 )
  {
    v143 = *((_QWORD *)this + 320);
    v144 = 520LL * v142;
    v145 = (DXGADAPTER *)(v144 + v143 + 424);
    *(_BYTE *)(v144 + v143 + 356) = 1;
    *(_QWORD *)v145 = 0LL;
    *((_QWORD *)v145 + 1) = 0LL;
    v146 = *(_DWORD *)(v144 + v143 + 208);
    if ( !v146 )
    {
      *(_BYTE *)(v144 + v143 + 357) = 1;
      v157 = (DXGADAPTER **)*((_QWORD *)this + 386);
      if ( *v157 != (DXGADAPTER *)((char *)this + 3080) )
LABEL_197:
        __fastfail(3u);
      *((_QWORD *)v145 + 1) = v157;
      *(_QWORD *)v145 = (char *)this + 3080;
      *v157 = v145;
      v158 = 0LL;
      *((_QWORD *)this + 386) = v145;
      v159 = *(_DWORD *)(v144 + v143 + 8);
      if ( v159 > 1 )
      {
        v160 = (unsigned __int64 *)(v144 + v143 + 40);
        v161 = v159 - 1;
        do
        {
          v162 = v158;
          v158 = *v160;
          v163 = v162 < *v160;
          v160 += 3;
          if ( !v163 )
            v158 = v162;
          --v161;
        }
        while ( v161 );
      }
      *(_DWORD *)(v144 + v143 + 388) = 1;
      v164 = 0;
      v165 = (unsigned __int64 *)((char *)this + 2752);
      while ( *v165 < v158 )
      {
        ++v164;
        v165 += 2;
        if ( v164 >= 2 )
          goto LABEL_180;
      }
      *(_DWORD *)(v144 + v143 + 388) = v164;
LABEL_180:
      v166 = *(_DWORD *)(v144 + v143 + 4);
      *(_DWORD *)(v144 + v143 + 384) = 2;
      DXGADAPTER::SetPowerComponentLatencyCB(this, v166, *(_QWORD *)(*((_QWORD *)this + 356) + 32LL));
      ++*((_DWORD *)this + 680);
      goto LABEL_181;
    }
    v147 = v146 - 1;
    if ( !v147 )
    {
      v156 = v219;
      goto LABEL_168;
    }
    v148 = v147 - 1;
    if ( !v148 )
    {
      v156 = v218;
LABEL_168:
      v152 = *(_DWORD *)(v144 + v143 + 4);
      v154 = 10 * v156;
      v153 = this;
      goto LABEL_160;
    }
    v149 = v148 - 1;
    if ( v149 )
    {
      v150 = v149 - 1;
      if ( v150 )
      {
        v151 = v150 - 2;
        if ( v151 )
        {
          if ( v151 == 1 )
          {
            v178 = 1;
            if ( (*(_DWORD *)(v144 + v143 + 216) & 0x10) != 0 )
            {
              *(_BYTE *)(v144 + v143 + 360) = 1;
              *(_BYTE *)(v144 + v143 + 356) = 0;
              *(_DWORD *)(v144 + v143 + 344) = 1;
            }
          }
          else
          {
            v152 = *(_DWORD *)(v144 + v143 + 4);
            v153 = this;
            if ( v189 == -1 )
              v154 = -1LL;
            else
              v154 = 10LL * v189;
LABEL_160:
            DXGADAPTER::SetPowerComponentLatencyCB(v153, v152, v154);
          }
        }
      }
    }
    else
    {
      v155 = (DXGADAPTER **)*((_QWORD *)this + 384);
      if ( *v155 != (DXGADAPTER *)((char *)this + 3064) )
        goto LABEL_197;
      *(_QWORD *)v145 = (char *)this + 3064;
      *((_QWORD *)v145 + 1) = v155;
      *v155 = v145;
      *((_QWORD *)this + 384) = v145;
      if ( (*(_DWORD *)(v144 + v143 + 216) & 0x10) != 0 )
        *(_BYTE *)(v144 + v143 + 360) = 1;
    }
LABEL_181:
    if ( v190 == -1 )
      v167 = -1LL;
    else
      v167 = 10000LL * v190;
    DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(v144 + v143 + 4), v167);
    KeInitializeSpinLock((PKSPIN_LOCK)(v144 + v143 + 504));
    if ( *(_DWORD *)(v144 + v143 + 8) <= 1u || (v168 = *(_QWORD *)(v144 + v143 + 48), v168 == -1) )
    {
      v169 = *((_QWORD *)this + 388);
    }
    else
    {
      v169 = *((_QWORD *)this + 388);
      if ( v168 > v169 )
        v169 = *(_QWORD *)(v144 + v143 + 48);
    }
    ++v142;
    *(_QWORD *)(v144 + v143 + 496) = v169;
    if ( v142 < v6 )
      continue;
    break;
  }
  DXGADAPTER::UpdateLatencyTolerances(this);
  PoFxSetDeviceIdleTimeout(*v102, 10LL * v220);
  if ( *((_DWORD *)this + 71) == 1297040209 && *((_DWORD *)this + 540) == 4608 )
  {
    KeInitializeEvent((PRKEVENT)((char *)this + 3248), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3272), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3296), SynchronizationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)this + 415);
    *((_QWORD *)this + 418) = (char *)this + 3336;
    *((_QWORD *)this + 417) = (char *)this + 3336;
    InitializeSListHead((PSLIST_HEADER)this + 210);
    v171 = 0LL;
    v172 = 8LL;
    do
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 210, (PSLIST_ENTRY)((char *)this + v171 + 3392));
      v171 += 32LL;
      --v172;
    }
    while ( v172 );
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v173 = PsCreateSystemThread(
             (PHANDLE)this + 422,
             0x1FFFFFu,
             &ObjectAttributes,
             0LL,
             0LL,
             DXGADAPTER::PowerRuntimeComponentIdleStateCallbackThread,
             this);
    v20 = v173;
    if ( v173 < 0 )
      goto LABEL_146;
  }
  LOBYTE(v170) = v178;
  v174 = DpiEnablePowerManagement(*((_QWORD *)this + 24), *v102, v170);
  v20 = v174;
  if ( v174 >= 0 )
  {
    operator delete[](v177);
    return 0LL;
  }
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  v98 = WdLogNewEntry5_WdError(v175);
  *(_QWORD *)(v98 + 32) = 9LL;
LABEL_200:
  *(_QWORD *)(v98 + 24) = v20;
  WdLogEvent5_WdError(v98);
LABEL_201:
  operator delete[](v177);
LABEL_202:
  if ( *((_QWORD *)this + 321) )
  {
    PoFxUnregisterDevice();
    *((_QWORD *)this + 321) = 0LL;
  }
  return (unsigned int)v20;
}
