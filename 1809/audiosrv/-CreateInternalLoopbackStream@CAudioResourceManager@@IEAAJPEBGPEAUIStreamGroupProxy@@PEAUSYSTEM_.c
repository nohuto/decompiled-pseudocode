/*
 * XREFs of ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EA564
 * Callers:
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800EA36C (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     McTemplateU0 @ 0x180005030 (McTemplateU0.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18000E380 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x180012174 (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x1800121CC (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180013A30 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180013C14 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020980 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800214B4 (-HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180021910 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180023430 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x1800236D0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180025824 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x1800263EC (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180026F10 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180034B00 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180035EE0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N6PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18003B2D0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     ??1?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAA@XZ @ 0x180067AB8 (--1-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x1800AF7B0 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E278C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CAudioResourceManager::CreateInternalLoopbackStream(
        CAudioResourceManager *this,
        unsigned __int16 *a2,
        struct IStreamGroupProxy *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  __int64 v4; // r13
  int SharedModeEnginePeriodicity; // r15d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // r12d
  GUID v7; // xmm6
  GUID v8; // xmm8
  GUID v9; // xmm0
  GUID v10; // xmm7
  struct tWAVEFORMATEX *v11; // rbx
  struct tWAVEFORMATEX *Src; // rsi
  struct tWAVEFORMATEX *v13; // r14
  struct tWAVEFORMATEX *v14; // rdi
  const GUID *v15; // r8
  const GUID *v16; // r9
  void *v17; // r8
  const struct _TlgProvider_t *v18; // rcx
  void *v19; // r8
  __int64 v20; // r11
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  TraceLoggingHProvider v23; // r10
  void *v24; // r8
  __int64 v25; // r11
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  TraceLoggingHProvider v28; // r10
  const GUID *v29; // r8
  const GUID *v30; // r9
  void *v31; // r8
  const struct _TlgProvider_t *v32; // rcx
  void *v33; // r8
  __int64 v34; // r11
  LPCGUID v35; // r8
  LPCGUID v36; // r9
  TraceLoggingHProvider v37; // r10
  void *v38; // r8
  __int64 v39; // r11
  LPCGUID v40; // r8
  LPCGUID v41; // r9
  TraceLoggingHProvider v42; // r10
  const GUID *v43; // r8
  const GUID *v44; // r9
  void *v45; // r8
  const struct _TlgProvider_t *v46; // rcx
  void *v47; // r8
  __int64 v48; // r11
  LPCGUID v49; // r8
  LPCGUID v50; // r9
  TraceLoggingHProvider v51; // r10
  void *v52; // r8
  __int64 v53; // r11
  LPCGUID v54; // r8
  LPCGUID v55; // r9
  TraceLoggingHProvider v56; // r10
  const GUID *v57; // r8
  const GUID *v58; // r9
  void *v59; // r8
  const struct _TlgProvider_t *v60; // rcx
  void *v61; // r8
  __int64 v62; // r11
  LPCGUID v63; // r8
  LPCGUID v64; // r9
  TraceLoggingHProvider v65; // r10
  void *v66; // r8
  __int64 v67; // r11
  LPCGUID v68; // r8
  LPCGUID v69; // r9
  TraceLoggingHProvider v70; // r10
  void *v71; // r8
  const struct _TlgProvider_t *v72; // rcx
  const struct _TlgProvider_t *v73; // rcx
  const GUID *v74; // r8
  const GUID *v75; // r9
  void *v76; // r8
  LPCGUID v77; // r8
  LPCGUID v78; // r9
  TraceLoggingHProvider v79; // r10
  void *v80; // r8
  LPCGUID v81; // r8
  LPCGUID v82; // r9
  TraceLoggingHProvider v83; // r10
  int v84; // r8d
  __int64 v85; // rcx
  unsigned __int16 *v86; // r13
  unsigned __int16 *v87; // rbx
  __int64 v88; // rcx
  int v89; // r8d
  __int64 v90; // rsi
  struct ISaDeviceProxy *v91; // rcx
  volatile signed __int32 *v92; // rbx
  struct CAudioSessionManagerProvider *v93; // rdi
  bool DoesExclusiveModeOverrideShared; // al
  int v95; // r8d
  signed __int32 v96; // eax
  LPVOID *v97; // rdi
  CAudioSessionManager *v98; // rcx
  const GUID *v99; // r8
  const GUID *v100; // r9
  void *v101; // r8
  const struct _TlgProvider_t *v102; // rcx
  int v104; // eax
  CAudioResourceManager *v105; // rcx
  CEndpointCharacteristics **cData; // [rsp+28h] [rbp-110h]
  CEndpointCharacteristics *v107; // [rsp+B8h] [rbp-80h] BYREF
  struct ISaDeviceProxy *v108; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v109; // [rsp+C8h] [rbp-70h] BYREF
  unsigned __int16 *v110; // [rsp+D0h] [rbp-68h] BYREF
  struct CAudioSessionManager *v111; // [rsp+D8h] [rbp-60h] BYREF
  SaDeviceParams *v112; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v113; // [rsp+E8h] [rbp-50h] BYREF
  _DWORD *v114; // [rsp+F0h] [rbp-48h] BYREF
  struct CAudioSessionManagerProvider *v115; // [rsp+F8h] [rbp-40h] BYREF
  WINBOOL v116; // [rsp+100h] [rbp-38h] BYREF
  WINBOOL v117; // [rsp+104h] [rbp-34h] BYREF
  int v118; // [rsp+108h] [rbp-30h] BYREF
  WINBOOL v119; // [rsp+10Ch] [rbp-2Ch] BYREF
  int v120; // [rsp+110h] [rbp-28h] BYREF
  WINBOOL v121; // [rsp+114h] [rbp-24h] BYREF
  WINBOOL v122; // [rsp+118h] [rbp-20h] BYREF
  int v123; // [rsp+11Ch] [rbp-1Ch] BYREF
  WINBOOL v124; // [rsp+120h] [rbp-18h] BYREF
  int v125; // [rsp+124h] [rbp-14h] BYREF
  WINBOOL v126; // [rsp+128h] [rbp-10h] BYREF
  WINBOOL v127; // [rsp+12Ch] [rbp-Ch] BYREF
  int v128; // [rsp+130h] [rbp-8h] BYREF
  WINBOOL v129; // [rsp+134h] [rbp-4h] BYREF
  int v130; // [rsp+138h] [rbp+0h] BYREF
  WINBOOL v131; // [rsp+13Ch] [rbp+4h] BYREF
  WINBOOL v132; // [rsp+140h] [rbp+8h] BYREF
  int v133; // [rsp+144h] [rbp+Ch] BYREF
  WINBOOL v134; // [rsp+148h] [rbp+10h] BYREF
  int v135; // [rsp+14Ch] [rbp+14h] BYREF
  WINBOOL v136; // [rsp+150h] [rbp+18h] BYREF
  WINBOOL v137; // [rsp+154h] [rbp+1Ch] BYREF
  int v138; // [rsp+158h] [rbp+20h] BYREF
  int v139; // [rsp+15Ch] [rbp+24h] BYREF
  WINBOOL v140; // [rsp+160h] [rbp+28h] BYREF
  int v141; // [rsp+164h] [rbp+2Ch] BYREF
  LPVOID Context; // [rsp+168h] [rbp+30h] BYREF
  LPVOID v143; // [rsp+170h] [rbp+38h] BYREF
  LPVOID v144; // [rsp+178h] [rbp+40h] BYREF
  LPVOID v145; // [rsp+180h] [rbp+48h] BYREF
  LPVOID v146; // [rsp+188h] [rbp+50h] BYREF
  LPVOID v147; // [rsp+190h] [rbp+58h] BYREF
  LPVOID v148; // [rsp+198h] [rbp+60h] BYREF
  LPVOID v149; // [rsp+1A0h] [rbp+68h] BYREF
  LPVOID v150; // [rsp+1A8h] [rbp+70h] BYREF
  LPVOID v151; // [rsp+1B0h] [rbp+78h] BYREF
  LPVOID v152; // [rsp+1B8h] [rbp+80h] BYREF
  LPVOID v153; // [rsp+1C0h] [rbp+88h] BYREF
  LPVOID v154; // [rsp+1C8h] [rbp+90h] BYREF
  LPVOID v155; // [rsp+1D0h] [rbp+98h] BYREF
  LPVOID v156; // [rsp+1D8h] [rbp+A0h] BYREF
  LPVOID v157; // [rsp+1E0h] [rbp+A8h] BYREF
  SaDeviceParams *v158; // [rsp+1E8h] [rbp+B0h] BYREF
  WINBOOL fPending; // [rsp+1F0h] [rbp+B8h] BYREF
  struct tWAVEFORMATEX *v160; // [rsp+1F8h] [rbp+C0h] BYREF
  struct tWAVEFORMATEX *v161; // [rsp+200h] [rbp+C8h] BYREF
  struct tWAVEFORMATEX *v162; // [rsp+208h] [rbp+D0h] BYREF
  struct tWAVEFORMATEX *v163; // [rsp+210h] [rbp+D8h] BYREF
  int v164; // [rsp+218h] [rbp+E0h] BYREF
  struct SYSTEM_AUDIO_STREAM *v165; // [rsp+220h] [rbp+E8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+228h] [rbp+F0h] BYREF
  bool v167[8]; // [rsp+230h] [rbp+F8h] BYREF
  int v168; // [rsp+238h] [rbp+100h]
  CAudioResourceManager *v169; // [rsp+240h] [rbp+108h]
  GUID v170; // [rsp+248h] [rbp+110h] BYREF
  GUID v171; // [rsp+258h] [rbp+120h] BYREF
  GUID v172; // [rsp+268h] [rbp+130h] BYREF
  GUID v173; // [rsp+278h] [rbp+140h] BYREF
  __int64 v174; // [rsp+288h] [rbp+150h]
  GUID v175; // [rsp+298h] [rbp+160h] BYREF
  __int64 v176[2]; // [rsp+2A8h] [rbp+170h] BYREF
  struct _GUID v177; // [rsp+2B8h] [rbp+180h] BYREF
  struct _GUID v178; // [rsp+2C8h] [rbp+190h] BYREF
  GUID v179; // [rsp+2D8h] [rbp+1A0h] BYREF
  struct _GUID v180; // [rsp+2E8h] [rbp+1B0h] BYREF
  struct _GUID v181; // [rsp+2F8h] [rbp+1C0h] BYREF
  struct _GUID v182; // [rsp+308h] [rbp+1D0h] BYREF
  GUID v183; // [rsp+318h] [rbp+1E0h] BYREF
  GUID v184; // [rsp+328h] [rbp+1F0h] BYREF
  _DWORD v185[3]; // [rsp+338h] [rbp+200h] BYREF
  GUID v186; // [rsp+344h] [rbp+20Ch]
  int v187[2]; // [rsp+358h] [rbp+220h]
  unsigned __int16 *v188; // [rsp+360h] [rbp+228h]
  GUID v189; // [rsp+368h] [rbp+230h] BYREF
  GUID v190; // [rsp+378h] [rbp+240h] BYREF
  GUID v191; // [rsp+388h] [rbp+250h] BYREF
  GUID v192; // [rsp+398h] [rbp+260h] BYREF
  GUID v193; // [rsp+3A8h] [rbp+270h] BYREF
  EVENT_DATA_DESCRIPTOR v194; // [rsp+3B8h] [rbp+280h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v195; // [rsp+3D8h] [rbp+2A0h] BYREF
  WORD *v196; // [rsp+3E8h] [rbp+2B0h]
  __int64 v197; // [rsp+3F0h] [rbp+2B8h]
  DWORD *v198; // [rsp+3F8h] [rbp+2C0h]
  __int64 v199; // [rsp+400h] [rbp+2C8h]
  DWORD *v200; // [rsp+408h] [rbp+2D0h]
  __int64 v201; // [rsp+410h] [rbp+2D8h]
  char *v202; // [rsp+418h] [rbp+2E0h]
  __int64 v203; // [rsp+420h] [rbp+2E8h]
  int *v204; // [rsp+428h] [rbp+2F0h]
  __int64 v205; // [rsp+430h] [rbp+2F8h]
  EVENT_DATA_DESCRIPTOR v206; // [rsp+438h] [rbp+300h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v207; // [rsp+458h] [rbp+320h] BYREF
  WORD *p_nChannels; // [rsp+468h] [rbp+330h]
  __int64 v209; // [rsp+470h] [rbp+338h]
  DWORD *p_nSamplesPerSec; // [rsp+478h] [rbp+340h]
  __int64 v211; // [rsp+480h] [rbp+348h]
  DWORD *p_nAvgBytesPerSec; // [rsp+488h] [rbp+350h]
  __int64 v213; // [rsp+490h] [rbp+358h]
  char *v214; // [rsp+498h] [rbp+360h]
  __int64 v215; // [rsp+4A0h] [rbp+368h]
  int *v216; // [rsp+4A8h] [rbp+370h]
  __int64 v217; // [rsp+4B0h] [rbp+378h]
  EVENT_DATA_DESCRIPTOR v218; // [rsp+4B8h] [rbp+380h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v219; // [rsp+4D8h] [rbp+3A0h] BYREF
  WORD *v220; // [rsp+4E8h] [rbp+3B0h]
  __int64 v221; // [rsp+4F0h] [rbp+3B8h]
  DWORD *v222; // [rsp+4F8h] [rbp+3C0h]
  __int64 v223; // [rsp+500h] [rbp+3C8h]
  DWORD *v224; // [rsp+508h] [rbp+3D0h]
  __int64 v225; // [rsp+510h] [rbp+3D8h]
  char *v226; // [rsp+518h] [rbp+3E0h]
  __int64 v227; // [rsp+520h] [rbp+3E8h]
  int *v228; // [rsp+528h] [rbp+3F0h]
  __int64 v229; // [rsp+530h] [rbp+3F8h]
  EVENT_DATA_DESCRIPTOR v230; // [rsp+538h] [rbp+400h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v231; // [rsp+558h] [rbp+420h] BYREF
  WORD *v232; // [rsp+568h] [rbp+430h]
  __int64 v233; // [rsp+570h] [rbp+438h]
  DWORD *v234; // [rsp+578h] [rbp+440h]
  __int64 v235; // [rsp+580h] [rbp+448h]
  DWORD *v236; // [rsp+588h] [rbp+450h]
  __int64 v237; // [rsp+590h] [rbp+458h]
  char *v238; // [rsp+598h] [rbp+460h]
  __int64 v239; // [rsp+5A0h] [rbp+468h]
  int *v240; // [rsp+5A8h] [rbp+470h]
  __int64 v241; // [rsp+5B0h] [rbp+478h]
  EVENT_DATA_DESCRIPTOR v242; // [rsp+5B8h] [rbp+480h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v243; // [rsp+5D8h] [rbp+4A0h] BYREF
  WORD *v244; // [rsp+5E8h] [rbp+4B0h]
  __int64 v245; // [rsp+5F0h] [rbp+4B8h]
  DWORD *v246; // [rsp+5F8h] [rbp+4C0h]
  __int64 v247; // [rsp+600h] [rbp+4C8h]
  DWORD *v248; // [rsp+608h] [rbp+4D0h]
  __int64 v249; // [rsp+610h] [rbp+4D8h]
  char *v250; // [rsp+618h] [rbp+4E0h]
  __int64 v251; // [rsp+620h] [rbp+4E8h]
  int *v252; // [rsp+628h] [rbp+4F0h]
  __int64 v253; // [rsp+630h] [rbp+4F8h]
  EVENT_DATA_DESCRIPTOR v254; // [rsp+638h] [rbp+500h] BYREF
  GUID *v255; // [rsp+658h] [rbp+520h]
  __int64 v256; // [rsp+660h] [rbp+528h]
  char *v257; // [rsp+668h] [rbp+530h]
  __int64 v258; // [rsp+670h] [rbp+538h]
  int *v259; // [rsp+678h] [rbp+540h]
  __int64 v260; // [rsp+680h] [rbp+548h]
  EVENT_DATA_DESCRIPTOR v261; // [rsp+688h] [rbp+550h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+6A8h] [rbp+570h] BYREF
  WORD *v263; // [rsp+6B8h] [rbp+580h]
  __int64 v264; // [rsp+6C0h] [rbp+588h]
  DWORD *v265; // [rsp+6C8h] [rbp+590h]
  __int64 v266; // [rsp+6D0h] [rbp+598h]
  DWORD *v267; // [rsp+6D8h] [rbp+5A0h]
  __int64 v268; // [rsp+6E0h] [rbp+5A8h]
  GUID *v269; // [rsp+6E8h] [rbp+5B0h]
  __int64 v270; // [rsp+6F0h] [rbp+5B8h]
  EVENT_DATA_DESCRIPTOR v271; // [rsp+6F8h] [rbp+5C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v272; // [rsp+718h] [rbp+5E0h] BYREF
  WORD *v273; // [rsp+728h] [rbp+5F0h]
  __int64 v274; // [rsp+730h] [rbp+5F8h]
  DWORD *v275; // [rsp+738h] [rbp+600h]
  __int64 v276; // [rsp+740h] [rbp+608h]
  DWORD *v277; // [rsp+748h] [rbp+610h]
  __int64 v278; // [rsp+750h] [rbp+618h]
  GUID *v279; // [rsp+758h] [rbp+620h]
  __int64 v280; // [rsp+760h] [rbp+628h]
  EVENT_DATA_DESCRIPTOR v281; // [rsp+768h] [rbp+630h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v282; // [rsp+788h] [rbp+650h] BYREF
  WORD *v283; // [rsp+798h] [rbp+660h]
  __int64 v284; // [rsp+7A0h] [rbp+668h]
  DWORD *v285; // [rsp+7A8h] [rbp+670h]
  __int64 v286; // [rsp+7B0h] [rbp+678h]
  DWORD *v287; // [rsp+7B8h] [rbp+680h]
  __int64 v288; // [rsp+7C0h] [rbp+688h]
  GUID *v289; // [rsp+7C8h] [rbp+690h]
  __int64 v290; // [rsp+7D0h] [rbp+698h]
  EVENT_DATA_DESCRIPTOR v291; // [rsp+7D8h] [rbp+6A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v292; // [rsp+7F8h] [rbp+6C0h] BYREF
  WORD *v293; // [rsp+808h] [rbp+6D0h]
  __int64 v294; // [rsp+810h] [rbp+6D8h]
  DWORD *v295; // [rsp+818h] [rbp+6E0h]
  __int64 v296; // [rsp+820h] [rbp+6E8h]
  DWORD *v297; // [rsp+828h] [rbp+6F0h]
  __int64 v298; // [rsp+830h] [rbp+6F8h]
  GUID *v299; // [rsp+838h] [rbp+700h]
  __int64 v300; // [rsp+840h] [rbp+708h]
  EVENT_DATA_DESCRIPTOR v301; // [rsp+848h] [rbp+710h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v302; // [rsp+868h] [rbp+730h] BYREF
  WORD *v303; // [rsp+878h] [rbp+740h]
  __int64 v304; // [rsp+880h] [rbp+748h]
  DWORD *v305; // [rsp+888h] [rbp+750h]
  __int64 v306; // [rsp+890h] [rbp+758h]
  DWORD *v307; // [rsp+898h] [rbp+760h]
  __int64 v308; // [rsp+8A0h] [rbp+768h]
  GUID *v309; // [rsp+8A8h] [rbp+770h]
  __int64 v310; // [rsp+8B0h] [rbp+778h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+8B8h] [rbp+780h] BYREF
  int *v312; // [rsp+8D8h] [rbp+7A0h]
  __int64 v313; // [rsp+8E0h] [rbp+7A8h]
  EVENT_DATA_DESCRIPTOR v314; // [rsp+8E8h] [rbp+7B0h] BYREF
  int *v315; // [rsp+908h] [rbp+7D0h]
  __int64 v316; // [rsp+910h] [rbp+7D8h]
  EVENT_DATA_DESCRIPTOR v317; // [rsp+918h] [rbp+7E0h] BYREF
  int *v318; // [rsp+938h] [rbp+800h]
  __int64 v319; // [rsp+940h] [rbp+808h]
  EVENT_DATA_DESCRIPTOR v320; // [rsp+948h] [rbp+810h] BYREF
  int *v321; // [rsp+968h] [rbp+830h]
  int v322; // [rsp+970h] [rbp+838h]
  int v323; // [rsp+974h] [rbp+83Ch]
  EVENT_DATA_DESCRIPTOR v324; // [rsp+978h] [rbp+840h] BYREF
  int *v325; // [rsp+998h] [rbp+860h]
  __int64 v326; // [rsp+9A0h] [rbp+868h]
  wil::details::in1diag3 *retaddr; // [rsp+A30h] [rbp+8F8h]

  v174 = -2LL;
  v165 = a4;
  v115 = a3;
  v110 = a2;
  v169 = this;
  v4 = 0LL;
  v107 = 0LL;
  cData = &v107;
  SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(PVOID, unsigned __int16 *, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                  g_pEndpointCharacteristicsCache,
                                  a2,
                                  0LL,
                                  0LL);
  if ( SharedModeEnginePeriodicity < 0
    || (v6 = eLoopbackConnector, !(unsigned int)CEndpointCharacteristics::HardwareLoopbackEnabled(v107)) )
  {
    v6 = eHostProcessConnector;
  }
  v7 = GUID_00000000_0000_0000_0000_000000000000;
  v170 = GUID_00000000_0000_0000_0000_000000000000;
  v8 = GUID_00000000_0000_0000_0000_000000000000;
  v172 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = GUID_00000000_0000_0000_0000_000000000000;
  v173 = GUID_00000000_0000_0000_0000_000000000000;
  v10 = GUID_00000000_0000_0000_0000_000000000000;
  v171 = GUID_00000000_0000_0000_0000_000000000000;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    SharedModeEnginePeriodicity = DeriveAudioProcessingModeConfiguration(
                                    0,
                                    0,
                                    0,
                                    v107,
                                    2,
                                    0,
                                    v6,
                                    0,
                                    0,
                                    &v170,
                                    &v172,
                                    &v173,
                                    &v171);
    v7 = v170;
    v8 = v172;
    v9 = v173;
    v10 = v171;
  }
  v11 = 0LL;
  v163 = 0LL;
  Src = 0LL;
  v162 = 0LL;
  v13 = 0LL;
  v161 = 0LL;
  v14 = 0LL;
  v160 = 0LL;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v180 = v7;
    v181 = v8;
    v182 = v9;
    SharedModeEnginePeriodicity = DeriveDeviceGraphFormatsForStream(
                                    v107,
                                    0,
                                    (struct _GUID *)(unsigned int)v6,
                                    AUDCLNT_SHAREMODE_SHARED,
                                    &v182,
                                    &v181,
                                    &v180,
                                    0LL,
                                    &v163,
                                    &v162,
                                    &v161,
                                    &v160);
    v11 = v163;
    Src = v162;
    v13 = v161;
    v14 = v160;
  }
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    if ( v11 )
    {
      if ( v11->wFormatTag == 0xFFFE )
      {
        v144 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v117, &v144) && v117 )
        {
          v144 = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v24);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        if ( **((_DWORD **)v144 + 1) > 4u )
        {
          TlgCreateWsz(&v207, L"WAVEFORMATEXTENSIBLE");
          p_nChannels = &v11->nChannels;
          v209 = 2LL;
          p_nSamplesPerSec = &v11->nSamplesPerSec;
          v211 = v25;
          p_nAvgBytesPerSec = &v11->nAvgBytesPerSec;
          v213 = v25;
          v214 = (char *)&v11[1].nSamplesPerSec + 2;
          v215 = 16LL;
          v118 = *(_DWORD *)&v11[1].nChannels;
          v216 = &v118;
          v217 = v25;
          TlgWrite(v28, &unk_180173FC9, v26, v27, 8u, &v206);
        }
      }
      else
      {
        v189 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v189.Data1 = v11->wFormatTag;
        v143 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v116, &v143) && v116 )
        {
          v143 = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v19);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        if ( **((_DWORD **)v143 + 1) > 4u )
        {
          TlgCreateWsz(&pDesc, L"WAVEFORMATEX");
          v263 = &v11->nChannels;
          v264 = 2LL;
          v265 = &v11->nSamplesPerSec;
          v266 = v20;
          v267 = &v11->nAvgBytesPerSec;
          v268 = v20;
          v269 = &v189;
          v270 = 16LL;
          TlgWrite(v23, &unk_18017406D, v21, v22, 7u, &v261);
        }
      }
    }
    else
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v17);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      v18 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v18 > 4u )
      {
        v164 = 0;
        v312 = &v164;
        v313 = 4LL;
        TlgWrite(v18, &unk_180174104, v15, v16, 3u, &pData);
      }
    }
    if ( Src )
    {
      if ( Src->wFormatTag == 0xFFFE )
      {
        v147 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v122, &v147) && v122 )
        {
          v147 = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v38);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        if ( **((_DWORD **)v147 + 1) > 4u )
        {
          TlgCreateWsz(&v219, L"WAVEFORMATEXTENSIBLE");
          v220 = &Src->nChannels;
          v221 = 2LL;
          v222 = &Src->nSamplesPerSec;
          v223 = v39;
          v224 = &Src->nAvgBytesPerSec;
          v225 = v39;
          v226 = (char *)&Src[1].nSamplesPerSec + 2;
          v227 = 16LL;
          v123 = *(_DWORD *)&Src[1].nChannels;
          v228 = &v123;
          v229 = v39;
          TlgWrite(v42, &unk_180173E27, v40, v41, 8u, &v218);
        }
      }
      else
      {
        v190 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v190.Data1 = Src->wFormatTag;
        v146 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v121, &v146) && v121 )
        {
          v146 = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v33);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        if ( **((_DWORD **)v146 + 1) > 4u )
        {
          TlgCreateWsz(&v272, L"WAVEFORMATEX");
          v273 = &Src->nChannels;
          v274 = 2LL;
          v275 = &Src->nSamplesPerSec;
          v276 = v34;
          v277 = &Src->nAvgBytesPerSec;
          v278 = v34;
          v279 = &v190;
          v280 = 16LL;
          TlgWrite(v37, &unk_180173ECE, v35, v36, 7u, &v271);
        }
      }
    }
    else
    {
      v145 = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v119, &v145) && v119 )
      {
        v145 = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v31);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      v32 = (const struct _TlgProvider_t *)*((_QWORD *)v145 + 1);
      if ( *(_DWORD *)v32 > 4u )
      {
        v120 = 0;
        v315 = &v120;
        v316 = 4LL;
        TlgWrite(v32, &unk_180173F68, v29, v30, 3u, &v314);
      }
    }
    if ( v13 )
    {
      if ( v13->wFormatTag == 0xFFFE )
      {
        v150 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v127, &v150) && v127 )
        {
          v150 = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v52);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        if ( **((_DWORD **)v150 + 1) > 4u )
        {
          TlgCreateWsz(&v231, L"WAVEFORMATEXTENSIBLE");
          v232 = &v13->nChannels;
          v233 = 2LL;
          v234 = &v13->nSamplesPerSec;
          v235 = v53;
          v236 = &v13->nAvgBytesPerSec;
          v237 = v53;
          v238 = (char *)&v13[1].nSamplesPerSec + 2;
          v239 = 16LL;
          v128 = *(_DWORD *)&v13[1].nChannels;
          v240 = &v128;
          v241 = v53;
          TlgWrite(v56, &unk_180173C88, v54, v55, 8u, &v230);
        }
      }
      else
      {
        v191 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v191.Data1 = v13->wFormatTag;
        v149 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v126, &v149) && v126 )
        {
          v149 = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v47);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        if ( **((_DWORD **)v149 + 1) > 4u )
        {
          TlgCreateWsz(&v282, L"WAVEFORMATEX");
          v283 = &v13->nChannels;
          v284 = 2LL;
          v285 = &v13->nSamplesPerSec;
          v286 = v48;
          v287 = &v13->nAvgBytesPerSec;
          v288 = v48;
          v289 = &v191;
          v290 = 16LL;
          TlgWrite(v51, &unk_180173D2E, v49, v50, 7u, &v281);
        }
      }
    }
    else
    {
      v148 = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v124, &v148) && v124 )
      {
        v148 = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v45);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      v46 = (const struct _TlgProvider_t *)*((_QWORD *)v148 + 1);
      if ( *(_DWORD *)v46 > 4u )
      {
        v125 = 0;
        v318 = &v125;
        v319 = 4LL;
        TlgWrite(v46, &unk_180173DC7, v43, v44, 3u, &v317);
      }
    }
    if ( v14 )
    {
      if ( v14->wFormatTag == 0xFFFE )
      {
        v153 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v132, &v153) && v132 )
        {
          v153 = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v66);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        if ( **((_DWORD **)v153 + 1) > 4u )
        {
          TlgCreateWsz(&v243, L"WAVEFORMATEXTENSIBLE");
          v244 = &v14->nChannels;
          v245 = 2LL;
          v246 = &v14->nSamplesPerSec;
          v247 = v67;
          v248 = &v14->nAvgBytesPerSec;
          v249 = v67;
          v250 = (char *)&v14[1].nSamplesPerSec + 2;
          v251 = 16LL;
          v133 = *(_DWORD *)&v14[1].nChannels;
          v252 = &v133;
          v253 = v67;
          TlgWrite(v70, &unk_180173AEC, v68, v69, 8u, &v242);
        }
      }
      else
      {
        v192 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v192.Data1 = v14->wFormatTag;
        v152 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v131, &v152) && v131 )
        {
          v152 = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v61);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        if ( **((_DWORD **)v152 + 1) > 4u )
        {
          TlgCreateWsz(&v292, L"WAVEFORMATEX");
          v293 = &v14->nChannels;
          v294 = 2LL;
          v295 = &v14->nSamplesPerSec;
          v296 = v62;
          v297 = &v14->nAvgBytesPerSec;
          v298 = v62;
          v299 = &v192;
          v300 = 16LL;
          TlgWrite(v65, &unk_180173B91, v63, v64, 7u, &v291);
        }
      }
    }
    else
    {
      v151 = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v129, &v151) && v129 )
      {
        v151 = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v59);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      v60 = (const struct _TlgProvider_t *)*((_QWORD *)v151 + 1);
      if ( *(_DWORD *)v60 > 4u )
      {
        v130 = 0;
        v325 = &v130;
        v326 = 4LL;
        TlgWrite(v60, &unk_180173C29, v57, v58, 3u, &v324);
      }
    }
    v183 = v7;
    SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                    (__int64)v107,
                                    v6,
                                    &v14->wFormatTag,
                                    &v183,
                                    0,
                                    &v139,
                                    0LL,
                                    0LL,
                                    0LL);
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      v4 = (unsigned int)(int)((double)v139 * 10000000.0 / (double)(int)v14->nSamplesPerSec + 0.5);
    }
    else if ( v14 )
    {
      if ( v14->wFormatTag == 0xFFFE )
      {
        v156 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v137, &v156) && v137 )
        {
          v156 = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v80);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        if ( **((_DWORD **)v156 + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)v156 + 1), 0x200000000000uLL) )
        {
          TlgCreateWsz(&v195, L"WAVEFORMATEXTENSIBLE");
          v196 = &v14->nChannels;
          v197 = 2LL;
          v198 = &v14->nSamplesPerSec;
          v199 = 4LL;
          v200 = &v14->nAvgBytesPerSec;
          v201 = 4LL;
          v202 = (char *)&v14[1].nSamplesPerSec + 2;
          v203 = 16LL;
          v138 = *(_DWORD *)&v14[1].nChannels;
          v204 = &v138;
          v205 = 4LL;
          TlgWrite(v83, &unk_1801739BF, v81, v82, 8u, &v194);
        }
      }
      else
      {
        v193 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v193.Data1 = v14->wFormatTag;
        v155 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v136, &v155) && v136 )
        {
          v155 = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v76);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        if ( **((_DWORD **)v155 + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)v155 + 1), 0x200000000000uLL) )
        {
          TlgCreateWsz(&v302, L"WAVEFORMATEX");
          v303 = &v14->nChannels;
          v304 = 2LL;
          v305 = &v14->nSamplesPerSec;
          v306 = 4LL;
          v307 = &v14->nAvgBytesPerSec;
          v308 = 4LL;
          v309 = &v193;
          v310 = 16LL;
          TlgWrite(v79, &unk_180173A3F, v77, v78, 7u, &v301);
        }
      }
    }
    else
    {
      v154 = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v134, &v154) && v134 )
      {
        v154 = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v71);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      v72 = (const struct _TlgProvider_t *)*((_QWORD *)v154 + 1);
      if ( *(_DWORD *)v72 > 2u && TlgKeywordOn(v72, 0x200000000000uLL) )
      {
        v135 = 0;
        v321 = &v135;
        v322 = 4;
        v323 = 0;
        TlgWrite(v73, &unk_180173AB2, v74, v75, 3u, &v320);
      }
    }
  }
  memset_0(v185, 0, 0x30uLL);
  v85 = 0LL;
  v114 = 0LL;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v86 = v110;
  }
  else
  {
    v184 = v8;
    v175 = v7;
    SharedModeEnginePeriodicity = InitializeStreamAndModeDescriptors(
                                    (__int64)v107,
                                    0,
                                    0x20002u,
                                    2,
                                    v6,
                                    &v175,
                                    &v184,
                                    0,
                                    0LL,
                                    (__int64)v11,
                                    0LL,
                                    v4,
                                    0LL,
                                    0LL,
                                    0LL,
                                    0LL,
                                    0,
                                    0,
                                    0,
                                    0LL,
                                    0LL,
                                    &v114);
    *(_QWORD *)v187 = v4;
    v185[0] = 2;
    v186 = v8;
    v185[2] = v6;
    v86 = v110;
    v188 = v110;
    v185[1] = 1;
    v85 = 0LL;
    if ( v114 )
    {
      v114[2] = v11->cbSize + 18;
      *((_QWORD *)v114 + 2) = v11;
      v85 = 0LL;
    }
  }
  v87 = 0LL;
  v110 = 0LL;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    *(GUID *)v176 = v10;
    SharedModeEnginePeriodicity = DeriveStreamGroupParametersForStream(
                                    (__int64)v107,
                                    v6,
                                    2,
                                    *(__int64 *)v187,
                                    cData,
                                    (__int128 *)v176,
                                    0,
                                    0,
                                    &Src->wFormatTag,
                                    0,
                                    (LPVOID **)&v110);
    v87 = v110;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v85, (int)&AudioResourceManager_StreamSettings_Derived, v84);
  v113 = 0LL;
  if ( SharedModeEnginePeriodicity < 0
    || (Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v113),
        SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
                                        g_DeviceGraphStore,
                                        v86,
                                        &v113),
        SharedModeEnginePeriodicity < 0) )
  {
LABEL_158:
    AudSrvTraceLoggingErrorHelper(
      "CAudioResourceManager::CreateInternalLoopbackStream",
      2934,
      SharedModeEnginePeriodicity);
LABEL_159:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Cu,
        (__int64)&WPP_77202523448037bdbe1ee95759e6b961_Traceguids,
        SharedModeEnginePeriodicity);
    }
    goto LABEL_163;
  }
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v113 + 112LL))(v113, &lpCriticalSection);
  v109 = 0LL;
  SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, unsigned __int16 *, _QWORD, _DWORD *, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
                                  g_DeviceGraphManager,
                                  v113,
                                  v87,
                                  0LL,
                                  v114,
                                  &v109);
  if ( SharedModeEnginePeriodicity >= 0 )
    SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(__int64, _DWORD *, struct CAudioSessionManagerProvider *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)v109 + 248LL))(
                                    v109,
                                    v185,
                                    v115,
                                    v165);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v88, (int)&AudioResourceManager_Stream_Created, v89);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Au,
      (__int64)&WPP_77202523448037bdbe1ee95759e6b961_Traceguids,
      SharedModeEnginePeriodicity);
  }
  v108 = 0LL;
  if ( SharedModeEnginePeriodicity < 0
    || (v90 = v109,
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v108),
        SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v90 + 200LL))(
                                        v90,
                                        &v108),
        SharedModeEnginePeriodicity < 0) )
  {
LABEL_155:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v108);
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v109);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    if ( SharedModeEnginePeriodicity >= 0 )
      goto LABEL_159;
    goto LABEL_158;
  }
  v91 = v108;
  if ( v108 )
  {
LABEL_145:
    if ( SharedModeEnginePeriodicity >= 0 && v91 )
    {
      v158 = 0LL;
      if ( (*(int (__fastcall **)(struct ISaDeviceProxy *, SaDeviceParams **))(*(_QWORD *)v91 + 104LL))(v91, &v158) >= 0 )
      {
        v157 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v140, &v157) && v140 )
        {
          v157 = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v101);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        v102 = (const struct _TlgProvider_t *)*((_QWORD *)v157 + 1);
        if ( *(_DWORD *)v102 > 4u )
        {
          v255 = &GUID_00000000_0000_0000_0000_000000000000;
          v256 = 16LL;
          v257 = (char *)v158 + 80;
          v258 = 16LL;
          v141 = *((_DWORD *)v107 + 39);
          v259 = &v141;
          v260 = 4LL;
          TlgWrite(v102, &unk_180173978, v99, v100, 5u, &v254);
        }
      }
      if ( v158 )
        SaDeviceParams::`scalar deleting destructor'((LPVOID *)v158);
    }
    goto LABEL_155;
  }
  v112 = 0LL;
  v177 = v8;
  v178 = v7;
  SharedModeEnginePeriodicity = DeriveSaDeviceParametersForStream(
                                  v107,
                                  AUDCLNT_SHAREMODE_SHARED,
                                  v6,
                                  &v178,
                                  &v177,
                                  v14,
                                  v13,
                                  *((_QWORD *)v87 + 3),
                                  &v112);
  v92 = 0LL;
  v111 = 0LL;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v115 = 0LL;
    SharedModeEnginePeriodicity = GetAudioSessionManagerProvider(&v115);
    v93 = v115;
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      v111 = 0LL;
      SharedModeEnginePeriodicity = CAudioSessionManagerProvider::GetAudioSessionManager(v115, v86, &v111);
      v92 = (volatile signed __int32 *)v111;
    }
    if ( v93 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v93);
  }
  DoesExclusiveModeOverrideShared = CEndpointCharacteristics::DoesExclusiveModeOverrideShared(v107);
  if ( SharedModeEnginePeriodicity < 0 )
    goto LABEL_129;
  if ( DoesExclusiveModeOverrideShared )
  {
    v96 = _InterlockedCompareExchange(v92 + 77, 0, 0);
    v92 = (volatile signed __int32 *)v111;
    if ( v96 )
    {
      SharedModeEnginePeriodicity = -2005139364;
LABEL_129:
      v97 = (LPVOID *)v112;
LABEL_130:
      v98 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Bu,
          (__int64)&WPP_77202523448037bdbe1ee95759e6b961_Traceguids,
          SharedModeEnginePeriodicity);
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McTemplateU0((__int64)v98, (int)&AudioResourceManager_SaDevice_Created, v95);
      if ( SharedModeEnginePeriodicity >= 0 )
        SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, struct ISaDeviceProxy *, __int64, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                                        g_DeviceGraphManager,
                                        v109,
                                        v108,
                                        1LL,
                                        v165);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McTemplateU0((__int64)v98, (int)&AudioResourceManager_SaDevice_Connected, v95);
      if ( v92 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release((__int64)v92);
      if ( v97 )
        SaDeviceParams::`scalar deleting destructor'(v97);
      v91 = v108;
      goto LABEL_145;
    }
    v7 = v170;
  }
  *(_QWORD *)v167 = 0LL;
  v168 = 0;
  v179 = v7;
  v104 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *, _QWORD, GUID *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, _DWORD))(**((_QWORD **)v169 + 6) + 56LL))(
           *((_QWORD *)v169 + 6),
           v86,
           *((unsigned int *)v107 + 39),
           &v179,
           v6,
           0);
  SharedModeEnginePeriodicity = v104;
  if ( v104 >= 0 )
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v108);
    v97 = (LPVOID *)v112;
    SharedModeEnginePeriodicity = CAudioResourceManager::GetSaDeviceForSharedStream(
                                    v105,
                                    v107,
                                    v112,
                                    0x20002u,
                                    AUDCLNT_SHAREMODE_SHARED,
                                    (struct SaDeviceResourceParams *)v167,
                                    (bool)v167,
                                    0,
                                    (struct CAudioSessionManager *)v92,
                                    0,
                                    0,
                                    &v108);
    if ( *(_QWORD *)v167 )
      (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
    goto LABEL_130;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    2882LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v104);
  if ( *(_QWORD *)v167 )
    (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
  if ( v92 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release((__int64)v92);
  if ( v112 )
    SaDeviceParams::`scalar deleting destructor'((LPVOID *)v112);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v108);
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v109);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
LABEL_163:
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::~ComPtr<IDeviceGraphObjectsStore>(&v113);
  std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>((LPVOID **)&v110);
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)&v114);
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)&v160);
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)&v161);
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)&v162);
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)&v163);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)&v107);
  return (unsigned int)SharedModeEnginePeriodicity;
}
