/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180024AE0
 * Callers:
 *     AudioSessionManagerGetCurrentSession @ 0x18001F000 (AudioSessionManagerGetCurrentSession.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180035480 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800D6830 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800D6D50 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800D8410 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800260A0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800261F0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180027BD0 (--0CAudioSession@@IEAA@XZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180027F50 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18002EDD0 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x180034B80 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800506B8 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BB2A0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800CDB3C (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x1800D0A28 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     WPP_SF_SS @ 0x1800D4CE8 (WPP_SF_SS.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800D53B4 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800D6208 (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x1800D6FB0 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x1800D7AA0 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 */

// Hidden C++ exception states: #wind=34
__int64 __fastcall CAudioSessionManager::CreateAudioSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct CAudioSession **a7)
{
  struct CAudioSessionInstanceId *v7; // r14
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  CAudioSession *v10; // rsi
  char *v11; // rdi
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 *i; // rdi
  int v19; // edx
  char *v20; // r14
  int v21; // eax
  __int64 v22; // rax
  char *v23; // r12
  struct CAudioSessionInstanceId *v24; // r14
  _WORD *v25; // rbx
  __int64 v26; // rdi
  unsigned int v27; // edi
  _WORD *v28; // rcx
  unsigned int v29; // r15d
  __int64 j; // rsi
  int v31; // edx
  int v32; // eax
  __int64 v33; // rax
  int v34; // ebx
  int v35; // r12d
  _QWORD *v36; // r14
  _QWORD *v37; // r15
  CAudioSession *v38; // rbx
  CAudioSession *v39; // r15
  int v40; // r14d
  _QWORD *v41; // rdi
  _QWORD *v42; // rsi
  const char *v43; // r9
  __int64 result; // rax
  unsigned int v45; // edi
  CAudioSession *v46; // rax
  CAudioSession *v47; // rbx
  CAudioSession *v48; // rcx
  GUID v49; // xmm6
  struct IAudioProcess *v50; // rbx
  char v51; // al
  struct CAudioSessionInstanceId *v52; // r13
  int v53; // eax
  unsigned int v54; // ebx
  CAudioSessionManager *v55; // rbx
  char *v56; // r15
  char *v57; // rsi
  _WORD *v58; // rbx
  __int64 v59; // rdi
  unsigned int v60; // edi
  _WORD *v61; // rcx
  __int64 v62; // rdx
  __int64 *k; // rbx
  CAudioSessionManager *v64; // rcx
  int v65; // ebx
  CAudioSessionManager *v66; // r13
  int v67; // eax
  unsigned int v68; // ebx
  int v69; // eax
  unsigned int v70; // ebx
  CAudioSession *v71; // r15
  unsigned int v72; // ebx
  unsigned int v73; // esi
  unsigned int v74; // edi
  char *v75; // rax
  unsigned int *v76; // r14
  ATL::CAtlException *v77; // rdx
  unsigned int *v78; // r8
  ATL::CAtlException *v79; // rax
  int v80; // ecx
  __int64 v81; // r11
  __int64 v82; // rcx
  int v83; // ebx
  __int64 v84; // r10
  ATL::CAtlException *v85; // rcx
  ATL::CAtlException *v86; // rdx
  ATL::CAtlException *v87; // rax
  int v88; // r8d
  int v89; // r10d
  __int64 v90; // r9
  HANDLE ProcessHeap; // rax
  CAudioSession *v92; // rbx
  __int64 v93; // rbx
  ATL::CAtlException *v94; // rbx
  int v95; // eax
  unsigned int v96; // ebx
  CPerEndpointVolumeAudioSession *v97; // rax
  int v98; // edx
  int v99; // eax
  __int64 v100; // rax
  __int64 Node; // rax
  unsigned int v102; // ebx
  CAudioSessionManager *v103; // rbx
  int v104; // eax
  unsigned int v105; // ebx
  char v106; // [rsp+40h] [rbp-638h]
  CAudioSession *v107; // [rsp+48h] [rbp-630h] BYREF
  CAudioSession *v108; // [rsp+50h] [rbp-628h] BYREF
  LPCRITICAL_SECTION v109; // [rsp+58h] [rbp-620h] BYREF
  char v110; // [rsp+60h] [rbp-618h]
  CAudioSession *v111; // [rsp+68h] [rbp-610h]
  struct CAudioSessionInstanceId *v112; // [rsp+70h] [rbp-608h]
  volatile signed __int32 *v113; // [rsp+78h] [rbp-600h] BYREF
  struct IAudioProcess *v114; // [rsp+80h] [rbp-5F8h]
  int v115; // [rsp+88h] [rbp-5F0h]
  int v116; // [rsp+8Ch] [rbp-5ECh] BYREF
  unsigned int v117; // [rsp+90h] [rbp-5E8h]
  __int64 v118; // [rsp+98h] [rbp-5E0h] BYREF
  __int64 v119; // [rsp+A0h] [rbp-5D8h] BYREF
  CAudioSessionManager *v120; // [rsp+A8h] [rbp-5D0h]
  __int128 v121; // [rsp+B0h] [rbp-5C8h]
  CAudioSession **v122; // [rsp+C0h] [rbp-5B8h]
  char v123; // [rsp+C8h] [rbp-5B0h]
  unsigned int v124; // [rsp+D0h] [rbp-5A8h] BYREF
  int v125; // [rsp+D4h] [rbp-5A4h]
  int v126; // [rsp+D8h] [rbp-5A0h]
  int v127; // [rsp+DCh] [rbp-59Ch]
  int v128; // [rsp+E0h] [rbp-598h]
  int v129; // [rsp+E4h] [rbp-594h]
  int v130; // [rsp+E8h] [rbp-590h]
  unsigned int v131; // [rsp+ECh] [rbp-58Ch]
  unsigned int v132; // [rsp+F0h] [rbp-588h]
  CAudioSession *v133; // [rsp+F8h] [rbp-580h] BYREF
  LPVOID Context; // [rsp+100h] [rbp-578h] BYREF
  unsigned int v135; // [rsp+108h] [rbp-570h]
  unsigned int v136; // [rsp+10Ch] [rbp-56Ch]
  unsigned int v137; // [rsp+110h] [rbp-568h]
  unsigned int v138; // [rsp+114h] [rbp-564h]
  WINBOOL fPending; // [rsp+118h] [rbp-560h] BYREF
  unsigned int v140; // [rsp+11Ch] [rbp-55Ch] BYREF
  __int128 v141; // [rsp+120h] [rbp-558h]
  char v142; // [rsp+130h] [rbp-548h]
  ATL::CAtlException *v143; // [rsp+138h] [rbp-540h]
  __int64 v144; // [rsp+140h] [rbp-538h]
  CAudioSession *v145; // [rsp+148h] [rbp-530h]
  struct CAudioSession **v146; // [rsp+150h] [rbp-528h]
  char *v147; // [rsp+158h] [rbp-520h] BYREF
  __int64 v148; // [rsp+160h] [rbp-518h] BYREF
  CAudioSession *v149; // [rsp+168h] [rbp-510h]
  unsigned int *v150; // [rsp+170h] [rbp-508h]
  __int64 v151; // [rsp+178h] [rbp-500h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+180h] [rbp-4F8h] BYREF
  char v153; // [rsp+188h] [rbp-4F0h]
  LPCRITICAL_SECTION v154; // [rsp+190h] [rbp-4E8h] BYREF
  char v155; // [rsp+198h] [rbp-4E0h]
  char *v156; // [rsp+1A0h] [rbp-4D8h] BYREF
  int v157; // [rsp+1A8h] [rbp-4D0h]
  int v158; // [rsp+1ACh] [rbp-4CCh]
  int v159; // [rsp+1B0h] [rbp-4C8h]
  int v160; // [rsp+1B4h] [rbp-4C4h]
  int v161; // [rsp+1B8h] [rbp-4C0h]
  int v162; // [rsp+1BCh] [rbp-4BCh]
  unsigned int v163; // [rsp+1C0h] [rbp-4B8h]
  unsigned int v164; // [rsp+1C4h] [rbp-4B4h]
  int v165; // [rsp+1C8h] [rbp-4B0h]
  int v166; // [rsp+1CCh] [rbp-4ACh]
  int v167; // [rsp+1D0h] [rbp-4A8h]
  int v168; // [rsp+1D8h] [rbp-4A0h]
  int v169; // [rsp+1E0h] [rbp-498h]
  int v170; // [rsp+1E8h] [rbp-490h]
  int v171; // [rsp+1ECh] [rbp-48Ch]
  int v172; // [rsp+1F0h] [rbp-488h]
  int v173; // [rsp+1F4h] [rbp-484h]
  unsigned int v174; // [rsp+1F8h] [rbp-480h]
  int v175; // [rsp+1FCh] [rbp-47Ch]
  int v176; // [rsp+200h] [rbp-478h]
  int v178; // [rsp+208h] [rbp-470h]
  int v179; // [rsp+20Ch] [rbp-46Ch]
  int v180; // [rsp+210h] [rbp-468h]
  int v181; // [rsp+218h] [rbp-460h]
  int v182; // [rsp+220h] [rbp-458h]
  int v183; // [rsp+228h] [rbp-450h]
  unsigned int v184; // [rsp+22Ch] [rbp-44Ch]
  int v185; // [rsp+230h] [rbp-448h]
  unsigned int v186; // [rsp+234h] [rbp-444h]
  unsigned int v187; // [rsp+238h] [rbp-440h]
  unsigned int v188; // [rsp+23Ch] [rbp-43Ch]
  unsigned int v189; // [rsp+240h] [rbp-438h]
  volatile signed __int32 *v190; // [rsp+248h] [rbp-430h]
  volatile signed __int32 *v191; // [rsp+250h] [rbp-428h]
  char *v192; // [rsp+258h] [rbp-420h]
  _WORD *v193; // [rsp+260h] [rbp-418h]
  _QWORD *v194; // [rsp+268h] [rbp-410h]
  char *v195; // [rsp+270h] [rbp-408h]
  __int64 v196; // [rsp+278h] [rbp-400h]
  __int64 v197; // [rsp+280h] [rbp-3F8h]
  __int64 *v198; // [rsp+288h] [rbp-3F0h]
  _QWORD *v199; // [rsp+290h] [rbp-3E8h]
  CAudioSession *v200; // [rsp+298h] [rbp-3E0h]
  CAudioSession *v201; // [rsp+2A0h] [rbp-3D8h]
  CAudioSession *v202; // [rsp+2A8h] [rbp-3D0h]
  _WORD *v203; // [rsp+2B0h] [rbp-3C8h]
  _QWORD *v204; // [rsp+2B8h] [rbp-3C0h]
  char *v205; // [rsp+2C0h] [rbp-3B8h]
  __int64 v206; // [rsp+2C8h] [rbp-3B0h]
  __int64 *v207; // [rsp+2D0h] [rbp-3A8h]
  CAudioSession *v208; // [rsp+2D8h] [rbp-3A0h] BYREF
  CAudioSessionManager *v209; // [rsp+2E0h] [rbp-398h]
  struct IAudioProcess *v210; // [rsp+2E8h] [rbp-390h]
  struct CAudioSessionInstanceId *v211; // [rsp+2F0h] [rbp-388h]
  ATL::CAtlException *v212; // [rsp+2F8h] [rbp-380h]
  unsigned __int64 v213; // [rsp+300h] [rbp-378h]
  __int64 v214; // [rsp+308h] [rbp-370h]
  ATL::CAtlException *v215; // [rsp+310h] [rbp-368h]
  unsigned __int64 v216; // [rsp+318h] [rbp-360h]
  __int64 v217; // [rsp+320h] [rbp-358h]
  _QWORD *v218; // [rsp+328h] [rbp-350h]
  __int128 v219; // [rsp+330h] [rbp-348h]
  int v220; // [rsp+340h] [rbp-338h]
  int v221; // [rsp+344h] [rbp-334h]
  int v222; // [rsp+348h] [rbp-330h]
  _DWORD v223[2]; // [rsp+350h] [rbp-328h] BYREF
  __int64 v224; // [rsp+358h] [rbp-320h]
  int v225; // [rsp+360h] [rbp-318h]
  unsigned int v226; // [rsp+364h] [rbp-314h]
  __int128 v227; // [rsp+368h] [rbp-310h]
  CAudioSession **v228; // [rsp+378h] [rbp-300h]
  void **v229; // [rsp+380h] [rbp-2F8h]
  unsigned int *v230; // [rsp+388h] [rbp-2F0h]
  CAudioSession *v231; // [rsp+390h] [rbp-2E8h]
  union _RTL_RUN_ONCE *v232; // [rsp+398h] [rbp-2E0h] BYREF
  int v233; // [rsp+3A0h] [rbp-2D8h]
  CAudioSession **v234; // [rsp+3A8h] [rbp-2D0h]
  char v235; // [rsp+3B0h] [rbp-2C8h]
  __int64 v236; // [rsp+3B8h] [rbp-2C0h]
  __int64 v237; // [rsp+3C0h] [rbp-2B8h]
  __int64 v238; // [rsp+3C8h] [rbp-2B0h]
  _WORD *v239; // [rsp+3D0h] [rbp-2A8h]
  __int64 v240; // [rsp+3D8h] [rbp-2A0h]
  __int64 v241; // [rsp+3E0h] [rbp-298h]
  char *v242; // [rsp+3E8h] [rbp-290h]
  __int64 v243; // [rsp+3F0h] [rbp-288h]
  char *v244; // [rsp+3F8h] [rbp-280h]
  __int64 v245; // [rsp+400h] [rbp-278h]
  __int64 v246; // [rsp+408h] [rbp-270h]
  __int64 v247; // [rsp+410h] [rbp-268h]
  __int64 v248; // [rsp+418h] [rbp-260h]
  char *v249; // [rsp+420h] [rbp-258h]
  char *v250; // [rsp+428h] [rbp-250h]
  char *v251; // [rsp+430h] [rbp-248h]
  char *v252; // [rsp+438h] [rbp-240h]
  char *v253; // [rsp+440h] [rbp-238h]
  _QWORD *v254; // [rsp+448h] [rbp-230h]
  __int64 v255; // [rsp+450h] [rbp-228h]
  CAudioSession *v256; // [rsp+458h] [rbp-220h]
  CAudioSession *v257; // [rsp+460h] [rbp-218h]
  CPerEndpointVolumeAudioSession *v258; // [rsp+468h] [rbp-210h]
  CAudioSession *v259; // [rsp+470h] [rbp-208h]
  __int64 v260; // [rsp+478h] [rbp-200h]
  __int64 v261; // [rsp+480h] [rbp-1F8h]
  _WORD *v262; // [rsp+488h] [rbp-1F0h]
  __int64 v263; // [rsp+490h] [rbp-1E8h]
  __int64 v264; // [rsp+498h] [rbp-1E0h]
  char *v265; // [rsp+4A0h] [rbp-1D8h]
  __int64 *v266; // [rsp+4A8h] [rbp-1D0h]
  char *v267; // [rsp+4B0h] [rbp-1C8h]
  __int64 *v268; // [rsp+4B8h] [rbp-1C0h]
  __int64 v269; // [rsp+4C0h] [rbp-1B8h]
  __int64 v270; // [rsp+4C8h] [rbp-1B0h]
  char *v271; // [rsp+4D0h] [rbp-1A8h]
  char v272[8]; // [rsp+4D8h] [rbp-1A0h] BYREF
  __int64 v273; // [rsp+4E0h] [rbp-198h]
  __int64 v274; // [rsp+4E8h] [rbp-190h]
  ATL::CAtlException *v275[13]; // [rsp+4F0h] [rbp-188h] BYREF
  __int64 v276; // [rsp+558h] [rbp-120h]
  volatile signed __int32 *v277; // [rsp+560h] [rbp-118h]
  volatile signed __int32 *v278; // [rsp+568h] [rbp-110h]
  __int64 v279; // [rsp+570h] [rbp-108h]
  char *v280; // [rsp+578h] [rbp-100h]
  CAudioSession *v281; // [rsp+580h] [rbp-F8h]
  GUID v282; // [rsp+590h] [rbp-E8h]
  GUID v283; // [rsp+5A0h] [rbp-D8h] BYREF
  __int64 v284; // [rsp+5B0h] [rbp-C8h]
  __int64 *v285; // [rsp+5B8h] [rbp-C0h]
  __int64 v286; // [rsp+5C0h] [rbp-B8h]
  char *v287; // [rsp+5C8h] [rbp-B0h]
  char v288[16]; // [rsp+5D0h] [rbp-A8h] BYREF
  __int64 v289; // [rsp+5E0h] [rbp-98h] BYREF
  int v290; // [rsp+5E8h] [rbp-90h]
  int v291; // [rsp+5ECh] [rbp-8Ch]
  void *v292; // [rsp+5F0h] [rbp-88h]
  int v293; // [rsp+5F8h] [rbp-80h]
  int v294; // [rsp+5FCh] [rbp-7Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+600h] [rbp-78h] BYREF
  int *v296; // [rsp+610h] [rbp-68h]
  int v297; // [rsp+618h] [rbp-60h]
  int v298; // [rsp+61Ch] [rbp-5Ch]
  wil::details::in1diag3 *retaddr; // [rsp+678h] [rbp+0h]

  v275[12] = (ATL::CAtlException *)-2LL;
  v117 = a4;
  v7 = a3;
  v112 = a3;
  v114 = a2;
  v120 = this;
  v209 = this;
  v210 = a2;
  v211 = a3;
  v146 = a7;
  try
  {
    v106 = 1;
    *a7 = 0LL;
    v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    v109 = (LPCRITICAL_SECTION)((char *)this + 16);
    v110 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v109);
    v111 = 0LL;
    v108 = 0LL;
    v133 = 0LL;
    v10 = 0LL;
    v145 = 0LL;
    lpCriticalSection = v9;
    v153 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v11 = (char *)this + 56;
    v192 = v11;
    v276 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
    v113 = (volatile signed __int32 *)(v276 + 24);
    v220 = CAudioSessionInstanceId::ToString(v7, &v113);
    if ( v220 < 0 )
    {
      v191 = v113 - 6;
      if ( _InterlockedExchangeAdd(v113 - 2, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v191 + 8LL))(*(_QWORD *)v191);
      v15 = 0;
      v135 = 0;
      v111 = v108;
      v10 = v145;
      v11 = v192;
    }
    else
    {
      v12 = v113;
      v13 = *((int *)v113 - 4);
      v221 = v13;
      v277 = v113 - 6;
      v222 = 1 - *((_DWORD *)v113 - 2);
      v225 = *((_DWORD *)v113 - 3) - v13;
      if ( (v222 | v225) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v113, (unsigned int)v13);
        v12 = v113;
      }
      _o__wcsupr_s(v12, (int)v13 + 1);
      if ( (int)v13 < 0 || (int)v13 > *((_DWORD *)v113 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v113 - 4) = v13;
      *((_WORD *)v113 + v13) = 0;
      v14 = v113;
      if ( !v113 )
        ATL::AtlThrowImpl(-2147467259);
      v15 = 0;
      v132 = 0;
      v190 = v113;
      while ( *(_WORD *)v14 )
      {
        v15 = *(unsigned __int16 *)v14 + 33 * v15;
        v132 = v15;
        v14 = (volatile signed __int32 *)((char *)v14 + 2);
        v190 = v14;
      }
      v278 = v113 - 6;
      ATL::CStringData::Release((ATL::CStringData *)(v113 - 6));
      v135 = v15;
    }
    v226 = v15;
    if ( *((_DWORD *)v11 + 4) == 17 )
      v16 = v15 % 0x11;
    else
      v16 = v15 % *((_DWORD *)v11 + 4);
    v157 = v16;
    v17 = *(_QWORD *)v11;
    if ( v17 )
    {
      for ( i = *(__int64 **)(v17 + 8 * v16); ; i = (__int64 *)i[11] )
      {
        v198 = i;
        if ( !i )
          break;
        v158 = *((_DWORD *)i + 24);
        if ( v158 == v15 )
        {
          v279 = *(_QWORD *)v7;
          v284 = *i;
          if ( !(unsigned int)_o__wcsicmp(v284, v279) )
          {
            v287 = (char *)v7 + 56;
            v275[10] = (ATL::CAtlException *)(i + 7);
            v19 = *((_DWORD *)i + 16);
            if ( v19 == *((_DWORD *)v7 + 16) && (v19 || *((_DWORD *)i + 14) == *((_DWORD *)v7 + 14)) )
            {
              v20 = (char *)v7 + 8;
              v280 = v20;
              v285 = i + 1;
              v21 = *((_DWORD *)i + 12);
              if ( v21 == *((_DWORD *)v20 + 10) )
              {
                if ( v21 || (v286 = *(_QWORD *)v20, v236 = i[1], !(unsigned int)_o__wcsicmp(v236, v286)) )
                {
                  v22 = i[3] - *((_QWORD *)v20 + 2);
                  if ( !v22 )
                    v22 = i[4] - *((_QWORD *)v20 + 3);
                  if ( !v22 )
                  {
                    v23 = (char *)v120 + 56;
                    v195 = (char *)v120 + 56;
                    v237 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
                    v118 = v237 + 24;
                    v24 = v112;
                    v159 = CAudioSessionInstanceId::ToString(v112, &v118);
                    if ( v159 < 0 )
                    {
                      v194 = (_QWORD *)(v118 - 24);
                      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v118 - 24 + 16), 0xFFFFFFFF) <= 1 )
                        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v194 + 8LL))(*v194);
                      v27 = 0;
                      v136 = 0;
                      v111 = v108;
                      v23 = v195;
                    }
                    else
                    {
                      v25 = (_WORD *)v118;
                      v26 = *(int *)(v118 - 16);
                      v160 = v26;
                      v238 = v118 - 24;
                      v161 = 1 - *(_DWORD *)(v118 - 24 + 16);
                      v162 = *(_DWORD *)(v118 - 24 + 12) - v26;
                      if ( (v161 | v162) < 0 )
                      {
                        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v118, (unsigned int)v26);
                        v25 = (_WORD *)v118;
                      }
                      _o__wcsupr_s(v25, (int)v26 + 1);
                      if ( (int)v26 < 0 || (int)v26 > *((_DWORD *)v25 - 3) )
                        ATL::AtlThrowImpl(-2147024809);
                      *((_DWORD *)v25 - 4) = v26;
                      v25[v26] = 0;
                      v27 = 0;
                      v131 = 0;
                      v28 = v25;
                      v193 = v25;
                      while ( *v28 )
                      {
                        v27 = (unsigned __int16)*v28 + 33 * v27;
                        v131 = v27;
                        v193 = ++v28;
                      }
                      v239 = v25 - 12;
                      ATL::CStringData::Release((ATL::CStringData *)(v25 - 12));
                      v136 = v27;
                    }
                    v163 = v27;
                    if ( *((_DWORD *)v23 + 4) == 17 )
                      v29 = v27 % 0x11;
                    else
                      v29 = v27 % *((_DWORD *)v23 + 4);
                    v164 = v29;
                    if ( *(_QWORD *)v23 )
                    {
                      for ( j = *(_QWORD *)(*(_QWORD *)v23 + 8LL * v29); ; j = *(_QWORD *)(j + 88) )
                      {
                        v196 = j;
                        if ( !j )
                          break;
                        v165 = *(_DWORD *)(j + 96);
                        if ( v165 == v27 )
                        {
                          v240 = *(_QWORD *)v24;
                          v241 = *(_QWORD *)j;
                          if ( !(unsigned int)_o__wcsicmp(v241, v240) )
                          {
                            v242 = (char *)v24 + 56;
                            v243 = j + 56;
                            v31 = *(_DWORD *)(j + 64);
                            if ( v31 == *((_DWORD *)v24 + 16) && (v31 || *(_DWORD *)(j + 56) == *((_DWORD *)v24 + 14)) )
                            {
                              v244 = (char *)v24 + 8;
                              v245 = j + 8;
                              v32 = *(_DWORD *)(j + 48);
                              if ( v32 == *((_DWORD *)v24 + 12)
                                && (v32
                                 || (v246 = *((_QWORD *)v24 + 1),
                                     v247 = *(_QWORD *)(j + 8),
                                     !(unsigned int)_o__wcsicmp(v247, v246))) )
                              {
                                v33 = *(_QWORD *)(j + 24) - *((_QWORD *)v24 + 3);
                                if ( !v33 )
                                  v33 = *(_QWORD *)(j + 32) - *((_QWORD *)v24 + 4);
                                v24 = v112;
                                if ( !v33 )
                                {
                                  v197 = j;
                                  goto LABEL_53;
                                }
                              }
                              else
                              {
                                v24 = v112;
                              }
                            }
                          }
                        }
                      }
                    }
                    j = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
                          v23,
                          v24,
                          v29,
                          v27);
                    v197 = j;
LABEL_53:
                    v10 = *(CAudioSession **)(j + 80);
                    v145 = v10;
                    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                    {
                      v248 = *((_QWORD *)v24 + 9);
                      WPP_SF_SS(
                        *((_QWORD *)WPP_GLOBAL_Control + 2),
                        10,
                        (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
                        0,
                        v248);
                    }
                    break;
                  }
                }
              }
              v7 = v112;
            }
          }
        }
      }
    }
    if ( v10 )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v10 + 8LL))(v10);
    v133 = v10;
    if ( v10 )
      v34 = 0;
    else
      v34 = -2147024894;
    v166 = v34;
    if ( v153 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v153 = 0;
    }
    if ( v34 >= 0 )
    {
      LeaveCriticalSection(v109);
      v110 = 0;
      v249 = (char *)v10 + 616;
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 616));
      v250 = (char *)v10 + 616;
      if ( (*(unsigned int (__fastcall **)(CAudioSession *))(*(_QWORD *)v10 + 32LL))(v10) != 2 )
      {
        v35 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v114 + 40LL))(v114);
        v167 = v35;
        v251 = (char *)v10 + 736;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 736));
        v147 = (char *)v10 + 736;
        v252 = (char *)v10 + 776;
        v36 = (_QWORD *)*((_QWORD *)v10 + 97);
        v199 = v36;
        v253 = (char *)v10 + 784;
        v37 = (_QWORD *)*((_QWORD *)v10 + 98);
        v254 = v37;
        while ( v36 != v37 )
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v36 + 40LL))(*v36) == v35 )
          {
            Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v147);
LABEL_67:
            *((_QWORD *)v10 + 49) = GetTickCount64();
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 84LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, v10);
            }
            v255 = -10000LL * *((unsigned int *)v10 + 78);
            v148 = v255;
            (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD, int))(*(_QWORD *)ThreadPool
                                                                                              + 24LL))(
              ThreadPool,
              *((_QWORD *)v10 + 75),
              &v148,
              0LL,
              100);
            v38 = v111;
            v256 = v111;
            v111 = v10;
            v108 = v10;
            (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v10 + 8LL))(v10);
            if ( v38 )
              (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v38 + 16LL))(v38);
            goto LABEL_71;
          }
          v199 = ++v36;
        }
        if ( v10 != (CAudioSession *)-736LL )
        {
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 736));
          v147 = 0LL;
        }
        v95 = CAudioSession::RegisterOwnerProcess(v10, v114);
        v96 = v95;
        v168 = v95;
        if ( v95 >= 0 )
          goto LABEL_67;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x116,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v95);
        if ( v10 != (CAudioSession *)-616LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 616));
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v133);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v108);
        return v96;
      }
LABEL_71:
      if ( v10 != (CAudioSession *)-616LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 616));
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v109);
    }
    if ( v10 )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v10 + 16LL))(v10);
    v39 = v111;
    if ( v111 )
    {
      if ( (v117 & 0x20) != 0 )
        *((_DWORD *)v111 + 120) = 1;
    }
    else
    {
      LeaveCriticalSection(v109);
      v110 = 0;
      v107 = 0LL;
      v45 = v117;
      if ( (v117 & 8) != 0 )
      {
        v46 = (CAudioSession *)operator new(0x448uLL, (const struct std::nothrow_t *)&std::nothrow);
        v47 = v46;
        v257 = v46;
        if ( v46 )
        {
          CAudioSession::CAudioSession(v46);
          *(_QWORD *)v47 = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfo'};
          *((_QWORD *)v47 + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
          *((_QWORD *)v47 + 2) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
          *((_QWORD *)v47 + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
          *((_QWORD *)v47 + 4) = &CPerStreamVolumeAudioSession::`vftable'{for `CUnknown'};
          *((_BYTE *)v47 + 984) = 1;
          ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)v47 + 992));
          *((_QWORD *)v47 + 129) = 0LL;
          ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)v47 + 1040));
          *((_QWORD *)v47 + 135) = 0LL;
        }
        else
        {
          v47 = 0LL;
        }
        v200 = v47;
      }
      else
      {
        v97 = (CPerEndpointVolumeAudioSession *)operator new(0x410uLL, (const struct std::nothrow_t *)&std::nothrow);
        v258 = v97;
        if ( v97 )
        {
          v47 = CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession(v97);
          v201 = v47;
        }
        else
        {
          v47 = 0LL;
          v201 = 0LL;
        }
      }
      v202 = v47;
      v48 = v107;
      v259 = v107;
      v107 = v47;
      if ( v259 )
      {
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v48 + 16LL))(v48);
        v47 = v107;
      }
      if ( !v47 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x14B,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)0x8007000ELL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v107);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v108);
        return 2147942414LL;
      }
      v49 = GUID_00000000_0000_0000_0000_000000000000;
      v282 = GUID_00000000_0000_0000_0000_000000000000;
      if ( (v45 & 4) != 0 )
      {
        v52 = v112;
      }
      else
      {
        v50 = v114;
        v51 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v114 + 440LL))(v114);
        v52 = v112;
        if ( !v51 )
        {
          v49 = *(GUID *)(*(__int64 (__fastcall **)(struct IAudioProcess *, char *, __int64))(*(_QWORD *)v50 + 456LL))(
                           v50,
                           v288,
                           (__int64)v112 + 24);
          v282 = v49;
        }
        v47 = v107;
      }
      v283 = v49;
      v53 = (*(__int64 (__fastcall **)(CAudioSession *, struct IAudioProcess *, struct CAudioSessionInstanceId *, _QWORD, unsigned int, unsigned int, GUID *))(*(_QWORD *)v47 + 240LL))(
              v47,
              v114,
              v52,
              v45,
              a5,
              a6,
              &v283);
      v54 = v53;
      v169 = v53;
      if ( v53 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x163,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v53);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v107);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v108);
        return v54;
      }
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v109);
      v108 = 0LL;
      v111 = 0LL;
      v149 = 0LL;
      v55 = v120;
      v154 = (LPCRITICAL_SECTION)((char *)v120 + 16);
      v155 = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v154);
      v56 = (char *)v55 + 56;
      v57 = (char *)v55 + 56;
      v205 = (char *)v55 + 56;
      v260 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
      v119 = v260 + 24;
      v170 = CAudioSessionInstanceId::ToString(v52, &v119);
      if ( v170 < 0 )
      {
        v204 = (_QWORD *)(v119 - 24);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v119 - 24 + 16), 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v204 + 8LL))(*v204);
        v60 = 0;
        v138 = 0;
        v111 = v149;
        v57 = v205;
      }
      else
      {
        v58 = (_WORD *)v119;
        v59 = *(int *)(v119 - 16);
        v171 = v59;
        v261 = v119 - 24;
        v172 = 1 - *(_DWORD *)(v119 - 24 + 16);
        v173 = *(_DWORD *)(v119 - 24 + 12) - v59;
        if ( (v172 | v173) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v119, (unsigned int)v59);
          v58 = (_WORD *)v119;
        }
        _o__wcsupr_s(v58, (int)v59 + 1);
        if ( (int)v59 < 0 || (int)v59 > *((_DWORD *)v58 - 3) )
          ATL::AtlThrowImpl(-2147024809);
        *((_DWORD *)v58 - 4) = v59;
        v58[v59] = 0;
        v60 = 0;
        v137 = 0;
        v61 = v58;
        v203 = v58;
        while ( *v61 )
        {
          v60 = (unsigned __int16)*v61 + 33 * v60;
          v137 = v60;
          v203 = ++v61;
        }
        v262 = v58 - 12;
        ATL::CStringData::Release((ATL::CStringData *)(v58 - 12));
        v138 = v60;
      }
      v174 = v60;
      if ( *((_DWORD *)v57 + 4) == 17 )
        v62 = v60 % 0x11;
      else
        v62 = v60 % *((_DWORD *)v57 + 4);
      v175 = v62;
      if ( *(_QWORD *)v57 )
      {
        for ( k = *(__int64 **)(*(_QWORD *)v57 + 8 * v62); ; k = (__int64 *)k[11] )
        {
          v207 = k;
          if ( !k )
            break;
          v176 = *((_DWORD *)k + 24);
          if ( v176 == v60 )
          {
            v263 = *(_QWORD *)v52;
            v264 = *k;
            if ( !(unsigned int)_o__wcsicmp(v264, v263) )
            {
              v265 = (char *)v52 + 56;
              v266 = k + 7;
              v98 = *((_DWORD *)k + 16);
              if ( v98 == *((_DWORD *)v52 + 16) && (v98 || *((_DWORD *)k + 14) == *((_DWORD *)v52 + 14)) )
              {
                v267 = (char *)v52 + 8;
                v268 = k + 1;
                v99 = *((_DWORD *)k + 12);
                if ( v99 == *((_DWORD *)v52 + 12) )
                {
                  if ( v99 || (v269 = *((_QWORD *)v52 + 1), v270 = k[1], (v178 = _o__wcsicmp(v270, v269)) == 0) )
                  {
                    v100 = k[3] - *((_QWORD *)v52 + 3);
                    if ( !v100 )
                      v100 = k[4] - *((_QWORD *)v52 + 4);
                    if ( !v100 )
                    {
                      v271 = v56;
                      Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
                               (_DWORD)v56,
                               (_DWORD)v52,
                               (unsigned int)&v124,
                               (unsigned int)&v140,
                               (__int64)v272);
                      v206 = Node;
                      if ( !Node )
                      {
                        Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
                                 v56,
                                 v52,
                                 v124,
                                 v140);
                        v206 = Node;
                      }
                      v39 = *(CAudioSession **)(Node + 80);
                      v111 = v39;
                      v149 = v39;
                      v64 = WPP_GLOBAL_Control;
                      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                      {
                        v273 = *((_QWORD *)v52 + 9);
                        WPP_SF_SS(
                          *((_QWORD *)WPP_GLOBAL_Control + 2),
                          10,
                          (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
                          0,
                          v273);
                        v64 = WPP_GLOBAL_Control;
                      }
                      goto LABEL_118;
                    }
                  }
                }
              }
            }
          }
        }
      }
      v64 = WPP_GLOBAL_Control;
      v39 = v111;
LABEL_118:
      if ( v39 )
      {
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v39 + 8LL))(v39);
        v64 = WPP_GLOBAL_Control;
      }
      v108 = v39;
      if ( v39 )
        v65 = 0;
      else
        v65 = -2147024894;
      v179 = v65;
      if ( v155 )
      {
        LeaveCriticalSection(v154);
        v155 = 0;
        v64 = WPP_GLOBAL_Control;
      }
      if ( v65 >= 0 )
      {
        CAudioSession::ForceExpire(v107);
      }
      else
      {
        if ( v64 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v64 + 28) & 0x40) != 0
          && *((_BYTE *)v64 + 25) >= 4u )
        {
          v274 = *((_QWORD *)v52 + 9);
          WPP_SF_SS(*((_QWORD *)v64 + 2), 11, (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, 0, v274);
        }
        v115 = 0;
        try
        {
          v208 = v107;
          v103 = v120;
          ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
            (char *)v120 + 56,
            v52,
            &v208);
        }
        catch ( ATL::CAtlException *v275 )
        {
          v94 = v275[0];
          v180 = *(_DWORD *)v275[0];
          if ( v180 == -1073741571 )
            _o__resetstkoflw();
          v115 = *(_DWORD *)v94;
          v102 = v115;
          if ( v115 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x16E,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v115);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v107);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v108);
            if ( v110 )
            {
              LeaveCriticalSection(v109);
              v110 = 0;
            }
            return v102;
          }
          v111 = v108;
          v103 = v209;
          v120 = v209;
          v114 = v210;
          v52 = v211;
        }
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v107 + 8LL))(v107);
        *(_QWORD *)&v227 = v103;
        *((_QWORD *)&v227 + 1) = v52;
        v228 = &v107;
        v121 = v227;
        v122 = &v107;
        v123 = 1;
        v66 = v120;
        v67 = (*(__int64 (__fastcall **)(CAudioSession *, CAudioSessionManager *))(*(_QWORD *)v107 + 224LL))(v107, v120);
        v68 = v67;
        v181 = v67;
        if ( v67 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x17B,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)v67);
          if ( v123 )
          {
            v123 = 0;
            ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
              v121 + 56,
              *((_QWORD *)&v121 + 1));
            (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*v122 + 16LL))(*v122);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v107);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v108);
          if ( v110 )
          {
            LeaveCriticalSection(v109);
            v110 = 0;
          }
          return v68;
        }
        *(_QWORD *)&v219 = &v107;
        *((_QWORD *)&v219 + 1) = v66;
        v141 = v219;
        v142 = 1;
        v69 = (*(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v107 + 224LL))(
                v107,
                g_PolicyEventsHandler);
        v70 = v69;
        v182 = v69;
        if ( v69 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x182,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)v69);
          if ( v142 )
          {
            v142 = 0;
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v141 + 232LL))(
              *(_QWORD *)v141,
              *((_QWORD *)&v141 + 1));
          }
          if ( v123 )
          {
            v123 = 0;
            ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
              v121 + 56,
              *((_QWORD *)&v121 + 1));
            (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*v122 + 16LL))(*v122);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v107);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v108);
          if ( v110 )
          {
            LeaveCriticalSection(v109);
            v110 = 0;
          }
          return v70;
        }
        v234 = &v107;
        v235 = 1;
        v71 = v107;
        v275[1] = v107;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, 0LL);
        }
        v183 = *(_DWORD *)(*((_QWORD *)v71 + 91) - 16LL);
        v72 = 2 * v183 + 2;
        v184 = v72;
        v185 = *(_DWORD *)(*((_QWORD *)v66 + 37) - 16LL);
        v73 = 2 * v185 + 2;
        v186 = v73;
        v74 = v73 + 2 * v183 + 74;
        v187 = v74;
        v75 = (char *)operator new[](v74, (const struct std::nothrow_t *)&std::nothrow);
        v76 = (unsigned int *)v75;
        v275[2] = (ATL::CAtlException *)v75;
        v275[3] = (ATL::CAtlException *)v75;
        if ( v75 )
        {
          *(_DWORD *)v75 = v74;
          *((_DWORD *)v75 + 1) = 64;
          *((_DWORD *)v75 + 6) = v72;
          *((_DWORD *)v75 + 12) = v73;
          *((_DWORD *)v75 + 13) = v72 + 72;
          v77 = (ATL::CAtlException *)*((_QWORD *)v71 + 91);
          v275[4] = v77;
          v78 = (unsigned int *)(v75 + 72);
          v275[5] = (ATL::CAtlException *)(v75 + 72);
          v79 = (ATL::CAtlException *)((unsigned __int64)v72 >> 1);
          v275[6] = v79;
          v80 = 0;
          v125 = 0;
          if ( !v79 )
          {
            v80 = -2147024809;
            v125 = -2147024809;
          }
          v127 = v80;
          v81 = 2147483646LL;
          if ( v80 < 0 )
          {
            if ( v79 )
              *(_WORD *)v78 = 0;
          }
          else
          {
            v82 = 2147483646LL;
            v214 = 2147483646LL;
            v212 = v77;
            v213 = (unsigned __int64)v72 >> 1;
            v150 = v76 + 18;
            v83 = 0;
            v126 = 0;
            v84 = 0LL;
            v151 = 0LL;
            while ( v79 )
            {
              if ( !v82 || !*(_WORD *)v77 )
                goto LABEL_141;
              *(_WORD *)v78 = *(_WORD *)v77;
              v78 = (unsigned int *)((char *)v78 + 2);
              v150 = v78;
              v77 = (ATL::CAtlException *)((char *)v77 + 2);
              v212 = v77;
              v79 = (ATL::CAtlException *)((char *)v79 - 1);
              v213 = (unsigned __int64)v79;
              v214 = --v82;
              v151 = ++v84;
            }
            v78 = (unsigned int *)((char *)v78 - 2);
            v150 = v78;
            v151 = v84 - 1;
            v83 = -2147024774;
            v126 = -2147024774;
LABEL_141:
            *(_WORD *)v78 = 0;
            v127 = v83;
          }
          v85 = (ATL::CAtlException *)*((_QWORD *)v66 + 37);
          v275[7] = v85;
          v86 = (ATL::CAtlException *)((char *)v76 + v76[13]);
          v275[8] = v86;
          v87 = (ATL::CAtlException *)((unsigned __int64)v73 >> 1);
          v275[9] = v87;
          v88 = 0;
          v128 = 0;
          if ( !v87 )
          {
            v88 = -2147024809;
            v128 = -2147024809;
          }
          v130 = v88;
          if ( v88 < 0 )
          {
            if ( v87 )
              *(_WORD *)v86 = 0;
          }
          else
          {
            v217 = 2147483646LL;
            v215 = v85;
            v216 = (unsigned __int64)v73 >> 1;
            v143 = v86;
            v89 = 0;
            v129 = 0;
            v90 = 0LL;
            v144 = 0LL;
            while ( v87 )
            {
              if ( !v81 || !*(_WORD *)v85 )
                goto LABEL_154;
              *(_WORD *)v86 = *(_WORD *)v85;
              v86 = (ATL::CAtlException *)((char *)v86 + 2);
              v143 = v86;
              v85 = (ATL::CAtlException *)((char *)v85 + 2);
              v215 = v85;
              v87 = (ATL::CAtlException *)((char *)v87 - 1);
              v216 = (unsigned __int64)v87;
              v217 = --v81;
              v144 = ++v90;
            }
            v86 = (ATL::CAtlException *)((char *)v86 - 2);
            v143 = v86;
            v144 = v90 - 1;
            v89 = -2147024774;
            v129 = -2147024774;
LABEL_154:
            *(_WORD *)v86 = 0;
            v130 = v89;
          }
          v229 = &CAudioSessionManagerNotification::`vftable';
          v230 = v76;
          v231 = v71;
          CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v66 + 192));
        }
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v76);
        v92 = v111;
        v281 = v111;
        v39 = v107;
        v108 = v107;
        if ( v107 )
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v107 + 8LL))(v107);
        if ( v92 )
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v92 + 16LL))(v92);
        v106 = 0;
        v235 = 0;
        v142 = 0;
        v123 = 0;
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          v232 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
          Context = &qword_1801B7588;
          qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          v233 = 0;
          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v232);
        }
        v93 = *((_QWORD *)Context + 1);
        v275[11] = (ATL::CAtlException *)v93;
        if ( *(_DWORD *)v93 > 4u )
        {
          *(_QWORD *)&v219 = *((_QWORD *)v39 + 91);
          TlgCreateWsz(&pDesc, (LPCWSTR)v219);
          v116 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v114 + 40LL))(v114);
          v296 = &v116;
          v297 = 4;
          v298 = 0;
          v223[0] = 184549376;
          v223[1] = 4;
          v224 = 0LL;
          v289 = *(_QWORD *)(v93 + 8);
          v290 = **(unsigned __int16 **)(v93 + 8);
          v291 = 2;
          v292 = &unk_180176D5E;
          v293 = 53;
          v294 = 1;
          v188 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          v189 = v188;
          EtwEventWriteTransfer(*(_QWORD *)(v93 + 32), v223, 0LL, 0LL, 4, &v289);
        }
        if ( v142 )
        {
          v142 = 0;
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v141 + 232LL))(*(_QWORD *)v141, *((_QWORD *)&v141 + 1));
        }
        if ( v123 )
        {
          v123 = 0;
          ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
            v121 + 56,
            *((_QWORD *)&v121 + 1));
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*v122 + 16LL))(*v122);
        }
      }
      if ( v107 )
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v107 + 16LL))(v107);
    }
    v40 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v114 + 40LL))(v114);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v39 + 736));
    v156 = (char *)v39 + 736;
    v41 = (_QWORD *)*((_QWORD *)v39 + 97);
    v218 = v41;
    v42 = (_QWORD *)*((_QWORD *)v39 + 98);
    while ( v41 != v42 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v41 + 40LL))(*v41) == v40 )
      {
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v156);
LABEL_83:
        if ( v106 )
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v39 + 256LL))(v39);
        v108 = 0LL;
        *v146 = v39;
        if ( v110 )
        {
          LeaveCriticalSection(v109);
          v110 = 0;
        }
        return 0LL;
      }
      v218 = ++v41;
    }
    if ( v39 != (CAudioSession *)-736LL )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v39 + 736));
      v156 = 0LL;
    }
    v104 = CAudioSession::RegisterOwnerProcess(v39, v114);
    v105 = v104;
    if ( v104 >= 0 )
      goto LABEL_83;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v104);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v108);
    if ( v110 )
    {
      LeaveCriticalSection(v109);
      v110 = 0;
    }
    result = v105;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1CE,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           v43);
  }
  return result;
}
