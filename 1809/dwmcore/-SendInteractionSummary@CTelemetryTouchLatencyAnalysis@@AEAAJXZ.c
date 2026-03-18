/*
 * XREFs of ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18014E1D4
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801495E0 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18014D694 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180019A68 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800638CC (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x18014D554 (_TlgCreateWsz.c)
 *     ??0?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@QEAA@XZ @ 0x18014D5E8 (--0-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgRefle.c)
 *     ??1?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@QEAA@XZ @ 0x18014D5FC (--1-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgRefle.c)
 *     ??KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@I@Z @ 0x18014D634 (--KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@I@Z.c)
 *     ?ExtractAppCommitLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014DDB8 (-ExtractAppCommitLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractAppInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014DE34 (-ExtractAppInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractDwmPresentLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014DEB0 (-ExtractDwmPresentLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractDwmRenderLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014DF2C (-ExtractDwmRenderLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractKernelInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014DFA8 (-ExtractKernelInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractOsLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014E024 (-ExtractOsLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?_TlgCreateAuto@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEAG@Z @ 0x18014FF28 (-_TlgCreateAuto@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEAG@Z.c)
 *     ?zInternalRelatedId@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEBAPEBU_GUID@@XZ @ 0x18014FF34 (-zInternalRelatedId@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QE.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x18014FF5C (-zInternalStart@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QEBU_T.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::SendInteractionSummary(CTelemetryTouchLatencyAnalysis *this)
{
  unsigned int v2; // edi
  unsigned __int8 *v3; // r14
  unsigned int v4; // ecx
  unsigned int v5; // r8d
  _DWORD *v6; // rax
  unsigned __int64 v7; // rdx
  int OsLatencyArray; // eax
  int KernelInputLatencyArray; // eax
  int AppInputLatencyArray; // eax
  int AppCommitLatencyArray; // eax
  int DwmRenderLatencyArray; // eax
  int DwmPresentLatencyArray; // eax
  unsigned __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 v24; // r15
  __int64 v25; // rbx
  int v26; // eax
  const GUID *v27; // rax
  char *v28; // rbx
  const WCHAR *v29; // rdx
  int v30; // edx
  int v31; // eax
  float v32; // xmm0_4
  int v33; // eax
  unsigned int v34; // eax
  __m128i v35; // xmm0
  int v36; // eax
  int v37; // eax
  const WCHAR *v38; // rdx
  int v39; // edx
  const WCHAR *v40; // rdx
  int v41; // edx
  int v42; // eax
  int v43; // eax
  float v44; // xmm0_4
  int v45; // eax
  char v47; // [rsp+38h] [rbp-D0h] BYREF
  char v48; // [rsp+39h] [rbp-CFh] BYREF
  char v49; // [rsp+3Ah] [rbp-CEh] BYREF
  char v50; // [rsp+3Bh] [rbp-CDh] BYREF
  char v51; // [rsp+3Ch] [rbp-CCh] BYREF
  char v52; // [rsp+3Dh] [rbp-CBh] BYREF
  __int16 v53; // [rsp+3Eh] [rbp-CAh] BYREF
  __int16 v54; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v55; // [rsp+42h] [rbp-C6h] BYREF
  __int16 v56; // [rsp+44h] [rbp-C4h] BYREF
  __int16 v57; // [rsp+46h] [rbp-C2h] BYREF
  __int16 v58; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v59; // [rsp+4Ah] [rbp-BEh] BYREF
  __int16 v60; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v61; // [rsp+4Eh] [rbp-BAh] BYREF
  __int16 v62; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v63; // [rsp+52h] [rbp-B6h] BYREF
  __int16 v64; // [rsp+54h] [rbp-B4h] BYREF
  __int16 v65; // [rsp+56h] [rbp-B2h] BYREF
  int v66; // [rsp+58h] [rbp-B0h] BYREF
  int v67; // [rsp+5Ch] [rbp-ACh] BYREF
  float v68; // [rsp+60h] [rbp-A8h] BYREF
  int v69; // [rsp+64h] [rbp-A4h] BYREF
  int v70; // [rsp+68h] [rbp-A0h] BYREF
  float v71; // [rsp+6Ch] [rbp-9Ch] BYREF
  float v72; // [rsp+70h] [rbp-98h] BYREF
  int v73; // [rsp+74h] [rbp-94h] BYREF
  float v74; // [rsp+78h] [rbp-90h] BYREF
  float v75; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v76; // [rsp+80h] [rbp-88h] BYREF
  int v77; // [rsp+84h] [rbp-84h] BYREF
  float v78; // [rsp+88h] [rbp-80h] BYREF
  int v79; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v80; // [rsp+90h] [rbp-78h] BYREF
  int v81; // [rsp+98h] [rbp-70h] BYREF
  int v82; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v83; // [rsp+A0h] [rbp-68h] BYREF
  float v84; // [rsp+A4h] [rbp-64h] BYREF
  float v85; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v86; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v87; // [rsp+B8h] [rbp-50h]
  __int64 v88; // [rsp+C0h] [rbp-48h]
  LARGE_INTEGER PerformanceCount; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v90[6]; // [rsp+D0h] [rbp-38h] BYREF
  int v91; // [rsp+E8h] [rbp-20h] BYREF
  GUID pActivityId; // [rsp+F0h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR v93; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+138h] [rbp+30h] BYREF
  char *v95; // [rsp+148h] [rbp+40h]
  __int64 v96; // [rsp+150h] [rbp+48h]
  float *v97; // [rsp+158h] [rbp+50h]
  __int64 v98; // [rsp+160h] [rbp+58h]
  float *v99; // [rsp+168h] [rbp+60h]
  __int64 v100; // [rsp+170h] [rbp+68h]
  char *v101; // [rsp+178h] [rbp+70h]
  __int64 v102; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+198h] [rbp+90h] BYREF
  char *v105; // [rsp+1A8h] [rbp+A0h]
  __int64 v106; // [rsp+1B0h] [rbp+A8h]
  char *v107; // [rsp+1B8h] [rbp+B0h]
  __int64 v108; // [rsp+1C0h] [rbp+B8h]
  char *v109; // [rsp+1C8h] [rbp+C0h]
  __int64 v110; // [rsp+1D0h] [rbp+C8h]
  char *v111; // [rsp+1D8h] [rbp+D0h]
  __int64 v112; // [rsp+1E0h] [rbp+D8h]
  char *v113; // [rsp+1E8h] [rbp+E0h]
  __int64 v114; // [rsp+1F0h] [rbp+E8h]
  char *v115; // [rsp+1F8h] [rbp+F0h]
  __int64 v116; // [rsp+200h] [rbp+F8h]
  __int16 *v117; // [rsp+208h] [rbp+100h]
  __int64 v118; // [rsp+210h] [rbp+108h]
  char *v119; // [rsp+218h] [rbp+110h]
  int v120; // [rsp+220h] [rbp+118h]
  int v121; // [rsp+224h] [rbp+11Ch]
  __int16 *v122; // [rsp+228h] [rbp+120h]
  __int64 v123; // [rsp+230h] [rbp+128h]
  char *v124; // [rsp+238h] [rbp+130h]
  int v125; // [rsp+240h] [rbp+138h]
  int v126; // [rsp+244h] [rbp+13Ch]
  __int16 *v127; // [rsp+248h] [rbp+140h]
  __int64 v128; // [rsp+250h] [rbp+148h]
  char *v129; // [rsp+258h] [rbp+150h]
  int v130; // [rsp+260h] [rbp+158h]
  int v131; // [rsp+264h] [rbp+15Ch]
  __int16 *v132; // [rsp+268h] [rbp+160h]
  __int64 v133; // [rsp+270h] [rbp+168h]
  char *v134; // [rsp+278h] [rbp+170h]
  int v135; // [rsp+280h] [rbp+178h]
  int v136; // [rsp+284h] [rbp+17Ch]
  __int16 *v137; // [rsp+288h] [rbp+180h]
  __int64 v138; // [rsp+290h] [rbp+188h]
  char *v139; // [rsp+298h] [rbp+190h]
  int v140; // [rsp+2A0h] [rbp+198h]
  int v141; // [rsp+2A4h] [rbp+19Ch]
  __int16 *v142; // [rsp+2A8h] [rbp+1A0h]
  __int64 v143; // [rsp+2B0h] [rbp+1A8h]
  _QWORD *v144; // [rsp+2B8h] [rbp+1B0h]
  int v145; // [rsp+2C0h] [rbp+1B8h]
  int v146; // [rsp+2C4h] [rbp+1BCh]
  int *v147; // [rsp+2C8h] [rbp+1C0h]
  __int64 v148; // [rsp+2D0h] [rbp+1C8h]
  float *v149; // [rsp+2D8h] [rbp+1D0h]
  __int64 v150; // [rsp+2E0h] [rbp+1D8h]
  __int16 *v151; // [rsp+2E8h] [rbp+1E0h]
  __int64 v152; // [rsp+2F0h] [rbp+1E8h]
  float *v153; // [rsp+2F8h] [rbp+1F0h]
  __int64 v154; // [rsp+300h] [rbp+1F8h]
  float *v155; // [rsp+308h] [rbp+200h]
  __int64 v156; // [rsp+310h] [rbp+208h]
  __int16 *v157; // [rsp+318h] [rbp+210h]
  __int64 v158; // [rsp+320h] [rbp+218h]
  unsigned int *v159; // [rsp+328h] [rbp+220h]
  __int64 v160; // [rsp+330h] [rbp+228h]
  unsigned int *v161; // [rsp+338h] [rbp+230h]
  __int64 v162; // [rsp+340h] [rbp+238h]
  unsigned int *v163; // [rsp+348h] [rbp+240h]
  __int64 v164; // [rsp+350h] [rbp+248h]
  __int16 *v165; // [rsp+358h] [rbp+250h]
  __int64 v166; // [rsp+360h] [rbp+258h]
  unsigned int *v167; // [rsp+368h] [rbp+260h]
  __int64 v168; // [rsp+370h] [rbp+268h]
  float *v169; // [rsp+378h] [rbp+270h]
  __int64 v170; // [rsp+380h] [rbp+278h]
  unsigned int *v171; // [rsp+388h] [rbp+280h]
  __int64 v172; // [rsp+390h] [rbp+288h]
  float *v173; // [rsp+398h] [rbp+290h]
  __int64 v174; // [rsp+3A0h] [rbp+298h]
  unsigned int *v175; // [rsp+3A8h] [rbp+2A0h]
  __int64 v176; // [rsp+3B0h] [rbp+2A8h]
  __int16 *v177; // [rsp+3B8h] [rbp+2B0h]
  __int64 v178; // [rsp+3C0h] [rbp+2B8h]
  unsigned int *v179; // [rsp+3C8h] [rbp+2C0h]
  __int64 v180; // [rsp+3D0h] [rbp+2C8h]
  unsigned int *v181; // [rsp+3D8h] [rbp+2D0h]
  __int64 v182; // [rsp+3E0h] [rbp+2D8h]
  float *v183; // [rsp+3E8h] [rbp+2E0h]
  __int64 v184; // [rsp+3F0h] [rbp+2E8h]
  char *v185; // [rsp+3F8h] [rbp+2F0h]
  __int64 v186; // [rsp+400h] [rbp+2F8h]
  float *v187; // [rsp+408h] [rbp+300h]
  __int64 v188; // [rsp+410h] [rbp+308h]
  char *v189; // [rsp+418h] [rbp+310h]
  __int64 v190; // [rsp+420h] [rbp+318h]
  float *v191; // [rsp+428h] [rbp+320h]
  __int64 v192; // [rsp+430h] [rbp+328h]
  char *v193; // [rsp+438h] [rbp+330h]
  __int64 v194; // [rsp+440h] [rbp+338h]
  unsigned int *v195; // [rsp+448h] [rbp+340h]
  __int64 v196; // [rsp+450h] [rbp+348h]
  char *v197; // [rsp+458h] [rbp+350h]
  __int64 v198; // [rsp+460h] [rbp+358h]
  unsigned int *v199; // [rsp+468h] [rbp+360h]
  int v200; // [rsp+470h] [rbp+368h]
  int v201; // [rsp+474h] [rbp+36Ch]
  __int16 *v202; // [rsp+478h] [rbp+370h]
  __int64 v203; // [rsp+480h] [rbp+378h]
  unsigned int *v204; // [rsp+488h] [rbp+380h]
  int v205; // [rsp+490h] [rbp+388h]
  int v206; // [rsp+494h] [rbp+38Ch]
  float *v207; // [rsp+498h] [rbp+390h]
  __int64 v208; // [rsp+4A0h] [rbp+398h]
  float *v209; // [rsp+4A8h] [rbp+3A0h]
  __int64 v210; // [rsp+4B0h] [rbp+3A8h]
  char *v211; // [rsp+4B8h] [rbp+3B0h]
  __int64 v212; // [rsp+4C0h] [rbp+3B8h]
  char *v213; // [rsp+4C8h] [rbp+3C0h]
  __int64 v214; // [rsp+4D0h] [rbp+3C8h]
  int *v215; // [rsp+4D8h] [rbp+3D0h]
  __int64 v216; // [rsp+4E0h] [rbp+3D8h]
  char *v217; // [rsp+4E8h] [rbp+3E0h]
  int v218; // [rsp+4F0h] [rbp+3E8h]
  int v219; // [rsp+4F4h] [rbp+3ECh]
  int *v220; // [rsp+4F8h] [rbp+3F0h]
  __int64 v221; // [rsp+500h] [rbp+3F8h]
  char *v222; // [rsp+508h] [rbp+400h]
  int v223; // [rsp+510h] [rbp+408h]
  int v224; // [rsp+514h] [rbp+40Ch]
  _QWORD v225[2]; // [rsp+518h] [rbp+410h] BYREF
  int i; // [rsp+528h] [rbp+420h]
  unsigned int v227[2]; // [rsp+530h] [rbp+428h] BYREF
  __int64 v228; // [rsp+538h] [rbp+430h]
  int v229; // [rsp+540h] [rbp+438h]
  unsigned int v230[2]; // [rsp+548h] [rbp+440h] BYREF
  __int64 v231; // [rsp+550h] [rbp+448h]
  int v232; // [rsp+558h] [rbp+450h]
  unsigned int v233[2]; // [rsp+560h] [rbp+458h] BYREF
  __int64 v234; // [rsp+568h] [rbp+460h]
  int v235; // [rsp+570h] [rbp+468h]
  unsigned int v236[2]; // [rsp+578h] [rbp+470h] BYREF
  __int64 v237; // [rsp+580h] [rbp+478h]
  int v238; // [rsp+588h] [rbp+480h]
  unsigned int v239[2]; // [rsp+590h] [rbp+488h] BYREF
  __int64 v240; // [rsp+598h] [rbp+490h]
  int v241; // [rsp+5A0h] [rbp+498h]
  unsigned int v242[2]; // [rsp+5A8h] [rbp+4A0h] BYREF
  __int64 v243; // [rsp+5B0h] [rbp+4A8h]
  int v244; // [rsp+5B8h] [rbp+4B0h]
  unsigned int v245[2]; // [rsp+5C0h] [rbp+4B8h] BYREF
  __int64 v246; // [rsp+5C8h] [rbp+4C0h]
  int v247; // [rsp+5D0h] [rbp+4C8h]
  unsigned int v248[2]; // [rsp+5D8h] [rbp+4D0h] BYREF
  __int64 v249; // [rsp+5E0h] [rbp+4D8h]
  int v250; // [rsp+5E8h] [rbp+4E0h]
  unsigned int v251[2]; // [rsp+5F0h] [rbp+4E8h] BYREF
  __int64 v252; // [rsp+5F8h] [rbp+4F0h]
  int v253; // [rsp+600h] [rbp+4F8h]
  unsigned int v254[2]; // [rsp+608h] [rbp+500h] BYREF
  __int64 v255; // [rsp+610h] [rbp+508h]
  int v256; // [rsp+618h] [rbp+510h]
  unsigned int v257[2]; // [rsp+620h] [rbp+518h] BYREF
  __int64 v258; // [rsp+628h] [rbp+520h]
  int v259; // [rsp+630h] [rbp+528h]
  unsigned int v260[2]; // [rsp+638h] [rbp+530h] BYREF
  __int64 v261; // [rsp+640h] [rbp+538h]
  int v262; // [rsp+648h] [rbp+540h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+650h] [rbp+548h] BYREF

  v2 = 0;
  TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>::TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>((__int64)&v91);
  v3 = (unsigned __int8 *)this + 2552;
  if ( *((_BYTE *)this + 2552) )
  {
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/((_DWORD *)this + 674, (__int64)v90, *v3);
    v4 = *((_DWORD *)this + 640);
    if ( v4 )
      v5 = v4 - *v3;
    else
      v5 = 0;
    v78 = 0.0;
    v86 = 0LL;
    v87 = 0LL;
    v88 = 0LL;
    if ( v5 )
    {
      v6 = (_DWORD *)CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/((_DWORD *)this + 724, (__int64)&pData, v5);
      CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(&v86, v6);
      v4 = *((_DWORD *)this + 640);
    }
    if ( v4 )
      v78 = (float)(int)(*((_DWORD *)this + 778) / v4);
    v7 = *v3;
    *(_QWORD *)v227 = 0LL;
    v228 = 0LL;
    v229 = 0;
    *(_QWORD *)v251 = 0LL;
    v252 = 0LL;
    v253 = 0;
    *(_QWORD *)v233 = 0LL;
    v234 = 0LL;
    v235 = 0;
    *(_QWORD *)v242 = 0LL;
    v243 = 0LL;
    v244 = 0;
    *(_QWORD *)v245 = 0LL;
    v246 = 0LL;
    v247 = 0;
    *(_QWORD *)v248 = 0LL;
    v249 = 0LL;
    v250 = 0;
    OsLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractOsLatencyArray(
                       (CTelemetryTouchLatencyAnalysis *)((char *)this + 2720),
                       v7,
                       v227);
    v2 = OsLatencyArray;
    if ( OsLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, OsLatencyArray, 0x871u);
    }
    else
    {
      KernelInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractKernelInputLatencyArray(
                                  (CTelemetryTouchLatencyAnalysis *)((char *)this + 2720),
                                  *v3,
                                  v251);
      v2 = KernelInputLatencyArray;
      if ( KernelInputLatencyArray < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, KernelInputLatencyArray, 0x877u);
      }
      else
      {
        AppInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppInputLatencyArray(
                                 (CTelemetryTouchLatencyAnalysis *)((char *)this + 2720),
                                 *v3,
                                 v233);
        v2 = AppInputLatencyArray;
        if ( AppInputLatencyArray < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, AppInputLatencyArray, 0x87Du);
        }
        else
        {
          AppCommitLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppCommitLatencyArray(
                                    (CTelemetryTouchLatencyAnalysis *)((char *)this + 2720),
                                    *v3,
                                    v242);
          v2 = AppCommitLatencyArray;
          if ( AppCommitLatencyArray < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, AppCommitLatencyArray, 0x883u);
          }
          else
          {
            DwmRenderLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmRenderLatencyArray(
                                      (CTelemetryTouchLatencyAnalysis *)((char *)this + 2720),
                                      *v3,
                                      v245);
            v2 = DwmRenderLatencyArray;
            if ( DwmRenderLatencyArray < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DwmRenderLatencyArray, 0x889u);
            }
            else
            {
              DwmPresentLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmPresentLatencyArray(
                                         (CTelemetryTouchLatencyAnalysis *)((char *)this + 2720),
                                         *v3,
                                         v248);
              v2 = DwmPresentLatencyArray;
              if ( DwmPresentLatencyArray < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DwmPresentLatencyArray, 0x88Fu);
              }
              else
              {
                v14 = *v3;
                *(_QWORD *)v230 = 0LL;
                v231 = 0LL;
                v232 = 0;
                *(_QWORD *)v236 = 0LL;
                v237 = 0LL;
                v238 = 0;
                *(_QWORD *)v239 = 0LL;
                v240 = 0LL;
                v241 = 0;
                *(_QWORD *)v260 = 0LL;
                v261 = 0LL;
                v262 = 0;
                *(_QWORD *)v254 = 0LL;
                v255 = 0LL;
                v256 = 0;
                *(_QWORD *)v257 = 0LL;
                v258 = 0LL;
                v259 = 0;
                v15 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractOsLatencyArray(
                        (CTelemetryTouchLatencyAnalysis *)((char *)this + 2920),
                        v14,
                        v230);
                v2 = v15;
                if ( v15 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x89Du);
                }
                else
                {
                  v16 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractKernelInputLatencyArray(
                          (CTelemetryTouchLatencyAnalysis *)((char *)this + 2920),
                          *v3,
                          v236);
                  v2 = v16;
                  if ( v16 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x8A3u);
                  }
                  else
                  {
                    v17 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppInputLatencyArray(
                            (CTelemetryTouchLatencyAnalysis *)((char *)this + 2920),
                            *v3,
                            v239);
                    v2 = v17;
                    if ( v17 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x8A9u);
                    }
                    else
                    {
                      v18 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppCommitLatencyArray(
                              (CTelemetryTouchLatencyAnalysis *)((char *)this + 2920),
                              *v3,
                              v260);
                      v2 = v18;
                      if ( v18 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x8AFu);
                      }
                      else
                      {
                        v19 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmRenderLatencyArray(
                                (CTelemetryTouchLatencyAnalysis *)((char *)this + 2920),
                                *v3,
                                v254);
                        v2 = v19;
                        if ( v19 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x8B5u);
                        }
                        else
                        {
                          v20 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmPresentLatencyArray(
                                  (CTelemetryTouchLatencyAnalysis *)((char *)this + 2920),
                                  *v3,
                                  v257);
                          v2 = v20;
                          if ( v20 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x8BBu);
                          }
                          else
                          {
                            QueryPerformanceCounter(&PerformanceCount);
                            v77 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                                    this,
                                    *((_QWORD *)this + 318),
                                    PerformanceCount.QuadPart);
                            v24 = 0;
                            v225[0] = 0LL;
                            v225[1] = 0LL;
                            for ( i = 0; v24 < *v3; *((_DWORD *)v225 + v25) = v26 )
                            {
                              v25 = v24;
                              v26 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                                      this,
                                      *((_QWORD *)this + v24++ + 329),
                                      PerformanceCount.QuadPart);
                            }
                            _TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(
                              &v91,
                              v21,
                              v22,
                              v23);
                            if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0LL) )
                            {
                              v27 = (const GUID *)_TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalRelatedId(&v91);
                              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802B2DFA, &pActivityId, v27, 2u, &pData);
                            }
                            if ( (unsigned int)hProvider > 4 )
                            {
                              v28 = (char *)this + 2508;
                              if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000002uLL) )
                              {
                                TlgCreateWsz(&pDesc, L"v1.2");
                                v29 = (const WCHAR *)*((_QWORD *)this + 311);
                                v66 = *((_DWORD *)this + 628);
                                v97 = (float *)&v66;
                                v76 = *((_DWORD *)this + 629);
                                v99 = (float *)&v76;
                                v47 = *((_BYTE *)this + 2520);
                                v101 = &v47;
                                v95 = (char *)this + 2508;
                                v96 = 4LL;
                                v98 = 4LL;
                                v100 = 4LL;
                                v102 = 1LL;
                                _TlgCreateAuto(&v103, v29);
                                _TlgCreateAuto(&v104, *((LPCWSTR *)this + 312));
                                v30 = *v3;
                                v48 = *((_BYTE *)this + 2504);
                                v105 = &v48;
                                v49 = *((_BYTE *)this + 2528);
                                v107 = &v49;
                                v50 = *((_BYTE *)this + 2532);
                                v109 = &v50;
                                v51 = *((_BYTE *)this + 2524);
                                v111 = &v51;
                                v52 = *((_BYTE *)this + 2536);
                                v113 = &v52;
                                v117 = &v64;
                                v119 = (char *)this + 2564;
                                v122 = &v65;
                                v124 = (char *)this + 2584;
                                v127 = &v54;
                                v129 = (char *)this + 2604;
                                v106 = 1LL;
                                v108 = 1LL;
                                v110 = 1LL;
                                v112 = 1LL;
                                v114 = 1LL;
                                v115 = (char *)this + 2552;
                                v116 = 1LL;
                                v64 = v30;
                                v118 = 2LL;
                                v120 = 4 * v30;
                                v121 = 0;
                                v65 = v30;
                                v123 = 2LL;
                                v125 = 4 * v30;
                                v126 = 0;
                                v54 = v30;
                                v128 = 2LL;
                                v130 = v30;
                                v131 = 0;
                                v55 = v30;
                                v132 = &v55;
                                v134 = (char *)this + 2610;
                                v133 = 2LL;
                                v135 = 2 * v30;
                                v137 = &v56;
                                v139 = (char *)this + 2620;
                                v136 = 0;
                                v140 = 2 * v30;
                                v142 = &v57;
                                v144 = v225;
                                v145 = 4 * v30;
                                v147 = &v77;
                                v31 = *((unsigned __int8 *)this + 2865);
                                v56 = v30;
                                v138 = 2LL;
                                v141 = 0;
                                v57 = v30;
                                v149 = &v68;
                                v151 = &v58;
                                v153 = (float *)((char *)this + 2866);
                                v69 = v90[0];
                                v155 = (float *)&v69;
                                v70 = *((_DWORD *)this + 668);
                                v157 = (__int16 *)&v70;
                                v159 = (unsigned int *)&v59;
                                v32 = (float)v31;
                                v161 = v227;
                                v162 = (unsigned int)(4 * v30);
                                v33 = *((unsigned __int8 *)this + 2840);
                                v143 = 2LL;
                                v146 = 0;
                                v148 = 4LL;
                                v150 = 4LL;
                                v58 = v30;
                                v152 = 2LL;
                                v154 = (unsigned int)v30;
                                v156 = 4LL;
                                v158 = 4LL;
                                v59 = v30;
                                v160 = 2LL;
                                v164 = 4LL;
                                v53 = v30;
                                v68 = v32 / (float)v30;
                                v163 = (unsigned int *)&v71;
                                v165 = &v53;
                                v71 = (float)v33 / (float)v30;
                                v166 = 2LL;
                                v167 = (unsigned int *)((char *)this + 2841);
                                v34 = *((unsigned __int8 *)this + 2846);
                                v168 = (unsigned int)v30;
                                v170 = 4LL;
                                v35 = _mm_cvtsi32_si128(v34);
                                v169 = &v72;
                                v171 = (unsigned int *)&v60;
                                v173 = (float *)((char *)this + 2847);
                                v73 = v86;
                                v175 = (unsigned int *)&v73;
                                v67 = *((_DWORD *)this + 718);
                                v177 = (__int16 *)&v67;
                                v179 = (unsigned int *)&v61;
                                v181 = v230;
                                v182 = v162;
                                v36 = *((_DWORD *)this + 761);
                                v60 = v30;
                                v172 = 2LL;
                                v174 = (unsigned int)v30;
                                v176 = 4LL;
                                v178 = 4LL;
                                v61 = v30;
                                v180 = 2LL;
                                v184 = 4LL;
                                v186 = 2LL;
                                v62 = v30;
                                v188 = 2LL;
                                v192 = 4LL;
                                v194 = 2LL;
                                v63 = v30;
                                v196 = 2LL;
                                v72 = _mm_cvtepi32_ps(v35).m128_f32[0] / (float)v30;
                                *(float *)v35.m128i_i32 = (float)v36;
                                v183 = &v74;
                                v185 = (char *)this + 3040;
                                v187 = (float *)&v62;
                                v189 = (char *)this + 3048;
                                v190 = (unsigned int)(2 * v30);
                                v37 = *((_DWORD *)this + 765);
                                v74 = *(float *)v35.m128i_i32 / (float)v30;
                                v191 = &v75;
                                v193 = (char *)this + 3058;
                                v195 = (unsigned int *)&v63;
                                v197 = (char *)this + 3064;
                                v75 = (float)v37 / (float)v30;
                                v198 = v190;
                                TlgWrite(
                                  (TraceLoggingHProvider)&hProvider,
                                  &unk_1802B2AE3,
                                  &pActivityId,
                                  0LL,
                                  0x35u,
                                  &v93);
                              }
                              if ( (unsigned int)hProvider > 4 )
                              {
                                if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000002uLL) )
                                {
                                  TlgCreateWsz(&pDesc, L"v1.2");
                                  v38 = (const WCHAR *)*((_QWORD *)this + 311);
                                  v75 = *((float *)this + 628);
                                  v97 = &v75;
                                  v74 = *((float *)this + 629);
                                  v99 = &v74;
                                  v52 = *((_BYTE *)this + 2520);
                                  v101 = &v52;
                                  v95 = (char *)this + 2508;
                                  v96 = 4LL;
                                  v98 = 4LL;
                                  v100 = 4LL;
                                  v102 = 1LL;
                                  _TlgCreateAuto(&v103, v38);
                                  _TlgCreateAuto(&v104, *((LPCWSTR *)this + 312));
                                  v39 = *v3;
                                  v51 = *((_BYTE *)this + 2504);
                                  v105 = &v51;
                                  v50 = *((_BYTE *)this + 2528);
                                  v107 = &v50;
                                  v49 = *((_BYTE *)this + 2532);
                                  v109 = &v49;
                                  v48 = *((_BYTE *)this + 2524);
                                  v111 = &v48;
                                  v47 = *((_BYTE *)this + 2536);
                                  v113 = &v47;
                                  v117 = &v63;
                                  v119 = (char *)this + 2564;
                                  v122 = &v62;
                                  v124 = (char *)this + 2584;
                                  v127 = &v61;
                                  v129 = (char *)this + 2604;
                                  v106 = 1LL;
                                  v108 = 1LL;
                                  v110 = 1LL;
                                  v112 = 1LL;
                                  v114 = 1LL;
                                  v115 = (char *)this + 2552;
                                  v116 = 1LL;
                                  v63 = v39;
                                  v118 = 2LL;
                                  v120 = 4 * v39;
                                  v121 = 0;
                                  v62 = v39;
                                  v123 = 2LL;
                                  v125 = 4 * v39;
                                  v126 = 0;
                                  v61 = v39;
                                  v128 = 2LL;
                                  v130 = v39;
                                  v131 = 0;
                                  v60 = v39;
                                  v133 = 2LL;
                                  v132 = &v60;
                                  v134 = (char *)this + 2610;
                                  v136 = 0;
                                  v135 = 2 * v39;
                                  v137 = &v53;
                                  v139 = (char *)this + 2620;
                                  v53 = v39;
                                  v140 = 2 * v39;
                                  v142 = &v59;
                                  v144 = v225;
                                  v145 = 4 * v39;
                                  v147 = &v77;
                                  v67 = v90[1];
                                  v149 = (float *)&v67;
                                  v73 = v90[2];
                                  v151 = (__int16 *)&v73;
                                  v72 = *((float *)this + 669);
                                  v153 = &v72;
                                  v71 = *((float *)this + 670);
                                  v155 = &v71;
                                  v157 = &v58;
                                  v159 = v251;
                                  v160 = (unsigned int)(4 * v39);
                                  v161 = (unsigned int *)&v57;
                                  v163 = v233;
                                  v164 = v160;
                                  v70 = HIDWORD(v86);
                                  v165 = (__int16 *)&v70;
                                  v69 = v87;
                                  v167 = (unsigned int *)&v69;
                                  v138 = 2LL;
                                  v141 = 0;
                                  v59 = v39;
                                  v143 = 2LL;
                                  v146 = 0;
                                  v148 = 4LL;
                                  v150 = 4LL;
                                  v152 = 4LL;
                                  v154 = 4LL;
                                  v156 = 4LL;
                                  v58 = v39;
                                  v158 = 2LL;
                                  v57 = v39;
                                  v162 = 2LL;
                                  v166 = 4LL;
                                  v68 = *((float *)this + 719);
                                  v169 = &v68;
                                  v66 = *((_DWORD *)this + 720);
                                  v171 = (unsigned int *)&v66;
                                  v173 = (float *)&v56;
                                  v175 = v236;
                                  v176 = v160;
                                  v177 = &v55;
                                  v179 = v239;
                                  v180 = v160;
                                  v181 = (unsigned int *)((char *)this + 3108);
                                  v183 = (float *)&v54;
                                  v185 = (char *)this + 3116;
                                  v186 = v160;
                                  v187 = &v78;
                                  v168 = 4LL;
                                  v170 = 4LL;
                                  v172 = 4LL;
                                  v56 = v39;
                                  v174 = 2LL;
                                  v55 = v39;
                                  v178 = 2LL;
                                  v182 = 4LL;
                                  v54 = v39;
                                  v184 = 2LL;
                                  v188 = 4LL;
                                  TlgWrite(
                                    (TraceLoggingHProvider)&hProvider,
                                    &unk_1802B27DA,
                                    &pActivityId,
                                    0LL,
                                    0x30u,
                                    &v93);
                                }
                                else
                                {
                                  v28 = (char *)this + 2508;
                                }
                                if ( (unsigned int)hProvider > 4
                                  && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000002uLL) )
                                {
                                  TlgCreateWsz(&pDesc, L"v1.2");
                                  v40 = (const WCHAR *)*((_QWORD *)this + 311);
                                  v75 = *((float *)this + 628);
                                  v97 = &v75;
                                  v74 = *((float *)this + 629);
                                  v99 = &v74;
                                  v52 = *((_BYTE *)this + 2520);
                                  v101 = &v52;
                                  v95 = v28;
                                  v96 = 4LL;
                                  v98 = 4LL;
                                  v100 = 4LL;
                                  v102 = 1LL;
                                  _TlgCreateAuto(&v103, v40);
                                  _TlgCreateAuto(&v104, *((LPCWSTR *)this + 312));
                                  v41 = *v3;
                                  v51 = *((_BYTE *)this + 2504);
                                  v105 = &v51;
                                  v50 = *((_BYTE *)this + 2528);
                                  v107 = &v50;
                                  v49 = *((_BYTE *)this + 2532);
                                  v109 = &v49;
                                  v48 = *((_BYTE *)this + 2524);
                                  v111 = &v48;
                                  v47 = *((_BYTE *)this + 2536);
                                  v113 = &v47;
                                  v117 = &v63;
                                  v119 = (char *)this + 2564;
                                  v122 = &v62;
                                  v124 = (char *)this + 2584;
                                  v127 = &v61;
                                  v129 = (char *)this + 2604;
                                  v106 = 1LL;
                                  v108 = 1LL;
                                  v110 = 1LL;
                                  v112 = 1LL;
                                  v114 = 1LL;
                                  v115 = (char *)this + 2552;
                                  v116 = 1LL;
                                  v63 = v41;
                                  v118 = 2LL;
                                  v120 = 4 * v41;
                                  v121 = 0;
                                  v62 = v41;
                                  v123 = 2LL;
                                  v125 = 4 * v41;
                                  v126 = 0;
                                  v61 = v41;
                                  v128 = 2LL;
                                  v130 = v41;
                                  v131 = 0;
                                  v60 = v41;
                                  v133 = 2LL;
                                  v132 = &v60;
                                  v134 = (char *)this + 2610;
                                  v136 = 0;
                                  v135 = 2 * v41;
                                  v137 = &v53;
                                  v139 = (char *)this + 2620;
                                  v53 = v41;
                                  v140 = 2 * v41;
                                  v142 = &v59;
                                  v144 = v225;
                                  v145 = 4 * v41;
                                  v147 = &v77;
                                  v67 = v90[3];
                                  v149 = (float *)&v67;
                                  v73 = v90[4];
                                  v151 = (__int16 *)&v73;
                                  v72 = *(float *)&v90[5];
                                  v153 = &v72;
                                  v71 = *((float *)this + 671);
                                  v155 = &v71;
                                  v70 = *((_DWORD *)this + 672);
                                  v157 = (__int16 *)&v70;
                                  v69 = *((_DWORD *)this + 673);
                                  v159 = (unsigned int *)&v69;
                                  v161 = (unsigned int *)&v58;
                                  v163 = v242;
                                  v164 = (unsigned int)(4 * v41);
                                  v165 = &v57;
                                  v167 = v245;
                                  v168 = v164;
                                  v138 = 2LL;
                                  v141 = 0;
                                  v59 = v41;
                                  v143 = 2LL;
                                  v146 = 0;
                                  v148 = 4LL;
                                  v150 = 4LL;
                                  v152 = 4LL;
                                  v154 = 4LL;
                                  v156 = 4LL;
                                  v158 = 4LL;
                                  v160 = 4LL;
                                  v58 = v41;
                                  v162 = 2LL;
                                  v57 = v41;
                                  v166 = 2LL;
                                  v169 = (float *)&v56;
                                  v171 = v248;
                                  v172 = v164;
                                  v42 = *((_DWORD *)this + 714);
                                  v56 = v41;
                                  v170 = 2LL;
                                  v174 = 4LL;
                                  v176 = 1LL;
                                  v173 = &v68;
                                  v175 = (unsigned int *)((char *)this + 2852);
                                  v177 = &v55;
                                  v179 = (unsigned int *)((char *)this + 2860);
                                  v79 = HIDWORD(v87);
                                  v181 = (unsigned int *)&v79;
                                  v80 = v88;
                                  v183 = (float *)&v80;
                                  v185 = (char *)&v80 + 4;
                                  v81 = *((_DWORD *)this + 721);
                                  v187 = (float *)&v81;
                                  v82 = *((_DWORD *)this + 722);
                                  v189 = (char *)&v82;
                                  v83 = *((_DWORD *)this + 723);
                                  v191 = (float *)&v83;
                                  v193 = (char *)&v54;
                                  v195 = v260;
                                  v196 = v164;
                                  v197 = (char *)&v65;
                                  v199 = v254;
                                  v200 = 4 * v41;
                                  v55 = v41;
                                  v178 = 2LL;
                                  v180 = (unsigned int)v41;
                                  v182 = 4LL;
                                  v184 = 4LL;
                                  v186 = 4LL;
                                  v188 = 4LL;
                                  v190 = 4LL;
                                  v192 = 4LL;
                                  v54 = v41;
                                  v194 = 2LL;
                                  v65 = v41;
                                  v198 = 2LL;
                                  v68 = (float)v42 / (float)v41;
                                  v201 = 0;
                                  v64 = v41;
                                  v202 = &v64;
                                  v204 = v257;
                                  v205 = 4 * v41;
                                  v43 = *((_DWORD *)this + 769);
                                  v203 = 2LL;
                                  v206 = 0;
                                  v208 = 4LL;
                                  v44 = (float)v43;
                                  v210 = 4LL;
                                  v207 = &v84;
                                  v45 = *((_DWORD *)this + 773);
                                  v212 = 2LL;
                                  v214 = 2LL;
                                  LOWORD(v76) = v41;
                                  v216 = 2LL;
                                  v219 = 0;
                                  LOWORD(v66) = v41;
                                  v221 = 2LL;
                                  v224 = 0;
                                  v84 = v44 / (float)v41;
                                  v209 = &v85;
                                  v211 = (char *)this + 3074;
                                  v213 = (char *)this + 3090;
                                  v215 = &v76;
                                  v217 = (char *)this + 3080;
                                  v218 = 2 * v41;
                                  v220 = &v66;
                                  v222 = (char *)this + 3096;
                                  v223 = 2 * v41;
                                  v85 = (float)v45 / (float)v41;
                                  TlgWrite(
                                    (TraceLoggingHProvider)&hProvider,
                                    &unk_1802B2372,
                                    &pActivityId,
                                    0LL,
                                    0x40u,
                                    &v93);
                                }
                              }
                            }
                            v91 = 2;
                            if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0LL) )
                              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802B27B4, &pActivityId, 0LL, 2u, &pData);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>::~TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>((__int64)&v91);
  return v2;
}
