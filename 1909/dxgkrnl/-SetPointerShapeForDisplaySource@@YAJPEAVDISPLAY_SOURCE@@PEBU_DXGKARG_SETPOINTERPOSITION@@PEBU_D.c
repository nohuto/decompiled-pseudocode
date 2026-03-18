/*
 * XREFs of ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00FD130
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00FC1B0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0257BA0 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00098BC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B9C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BA80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000BAE0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000C174 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024AE0 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0pqtqq @ 0x1C0035958 (McTemplateK0pqtqq.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00C7640 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00ED9A4 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C00FF6BC (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     _lambda_a0b6a2c68ac68a3ec6fe6563bf8a6539_::_lambda_invoker_cdecl_ @ 0x1C013EDF0 (_lambda_a0b6a2c68ac68a3ec6fe6563bf8a6539_--_lambda_invoker_cdecl_.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C013EE28 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C01F2828 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1C01F2E44 (-GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0256A60 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?ContainsXor@@YA_NPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0256F3C (-ContainsXor@@YA_NPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z @ 0x1C0256FA4 (-ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C0257150 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C025751C (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 *     ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C0257670 (-ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@.c)
 */

__int64 __fastcall SetPointerShapeForDisplaySource(
        struct DISPLAY_SOURCE *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        struct SESSION_VIEW *a4,
        void *const a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        bool a9)
{
  struct _DXGKARG_SETPOINTERPOSITION v10; // xmm0
  const struct _DXGKARG_SETPOINTERSHAPE *v11; // rsi
  __int64 v14; // rax
  struct DXGADAPTER *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r14d
  struct DXGADAPTER *v19; // rcx
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rbx
  __int64 Width; // rdx
  __int64 XHot; // rcx
  const GUID *Height; // r8
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int YHot; // eax
  _QWORD *v38; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v39; // rbx
  __int64 v40; // rax
  struct _DXGKARG_SETPOINTERSHAPE *PristineCursor; // rax
  int v42; // ecx
  __int64 v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rsi
  bool v48; // di
  __int64 v49; // r12
  __int64 v50; // rax
  int v51; // ebx
  _QWORD *v52; // rax
  __int64 v53; // rcx
  const GUID *v54; // r8
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // rax
  int v59; // esi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  bool v76; // al
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  bool v81; // bl
  __int64 v82; // rsi
  __int64 v83; // r12
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // r15
  __int64 v91; // rbx
  __int64 v92; // rdx
  _QWORD *v93; // rcx
  int v94; // eax
  __int64 v95; // rax
  int v96; // eax
  const GUID *v97; // r8
  int v98; // r9d
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rsi
  __int64 v103; // r8
  __int64 v104; // rbx
  __int64 v105; // r9
  __int64 v106; // r8
  __int64 v107; // rdx
  __int64 v108; // rax
  void (__fastcall ***v109)(_QWORD, __int64); // rcx
  int v110; // ebx
  __int64 v111; // rax
  __int64 v112; // rbx
  _QWORD *v113; // rax
  int v114; // eax
  __int64 v115; // rax
  int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rdi
  __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rsi
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // r15
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rax
  int v136; // eax
  __int64 v137; // rax
  int v138; // esi
  int v139; // ebx
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  _QWORD *v143; // rax
  const struct _DXGK_DRIVERCAPS *v144; // r15
  UINT v145; // r8d
  UINT v146; // ecx
  UINT v147; // edx
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rax
  void *v152; // rcx
  __int64 v153; // rdx
  SIZE_T v154; // rax
  PVOID v155; // rax
  UINT *v156; // r12
  __int64 v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rax
  void *v161; // rcx
  __int64 v162; // rbx
  SIZE_T v163; // rax
  PVOID v164; // rax
  int *v165; // rdi
  struct SESSION_VIEW *v166; // rsi
  int v167; // eax
  const struct _DXGKARG_SETPOINTERSHAPE *v168; // r11
  int v169; // ecx
  int v170; // r8d
  unsigned int v171; // r10d
  unsigned int v172; // r9d
  unsigned int v173; // eax
  int v174; // ecx
  unsigned int v175; // r10d
  unsigned int v176; // eax
  bool v177; // zf
  int v178; // eax
  unsigned __int8 v179; // bl
  void *v180; // rcx
  UINT v181; // eax
  void *v182; // rcx
  int v183; // r12d
  int v184; // r11d
  int v185; // edx
  char v186; // cl
  __int128 v187; // xmm0
  int v188; // r13d
  int v189; // r8d
  int v190; // r9d
  int v191; // r10d
  int v192; // edi
  int v193; // ebx
  const struct _DXGKARG_SETPOINTERPOSITION *v194; // rcx
  INT X; // eax
  int v196; // esi
  int v197; // eax
  __int64 v198; // rdx
  int v199; // r15d
  INT v200; // eax
  struct DISPLAY_SOURCE *v201; // r9
  INT v202; // r8d
  INT v203; // edx
  __int64 v204; // rax
  int v205; // ecx
  struct DISPLAY_SOURCE *v206; // r13
  __int64 v207; // rcx
  const GUID *v208; // r8
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rax
  __int64 v210; // rsi
  __int64 v211; // rdx
  __int64 v212; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v214; // rdi
  struct _KTHREAD *v215; // rbx
  __int64 v216; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v219; // r15d
  __int64 v220; // rdx
  __int64 v221; // rcx
  _QWORD *v222; // rax
  unsigned __int8 v223; // cl
  _QWORD *v224; // rax
  _QWORD *v225; // rax
  __int64 v226; // r8
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // rax
  __int64 v230; // rdx
  __int64 v231; // rsi
  __int64 v232; // rdx
  __int64 v233; // rcx
  unsigned __int8 v234; // r12
  __int64 v235; // rdi
  struct _KTHREAD *v236; // rbx
  __int64 v237; // rax
  int v238; // edi
  __int64 v239; // rax
  int v240; // r15d
  __int64 v241; // rdx
  __int64 v242; // rcx
  _QWORD *v243; // rax
  unsigned __int8 v244; // cl
  _QWORD *v245; // rax
  _QWORD *v246; // rax
  __int64 v247; // r8
  __int64 v248; // rdx
  __int64 Y; // rcx
  __int64 v250; // rax
  __int64 v251; // rdx
  __int64 v252; // rcx
  const GUID *v253; // r8
  struct DISPLAY_SOURCE *v254; // rsi
  __int64 VidPnSourceId; // r15
  INT v256; // r8d
  struct SESSION_VIEW *v257; // rcx
  __int64 v258; // rdx
  char v259; // di
  __int64 v260; // rbx
  INT v261; // r12d
  INT v262; // r13d
  __int64 v263; // rax
  __int64 v264; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v265; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v266; // rbx
  void *pPixels; // rcx
  _QWORD *v268; // rax
  __int64 v269; // rbx
  _QWORD *v270; // rax
  int v271; // eax
  __int64 v272; // rax
  int v273; // eax
  __int64 v274; // rdx
  __int64 v275; // rcx
  _QWORD *v276; // rax
  __int64 v277; // rsi
  unsigned int v278; // edx
  int PairingAdapters; // eax
  __int64 v280; // rdx
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 v283; // rbx
  _QWORD *v284; // rax
  __int64 v285; // rdx
  __int64 v286; // rcx
  __int64 v287; // r8
  __int64 v288; // rax
  struct DXGADAPTER *v289; // rdi
  __int64 v290; // rax
  __int64 v291; // rax
  __int64 v292; // r15
  struct DXGADAPTER *v293; // rbx
  __int64 v294; // rdx
  __int64 v295; // r8
  signed __int64 v296; // rcx
  _QWORD *v297; // rax
  struct DXGADAPTER *v298; // rcx
  __int64 v299; // rcx
  const GUID *v300; // r8
  __int64 v301; // rax
  struct DXGADAPTER *v302; // rcx
  struct DXGADAPTER *v303; // rcx
  _QWORD *v304; // rax
  struct DXGADAPTER *v305; // rcx
  struct DXGADAPTER *v306; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  struct _DXGKARG_SETPOINTERSHAPE *v309; // [rsp+28h] [rbp-D8h]
  struct _DXGK_DRIVERCAPS *v310; // [rsp+30h] [rbp-D0h]
  int *v311; // [rsp+38h] [rbp-C8h]
  char v312; // [rsp+40h] [rbp-C0h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // [rsp+44h] [rbp-BCh]
  char v314; // [rsp+48h] [rbp-B8h]
  struct DXGADAPTER *v315; // [rsp+50h] [rbp-B0h]
  struct _DXGKARG_SETPOINTERSHAPE *v316; // [rsp+58h] [rbp-A8h]
  INT v317; // [rsp+60h] [rbp-A0h]
  unsigned int v318; // [rsp+60h] [rbp-A0h]
  int v319; // [rsp+70h] [rbp-90h] BYREF
  int v320; // [rsp+74h] [rbp-8Ch]
  struct DISPLAY_SOURCE *v321; // [rsp+78h] [rbp-88h]
  __int64 v322; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v323; // [rsp+88h] [rbp-78h] BYREF
  __int64 v324; // [rsp+90h] [rbp-70h] BYREF
  char v325; // [rsp+98h] [rbp-68h]
  int v326; // [rsp+A0h] [rbp-60h]
  unsigned int v327; // [rsp+A4h] [rbp-5Ch]
  unsigned int v328; // [rsp+A8h] [rbp-58h]
  const struct _DXGKARG_SETPOINTERPOSITION *v329; // [rsp+B0h] [rbp-50h]
  struct DXGADAPTER *v330; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v331; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v332; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v333; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v334; // [rsp+D8h] [rbp-28h]
  unsigned int v335; // [rsp+DCh] [rbp-24h]
  unsigned int v336; // [rsp+E0h] [rbp-20h]
  unsigned int v337; // [rsp+E4h] [rbp-1Ch]
  struct SESSION_VIEW *v338; // [rsp+E8h] [rbp-18h]
  __int64 v339; // [rsp+F0h] [rbp-10h] BYREF
  int v340; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v341; // [rsp+100h] [rbp+0h]
  char v342; // [rsp+108h] [rbp+8h]
  int v343; // [rsp+110h] [rbp+10h] BYREF
  __int64 v344; // [rsp+118h] [rbp+18h]
  char v345; // [rsp+120h] [rbp+20h]
  struct tagRECT v346; // [rsp+128h] [rbp+28h] BYREF
  __int128 v347; // [rsp+138h] [rbp+38h]
  int v348; // [rsp+148h] [rbp+48h]
  unsigned __int64 v349; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v350[2]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v351; // [rsp+168h] [rbp+68h]
  _QWORD v352[2]; // [rsp+170h] [rbp+70h] BYREF
  char v353; // [rsp+180h] [rbp+80h]
  unsigned __int64 v354; // [rsp+188h] [rbp+88h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v355; // [rsp+190h] [rbp+90h] BYREF
  char v356[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v357; // [rsp+1B0h] [rbp+B0h]
  struct DXGADAPTER *v358; // [rsp+1B8h] [rbp+B8h]
  char v359; // [rsp+1C0h] [rbp+C0h]
  unsigned int v360; // [rsp+1C4h] [rbp+C4h]
  __int64 v361; // [rsp+1C8h] [rbp+C8h]
  char v362[8]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v363; // [rsp+1F0h] [rbp+F0h]
  struct DXGADAPTER *v364; // [rsp+1F8h] [rbp+F8h]
  char v365; // [rsp+200h] [rbp+100h]
  int v366; // [rsp+204h] [rbp+104h]
  __int64 v367; // [rsp+208h] [rbp+108h]
  char v368[8]; // [rsp+230h] [rbp+130h] BYREF
  char v369[8]; // [rsp+238h] [rbp+138h] BYREF
  __int64 v370; // [rsp+240h] [rbp+140h]
  struct DXGADAPTER *v371; // [rsp+248h] [rbp+148h]
  char v372; // [rsp+250h] [rbp+150h]
  unsigned int v373; // [rsp+254h] [rbp+154h]
  __int64 v374; // [rsp+258h] [rbp+158h]
  char v375[8]; // [rsp+278h] [rbp+178h] BYREF
  __int64 v376; // [rsp+280h] [rbp+180h]
  struct DXGADAPTER *v377; // [rsp+288h] [rbp+188h]
  char v378; // [rsp+290h] [rbp+190h]
  int v379; // [rsp+294h] [rbp+194h]
  __int64 v380; // [rsp+298h] [rbp+198h]
  char v381[8]; // [rsp+2C0h] [rbp+1C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2C8h] [rbp+1C8h] BYREF
  char v383[8]; // [rsp+2F8h] [rbp+1F8h] BYREF
  struct _KAPC_STATE v384; // [rsp+300h] [rbp+200h] BYREF

  v10 = *a2;
  v11 = a3;
  v338 = a4;
  v350[0] = 0LL;
  v350[1] = 0LL;
  v351 = 0LL;
  v14 = *((_QWORD *)this + 1);
  v355 = v10;
  v316 = a3;
  v329 = a2;
  v15 = *(struct DXGADAPTER **)(v14 + 16);
  v321 = this;
  v315 = v15;
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v16 + 24) = 1090LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !*((_QWORD *)v15 + 319) )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v17 + 24) = 1091LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v358 = v15;
  v18 = 0;
  v360 = -1;
  v361 = 0LL;
  v359 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v15 + 3);
  v357 = -1LL;
  v364 = v15;
  v365 = 0;
  v366 = -1;
  v367 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v15 + 3);
  v363 = -1LL;
  v19 = v15;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v15 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v358 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v20, &EventBlockThread, v21, 72);
      KeWaitForSingleObject((char *)v358 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v358, 0xFFFFFFFFLL, 0LL);
    v19 = v358;
  }
  v360 = -1;
  v361 = 0LL;
  v359 = 1;
  if ( *((_DWORD *)v19 + 44) != 1 )
    goto LABEL_16;
  if ( v358 != v364 )
  {
    COREACCESS::AcquireShared((__int64)v362, 0xFFFFFFFF, 0LL);
    v19 = (struct DXGADAPTER *)*((unsigned int *)v364 + 44);
    if ( (_DWORD)v19 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v362);
LABEL_16:
      COREACCESS::Release((COREACCESS *)v356);
      v18 = -1073741130;
      goto LABEL_429;
    }
  }
  v22 = *((_QWORD *)v15 + 319);
  v325 = 0;
  v324 = v22 + 384;
  if ( v22 == -384 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v19, a2);
    *(_QWORD *)(v23 + 24) = 660LL;
    WdLogEvent5_WdAssertion(v23);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v324 + 16) == CurrentThread )
  {
    v25 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v25 + 24) = 667LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( v325 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    v26[5] = &v324;
    v26[3] = 275LL;
    v26[4] = 4LL;
    v26[6] = 0LL;
    v26[7] = 0LL;
    WdLogEvent5_WdCriticalError(v26);
  }
  v27 = v324;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v27 + 16) == KeGetCurrentThread() )
  {
    v31 = *(_DWORD *)(v27 + 24);
    if ( v31 <= 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v32 + 24) = 559LL;
      WdLogEvent5_WdAssertion(v32);
      v31 = *(_DWORD *)(v27 + 24);
    }
    v33 = v31 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v27, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v34 = *(_DWORD *)(v27 + 28);
        if ( v34 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(XHot, &EventBlockThread, Height, v34);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v27 + 8));
      ExAcquirePushLockExclusiveEx(v27, 0LL);
    }
    if ( *(_QWORD *)(v27 + 16) )
    {
      v35 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v35 + 24) = 583LL;
      WdLogEvent5_WdAssertion(v35);
    }
    if ( *(_DWORD *)(v27 + 24) )
    {
      v36 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v36 + 24) = 584LL;
      WdLogEvent5_WdAssertion(v36);
    }
    *(_QWORD *)(v27 + 16) = KeGetCurrentThread();
    v33 = 1;
  }
  *(_DWORD *)(v27 + 24) = v33;
  v325 = 1;
  if ( a9 )
  {
    if ( v11->Flags.Value != 2 )
      goto LABEL_53;
    Width = v11->Width;
    XHot = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( (unsigned int)Width > *(_DWORD *)(XHot + 1872) )
      goto LABEL_53;
    Height = (const GUID *)v11->Height;
    if ( (unsigned int)Height > *(_DWORD *)(XHot + 1876) )
      goto LABEL_53;
    if ( v11->Pitch != 4 * (_DWORD)Width )
      goto LABEL_53;
    XHot = *(unsigned int *)(*(_QWORD *)(XHot + 2552) + 80LL);
    if ( v11->VidPnSourceId >= (unsigned int)XHot )
      goto LABEL_53;
    if ( !v11->pPixels )
      goto LABEL_53;
    XHot = v11->XHot;
    if ( (unsigned int)XHot >= (unsigned int)Width )
      goto LABEL_53;
    YHot = v11->YHot;
    if ( YHot >= (unsigned int)Height )
      goto LABEL_53;
    *((_DWORD *)this + 937) = XHot;
    *((_DWORD *)this + 938) = YHot;
    if ( (_DWORD)XHot == -1 && YHot == -1 )
      goto LABEL_53;
    Width = (unsigned int)(XHot + a2->X);
    if ( (int)Width < *((_DWORD *)a4 + 6)
      || (int)Width >= *((_DWORD *)a4 + 8)
      || (Width = a2->Y + YHot, (int)Width < *((_DWORD *)a4 + 7))
      || (int)Width >= *((_DWORD *)a4 + 9) )
    {
LABEL_53:
      v38 = (_QWORD *)WdLogNewEntry5_WdError(XHot, Width, Height);
      v38[3] = *((int *)v15 + 70);
      v38[4] = *((unsigned int *)v15 + 69);
      v38[5] = *((unsigned int *)this + 4);
      WdLogEvent5_WdError(v38);
      LODWORD(v39) = -1073741811;
LABEL_425:
      v320 = (int)v39;
      goto LABEL_426;
    }
  }
  if ( a8 )
  {
    if ( *((_DWORD *)v15 + 432) < 0x7000u )
    {
      v40 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v40 + 24) = 1137LL;
      WdLogEvent5_WdAssertion(v40);
    }
    PristineCursor = DISPLAY_SOURCE::GetPristineCursor(this, 0);
    v11 = PristineCursor;
    v316 = PristineCursor;
    if ( !PristineCursor->pPixels )
    {
      LODWORD(v39) = -1073741811;
      goto LABEL_425;
    }
    Width = PristineCursor->Width;
    v42 = (PristineCursor->Flags.Value & 1) + 1;
    v328 = PristineCursor->Width;
    XHot = PristineCursor->Height * v42;
    v327 = XHot;
  }
  else
  {
    v327 = a7;
    v328 = a6;
  }
  if ( (*((_DWORD *)v15 + 77) & 0x100) == 0 )
  {
    XHot = **((unsigned int **)v15 + 307);
    if ( (XHot & 8) != 0 )
      goto LABEL_423;
  }
  v43 = *((unsigned int *)this + 4);
  v355.VidPnSourceId = v43;
  v44 = *((_QWORD *)v15 + 319);
  if ( (unsigned int)v43 >= *(_DWORD *)(v44 + 80) )
  {
    v45 = WdLogNewEntry5_WdAssertion(XHot, Width);
    *(_QWORD *)(v45 + 24) = 5823LL;
    WdLogEvent5_WdAssertion(v45);
  }
  v46 = 3968 * v43;
  if ( !*(_BYTE *)(3968 * v43 + *(_QWORD *)(v44 + 112) + 720) )
  {
    v304 = (_QWORD *)WdLogNewEntry5_WdError(v46, Width, Height);
    LODWORD(v39) = -1073741823;
    v304[3] = -1073741823LL;
    v304[4] = *((unsigned int *)this + 4);
    v304[5] = v11->Flags.Value;
    v304[6] = a5;
    WdLogEvent5_WdError(v304);
    goto LABEL_425;
  }
  if ( (*((_DWORD *)v15 + 77) & 0x20) != 0 && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*((DXGADAPTER ***)v15 + 319)) )
  {
LABEL_423:
    LODWORD(v39) = -1073741823;
    goto LABEL_425;
  }
  v47 = *((unsigned int *)this + 267);
  v48 = 1;
  v312 = 1;
  v314 = 1;
  if ( (_DWORD)v47 == -1 )
    goto LABEL_73;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v15 + 20) )
    ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v15 + 18));
  v49 = *((_QWORD *)v15 + 319);
  if ( v49 )
  {
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v15 + 20) )
      ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v15 + 18));
    v55 = *((_QWORD *)v15 + 319);
    if ( !v55 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v46, Width);
      WdLogEvent5_WdAssertion(v56);
      v55 = *((_QWORD *)v15 + 319);
    }
    v57 = *(_QWORD *)(v55 + 96);
    if ( !v57 )
    {
      v58 = WdLogNewEntry5_WdError(v46, Width, Height);
      v15 = v315;
      *(_QWORD *)(v58 + 24) = v315;
      WdLogEvent5_WdError(v58);
      v59 = -1073741811;
      v62 = WdLogNewEntry5_WdAssertion(v61, v60);
      *(_QWORD *)(v62 + 24) = -1073741811LL;
      WdLogEvent5_WdAssertion(v62);
      v48 = 1;
      goto LABEL_102;
    }
    if ( v57 == -168 )
    {
      v63 = WdLogNewEntry5_WdAssertion(v46, Width);
      WdLogEvent5_WdAssertion(v63);
    }
    KeAcquireGuardedMutex((PKGUARDED_MUTEX)(v57 + 168));
    v65 = v57 + 128;
    v66 = *(_QWORD *)(v57 + 128);
    if ( v66 == v57 + 128 )
      goto LABEL_97;
    v67 = v66 - 16;
    if ( !v66 )
      v67 = 0LL;
    if ( !v67 )
      goto LABEL_97;
    while ( *(_DWORD *)(v67 + 44) != (_DWORD)v47 )
    {
      v68 = *(_QWORD *)(v67 + 16);
      if ( v68 != v65 )
      {
        v67 = v68 - 16;
        if ( !v68 )
          v67 = 0LL;
        if ( v67 )
          continue;
      }
      goto LABEL_97;
    }
    if ( *(_DWORD *)(v67 + 432) != 1 )
      v67 = *(_QWORD *)(v67 + 440);
    if ( v67 )
    {
      if ( v57 == -168 )
      {
        v77 = WdLogNewEntry5_WdAssertion(v65, v64);
        WdLogEvent5_WdAssertion(v77);
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v57 + 168));
      if ( *(_DWORD *)(v67 + 432) != 1 )
      {
        v80 = WdLogNewEntry5_WdAssertion(v79, v78);
        WdLogEvent5_WdAssertion(v80);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v67 + 296), 1u);
      v81 = *(_DWORD *)(v67 + 592) || (*(_DWORD *)(v67 + 40) & 0x80u) != 0;
      ExReleaseResourceLite((PERESOURCE)(v67 + 296));
      KeLeaveCriticalRegion();
      if ( v81 )
      {
        v76 = 1;
        v48 = 1;
        goto LABEL_101;
      }
    }
    else
    {
LABEL_97:
      v69 = WdLogNewEntry5_WdTrace(v65, v64);
      *(_QWORD *)(v69 + 24) = v47;
      *(_QWORD *)(v69 + 32) = v57;
      if ( v57 == -168 )
      {
        v72 = WdLogNewEntry5_WdAssertion(v71, v70);
        WdLogEvent5_WdAssertion(v72);
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v57 + 168));
      v75 = WdLogNewEntry5_WdDmmEvent(v74, v73);
      *(_QWORD *)(v75 + 24) = v47;
      *(_QWORD *)(v75 + 32) = v315;
      WdLogEvent5_WdDmmEvent(v75);
    }
    v76 = *(_BYTE *)(v49 + 234) == 0;
    v48 = *(_BYTE *)(v49 + 233) == 0;
LABEL_101:
    v15 = v315;
    v59 = 0;
    v312 = v48;
    v314 = v76;
LABEL_102:
    v51 = v59;
    if ( v59 >= 0 )
      goto LABEL_75;
    goto LABEL_74;
  }
  v50 = WdLogNewEntry5_WdError(v46, Width, Height);
  *(_QWORD *)(v50 + 24) = 8960LL;
  WdLogEvent5_WdError(v50);
  v48 = 1;
LABEL_73:
  v51 = -1073741811;
LABEL_74:
  v52 = (_QWORD *)WdLogNewEntry5_WdError(v46, Width, Height);
  v52[3] = *((unsigned int *)this + 4);
  v52[4] = *((int *)v15 + 70);
  v52[5] = *((unsigned int *)v15 + 69);
  v52[6] = v51;
  WdLogEvent5_WdError(v52);
LABEL_75:
  v320 = -1073741801;
  if ( v48 && v314 && !*((_BYTE *)this + 668) )
  {
    LODWORD(v39) = ADAPTER_DISPLAY::DdiSetPointerShape(*((ADAPTER_DISPLAY **)v15 + 319), v316);
    if ( (int)v39 < 0 )
      goto LABEL_425;
    goto LABEL_326;
  }
  v82 = *((_QWORD *)this + 1);
  v83 = *((unsigned int *)this + 4);
  v322 = v82;
  if ( v48 )
  {
    CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v82, (unsigned int)v83, 1LL);
    goto LABEL_212;
  }
  if ( *(_BYTE *)(v82 + 233) )
  {
    v84 = *(unsigned int *)(*(_QWORD *)(v82 + 112) + 3968 * v83 + 1040);
    if ( (_DWORD)v84 != 1 )
    {
      v84 = (unsigned int)(v84 - 2);
      if ( !(_DWORD)v84 )
      {
        CurrentOrientation = D3DKMDT_VPPR_ROTATE90;
        goto LABEL_126;
      }
      v84 = (unsigned int)(v84 - 1);
      if ( !(_DWORD)v84 )
      {
        CurrentOrientation = D3DKMDT_VPPR_ROTATE180;
        goto LABEL_126;
      }
      if ( (_DWORD)v84 == 1 )
      {
        CurrentOrientation = D3DKMDT_VPPR_ROTATE270;
        goto LABEL_126;
      }
      v85 = WdLogNewEntry5_WdError(v84, Width, Height);
      *(_QWORD *)(v85 + 24) = *(int *)(*(_QWORD *)(v82 + 112) + 3968 * v83 + 1040);
      *(_QWORD *)(v85 + 32) = *(_QWORD *)(v82 + 16);
      WdLogEvent5_WdError(v85);
    }
    CurrentOrientation = D3DKMDT_VPPR_IDENTITY;
LABEL_126:
    v86 = *(_QWORD *)(v82 + 16);
    if ( !v86 )
    {
      v87 = WdLogNewEntry5_WdError(v84, Width, Height);
      *(_QWORD *)(v87 + 24) = 0LL;
      WdLogEvent5_WdError(v87);
      goto LABEL_212;
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v86 + 160) )
      ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v86 + 144));
    v88 = *(_QWORD *)(v86 + 2552);
    if ( !v88 || (v90 = *(_QWORD *)(v88 + 88)) == 0 )
    {
      v89 = WdLogNewEntry5_WdError(v84, Width, Height);
      *(_QWORD *)(v89 + 24) = v86;
      WdLogEvent5_WdError(v89);
      goto LABEL_212;
    }
    v91 = *(_QWORD *)(v90 + 40);
    v339 = *(_QWORD *)(v88 + 88);
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v91 + 16) == KeGetCurrentThread() )
    {
      v94 = *(_DWORD *)(v91 + 24);
      if ( v94 <= 0 )
      {
        v95 = WdLogNewEntry5_WdAssertion(v93, v92);
        *(_QWORD *)(v95 + 24) = 559LL;
        WdLogEvent5_WdAssertion(v95);
        v94 = *(_DWORD *)(v91 + 24);
      }
      v96 = v94 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v91, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v98 = *(_DWORD *)(v91 + 28);
          if ( v98 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q((__int64)v93, &EventBlockThread, v97, v98);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v91 + 8));
        ExAcquirePushLockExclusiveEx(v91, 0LL);
      }
      if ( *(_QWORD *)(v91 + 16) )
      {
        v99 = WdLogNewEntry5_WdAssertion(v93, v92);
        *(_QWORD *)(v99 + 24) = 583LL;
        WdLogEvent5_WdAssertion(v99);
      }
      if ( *(_DWORD *)(v91 + 24) )
      {
        v100 = WdLogNewEntry5_WdAssertion(v93, v92);
        *(_QWORD *)(v100 + 24) = 584LL;
        WdLogEvent5_WdAssertion(v100);
      }
      *(_QWORD *)(v91 + 16) = KeGetCurrentThread();
      v96 = 1;
    }
    *(_DWORD *)(v91 + 24) = v96;
    v101 = *(_QWORD *)(v90 + 88);
    if ( !v101 )
    {
      v331 = 0LL;
LABEL_154:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v93, v92) + 24) = v86;
LABEL_210:
      auto_rc<DMMVIDPN const>::reset(&v331, 0LL, v103);
      EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v339);
      goto LABEL_212;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v101 + 32));
    v102 = *(_QWORD *)(v90 + 88);
    v331 = v102;
    if ( !v102 )
      goto LABEL_154;
    v104 = v102 + 96;
    v326 = -1;
    v105 = *(_QWORD *)(v102 + 120);
    v106 = v102 + 120;
    v107 = 0LL;
    if ( v105 == v102 + 120 )
      goto LABEL_208;
    v93 = (_QWORD *)(v105 - 8);
    if ( v105 != 8 )
    {
      while ( *(_DWORD *)(v93[11] + 24LL) != (_DWORD)v83 )
      {
        v108 = v93[1];
        v93 = (_QWORD *)(v108 - 8);
        if ( v108 == v106 )
          v93 = 0LL;
        if ( !v93 )
          goto LABEL_162;
      }
      v326 = *(_DWORD *)(v93[12] + 24LL);
      v109 = (void (__fastcall ***)(_QWORD, __int64))(v102 + 24);
      v110 = _InterlockedDecrement((volatile signed __int32 *)(v102 + 32));
      if ( v110 )
      {
        if ( v110 < 0 )
        {
          v111 = WdLogNewEntry5_WdError(v109, 0LL, v106);
          *(_QWORD *)(v111 + 24) = v110;
          WdLogEvent5_WdError(v111);
        }
      }
      else if ( v102 != -24 )
      {
        (**v109)(v109, 1LL);
      }
      v332 = v326;
      v112 = *(_QWORD *)(v90 + 40);
      if ( *(struct _KTHREAD **)(v112 + 16) != KeGetCurrentThread() )
      {
        v113 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v109, v107);
        v113[3] = 275LL;
        v113[4] = 4LL;
        v113[5] = v112;
        v113[6] = 0LL;
        v113[7] = 0LL;
        WdLogEvent5_WdCriticalError(v113);
      }
      v114 = *(_DWORD *)(v112 + 24);
      if ( v114 <= 0 )
      {
        v115 = WdLogNewEntry5_WdAssertion(v109, v107);
        *(_QWORD *)(v115 + 24) = 603LL;
        WdLogEvent5_WdAssertion(v115);
        v114 = *(_DWORD *)(v112 + 24);
      }
      v116 = v114 - 1;
      *(_DWORD *)(v112 + 24) = v116;
      if ( !v116 )
      {
        *(_QWORD *)(v112 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v112, 0LL);
      }
      KeLeaveCriticalRegion();
      v120 = v332;
      v121 = *(_QWORD *)(v322 + 16);
      if ( v121 && v332 != -1 )
      {
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v121 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v121 + 144));
        v122 = *(_QWORD *)(v121 + 2552);
        if ( !v122 )
        {
          v123 = WdLogNewEntry5_WdAssertion(v118, v117);
          WdLogEvent5_WdAssertion(v123);
          v122 = *(_QWORD *)(v121 + 2552);
        }
        v124 = *(_QWORD *)(v122 + 96);
        if ( v124 )
        {
          if ( v124 == -168 )
          {
            v126 = WdLogNewEntry5_WdAssertion(v118, v117);
            WdLogEvent5_WdAssertion(v126);
          }
          KeAcquireGuardedMutex((PKGUARDED_MUTEX)(v124 + 168));
          v128 = v124 + 128;
          v129 = *(_QWORD *)(v124 + 128);
          if ( v129 != v124 + 128 )
          {
            v130 = v129 - 16;
            if ( !v129 )
              v130 = 0LL;
            if ( v130 )
            {
              while ( *(_DWORD *)(v130 + 44) != (_DWORD)v120 )
              {
                v131 = *(_QWORD *)(v130 + 16);
                if ( v131 != v128 )
                {
                  v130 = v131 - 16;
                  if ( !v131 )
                    v130 = 0LL;
                  if ( v130 )
                    continue;
                }
                goto LABEL_195;
              }
              if ( *(_DWORD *)(v130 + 432) != 1 )
                v130 = *(_QWORD *)(v130 + 440);
              if ( v130 )
              {
                if ( v124 == -168 )
                {
                  v137 = WdLogNewEntry5_WdAssertion(v128, v127);
                  WdLogEvent5_WdAssertion(v137);
                }
                KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v124 + 168));
                KeEnterCriticalRegion();
                ExAcquireResourceSharedLite((PERESOURCE)(v130 + 296), 1u);
                v138 = *(_DWORD *)(v130 + 456);
                v139 = *(_DWORD *)(v130 + 448);
                ExReleaseResourceLite((PERESOURCE)(v130 + 296));
                KeLeaveCriticalRegion();
                v136 = 0;
                if ( v138 != v139 )
                  v136 = v138;
                goto LABEL_199;
              }
            }
          }
LABEL_195:
          v132 = WdLogNewEntry5_WdTrace(v128, v127);
          *(_QWORD *)(v132 + 24) = v120;
          *(_QWORD *)(v132 + 32) = v124;
          if ( v124 == -168 )
          {
            v135 = WdLogNewEntry5_WdAssertion(v134, v133);
            WdLogEvent5_WdAssertion(v135);
          }
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v124 + 168));
        }
        else
        {
          v125 = WdLogNewEntry5_WdError(v118, v117, v119);
          *(_QWORD *)(v125 + 24) = v121;
          WdLogEvent5_WdError(v125);
        }
      }
      v136 = 0;
LABEL_199:
      v348 = v136;
      CurrentOrientation = (((_BYTE)v136 + (_BYTE)CurrentOrientation - 1) & 3) + 1;
      goto LABEL_212;
    }
LABEL_162:
    if ( v105 == v106 || v105 == 8 )
    {
LABEL_208:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v93, 0LL) + 24) = v104;
    }
    else
    {
      v140 = WdLogNewEntry5_WdTrace(v93, 0LL);
      *(_QWORD *)(v140 + 24) = v83;
      *(_QWORD *)(v140 + 32) = v104;
    }
    v143 = (_QWORD *)WdLogNewEntry5_WdTrace(v142, v141);
    v143[3] = 0LL;
    v143[4] = v83;
    v143[5] = v104;
    v143[6] = -1071774919LL;
    goto LABEL_210;
  }
  CurrentOrientation = D3DKMDT_VPPR_IDENTITY;
LABEL_212:
  v144 = (const struct _DXGK_DRIVERCAPS *)((char *)v315 + 1848);
  v145 = *((_DWORD *)v315 + 468);
  if ( v316->Width > v145 )
    goto LABEL_423;
  v146 = v316->Height;
  v147 = *((_DWORD *)v315 + 469);
  if ( v146 > v147 || v316->Pitch * ((v316->Flags.Value & 1) + 1) * v146 > 4 * (unsigned __int64)(v145 * v147) )
    goto LABEL_423;
  v148 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v148 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v148 + 144)) )
  {
    v151 = WdLogNewEntry5_WdAssertion(v150, v149);
    *(_QWORD *)(v151 + 24) = 5101LL;
    WdLogEvent5_WdAssertion(v151);
  }
  v152 = (void *)*((_QWORD *)this + 101);
  v153 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( !v152 )
  {
    v154 = 4LL * (unsigned int)(*(_DWORD *)(v153 + 1872) * *(_DWORD *)(v153 + 1876));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v153 + 1872) * *(_DWORD *)(v153 + 1876)), 4uLL) )
      v154 = -1LL;
    v155 = operator new[](v154, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 101) = v155;
    v152 = v155;
  }
  v156 = (UINT *)((char *)this + 784);
  if ( !v152 )
  {
    LODWORD(v39) = -1073741801;
    goto LABEL_425;
  }
  memset(v152, 0, 4 * *((unsigned int *)v315 + 469) * (unsigned __int64)*((unsigned int *)v315 + 468));
  v157 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v157 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v157 + 144)) )
  {
    v160 = WdLogNewEntry5_WdAssertion(v159, v158);
    *(_QWORD *)(v160 + 24) = 5126LL;
    WdLogEvent5_WdAssertion(v160);
  }
  v161 = (void *)*((_QWORD *)this + 106);
  v162 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( v161 )
    goto LABEL_231;
  v163 = 4LL * (unsigned int)(*(_DWORD *)(v162 + 1872) * *(_DWORD *)(v162 + 1876));
  if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v162 + 1872) * *(_DWORD *)(v162 + 1876)), 4uLL) )
    v163 = -1LL;
  v164 = operator new[](v163, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 106) = v164;
  v161 = v164;
  if ( v164 )
LABEL_231:
    memset(v161, 0, 4 * *(unsigned int *)(v162 + 1872) * (unsigned __int64)*(unsigned int *)(v162 + 1876));
  v165 = (int *)((char *)this + 824);
  if ( !*((_QWORD *)this + 106) )
  {
    LODWORD(v39) = -1073741801;
    goto LABEL_425;
  }
  v166 = v338;
  v319 = 0;
  if ( *((_BYTE *)this + 668) )
  {
    v346.right = *((_DWORD *)this + 168);
    v346.bottom = *((_DWORD *)this + 169);
    *(_QWORD *)&v346.left = 0LL;
    LODWORD(v39) = ScaleCursorShape(
                     &v346,
                     (const struct tagRECT *)((char *)v338 + 24),
                     CurrentOrientation,
                     v316,
                     (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824),
                     (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 784),
                     v144,
                     &v319);
    if ( (int)v39 < 0 )
      goto LABEL_425;
    v167 = v319;
  }
  else
  {
    v168 = v316;
    v333 = 0LL;
    v39 = v316;
    if ( ((CurrentOrientation - 2) & 0xFFFFFFFD) != 0 )
    {
      v169 = *((_DWORD *)this + 165) - *((_DWORD *)this + 163);
      v170 = *((_DWORD *)this + 166) - *((_DWORD *)this + 164);
    }
    else
    {
      v169 = *((_DWORD *)this + 166) - *((_DWORD *)this + 164);
      v170 = *((_DWORD *)this + 165) - *((_DWORD *)this + 163);
    }
    v171 = *((_DWORD *)v338 + 8) - *((_DWORD *)v338 + 6);
    v172 = *((_DWORD *)v338 + 9) - *((_DWORD *)v338 + 7);
    v333 = __PAIR64__(v170, v169);
    v334 = v171;
    v335 = v172;
    if ( v169 == v171 && v170 == v172 )
      goto LABEL_260;
    v173 = v316->Width * v169 + v171 - 1;
    v174 = v170 * v316->Height;
    v175 = v173 / v171;
    v336 = v175;
    v176 = (v174 + v172 - 1) / v172;
    v337 = v176;
    if ( !v175 || !v176 || v175 > *((_DWORD *)v315 + 468) || v176 > *((_DWORD *)v315 + 469) )
      goto LABEL_252;
    if ( (v316->Flags.Value & 1) != 0 )
    {
      ConvertMonochromeToColor(v316, (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 784));
      v39 = (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 784);
    }
    *v165 = 0;
    if ( (v39->Flags.Value & 4) == 0 || (v177 = !ContainsXor(v39), v178 = 4, v177) )
      v178 = 2;
    *v165 = v178;
    if ( (v39->Flags.Value & 6) == 0 )
    {
LABEL_252:
      LODWORD(v39) = -1073741637;
      goto LABEL_425;
    }
    LODWORD(v39) = ScaleCursorShapeCoreBilinear(
                     (const struct CURSOR_SCALING_INFO *)&v333,
                     v39,
                     (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824));
    v167 = (int)v39 >= 0;
    v319 = v167;
    if ( (int)v39 < 0 )
      goto LABEL_425;
  }
  if ( !v167 )
  {
    v168 = v316;
LABEL_260:
    v179 = v312;
    if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v312 )
    {
      RotateCursorShape(v168, (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 784), CurrentOrientation, v144);
      goto LABEL_265;
    }
    v182 = (void *)*((_QWORD *)this + 101);
    *v156 = v168->Flags.Value;
    *((_DWORD *)this + 197) = v168->Width;
    *((_DWORD *)this + 198) = v168->Height;
    *((_DWORD *)this + 199) = v168->Pitch;
    memmove(v182, v168->pPixels, v168->Pitch * v168->Height * ((v168->Flags.Value & 1) + 1));
    *((_DWORD *)this + 204) = v316->XHot;
    v181 = v316->YHot;
LABEL_264:
    *((_DWORD *)this + 205) = v181;
    goto LABEL_265;
  }
  v179 = v312;
  if ( CurrentOrientation == D3DKMDT_VPPR_IDENTITY || v312 )
  {
    v180 = (void *)*((_QWORD *)this + 101);
    *v156 = *v165;
    *((_DWORD *)this + 197) = *((_DWORD *)this + 207);
    *((_DWORD *)this + 198) = *((_DWORD *)this + 208);
    *((_DWORD *)this + 199) = *((_DWORD *)this + 209);
    memmove(
      v180,
      *((const void **)this + 106),
      *((_DWORD *)this + 209) * *((_DWORD *)this + 208) * ((*((_DWORD *)this + 206) & 1u) + 1));
    *((_DWORD *)this + 204) = *((_DWORD *)this + 214);
    v181 = *((_DWORD *)this + 215);
    goto LABEL_264;
  }
  RotateCursorShape(
    (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824),
    (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 784),
    CurrentOrientation,
    v144);
LABEL_265:
  v183 = *((_DWORD *)this + 165) - *((_DWORD *)this + 163);
  v184 = *((_DWORD *)this + 169);
  v185 = *((_DWORD *)this + 168);
  v186 = *((_BYTE *)this + 668);
  v187 = *(_OWORD *)((char *)this + 652);
  v188 = *((_DWORD *)this + 166) - *((_DWORD *)this + 164);
  v189 = *((_DWORD *)v166 + 8) - *((_DWORD *)v166 + 6);
  v190 = *((_DWORD *)v166 + 9) - *((_DWORD *)v166 + 7);
  v317 = v184;
  LODWORD(v322) = v185;
  v191 = v179;
  v347 = v187;
  if ( v186 )
  {
    v183 = v185;
    v188 = v184;
    v192 = 0;
    v193 = 0;
  }
  else
  {
    v193 = DWORD1(v347);
    v192 = v347;
    v317 = HIDWORD(v347);
    LODWORD(v322) = DWORD2(v347);
  }
  v194 = v329;
  X = v329->X;
  if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
  {
    v196 = v188 * X / v189;
    v197 = v183 * v329->Y;
  }
  else
  {
    v196 = v183 * X / v189;
    v197 = v188 * v329->Y;
  }
  v198 = (unsigned int)(v197 >> 31);
  v199 = v197 / v190;
  if ( v191 )
  {
    v355.X = v196 + v192;
    v200 = v199 + v193;
LABEL_288:
    v355.Y = v200;
    goto LABEL_289;
  }
  if ( CurrentOrientation < D3DKMDT_VPPR_ROTATE90 )
    goto LABEL_280;
  if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE90 )
  {
    v201 = v321;
    v203 = v199 + v192;
    v202 = v188 + v193 - *((_DWORD *)v321 + 198) - v196;
    goto LABEL_283;
  }
  v194 = (const struct _DXGKARG_SETPOINTERPOSITION *)(unsigned int)(CurrentOrientation - 3);
  if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE180 )
  {
    v201 = v321;
    v203 = v183 + v192 - *((_DWORD *)v321 + 197) - v196;
    v202 = v188 + v193 - *((_DWORD *)v321 + 198) - v199;
    goto LABEL_283;
  }
  if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE270 )
  {
    v201 = v321;
    v202 = v196 + v193;
    v203 = v183 + v192 - *((_DWORD *)v321 + 197) - v199;
  }
  else
  {
LABEL_280:
    if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY )
    {
      LODWORD(v198) = v197 % v190;
      v204 = WdLogNewEntry5_WdAssertion(v194, v198);
      *(_QWORD *)(v204 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v204);
    }
    v201 = v321;
    v203 = v196 + v192;
    v202 = v199 + v193;
  }
LABEL_283:
  v205 = v203 + *((_DWORD *)v201 + 197);
  v355.Y = v202;
  v355.X = v203;
  if ( v205 < v192 || v203 > (int)v322 || v202 + *((_DWORD *)v201 + 198) < v193 || v202 > v317 )
  {
    v355.X = v192 + v183 / 2;
    v200 = v193 + v188 / 2;
    goto LABEL_288;
  }
LABEL_289:
  v206 = v321;
  FillClipParams(
    (struct _DXGKARG_SETPOINTERSHAPE *)((char *)v321 + 784),
    v321,
    &v355,
    (struct CURSOR_CLIP_PARAMS *)v350);
  if ( !HIDWORD(v351) )
  {
    *((_DWORD *)v206 + 200) = *((_DWORD *)v206 + 4);
    v340 = -1;
    v341 = 0LL;
    v210 = *((_QWORD *)v315 + 319);
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
    {
      v342 = 1;
      v340 = 5018;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v207, &EventProfilerEnter, v208, 5018);
    }
    else
    {
      v342 = 0;
    }
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v340, 5018LL);
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v210 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v210 + 16) + 4248LL));
    CurrentIrql = KeGetCurrentIrql();
    v214 = 0LL;
    if ( CurrentIrql < 2u )
    {
      v215 = KeGetCurrentThread();
      if ( !v215 )
      {
        v216 = WdLogNewEntry5_WdAssertion(v212, v211);
        *(_QWORD *)(v216 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v216);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v212, v211);
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(v215) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached()
        && (ThreadWin32Thread = PsGetThreadWin32Thread(v215)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v214 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v214 )
        {
          v219 = *(_DWORD *)(v214 + 136);
LABEL_310:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v381,
            *(struct DXGADAPTER **)(v210 + 16));
          v39 = (const struct _DXGKARG_SETPOINTERSHAPE *)(*(int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v210 + 16)
                                                                                                + 432LL))(
                                                           *(_QWORD *)(*(_QWORD *)(v210 + 16) + 248LL),
                                                           (__int64)v206 + 784);
          if ( v381[0] )
            KeUnstackDetachProcess(&ApcState);
          if ( CurrentIrql != KeGetCurrentIrql() )
          {
            v222 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v221, v220);
            v222[3] = 275LL;
            v222[4] = 16LL;
            v222[5] = v210;
            v222[6] = CurrentIrql;
            v223 = KeGetCurrentIrql();
            v222[7] = v223;
            WdLogEvent5_WdCriticalError(v222);
          }
          if ( v214 && *(_DWORD *)(v214 + 136) != v219 )
          {
            v224 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v221, v220);
            v224[3] = 275LL;
            v224[4] = 38LL;
            v224[5] = *(int *)(v214 + 136);
            v224[6] = v219;
            v224[7] = 0LL;
            WdLogEvent5_WdCriticalError(v224);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v210 + 16) + 4248LL));
          v225 = (_QWORD *)WdLogNewEntry5_WdTrace(v221, v220);
          v225[3] = v39;
          v227 = *(_QWORD *)(*(_QWORD *)(v210 + 16) + 248LL);
          v225[4] = v227;
          v225[5] = *((unsigned int *)v206 + 196);
          v225[6] = *((unsigned int *)v206 + 197);
          v228 = *((unsigned int *)v206 + 198);
          v225[7] = v228;
          if ( (_DWORD)v39 && (_DWORD)v39 != -1073741801 && (_DWORD)v39 != -1073741637 )
          {
            v229 = WdLogNewEntry5_WdError(v228, v227, v226);
            *(_QWORD *)(v229 + 24) = v39;
            WdLogEvent5_WdError(v229);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v210 + 16));
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v340, v230);
          if ( v342 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v53, &EventProfilerExit, v54, v340);
          if ( (int)v39 < 0 )
            goto LABEL_425;
          v15 = v315;
          *((_BYTE *)v206 + 725) = 0;
          goto LABEL_326;
        }
      }
      else
      {
        v214 = 0LL;
      }
    }
    v219 = 0;
    goto LABEL_310;
  }
  ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(v206, 1);
  v39 = ClippedCursor;
  if ( !ClippedCursor->pPixels )
  {
    LODWORD(v39) = -1073741801;
    goto LABEL_425;
  }
  ClipCurrentCursor(
    (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)v206 + 784),
    ClippedCursor,
    (struct CURSOR_CLIP_PARAMS *)v350);
  v15 = v315;
  v39->VidPnSourceId = *((_DWORD *)v206 + 4);
  LODWORD(v39) = ADAPTER_DISPLAY::DdiSetPointerShape(*((ADAPTER_DISPLAY **)v315 + 319), v39);
  if ( (int)v39 < 0 )
    goto LABEL_425;
  *((_BYTE *)v206 + 725) = 1;
LABEL_326:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v311) = v355.Flags.0;
    LODWORD(v310) = v355.Y;
    LODWORD(v309) = v355.X;
    LODWORD(Timeout) = v355.VidPnSourceId;
    McTemplateK0pqtqq(v53, &EventSetPointerPosition, v54, a5, Timeout, v309, v310, v311);
  }
  v231 = *((_QWORD *)v15 + 319);
  v343 = -1;
  v344 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v345 = 1;
    v343 = 5019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v53, &EventProfilerEnter, v54, 5019);
  }
  else
  {
    v345 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v343, 5019LL);
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v231 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v231 + 16) + 4248LL));
  v234 = KeGetCurrentIrql();
  v235 = 0LL;
  if ( v234 < 2u )
  {
    v236 = KeGetCurrentThread();
    if ( !v236 )
    {
      v237 = WdLogNewEntry5_WdAssertion(v233, v232);
      *(_QWORD *)(v237 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v237);
    }
    v238 = PsGetCurrentProcessSessionId(v233, v232);
    if ( v238
      && (unsigned int)PsGetThreadSessionId(v236) == v238
      && !IsThreadCrossSessionAttached()
      && (v239 = PsGetThreadWin32Thread(v236)) != 0
      && *(_QWORD *)v239 )
    {
      v235 = *(_QWORD *)(*(_QWORD *)v239 + 80LL);
      if ( v235 )
      {
        v240 = *(_DWORD *)(v235 + 136);
        goto LABEL_345;
      }
    }
    else
    {
      v235 = 0LL;
    }
  }
  v240 = 0;
LABEL_345:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v383,
    *(struct DXGADAPTER **)(v231 + 16));
  v39 = (const struct _DXGKARG_SETPOINTERSHAPE *)(*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETPOINTERPOSITION *))(*(_QWORD *)(v231 + 16) + 424LL))(
                                                   *(_QWORD *)(*(_QWORD *)(v231 + 16) + 248LL),
                                                   &v355);
  if ( v383[0] )
    KeUnstackDetachProcess(&v384);
  if ( v234 != KeGetCurrentIrql() )
  {
    v243 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v242, v241);
    v243[3] = 275LL;
    v243[4] = 16LL;
    v243[5] = v231;
    v243[6] = v234;
    v244 = KeGetCurrentIrql();
    v243[7] = v244;
    WdLogEvent5_WdCriticalError(v243);
  }
  if ( v235 && *(_DWORD *)(v235 + 136) != v240 )
  {
    v245 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v242, v241);
    v245[3] = 275LL;
    v245[4] = 38LL;
    v245[5] = *(int *)(v235 + 136);
    v245[6] = v240;
    v245[7] = 0LL;
    WdLogEvent5_WdCriticalError(v245);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v231 + 16) + 4248LL));
  v246 = (_QWORD *)WdLogNewEntry5_WdTrace(v242, v241);
  v246[3] = v39;
  v248 = *(_QWORD *)(*(_QWORD *)(v231 + 16) + 248LL);
  v246[4] = v248;
  v246[5] = *(_BYTE *)&v355.Flags.0 & 1;
  v246[6] = v355.X;
  Y = v355.Y;
  v246[7] = v355.Y;
  if ( (_DWORD)v39 )
  {
    v250 = WdLogNewEntry5_WdError(Y, v248, v247);
    *(_QWORD *)(v250 + 24) = v39;
    WdLogEvent5_WdError(v250);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v231 + 16));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v343, v251);
  if ( v345 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v252, &EventProfilerExit, v253, v343);
  if ( (int)v39 < 0 )
    goto LABEL_425;
  v254 = 0LL;
  VidPnSourceId = v355.VidPnSourceId;
  v256 = v355.X;
  LODWORD(v322) = v355.X;
  v257 = (struct SESSION_VIEW *)*((_QWORD *)v338 + 6);
  v258 = (unsigned int)v355.Y;
  v318 = v355.Y;
  if ( v257 != (struct SESSION_VIEW *)((char *)v338 + 48) )
    v254 = (struct SESSION_VIEW *)((char *)v257 - 56);
  v259 = *(_BYTE *)&v355.Flags.0 & 1;
  v260 = *((_QWORD *)v315 + 319);
  v261 = v329->Y;
  v262 = v329->X;
  if ( v355.VidPnSourceId >= *(_DWORD *)(v260 + 80) )
  {
    v263 = WdLogNewEntry5_WdAssertion(v257, (unsigned int)v355.Y);
    *(_QWORD *)(v263 + 24) = 5508LL;
    WdLogEvent5_WdAssertion(v263);
    v258 = v318;
    v256 = v322;
  }
  v264 = 3968 * VidPnSourceId;
  *(_BYTE *)(3968 * VidPnSourceId + *(_QWORD *)(v260 + 112) + 724) = v259;
  if ( v259 )
  {
    *(_DWORD *)(v264 + *(_QWORD *)(v260 + 112) + 728) = v256;
    *(_DWORD *)(v264 + *(_QWORD *)(v260 + 112) + 732) = v258;
    *(_DWORD *)(v264 + *(_QWORD *)(v260 + 112) + 680) = v262;
    *(_DWORD *)(v264 + *(_QWORD *)(v260 + 112) + 684) = v261;
  }
  if ( a8 || *((_DWORD *)v315 + 432) < 0x7000u )
  {
LABEL_368:
    if ( v321 != v254 )
      goto LABEL_427;
    if ( !v325 )
    {
      v268 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v264, v258);
      v268[5] = &v324;
      v268[3] = 275LL;
      v268[4] = 4LL;
      v268[6] = 0LL;
      v268[7] = 0LL;
      WdLogEvent5_WdCriticalError(v268);
    }
    v269 = v324;
    v325 = 0;
    if ( *(struct _KTHREAD **)(v324 + 16) != KeGetCurrentThread() )
    {
      v270 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v264, v258);
      v270[3] = 275LL;
      v270[4] = 4LL;
      v270[5] = v269;
      v270[6] = 0LL;
      v270[7] = 0LL;
      WdLogEvent5_WdCriticalError(v270);
    }
    v271 = *(_DWORD *)(v269 + 24);
    if ( v271 <= 0 )
    {
      v272 = WdLogNewEntry5_WdAssertion(v264, v258);
      *(_QWORD *)(v272 + 24) = 603LL;
      WdLogEvent5_WdAssertion(v272);
      v271 = *(_DWORD *)(v269 + 24);
    }
    v273 = v271 - 1;
    *(_DWORD *)(v269 + 24) = v273;
    if ( !v273 )
    {
      *(_QWORD *)(v269 + 16) = 0LL;
      ExReleasePushLockExclusiveEx(v269, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( v358 != v364 )
      COREACCESS::Release((COREACCESS *)v362);
    if ( !v359 )
    {
      v276 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v275, v274);
      v276[5] = v356;
      v276[3] = 275LL;
      v276[4] = 4LL;
      v276[6] = 0LL;
      v276[7] = 0LL;
      WdLogEvent5_WdCriticalError(v276);
    }
    v359 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v358 + 20) )
      DXGADAPTER::ReleaseCoreResource(v358, v360, v361);
    v361 = 0LL;
    v360 = -1;
    v277 = v329->VidPnSourceId;
    v278 = v329->VidPnSourceId;
    v330 = 0LL;
    v323 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v315, v278, &v330, &v349, &v323, &v354, 0);
    v283 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v284 = (_QWORD *)WdLogNewEntry5_WdError(v281, v280, v282);
      v284[3] = v315;
      v284[4] = v277;
      v284[5] = v283;
      WdLogEvent5_WdError(v284);
      v288 = WdLogNewEntry5_WdWarning(v286, v285, v287);
      *(_QWORD *)(v288 + 24) = v315;
      *(_QWORD *)(v288 + 32) = v283;
      WdLogEvent5_WdWarning(v288);
      goto LABEL_427;
    }
    v289 = v323;
    if ( !v330 || !v323 )
    {
      v290 = WdLogNewEntry5_WdAssertion(v281, v280);
      *(_QWORD *)(v290 + 24) = 3134LL;
      WdLogEvent5_WdAssertion(v290);
    }
    v291 = *((_QWORD *)v289 + 319);
    v352[1] = v289;
    v292 = *(_QWORD *)(v291 + 104);
    _InterlockedIncrement64((volatile signed __int64 *)v289 + 3);
    v352[0] = -1LL;
    KeEnterCriticalRegion();
    v293 = v323;
    ExAcquirePushLockSharedEx((char *)v323 + 120, 0LL);
    v353 = 1;
    v371 = v293;
    v372 = 0;
    v373 = -1;
    v374 = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v289 + 3);
    v377 = v323;
    v370 = -1LL;
    v378 = 0;
    v379 = -1;
    v380 = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v289 + 3);
    v376 = -1LL;
    v296 = _InterlockedExchangeAdd64((volatile signed __int64 *)v330 + 3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v296 == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v330 + 2), v330);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v289 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v323 + 2), v323);
    if ( v372 )
    {
      v297 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v296, v294);
      v297[5] = v369;
      v297[3] = 275LL;
      v297[4] = 4LL;
      v297[6] = 0LL;
      v297[7] = 0LL;
      WdLogEvent5_WdCriticalError(v297);
    }
    v298 = v371;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v371 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v371 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v299, &EventBlockThread, v300, 72);
        KeWaitForSingleObject((char *)v371 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v371, 0xFFFFFFFFLL, 0LL);
      v298 = v371;
    }
    v373 = -1;
    v374 = 0LL;
    v372 = 1;
    if ( *((_DWORD *)v298 + 44) == 1 )
    {
      if ( v371 == v377
        || (COREACCESS::AcquireShared((__int64)v375, 0xFFFFFFFF, 0LL),
            v298 = (struct DXGADAPTER *)*((unsigned int *)v377 + 44),
            (_DWORD)v298 == 1) )
      {
        if ( (unsigned int)v277 < *(_DWORD *)(v292 + 52) )
        {
          lambda_a0b6a2c68ac68a3ec6fe6563bf8a6539_::_lambda_invoker_cdecl_(
            v292,
            (unsigned int)OUTPUTDUPL_MGR::ProcessPointerShapeChange,
            (_DWORD)v329,
            (_DWORD)v316,
            v328,
            v327);
          v302 = v377;
          if ( v377 )
          {
            if ( v378 )
            {
              COREACCESS::Release((COREACCESS *)v375);
              v302 = v377;
            }
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v302 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v302 + 2), v302);
          }
          v303 = v371;
          if ( v371 )
          {
            if ( v372 )
            {
              v372 = 0;
              v303 = v371;
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v371 + 20) )
              {
                DXGADAPTER::ReleaseCoreResource(v371, v373, v374);
                v303 = v371;
              }
              v374 = 0LL;
              v373 = -1;
            }
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v303 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v303 + 2), v303);
          }
          ExReleasePushLockSharedEx((char *)v293 + 120, 0LL);
          KeLeaveCriticalRegion();
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v289 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v323 + 2), v323);
          goto LABEL_427;
        }
        v301 = WdLogNewEntry5_WdError(v298, v294, v295);
        *(_QWORD *)(v301 + 24) = v277;
        WdLogEvent5_WdError(v301);
        goto LABEL_406;
      }
      COREACCESS::Release((COREACCESS *)v375);
    }
    COREACCESS::Release((COREACCESS *)v369);
LABEL_406:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v368);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v352);
    goto LABEL_427;
  }
  v265 = DISPLAY_SOURCE::GetPristineCursor(v321, v316->Pitch * v316->Height * ((v316->Flags.Value & 1) + 1));
  v266 = v265;
  pPixels = (void *)v265->pPixels;
  if ( pPixels )
  {
    v265->Flags.Value = v316->Flags.Value;
    v265->Width = v316->Width;
    v265->Height = v316->Height;
    v265->Pitch = v316->Pitch;
    memmove(pPixels, v316->pPixels, v316->Pitch * v316->Height * ((v316->Flags.Value & 1) + 1));
    v266->XHot = v316->XHot;
    v266->YHot = v316->YHot;
    goto LABEL_368;
  }
LABEL_426:
  v18 = v320;
LABEL_427:
  if ( v325 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v324);
LABEL_429:
  v305 = v364;
  if ( v364 )
  {
    if ( v365 )
    {
      COREACCESS::Release((COREACCESS *)v362);
      v305 = v364;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v305 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v305 + 2), v305);
  }
  v306 = v358;
  if ( v358 )
  {
    if ( v359 )
    {
      COREACCESS::Release((COREACCESS *)v356);
      v306 = v358;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v306 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v306 + 2), v306);
  }
  return v18;
}
