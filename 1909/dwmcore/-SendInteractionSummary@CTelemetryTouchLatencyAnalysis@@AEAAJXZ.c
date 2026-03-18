/*
 * XREFs of ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18018DE1C
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180177BF8 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18018CFC0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18001BE00 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800DF8E8 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?IsVailContainer@@YAHXZ @ 0x1800DF934 (-IsVailContainer@@YAHXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ?zInternalRelatedId@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEBAPEBU_GUID@@XZ @ 0x1800EC834 (-zInternalRelatedId@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QE.c)
 *     ?_TlgCreateAuto@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEAG@Z @ 0x180158BCC (-_TlgCreateAuto@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEAG@Z.c)
 *     _TlgCreateWsz @ 0x180158BD8 (_TlgCreateWsz.c)
 *     ??0?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@QEAA@XZ @ 0x18018CE4C (--0-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgRefle.c)
 *     ??1?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@QEAA@XZ @ 0x18018CE60 (--1-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgRefle.c)
 *     ??KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@I@Z @ 0x18018CF28 (--KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@I@Z.c)
 *     ?ExtractAppCommitLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18018D7FC (-ExtractAppCommitLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractAppInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18018D888 (-ExtractAppInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractContainerBoundaryInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18018D914 (-ExtractContainerBoundaryInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV1.c)
 *     ?ExtractContainerKernelInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18018D9A0 (-ExtractContainerKernelInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@.c)
 *     ?ExtractDwmPresentLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18018DA2C (-ExtractDwmPresentLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractDwmRenderLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18018DAB8 (-ExtractDwmRenderLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractHostInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18018DB44 (-ExtractHostInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractKernelInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18018DBD0 (-ExtractKernelInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractOsLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18018DC5C (-ExtractOsLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x180190210 (-zInternalStart@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QEBU_T.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::SendInteractionSummary(CTelemetryTouchLatencyAnalysis *this)
{
  unsigned int v2; // edi
  unsigned __int8 *v3; // r14
  unsigned int v4; // edi
  unsigned int v5; // ebx
  _DWORD *v6; // rax
  unsigned __int64 v7; // rdx
  signed int OsLatencyArray; // eax
  signed int KernelInputLatencyArray; // eax
  signed int AppInputLatencyArray; // eax
  signed int AppCommitLatencyArray; // eax
  signed int DwmRenderLatencyArray; // eax
  signed int DwmPresentLatencyArray; // eax
  signed int HostInputLatencyArray; // eax
  signed int ContainerBoundaryInputLatencyArray; // eax
  signed int ContainerKernelInputLatencyArray; // eax
  unsigned __int64 v17; // rdx
  signed int v18; // eax
  signed int v19; // eax
  signed int v20; // eax
  signed int v21; // eax
  signed int v22; // eax
  signed int v23; // eax
  signed int v24; // eax
  signed int v25; // eax
  signed int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int8 v30; // r15
  __int64 v31; // rbx
  int v32; // eax
  const GUID *v33; // rax
  const WCHAR *v34; // rdx
  int v35; // edx
  int v36; // eax
  float v37; // xmm0_4
  int v38; // eax
  unsigned int v39; // eax
  __m128i v40; // xmm0
  int v41; // eax
  int v42; // eax
  const WCHAR *v43; // rdx
  int v44; // edx
  char *v45; // r15
  const WCHAR *v46; // rdx
  int v47; // edx
  int v48; // eax
  int v49; // eax
  float v50; // xmm0_4
  int v51; // eax
  char v53; // [rsp+38h] [rbp-D0h] BYREF
  char v54; // [rsp+39h] [rbp-CFh] BYREF
  char v55; // [rsp+3Ah] [rbp-CEh] BYREF
  char v56; // [rsp+3Bh] [rbp-CDh] BYREF
  char v57; // [rsp+3Ch] [rbp-CCh] BYREF
  char v58; // [rsp+3Dh] [rbp-CBh] BYREF
  __int16 v59; // [rsp+3Eh] [rbp-CAh] BYREF
  __int16 v60; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v61; // [rsp+42h] [rbp-C6h] BYREF
  __int16 v62; // [rsp+44h] [rbp-C4h] BYREF
  __int16 v63; // [rsp+46h] [rbp-C2h] BYREF
  __int16 v64; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v65; // [rsp+4Ah] [rbp-BEh] BYREF
  __int16 v66; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v67; // [rsp+4Eh] [rbp-BAh] BYREF
  __int16 v68; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v69; // [rsp+52h] [rbp-B6h] BYREF
  __int16 v70; // [rsp+54h] [rbp-B4h] BYREF
  __int16 v71; // [rsp+56h] [rbp-B2h] BYREF
  int v72; // [rsp+58h] [rbp-B0h] BYREF
  float v73; // [rsp+5Ch] [rbp-ACh] BYREF
  int v74; // [rsp+60h] [rbp-A8h] BYREF
  int v75; // [rsp+64h] [rbp-A4h] BYREF
  float v76; // [rsp+68h] [rbp-A0h] BYREF
  float v77; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v78; // [rsp+70h] [rbp-98h] BYREF
  int v79; // [rsp+74h] [rbp-94h] BYREF
  int v80; // [rsp+78h] [rbp-90h] BYREF
  float v81; // [rsp+7Ch] [rbp-8Ch] BYREF
  float v82; // [rsp+80h] [rbp-88h] BYREF
  int v83; // [rsp+84h] [rbp-84h] BYREF
  int v84; // [rsp+88h] [rbp-80h] BYREF
  int v85; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v86; // [rsp+90h] [rbp-78h] BYREF
  int v87; // [rsp+94h] [rbp-74h] BYREF
  int v88; // [rsp+98h] [rbp-70h] BYREF
  int v89; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v90; // [rsp+A0h] [rbp-68h] BYREF
  float v91; // [rsp+A4h] [rbp-64h] BYREF
  int v92; // [rsp+A8h] [rbp-60h] BYREF
  int v93; // [rsp+ACh] [rbp-5Ch] BYREF
  int v94; // [rsp+B0h] [rbp-58h] BYREF
  int v95; // [rsp+B4h] [rbp-54h] BYREF
  int v96; // [rsp+B8h] [rbp-50h] BYREF
  int v97; // [rsp+BCh] [rbp-4Ch] BYREF
  float v98; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v99; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v100; // [rsp+D0h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+D8h] [rbp-30h] BYREF
  _DWORD v102[10]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD v103[10]; // [rsp+108h] [rbp+0h] BYREF
  int v104; // [rsp+130h] [rbp+28h] BYREF
  GUID pActivityId; // [rsp+138h] [rbp+30h] BYREF
  EVENT_DATA_DESCRIPTOR v106; // [rsp+158h] [rbp+50h] BYREF
  __int64 *v107; // [rsp+178h] [rbp+70h]
  __int64 v108; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+188h] [rbp+80h] BYREF
  char *v110; // [rsp+198h] [rbp+90h]
  __int64 v111; // [rsp+1A0h] [rbp+98h]
  __int64 *v112; // [rsp+1A8h] [rbp+A0h]
  __int64 v113; // [rsp+1B0h] [rbp+A8h]
  float *v114; // [rsp+1B8h] [rbp+B0h]
  __int64 v115; // [rsp+1C0h] [rbp+B8h]
  char *v116; // [rsp+1C8h] [rbp+C0h]
  __int64 v117; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v118; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v119; // [rsp+1E8h] [rbp+E0h] BYREF
  char *v120; // [rsp+1F8h] [rbp+F0h]
  __int64 v121; // [rsp+200h] [rbp+F8h]
  char *v122; // [rsp+208h] [rbp+100h]
  __int64 v123; // [rsp+210h] [rbp+108h]
  char *v124; // [rsp+218h] [rbp+110h]
  __int64 v125; // [rsp+220h] [rbp+118h]
  char *v126; // [rsp+228h] [rbp+120h]
  __int64 v127; // [rsp+230h] [rbp+128h]
  char *v128; // [rsp+238h] [rbp+130h]
  __int64 v129; // [rsp+240h] [rbp+138h]
  char *v130; // [rsp+248h] [rbp+140h]
  __int64 v131; // [rsp+250h] [rbp+148h]
  char *v132; // [rsp+258h] [rbp+150h]
  __int64 v133; // [rsp+260h] [rbp+158h]
  __int16 *v134; // [rsp+268h] [rbp+160h]
  __int64 v135; // [rsp+270h] [rbp+168h]
  char *v136; // [rsp+278h] [rbp+170h]
  int v137; // [rsp+280h] [rbp+178h]
  int v138; // [rsp+284h] [rbp+17Ch]
  __int16 *v139; // [rsp+288h] [rbp+180h]
  __int64 v140; // [rsp+290h] [rbp+188h]
  char *v141; // [rsp+298h] [rbp+190h]
  int v142; // [rsp+2A0h] [rbp+198h]
  int v143; // [rsp+2A4h] [rbp+19Ch]
  float *v144; // [rsp+2A8h] [rbp+1A0h]
  __int64 v145; // [rsp+2B0h] [rbp+1A8h]
  char *v146; // [rsp+2B8h] [rbp+1B0h]
  int v147; // [rsp+2C0h] [rbp+1B8h]
  int v148; // [rsp+2C4h] [rbp+1BCh]
  __int16 *v149; // [rsp+2C8h] [rbp+1C0h]
  __int64 v150; // [rsp+2D0h] [rbp+1C8h]
  char *v151; // [rsp+2D8h] [rbp+1D0h]
  int v152; // [rsp+2E0h] [rbp+1D8h]
  int v153; // [rsp+2E4h] [rbp+1DCh]
  __int16 *v154; // [rsp+2E8h] [rbp+1E0h]
  __int64 v155; // [rsp+2F0h] [rbp+1E8h]
  char *v156; // [rsp+2F8h] [rbp+1F0h]
  int v157; // [rsp+300h] [rbp+1F8h]
  int v158; // [rsp+304h] [rbp+1FCh]
  __int16 *v159; // [rsp+308h] [rbp+200h]
  __int64 v160; // [rsp+310h] [rbp+208h]
  _QWORD *v161; // [rsp+318h] [rbp+210h]
  int v162; // [rsp+320h] [rbp+218h]
  int v163; // [rsp+324h] [rbp+21Ch]
  int *v164; // [rsp+328h] [rbp+220h]
  __int64 v165; // [rsp+330h] [rbp+228h]
  float *v166; // [rsp+338h] [rbp+230h]
  __int64 v167; // [rsp+340h] [rbp+238h]
  int *v168; // [rsp+348h] [rbp+240h]
  __int64 v169; // [rsp+350h] [rbp+248h]
  float *v170; // [rsp+358h] [rbp+250h]
  __int64 v171; // [rsp+360h] [rbp+258h]
  float *v172; // [rsp+368h] [rbp+260h]
  __int64 v173; // [rsp+370h] [rbp+268h]
  int *v174; // [rsp+378h] [rbp+270h]
  __int64 v175; // [rsp+380h] [rbp+278h]
  int *v176; // [rsp+388h] [rbp+280h]
  __int64 v177; // [rsp+390h] [rbp+288h]
  unsigned int *v178; // [rsp+398h] [rbp+290h]
  __int64 v179; // [rsp+3A0h] [rbp+298h]
  unsigned int *v180; // [rsp+3A8h] [rbp+2A0h]
  __int64 v181; // [rsp+3B0h] [rbp+2A8h]
  __int16 *v182; // [rsp+3B8h] [rbp+2B0h]
  __int64 v183; // [rsp+3C0h] [rbp+2B8h]
  unsigned int *v184; // [rsp+3C8h] [rbp+2C0h]
  __int64 v185; // [rsp+3D0h] [rbp+2C8h]
  float *v186; // [rsp+3D8h] [rbp+2D0h]
  __int64 v187; // [rsp+3E0h] [rbp+2D8h]
  unsigned int *v188; // [rsp+3E8h] [rbp+2E0h]
  __int64 v189; // [rsp+3F0h] [rbp+2E8h]
  float *v190; // [rsp+3F8h] [rbp+2F0h]
  __int64 v191; // [rsp+400h] [rbp+2F8h]
  unsigned int *v192; // [rsp+408h] [rbp+300h]
  __int64 v193; // [rsp+410h] [rbp+308h]
  __int16 *v194; // [rsp+418h] [rbp+310h]
  __int64 v195; // [rsp+420h] [rbp+318h]
  unsigned int *v196; // [rsp+428h] [rbp+320h]
  __int64 v197; // [rsp+430h] [rbp+328h]
  unsigned int *v198; // [rsp+438h] [rbp+330h]
  __int64 v199; // [rsp+440h] [rbp+338h]
  unsigned int *v200; // [rsp+448h] [rbp+340h]
  __int64 v201; // [rsp+450h] [rbp+348h]
  char *v202; // [rsp+458h] [rbp+350h]
  __int64 v203; // [rsp+460h] [rbp+358h]
  unsigned int *v204; // [rsp+468h] [rbp+360h]
  __int64 v205; // [rsp+470h] [rbp+368h]
  int *v206; // [rsp+478h] [rbp+370h]
  __int64 v207; // [rsp+480h] [rbp+378h]
  float *v208; // [rsp+488h] [rbp+380h]
  __int64 v209; // [rsp+490h] [rbp+388h]
  char *v210; // [rsp+498h] [rbp+390h]
  __int64 v211; // [rsp+4A0h] [rbp+398h]
  unsigned int *v212; // [rsp+4A8h] [rbp+3A0h]
  __int64 v213; // [rsp+4B0h] [rbp+3A8h]
  char *v214; // [rsp+4B8h] [rbp+3B0h]
  __int64 v215; // [rsp+4C0h] [rbp+3B8h]
  unsigned int *v216; // [rsp+4C8h] [rbp+3C0h]
  __int64 v217; // [rsp+4D0h] [rbp+3C8h]
  __int16 *v218; // [rsp+4D8h] [rbp+3D0h]
  __int64 v219; // [rsp+4E0h] [rbp+3D8h]
  unsigned int *v220; // [rsp+4E8h] [rbp+3E0h]
  __int64 v221; // [rsp+4F0h] [rbp+3E8h]
  float *v222; // [rsp+4F8h] [rbp+3F0h]
  __int64 v223; // [rsp+500h] [rbp+3F8h]
  __int64 *v224; // [rsp+508h] [rbp+400h]
  __int64 v225; // [rsp+510h] [rbp+408h]
  char *v226; // [rsp+518h] [rbp+410h]
  __int64 v227; // [rsp+520h] [rbp+418h]
  unsigned int *v228; // [rsp+528h] [rbp+420h]
  __int64 v229; // [rsp+530h] [rbp+428h]
  __int16 *v230; // [rsp+538h] [rbp+430h]
  __int64 v231; // [rsp+540h] [rbp+438h]
  unsigned int *v232; // [rsp+548h] [rbp+440h]
  int v233; // [rsp+550h] [rbp+448h]
  int v234; // [rsp+554h] [rbp+44Ch]
  __int16 *v235; // [rsp+558h] [rbp+450h]
  __int64 v236; // [rsp+560h] [rbp+458h]
  unsigned int *v237; // [rsp+568h] [rbp+460h]
  int v238; // [rsp+570h] [rbp+468h]
  int v239; // [rsp+574h] [rbp+46Ch]
  float *v240; // [rsp+578h] [rbp+470h]
  __int64 v241; // [rsp+580h] [rbp+478h]
  unsigned int *v242; // [rsp+588h] [rbp+480h]
  int v243; // [rsp+590h] [rbp+488h]
  int v244; // [rsp+594h] [rbp+48Ch]
  int *v245; // [rsp+598h] [rbp+490h]
  __int64 v246; // [rsp+5A0h] [rbp+498h]
  unsigned int *v247; // [rsp+5A8h] [rbp+4A0h]
  int v248; // [rsp+5B0h] [rbp+4A8h]
  int v249; // [rsp+5B4h] [rbp+4ACh]
  char *v250; // [rsp+5B8h] [rbp+4B0h]
  __int64 v251; // [rsp+5C0h] [rbp+4B8h]
  int *v252; // [rsp+5C8h] [rbp+4C0h]
  __int64 v253; // [rsp+5D0h] [rbp+4C8h]
  char *v254; // [rsp+5D8h] [rbp+4D0h]
  int v255; // [rsp+5E0h] [rbp+4D8h]
  int v256; // [rsp+5E4h] [rbp+4DCh]
  float *v257; // [rsp+5E8h] [rbp+4E0h]
  __int64 v258; // [rsp+5F0h] [rbp+4E8h]
  _QWORD v259[2]; // [rsp+5F8h] [rbp+4F0h] BYREF
  int i; // [rsp+608h] [rbp+500h]
  unsigned int v261[2]; // [rsp+610h] [rbp+508h] BYREF
  __int64 v262; // [rsp+618h] [rbp+510h]
  int v263; // [rsp+620h] [rbp+518h]
  unsigned int v264[2]; // [rsp+628h] [rbp+520h] BYREF
  __int64 v265; // [rsp+630h] [rbp+528h]
  int v266; // [rsp+638h] [rbp+530h]
  unsigned int v267[2]; // [rsp+640h] [rbp+538h] BYREF
  __int64 v268; // [rsp+648h] [rbp+540h]
  int v269; // [rsp+650h] [rbp+548h]
  unsigned int v270[2]; // [rsp+658h] [rbp+550h] BYREF
  __int64 v271; // [rsp+660h] [rbp+558h]
  int v272; // [rsp+668h] [rbp+560h]
  unsigned int v273[2]; // [rsp+670h] [rbp+568h] BYREF
  __int64 v274; // [rsp+678h] [rbp+570h]
  int v275; // [rsp+680h] [rbp+578h]
  unsigned int v276[2]; // [rsp+688h] [rbp+580h] BYREF
  __int64 v277; // [rsp+690h] [rbp+588h]
  int v278; // [rsp+698h] [rbp+590h]
  unsigned int v279[2]; // [rsp+6A0h] [rbp+598h] BYREF
  __int64 v280; // [rsp+6A8h] [rbp+5A0h]
  int v281; // [rsp+6B0h] [rbp+5A8h]
  unsigned int v282[2]; // [rsp+6B8h] [rbp+5B0h] BYREF
  __int64 v283; // [rsp+6C0h] [rbp+5B8h]
  int v284; // [rsp+6C8h] [rbp+5C0h]
  unsigned int v285[2]; // [rsp+6D0h] [rbp+5C8h] BYREF
  __int64 v286; // [rsp+6D8h] [rbp+5D0h]
  int v287; // [rsp+6E0h] [rbp+5D8h]
  unsigned int v288[2]; // [rsp+6E8h] [rbp+5E0h] BYREF
  __int64 v289; // [rsp+6F0h] [rbp+5E8h]
  int v290; // [rsp+6F8h] [rbp+5F0h]
  unsigned int v291[2]; // [rsp+700h] [rbp+5F8h] BYREF
  __int64 v292; // [rsp+708h] [rbp+600h]
  int v293; // [rsp+710h] [rbp+608h]
  unsigned int v294[2]; // [rsp+718h] [rbp+610h] BYREF
  __int64 v295; // [rsp+720h] [rbp+618h]
  int v296; // [rsp+728h] [rbp+620h]
  unsigned int v297[2]; // [rsp+730h] [rbp+628h] BYREF
  __int64 v298; // [rsp+738h] [rbp+630h]
  int v299; // [rsp+740h] [rbp+638h]
  unsigned int v300[2]; // [rsp+748h] [rbp+640h] BYREF
  __int64 v301; // [rsp+750h] [rbp+648h]
  int v302; // [rsp+758h] [rbp+650h]
  unsigned int v303[2]; // [rsp+760h] [rbp+658h] BYREF
  __int64 v304; // [rsp+768h] [rbp+660h]
  int v305; // [rsp+770h] [rbp+668h]
  unsigned int v306[2]; // [rsp+778h] [rbp+670h] BYREF
  __int64 v307; // [rsp+780h] [rbp+678h]
  int v308; // [rsp+788h] [rbp+680h]
  unsigned int v309[2]; // [rsp+790h] [rbp+688h] BYREF
  __int64 v310; // [rsp+798h] [rbp+690h]
  int v311; // [rsp+7A0h] [rbp+698h]
  unsigned int v312[2]; // [rsp+7A8h] [rbp+6A0h] BYREF
  __int64 v313; // [rsp+7B0h] [rbp+6A8h]
  int v314; // [rsp+7B8h] [rbp+6B0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+7C0h] [rbp+6B8h] BYREF

  v2 = 0;
  TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>::TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>((__int64)&v104);
  v3 = (unsigned __int8 *)this + 3208;
  if ( *((_BYTE *)this + 3208) )
  {
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/((_DWORD *)this + 841, (__int64)v103, *v3);
    v4 = *((_DWORD *)this + 804);
    if ( v4 )
      v5 = v4 - *v3;
    else
      v5 = 0;
    memset_0(v102, 0, 0x24uLL);
    v98 = 0.0;
    if ( v5 )
    {
      v6 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/((_DWORD *)this + 912, (__int64)&pData, v5);
      CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v102, v6);
      v4 = *((_DWORD *)this + 804);
    }
    if ( v4 )
      v98 = (float)(int)(*((_DWORD *)this + 984) / v4);
    v7 = *v3;
    *(_QWORD *)v261 = 0LL;
    v262 = 0LL;
    v263 = 0;
    *(_QWORD *)v267 = 0LL;
    v268 = 0LL;
    v269 = 0;
    *(_QWORD *)v270 = 0LL;
    v271 = 0LL;
    v272 = 0;
    *(_QWORD *)v294 = 0LL;
    v295 = 0LL;
    v296 = 0;
    *(_QWORD *)v312 = 0LL;
    v313 = 0LL;
    v314 = 0;
    *(_QWORD *)v300 = 0LL;
    v301 = 0LL;
    v302 = 0;
    *(_QWORD *)v297 = 0LL;
    v298 = 0LL;
    v299 = 0;
    *(_QWORD *)v273 = 0LL;
    v274 = 0LL;
    v275 = 0;
    *(_QWORD *)v276 = 0LL;
    v277 = 0LL;
    v278 = 0;
    OsLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractOsLatencyArray(
                       (CTelemetryTouchLatencyAnalysis *)((char *)this + 3400),
                       v7,
                       v261);
    v2 = OsLatencyArray;
    if ( OsLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, OsLatencyArray, 0x98Au, 0LL);
      goto LABEL_65;
    }
    KernelInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractKernelInputLatencyArray(
                                (CTelemetryTouchLatencyAnalysis *)((char *)this + 3400),
                                *v3,
                                v267);
    v2 = KernelInputLatencyArray;
    if ( KernelInputLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, KernelInputLatencyArray, 0x990u, 0LL);
      goto LABEL_65;
    }
    AppInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppInputLatencyArray(
                             (CTelemetryTouchLatencyAnalysis *)((char *)this + 3400),
                             *v3,
                             v270);
    v2 = AppInputLatencyArray;
    if ( AppInputLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, AppInputLatencyArray, 0x996u, 0LL);
      goto LABEL_65;
    }
    AppCommitLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppCommitLatencyArray(
                              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3400),
                              *v3,
                              v294);
    v2 = AppCommitLatencyArray;
    if ( AppCommitLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, AppCommitLatencyArray, 0x99Cu, 0LL);
      goto LABEL_65;
    }
    DwmRenderLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmRenderLatencyArray(
                              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3400),
                              *v3,
                              v312);
    v2 = DwmRenderLatencyArray;
    if ( DwmRenderLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DwmRenderLatencyArray, 0x9A2u, 0LL);
      goto LABEL_65;
    }
    DwmPresentLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmPresentLatencyArray(
                               (CTelemetryTouchLatencyAnalysis *)((char *)this + 3400),
                               *v3,
                               v300);
    v2 = DwmPresentLatencyArray;
    if ( DwmPresentLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DwmPresentLatencyArray, 0x9A8u, 0LL);
      goto LABEL_65;
    }
    if ( !(unsigned int)IsVailContainer() )
      goto LABEL_22;
    HostInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractHostInputLatencyArray(
                              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3400),
                              *v3,
                              v297);
    v2 = HostInputLatencyArray;
    if ( HostInputLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, HostInputLatencyArray, 0x9B0u, 0LL);
      goto LABEL_65;
    }
    ContainerBoundaryInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractContainerBoundaryInputLatencyArray(
                                           (CTelemetryTouchLatencyAnalysis *)((char *)this + 3400),
                                           *v3,
                                           v273);
    v2 = ContainerBoundaryInputLatencyArray;
    if ( ContainerBoundaryInputLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ContainerBoundaryInputLatencyArray, 0x9B6u, 0LL);
      goto LABEL_65;
    }
    ContainerKernelInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractContainerKernelInputLatencyArray(
                                         (CTelemetryTouchLatencyAnalysis *)((char *)this + 3400),
                                         *v3,
                                         v276);
    v2 = ContainerKernelInputLatencyArray;
    if ( ContainerKernelInputLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ContainerKernelInputLatencyArray, 0x9BCu, 0LL);
    }
    else
    {
LABEL_22:
      v17 = *v3;
      *(_QWORD *)v264 = 0LL;
      v265 = 0LL;
      v266 = 0;
      *(_QWORD *)v279 = 0LL;
      v280 = 0LL;
      v281 = 0;
      *(_QWORD *)v282 = 0LL;
      v283 = 0LL;
      v284 = 0;
      *(_QWORD *)v303 = 0LL;
      v304 = 0LL;
      v305 = 0;
      *(_QWORD *)v306 = 0LL;
      v307 = 0LL;
      v308 = 0;
      *(_QWORD *)v309 = 0LL;
      v310 = 0LL;
      v311 = 0;
      *(_QWORD *)v285 = 0LL;
      v286 = 0LL;
      v287 = 0;
      *(_QWORD *)v288 = 0LL;
      v289 = 0LL;
      v290 = 0;
      *(_QWORD *)v291 = 0LL;
      v292 = 0LL;
      v293 = 0;
      v18 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractOsLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3684),
              v17,
              v264);
      v2 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x9CFu, 0LL);
        goto LABEL_65;
      }
      v19 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractKernelInputLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3684),
              *v3,
              v279);
      v2 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x9D5u, 0LL);
        goto LABEL_65;
      }
      v20 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppInputLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3684),
              *v3,
              v282);
      v2 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x9DBu, 0LL);
        goto LABEL_65;
      }
      v21 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppCommitLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3684),
              *v3,
              v303);
      v2 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x9E1u, 0LL);
        goto LABEL_65;
      }
      v22 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmRenderLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3684),
              *v3,
              v306);
      v2 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x9E7u, 0LL);
        goto LABEL_65;
      }
      v23 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmPresentLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3684),
              *v3,
              v309);
      v2 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x9EDu, 0LL);
        goto LABEL_65;
      }
      if ( !(unsigned int)IsVailContainer() )
        goto LABEL_35;
      v24 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractHostInputLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3684),
              *v3,
              v285);
      v2 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x9F5u, 0LL);
        goto LABEL_65;
      }
      v25 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractContainerBoundaryInputLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3684),
              *v3,
              v288);
      v2 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, 0x9FBu, 0LL);
        goto LABEL_65;
      }
      v26 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractContainerKernelInputLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3684),
              *v3,
              v291);
      v2 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0xA01u, 0LL);
      }
      else
      {
LABEL_35:
        QueryPerformanceCounter(&PerformanceCount);
        v78 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                this,
                *((_QWORD *)this + 400),
                PerformanceCount.QuadPart);
        v30 = 0;
        v259[0] = 0LL;
        v259[1] = 0LL;
        for ( i = 0; v30 < *v3; *((_DWORD *)v259 + v31) = v32 )
        {
          v31 = v30;
          v32 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                  this,
                  *((_QWORD *)this + v30++ + 411),
                  PerformanceCount.QuadPart);
        }
        _TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(
          &v104,
          v27,
          v28,
          v29);
        if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0LL) )
        {
          v33 = (const GUID *)_TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalRelatedId((__int64)&v104);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802D8190, &pActivityId, v33, 2u, &pData);
        }
        if ( (unsigned int)hProvider > 4 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000002uLL) )
          {
            v99 = 0x2000000LL;
            v107 = &v99;
            v108 = 8LL;
            TlgCreateWsz(&pDesc, L"v2.0");
            v34 = (const WCHAR *)*((_QWORD *)this + 391);
            v75 = *((_DWORD *)this + 788);
            v112 = (__int64 *)&v75;
            v74 = *((_DWORD *)this + 789);
            v114 = (float *)&v74;
            v53 = *((_BYTE *)this + 3160);
            v116 = &v53;
            v110 = (char *)this + 3148;
            v111 = 4LL;
            v113 = 4LL;
            v115 = 4LL;
            v117 = 1LL;
            _TlgCreateAuto(&v118, v34);
            _TlgCreateAuto(&v119, *((LPCWSTR *)this + 392));
            v35 = *v3;
            v54 = *((_BYTE *)this + 3144);
            v120 = &v54;
            v55 = *((_BYTE *)this + 3168);
            v122 = &v55;
            v56 = *((_BYTE *)this + 3172);
            v124 = &v56;
            v57 = *((_BYTE *)this + 3164);
            v126 = &v57;
            v58 = *((_BYTE *)this + 3176);
            v128 = &v58;
            v130 = (char *)this + 3180;
            v134 = &v70;
            v136 = (char *)this + 3220;
            v139 = &v71;
            v141 = (char *)this + 3240;
            v121 = 1LL;
            v123 = 1LL;
            v125 = 1LL;
            v127 = 1LL;
            v129 = 1LL;
            v131 = 16LL;
            v132 = (char *)this + 3208;
            v133 = 1LL;
            v70 = v35;
            v135 = 2LL;
            v137 = 4 * v35;
            v138 = 0;
            v71 = v35;
            v140 = 2LL;
            v142 = 4 * v35;
            v143 = 0;
            v59 = v35;
            v144 = (float *)&v59;
            v146 = (char *)this + 3260;
            v149 = &v60;
            v151 = (char *)this + 3266;
            v152 = 2 * v35;
            v154 = &v61;
            v156 = (char *)this + 3276;
            v145 = 2LL;
            v157 = 2 * v35;
            v159 = &v62;
            v161 = v259;
            v162 = 4 * v35;
            v164 = &v78;
            v36 = *((unsigned __int8 *)this + 3605);
            v147 = v35;
            v148 = 0;
            v60 = v35;
            v150 = 2LL;
            v166 = &v73;
            v168 = (int *)&v63;
            v170 = (float *)((char *)this + 3606);
            v72 = v103[0];
            v172 = (float *)&v72;
            v80 = *((_DWORD *)this + 832);
            v174 = &v80;
            v37 = (float)v36;
            v176 = (int *)&v64;
            v178 = v261;
            v179 = (unsigned int)(4 * v35);
            v38 = *((unsigned __int8 *)this + 3580);
            v153 = 0;
            v61 = v35;
            v155 = 2LL;
            v158 = 0;
            v62 = v35;
            v160 = 2LL;
            v163 = 0;
            v165 = 4LL;
            v167 = 4LL;
            v63 = v35;
            v169 = 2LL;
            v171 = (unsigned int)v35;
            v173 = 4LL;
            v175 = 4LL;
            v64 = v35;
            v177 = 2LL;
            v73 = v37 / (float)v35;
            v81 = (float)v38 / (float)v35;
            v180 = (unsigned int *)&v81;
            v182 = &v65;
            v184 = (unsigned int *)((char *)this + 3581);
            v39 = *((unsigned __int8 *)this + 3586);
            v181 = 4LL;
            v65 = v35;
            v183 = 2LL;
            v40 = _mm_cvtsi32_si128(v39);
            v186 = &v82;
            v188 = (unsigned int *)&v66;
            v190 = (float *)((char *)this + 3587);
            v83 = v102[0];
            v192 = (unsigned int *)&v83;
            v84 = *((_DWORD *)this + 903);
            v194 = (__int16 *)&v84;
            v196 = (unsigned int *)&v67;
            v198 = v264;
            v199 = v179;
            v41 = *((_DWORD *)this + 967);
            v185 = (unsigned int)v35;
            v187 = 4LL;
            v66 = v35;
            v189 = 2LL;
            v191 = (unsigned int)v35;
            v193 = 4LL;
            v195 = 4LL;
            v67 = v35;
            v197 = 2LL;
            v201 = 4LL;
            v203 = 2LL;
            v68 = v35;
            v205 = 2LL;
            v209 = 4LL;
            v211 = 2LL;
            v69 = v35;
            v82 = _mm_cvtepi32_ps(v40).m128_f32[0] / (float)v35;
            *(float *)v40.m128i_i32 = (float)v41;
            v200 = (unsigned int *)&v77;
            v202 = (char *)this + 3864;
            v204 = (unsigned int *)&v68;
            v206 = (int *)((char *)this + 3872);
            v207 = (unsigned int)(2 * v35);
            v42 = *((_DWORD *)this + 971);
            v77 = *(float *)v40.m128i_i32 / (float)v35;
            v208 = &v76;
            v210 = (char *)this + 3882;
            v76 = (float)v42 / (float)v35;
            v213 = 2LL;
            v212 = (unsigned int *)&v69;
            v214 = (char *)this + 3888;
            v215 = v207;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802D81B6, &pActivityId, 0LL, 0x37u, &v106);
          }
          if ( (unsigned int)hProvider > 4 )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000002uLL) )
            {
              v100 = 0x2000000LL;
              v107 = &v100;
              v108 = 8LL;
              TlgCreateWsz(&pDesc, L"v3.0");
              v43 = (const WCHAR *)*((_QWORD *)this + 391);
              v76 = *((float *)this + 788);
              v112 = (__int64 *)&v76;
              v77 = *((float *)this + 789);
              v114 = &v77;
              v58 = *((_BYTE *)this + 3160);
              v116 = &v58;
              v110 = (char *)this + 3148;
              v111 = 4LL;
              v113 = 4LL;
              v115 = 4LL;
              v117 = 1LL;
              _TlgCreateAuto(&v118, v43);
              _TlgCreateAuto(&v119, *((LPCWSTR *)this + 392));
              v44 = *v3;
              v45 = (char *)this + 3180;
              v57 = *((_BYTE *)this + 3144);
              v120 = &v57;
              v56 = *((_BYTE *)this + 3168);
              v122 = &v56;
              v55 = *((_BYTE *)this + 3172);
              v124 = &v55;
              v54 = *((_BYTE *)this + 3164);
              v126 = &v54;
              v53 = *((_BYTE *)this + 3176);
              v128 = &v53;
              v134 = &v69;
              v136 = (char *)this + 3220;
              v139 = &v68;
              v141 = (char *)this + 3240;
              v121 = 1LL;
              v123 = 1LL;
              v125 = 1LL;
              v127 = 1LL;
              v129 = 1LL;
              v130 = (char *)this + 3180;
              v131 = 16LL;
              v132 = (char *)this + 3208;
              v133 = 1LL;
              v69 = v44;
              v135 = 2LL;
              v137 = 4 * v44;
              v138 = 0;
              v68 = v44;
              v140 = 2LL;
              v142 = 4 * v44;
              v143 = 0;
              v67 = v44;
              v144 = (float *)&v67;
              v146 = (char *)this + 3260;
              v149 = &v66;
              v151 = (char *)this + 3266;
              v145 = 2LL;
              v152 = 2 * v44;
              v154 = &v65;
              v156 = (char *)this + 3276;
              v147 = v44;
              v157 = 2 * v44;
              v159 = &v64;
              v161 = v259;
              v162 = 4 * v44;
              v164 = &v78;
              v84 = v103[1];
              v166 = (float *)&v84;
              v83 = v103[5];
              v168 = &v83;
              v82 = *(float *)&v103[2];
              v170 = &v82;
              v81 = *(float *)&v103[3];
              v172 = &v81;
              v80 = v103[4];
              v174 = &v80;
              v85 = *((_DWORD *)this + 833);
              v176 = &v85;
              v86 = *((_DWORD *)this + 837);
              v178 = (unsigned int *)&v86;
              v87 = *((_DWORD *)this + 834);
              v180 = (unsigned int *)&v87;
              v88 = *((_DWORD *)this + 835);
              v148 = 0;
              v66 = v44;
              v150 = 2LL;
              v153 = 0;
              v65 = v44;
              v155 = 2LL;
              v158 = 0;
              v64 = v44;
              v160 = 2LL;
              v163 = 0;
              v165 = 4LL;
              v167 = 4LL;
              v169 = 4LL;
              v171 = 4LL;
              v173 = 4LL;
              v175 = 4LL;
              v177 = 4LL;
              v179 = 4LL;
              v181 = 4LL;
              v183 = 4LL;
              v182 = (__int16 *)&v88;
              v89 = *((_DWORD *)this + 836);
              v184 = (unsigned int *)&v89;
              v186 = (float *)&v63;
              v188 = v267;
              v189 = (unsigned int)(4 * v44);
              v190 = (float *)&v62;
              v192 = v270;
              v193 = v189;
              v194 = &v61;
              v196 = v297;
              v197 = v189;
              v198 = (unsigned int *)&v60;
              v200 = v273;
              v201 = v189;
              v202 = (char *)&v59;
              v204 = v276;
              v205 = v189;
              v90 = v102[1];
              v206 = &v90;
              v91 = *(float *)&v102[5];
              v208 = &v91;
              v92 = v102[2];
              v210 = (char *)&v92;
              v93 = v102[3];
              v212 = (unsigned int *)&v93;
              v94 = v102[4];
              v185 = 4LL;
              v63 = v44;
              v187 = 2LL;
              v62 = v44;
              v191 = 2LL;
              v61 = v44;
              v195 = 2LL;
              v60 = v44;
              v199 = 2LL;
              v59 = v44;
              v203 = 2LL;
              v207 = 4LL;
              v209 = 4LL;
              v211 = 4LL;
              v213 = 4LL;
              v214 = (char *)&v94;
              v95 = *((_DWORD *)this + 904);
              v216 = (unsigned int *)&v95;
              v96 = *((_DWORD *)this + 908);
              v218 = (__int16 *)&v96;
              v97 = *((_DWORD *)this + 905);
              v220 = (unsigned int *)&v97;
              v79 = *((_DWORD *)this + 906);
              v222 = (float *)&v79;
              LODWORD(v99) = *((_DWORD *)this + 907);
              v224 = &v99;
              v226 = (char *)&v71;
              v228 = v279;
              v229 = v189;
              v230 = &v70;
              v232 = v282;
              v233 = 4 * v44;
              v235 = (__int16 *)&v72;
              v237 = v285;
              v238 = 4 * v44;
              v240 = &v73;
              v242 = v288;
              v243 = 4 * v44;
              v245 = &v74;
              v247 = v291;
              v248 = 4 * v44;
              v250 = (char *)this + 3932;
              v215 = 4LL;
              v217 = 4LL;
              v219 = 4LL;
              v221 = 4LL;
              v223 = 4LL;
              v225 = 4LL;
              v71 = v44;
              v227 = 2LL;
              v70 = v44;
              v231 = 2LL;
              v234 = 0;
              LOWORD(v72) = v44;
              v236 = 2LL;
              v239 = 0;
              LOWORD(v73) = v44;
              v241 = 2LL;
              v244 = 0;
              LOWORD(v74) = v44;
              v246 = 2LL;
              v249 = 0;
              v251 = 4LL;
              LOWORD(v75) = v44;
              v253 = 2LL;
              v252 = &v75;
              v254 = (char *)this + 3940;
              v255 = 4 * v44;
              v257 = &v98;
              v256 = 0;
              v258 = 4LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802D77A3, &pActivityId, 0LL, 0x4Au, &v106);
            }
            else
            {
              v45 = (char *)this + 3180;
            }
            if ( (unsigned int)hProvider > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000002uLL) )
            {
              v100 = 0x2000000LL;
              v107 = &v100;
              v108 = 8LL;
              TlgCreateWsz(&pDesc, L"v2.0");
              v46 = (const WCHAR *)*((_QWORD *)this + 391);
              LODWORD(v99) = *((_DWORD *)this + 788);
              v112 = &v99;
              v79 = *((_DWORD *)this + 789);
              v114 = (float *)&v79;
              v58 = *((_BYTE *)this + 3160);
              v116 = &v58;
              v110 = (char *)this + 3148;
              v111 = 4LL;
              v113 = 4LL;
              v115 = 4LL;
              v117 = 1LL;
              _TlgCreateAuto(&v118, v46);
              _TlgCreateAuto(&v119, *((LPCWSTR *)this + 392));
              v47 = *v3;
              v57 = *((_BYTE *)this + 3144);
              v120 = &v57;
              v56 = *((_BYTE *)this + 3168);
              v122 = &v56;
              v55 = *((_BYTE *)this + 3172);
              v124 = &v55;
              v54 = *((_BYTE *)this + 3164);
              v126 = &v54;
              v53 = *((_BYTE *)this + 3176);
              v128 = &v53;
              v134 = (__int16 *)&v75;
              v136 = (char *)this + 3220;
              v139 = (__int16 *)&v74;
              v130 = v45;
              v141 = (char *)this + 3240;
              v121 = 1LL;
              v123 = 1LL;
              v125 = 1LL;
              v127 = 1LL;
              v129 = 1LL;
              v131 = 16LL;
              v132 = (char *)this + 3208;
              v133 = 1LL;
              LOWORD(v75) = v47;
              v135 = 2LL;
              v137 = 4 * v47;
              v138 = 0;
              LOWORD(v74) = v47;
              v140 = 2LL;
              v142 = 4 * v47;
              v143 = 0;
              LOWORD(v73) = v47;
              v144 = &v73;
              v146 = (char *)this + 3260;
              v149 = (__int16 *)&v72;
              v151 = (char *)this + 3266;
              v145 = 2LL;
              v152 = 2 * v47;
              v154 = &v69;
              v156 = (char *)this + 3276;
              v147 = v47;
              v157 = 2 * v47;
              v159 = &v68;
              v161 = v259;
              v162 = 4 * v47;
              v164 = &v78;
              v97 = v103[6];
              v166 = (float *)&v97;
              v96 = v103[7];
              v168 = &v96;
              v95 = v103[8];
              v170 = (float *)&v95;
              v94 = *((_DWORD *)this + 838);
              v172 = (float *)&v94;
              v93 = *((_DWORD *)this + 839);
              v174 = &v93;
              v92 = *((_DWORD *)this + 840);
              v176 = &v92;
              v178 = (unsigned int *)&v67;
              v180 = v294;
              v181 = (unsigned int)(4 * v47);
              v148 = 0;
              LOWORD(v72) = v47;
              v150 = 2LL;
              v153 = 0;
              v69 = v47;
              v155 = 2LL;
              v158 = 0;
              v68 = v47;
              v160 = 2LL;
              v163 = 0;
              v165 = 4LL;
              v167 = 4LL;
              v169 = 4LL;
              v171 = 4LL;
              v173 = 4LL;
              v175 = 4LL;
              v177 = 4LL;
              v67 = v47;
              v179 = 2LL;
              v66 = v47;
              v182 = &v66;
              v184 = v312;
              v185 = v181;
              v186 = (float *)&v65;
              v188 = v300;
              v189 = v181;
              v48 = *((_DWORD *)this + 899);
              v183 = 2LL;
              v65 = v47;
              v187 = 2LL;
              v190 = &v91;
              v192 = (unsigned int *)((char *)this + 3592);
              v194 = &v64;
              v196 = (unsigned int *)((char *)this + 3600);
              v90 = v102[6];
              v198 = (unsigned int *)&v90;
              v89 = v102[7];
              v200 = (unsigned int *)&v89;
              v88 = v102[8];
              v202 = (char *)&v88;
              v87 = *((_DWORD *)this + 909);
              v204 = (unsigned int *)&v87;
              v86 = *((_DWORD *)this + 910);
              v206 = &v86;
              v85 = *((_DWORD *)this + 911);
              v208 = (float *)&v85;
              v210 = (char *)&v63;
              v212 = v303;
              v213 = v181;
              v191 = 4LL;
              v193 = 1LL;
              v64 = v47;
              v195 = 2LL;
              v197 = (unsigned int)v47;
              v199 = 4LL;
              v201 = 4LL;
              v203 = 4LL;
              v205 = 4LL;
              v207 = 4LL;
              v209 = 4LL;
              v63 = v47;
              v211 = 2LL;
              v62 = v47;
              v91 = (float)v48 / (float)v47;
              v214 = (char *)&v62;
              v215 = 2LL;
              v216 = v306;
              v217 = v181;
              v218 = &v61;
              v220 = v309;
              v221 = v181;
              v49 = *((_DWORD *)this + 975);
              v61 = v47;
              v219 = 2LL;
              v50 = (float)v49;
              v222 = &v76;
              v51 = *((_DWORD *)this + 979);
              v223 = 4LL;
              v225 = 4LL;
              v227 = 2LL;
              v229 = 2LL;
              v60 = v47;
              v231 = 2LL;
              v234 = 0;
              v59 = v47;
              v236 = 2LL;
              v239 = 0;
              v76 = v50 / (float)v47;
              v224 = (__int64 *)&v77;
              v226 = (char *)this + 3898;
              v228 = (unsigned int *)((char *)this + 3914);
              v230 = &v60;
              v232 = (unsigned int *)((char *)this + 3904);
              v233 = 2 * v47;
              v235 = &v59;
              v237 = (unsigned int *)((char *)this + 3920);
              v238 = 2 * v47;
              v77 = (float)v51 / (float)v47;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802D7D2D, &pActivityId, 0LL, 0x42u, &v106);
            }
          }
        }
        v104 = 2;
        if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0LL) )
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802D7D07, &pActivityId, 0LL, 2u, &pData);
      }
    }
  }
LABEL_65:
  TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>::~TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>((__int64)&v104);
  return v2;
}
