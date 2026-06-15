/*
 * XREFs of ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F5EF4
 * Callers:
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800F5CCC (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     McTemplateU0 @ 0x1800035F4 (McTemplateU0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180013360 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180018550 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002BF10 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002C480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180035C70 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180036AA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18003B330 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18003F6C0 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800407D0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x1800410B0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180043994 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x1800465E0 (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180046BD4 (-HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800506B8 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800EDBCC (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??_GStreamGroupParams@@QEAAPEAXI@Z @ 0x1800F5B74 (--_GStreamGroupParams@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall CAudioResourceManager::CreateInternalLoopbackStream(
        CAudioResourceManager *this,
        unsigned __int16 *a2,
        struct IStreamGroupProxy *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  int v4; // eax
  int SaDeviceForSharedStream; // esi
  __int64 v6; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v7; // ebx
  struct _GUID v8; // xmm6
  struct _GUID v9; // xmm7
  void *v10; // rcx
  void *v11; // rcx
  struct tWAVEFORMATEX *v12; // rcx
  struct tWAVEFORMATEX *v13; // rcx
  _DWORD *v14; // rbx
  const GUID *v15; // r8
  const GUID *v16; // r9
  void *v17; // r8
  const struct _TlgProvider_t *v18; // rcx
  unsigned __int16 v19; // ax
  void *v20; // r8
  LPCGUID v21; // r8
  TraceLoggingHProvider v22; // r9
  void *v23; // r8
  LPCGUID v24; // r8
  TraceLoggingHProvider v25; // r9
  _DWORD *v26; // rbx
  const GUID *v27; // r8
  const GUID *v28; // r9
  void *v29; // r8
  const struct _TlgProvider_t *v30; // rcx
  unsigned __int16 v31; // ax
  void *v32; // r8
  LPCGUID v33; // r8
  TraceLoggingHProvider v34; // r9
  void *v35; // r8
  LPCGUID v36; // r8
  TraceLoggingHProvider v37; // r9
  struct tWAVEFORMATEX *v38; // rbx
  const GUID *v39; // r8
  const GUID *v40; // r9
  void *v41; // r8
  const struct _TlgProvider_t *v42; // rcx
  WORD wFormatTag; // ax
  void *v44; // r8
  LPCGUID v45; // r8
  TraceLoggingHProvider v46; // r9
  void *v47; // r8
  LPCGUID v48; // r8
  TraceLoggingHProvider v49; // r9
  struct tWAVEFORMATEX *v50; // rbx
  const GUID *v51; // r8
  const GUID *v52; // r9
  void *v53; // r8
  const struct _TlgProvider_t *v54; // rcx
  WORD v55; // ax
  void *v56; // r8
  LPCGUID v57; // r8
  TraceLoggingHProvider v58; // r9
  void *v59; // r8
  LPCGUID v60; // r8
  TraceLoggingHProvider v61; // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v62; // edi
  int SharedModeEnginePeriodicity; // eax
  double v64; // xmm1_8
  __int64 v65; // rbx
  void *v66; // rcx
  int v67; // eax
  int v68; // ecx
  int v69; // r8d
  unsigned __int16 *v70; // rbx
  int v71; // eax
  __int64 v72; // rdx
  int v73; // ecx
  int v74; // r8d
  int v75; // eax
  struct ISaDeviceProxy *v76; // rcx
  LPVOID *v77; // rcx
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v79; // rbx
  const unsigned __int16 *v80; // rdx
  int AudioSessionManager; // eax
  struct CAudioSessionManager *v82; // rdi
  __int64 *v83; // rsi
  __int64 v84; // rdi
  unsigned int v85; // eax
  int v86; // eax
  unsigned __int64 v87; // r9
  __int64 v88; // rdx
  CAudioResourceManager *v89; // rcx
  int v90; // ecx
  int v91; // r8d
  int v92; // ecx
  int v93; // r8d
  LPVOID *v94; // rcx
  bool v95; // bl
  LPVOID *v96; // rcx
  __int64 v97; // rdx
  void *v98; // r8
  const struct _TlgProvider_t *v99; // rbx
  LPCGUID v100; // r8
  LPCGUID v101; // r9
  void *v102; // rcx
  struct tWAVEFORMATEX *v103; // rcx
  struct tWAVEFORMATEX *v104; // rcx
  void *v105; // rcx
  void *v106; // rcx
  void *cData; // [rsp+28h] [rbp-130h]
  CEndpointCharacteristics *v109; // [rsp+D8h] [rbp-80h] BYREF
  struct ISaDeviceProxy *v110; // [rsp+E0h] [rbp-78h] BYREF
  struct tWAVEFORMATEX *v111; // [rsp+E8h] [rbp-70h] BYREF
  LPVOID v112; // [rsp+F0h] [rbp-68h] BYREF
  struct tWAVEFORMATEX *v113; // [rsp+F8h] [rbp-60h] BYREF
  LPVOID Src; // [rsp+100h] [rbp-58h] BYREF
  __int64 v115; // [rsp+108h] [rbp-50h] BYREF
  LPVOID pv; // [rsp+110h] [rbp-48h] BYREF
  struct CAudioSessionManagerProvider *v117; // [rsp+118h] [rbp-40h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v118[2]; // [rsp+120h] [rbp-38h]
  LPVOID v119; // [rsp+128h] [rbp-30h] BYREF
  struct CAudioSessionManager *v120; // [rsp+130h] [rbp-28h] BYREF
  SaDeviceParams *v121; // [rsp+138h] [rbp-20h] BYREF
  __int64 v122; // [rsp+140h] [rbp-18h] BYREF
  StreamGroupParams *v123; // [rsp+148h] [rbp-10h] BYREF
  int v124; // [rsp+150h] [rbp-8h] BYREF
  WINBOOL v125; // [rsp+154h] [rbp-4h] BYREF
  WINBOOL v126; // [rsp+158h] [rbp+0h] BYREF
  int v127; // [rsp+15Ch] [rbp+4h] BYREF
  WINBOOL v128; // [rsp+160h] [rbp+8h] BYREF
  int v129; // [rsp+164h] [rbp+Ch] BYREF
  WINBOOL v130; // [rsp+168h] [rbp+10h] BYREF
  WINBOOL v131; // [rsp+16Ch] [rbp+14h] BYREF
  int v132; // [rsp+170h] [rbp+18h] BYREF
  WINBOOL v133; // [rsp+174h] [rbp+1Ch] BYREF
  WINBOOL v134; // [rsp+178h] [rbp+20h] BYREF
  WINBOOL v135; // [rsp+17Ch] [rbp+24h] BYREF
  int v136; // [rsp+180h] [rbp+28h] BYREF
  WINBOOL v137; // [rsp+184h] [rbp+2Ch] BYREF
  int v138; // [rsp+188h] [rbp+30h] BYREF
  WINBOOL v139; // [rsp+18Ch] [rbp+34h] BYREF
  WINBOOL v140; // [rsp+190h] [rbp+38h] BYREF
  int v141; // [rsp+194h] [rbp+3Ch] BYREF
  int v142; // [rsp+198h] [rbp+40h] BYREF
  WINBOOL v143; // [rsp+19Ch] [rbp+44h] BYREF
  int v144; // [rsp+1A0h] [rbp+48h] BYREF
  int v145; // [rsp+1A4h] [rbp+4Ch] BYREF
  LPVOID Context; // [rsp+1A8h] [rbp+50h] BYREF
  LPVOID v147; // [rsp+1B0h] [rbp+58h] BYREF
  LPVOID v148; // [rsp+1B8h] [rbp+60h] BYREF
  LPVOID v149; // [rsp+1C0h] [rbp+68h] BYREF
  LPVOID v150; // [rsp+1C8h] [rbp+70h] BYREF
  LPVOID v151; // [rsp+1D0h] [rbp+78h] BYREF
  LPVOID v152; // [rsp+1D8h] [rbp+80h] BYREF
  LPVOID v153; // [rsp+1E0h] [rbp+88h] BYREF
  LPVOID v154; // [rsp+1E8h] [rbp+90h] BYREF
  LPVOID v155; // [rsp+1F0h] [rbp+98h] BYREF
  LPVOID v156; // [rsp+1F8h] [rbp+A0h] BYREF
  LPVOID v157; // [rsp+200h] [rbp+A8h] BYREF
  unsigned __int16 *v158; // [rsp+208h] [rbp+B0h]
  WINBOOL fPending; // [rsp+210h] [rbp+B8h] BYREF
  SaDeviceParams *v160; // [rsp+218h] [rbp+C0h] BYREF
  int v161[2]; // [rsp+220h] [rbp+C8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+228h] [rbp+D0h] BYREF
  bool v163[8]; // [rsp+230h] [rbp+D8h] BYREF
  int v164; // [rsp+238h] [rbp+E0h]
  struct tWAVEFORMATEX **v165; // [rsp+240h] [rbp+E8h]
  struct tWAVEFORMATEX *v166; // [rsp+248h] [rbp+F0h] BYREF
  char v167; // [rsp+250h] [rbp+F8h]
  LPVOID *p_pv; // [rsp+258h] [rbp+100h]
  void *v169; // [rsp+260h] [rbp+108h] BYREF
  char v170; // [rsp+268h] [rbp+110h]
  struct tWAVEFORMATEX **v171; // [rsp+270h] [rbp+118h]
  struct tWAVEFORMATEX *v172; // [rsp+278h] [rbp+120h] BYREF
  char v173; // [rsp+280h] [rbp+128h]
  LPVOID *p_Src; // [rsp+288h] [rbp+130h]
  struct tWAVEFORMATEX *v175; // [rsp+290h] [rbp+138h] BYREF
  char v176; // [rsp+298h] [rbp+140h]
  LPVOID *v177; // [rsp+2A0h] [rbp+148h]
  struct tWAVEFORMATEX *v178; // [rsp+2A8h] [rbp+150h] BYREF
  char v179; // [rsp+2B0h] [rbp+158h]
  unsigned int v180[2]; // [rsp+2B8h] [rbp+160h]
  struct SaDeviceParams *v181; // [rsp+2C0h] [rbp+168h] BYREF
  char v182; // [rsp+2C8h] [rbp+170h]
  unsigned int v183[2]; // [rsp+2D0h] [rbp+178h]
  __int64 v184; // [rsp+2D8h] [rbp+180h] BYREF
  char v185; // [rsp+2E0h] [rbp+188h]
  CAudioResourceManager *v186; // [rsp+2E8h] [rbp+190h]
  GUID v187; // [rsp+2F8h] [rbp+1A0h] BYREF
  GUID v188; // [rsp+308h] [rbp+1B0h] BYREF
  GUID v189; // [rsp+318h] [rbp+1C0h] BYREF
  GUID v190; // [rsp+328h] [rbp+1D0h] BYREF
  LPINIT_ONCE v191; // [rsp+338h] [rbp+1E0h] BYREF
  int v192; // [rsp+340h] [rbp+1E8h]
  struct _GUID v193; // [rsp+348h] [rbp+1F0h] BYREF
  struct _GUID v194; // [rsp+358h] [rbp+200h] BYREF
  struct _GUID v195; // [rsp+368h] [rbp+210h] BYREF
  struct _GUID v196; // [rsp+378h] [rbp+220h] BYREF
  __int64 v197[2]; // [rsp+388h] [rbp+230h] BYREF
  struct _GUID v198; // [rsp+398h] [rbp+240h] BYREF
  struct _GUID v199; // [rsp+3A8h] [rbp+250h] BYREF
  struct _GUID v200; // [rsp+3B8h] [rbp+260h] BYREF
  struct _GUID v201; // [rsp+3C8h] [rbp+270h] BYREF
  __int64 v202; // [rsp+3D8h] [rbp+280h]
  struct _GUID v203; // [rsp+3E8h] [rbp+290h] BYREF
  _DWORD v204[3]; // [rsp+3F8h] [rbp+2A0h] BYREF
  struct _GUID v205; // [rsp+404h] [rbp+2ACh]
  int v206; // [rsp+414h] [rbp+2BCh]
  __int64 v207; // [rsp+418h] [rbp+2C0h]
  unsigned __int16 *v208; // [rsp+420h] [rbp+2C8h]
  GUID v209; // [rsp+428h] [rbp+2D0h] BYREF
  GUID v210; // [rsp+438h] [rbp+2E0h] BYREF
  GUID v211; // [rsp+448h] [rbp+2F0h] BYREF
  GUID v212; // [rsp+458h] [rbp+300h] BYREF
  EVENT_DATA_DESCRIPTOR v213; // [rsp+468h] [rbp+310h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v214; // [rsp+488h] [rbp+330h] BYREF
  WORD *v215; // [rsp+498h] [rbp+340h]
  __int64 v216; // [rsp+4A0h] [rbp+348h]
  DWORD *v217; // [rsp+4A8h] [rbp+350h]
  __int64 v218; // [rsp+4B0h] [rbp+358h]
  DWORD *v219; // [rsp+4B8h] [rbp+360h]
  __int64 v220; // [rsp+4C0h] [rbp+368h]
  char *v221; // [rsp+4C8h] [rbp+370h]
  __int64 v222; // [rsp+4D0h] [rbp+378h]
  int *v223; // [rsp+4D8h] [rbp+380h]
  __int64 v224; // [rsp+4E0h] [rbp+388h]
  EVENT_DATA_DESCRIPTOR v225; // [rsp+4E8h] [rbp+390h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v226; // [rsp+508h] [rbp+3B0h] BYREF
  char *v227; // [rsp+518h] [rbp+3C0h]
  __int64 v228; // [rsp+520h] [rbp+3C8h]
  char *v229; // [rsp+528h] [rbp+3D0h]
  __int64 v230; // [rsp+530h] [rbp+3D8h]
  char *v231; // [rsp+538h] [rbp+3E0h]
  __int64 v232; // [rsp+540h] [rbp+3E8h]
  char *v233; // [rsp+548h] [rbp+3F0h]
  __int64 v234; // [rsp+550h] [rbp+3F8h]
  int *v235; // [rsp+558h] [rbp+400h]
  __int64 v236; // [rsp+560h] [rbp+408h]
  EVENT_DATA_DESCRIPTOR v237; // [rsp+568h] [rbp+410h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v238; // [rsp+588h] [rbp+430h] BYREF
  char *v239; // [rsp+598h] [rbp+440h]
  __int64 v240; // [rsp+5A0h] [rbp+448h]
  char *v241; // [rsp+5A8h] [rbp+450h]
  __int64 v242; // [rsp+5B0h] [rbp+458h]
  char *v243; // [rsp+5B8h] [rbp+460h]
  __int64 v244; // [rsp+5C0h] [rbp+468h]
  char *v245; // [rsp+5C8h] [rbp+470h]
  __int64 v246; // [rsp+5D0h] [rbp+478h]
  int *v247; // [rsp+5D8h] [rbp+480h]
  __int64 v248; // [rsp+5E0h] [rbp+488h]
  EVENT_DATA_DESCRIPTOR v249; // [rsp+5E8h] [rbp+490h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v250; // [rsp+608h] [rbp+4B0h] BYREF
  WORD *p_nChannels; // [rsp+618h] [rbp+4C0h]
  __int64 v252; // [rsp+620h] [rbp+4C8h]
  DWORD *p_nSamplesPerSec; // [rsp+628h] [rbp+4D0h]
  __int64 v254; // [rsp+630h] [rbp+4D8h]
  DWORD *p_nAvgBytesPerSec; // [rsp+638h] [rbp+4E0h]
  __int64 v256; // [rsp+640h] [rbp+4E8h]
  char *v257; // [rsp+648h] [rbp+4F0h]
  __int64 v258; // [rsp+650h] [rbp+4F8h]
  int *v259; // [rsp+658h] [rbp+500h]
  __int64 v260; // [rsp+660h] [rbp+508h]
  EVENT_DATA_DESCRIPTOR v261; // [rsp+668h] [rbp+510h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v262; // [rsp+688h] [rbp+530h] BYREF
  WORD *v263; // [rsp+698h] [rbp+540h]
  __int64 v264; // [rsp+6A0h] [rbp+548h]
  DWORD *v265; // [rsp+6A8h] [rbp+550h]
  __int64 v266; // [rsp+6B0h] [rbp+558h]
  DWORD *v267; // [rsp+6B8h] [rbp+560h]
  __int64 v268; // [rsp+6C0h] [rbp+568h]
  GUID *v269; // [rsp+6C8h] [rbp+570h]
  __int64 v270; // [rsp+6D0h] [rbp+578h]
  EVENT_DATA_DESCRIPTOR v271; // [rsp+6D8h] [rbp+580h] BYREF
  GUID *v272; // [rsp+6F8h] [rbp+5A0h]
  __int64 v273; // [rsp+700h] [rbp+5A8h]
  char *v274; // [rsp+708h] [rbp+5B0h]
  __int64 v275; // [rsp+710h] [rbp+5B8h]
  int *v276; // [rsp+718h] [rbp+5C0h]
  __int64 v277; // [rsp+720h] [rbp+5C8h]
  EVENT_DATA_DESCRIPTOR v278; // [rsp+728h] [rbp+5D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+748h] [rbp+5F0h] BYREF
  char *v280; // [rsp+758h] [rbp+600h]
  __int64 v281; // [rsp+760h] [rbp+608h]
  char *v282; // [rsp+768h] [rbp+610h]
  __int64 v283; // [rsp+770h] [rbp+618h]
  char *v284; // [rsp+778h] [rbp+620h]
  __int64 v285; // [rsp+780h] [rbp+628h]
  GUID *v286; // [rsp+788h] [rbp+630h]
  __int64 v287; // [rsp+790h] [rbp+638h]
  EVENT_DATA_DESCRIPTOR v288; // [rsp+798h] [rbp+640h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v289; // [rsp+7B8h] [rbp+660h] BYREF
  char *v290; // [rsp+7C8h] [rbp+670h]
  __int64 v291; // [rsp+7D0h] [rbp+678h]
  char *v292; // [rsp+7D8h] [rbp+680h]
  __int64 v293; // [rsp+7E0h] [rbp+688h]
  char *v294; // [rsp+7E8h] [rbp+690h]
  __int64 v295; // [rsp+7F0h] [rbp+698h]
  GUID *v296; // [rsp+7F8h] [rbp+6A0h]
  __int64 v297; // [rsp+800h] [rbp+6A8h]
  EVENT_DATA_DESCRIPTOR v298; // [rsp+808h] [rbp+6B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v299; // [rsp+828h] [rbp+6D0h] BYREF
  WORD *v300; // [rsp+838h] [rbp+6E0h]
  __int64 v301; // [rsp+840h] [rbp+6E8h]
  DWORD *v302; // [rsp+848h] [rbp+6F0h]
  __int64 v303; // [rsp+850h] [rbp+6F8h]
  DWORD *v304; // [rsp+858h] [rbp+700h]
  __int64 v305; // [rsp+860h] [rbp+708h]
  GUID *v306; // [rsp+868h] [rbp+710h]
  __int64 v307; // [rsp+870h] [rbp+718h]
  EVENT_DATA_DESCRIPTOR v308; // [rsp+878h] [rbp+720h] BYREF
  int *v309; // [rsp+898h] [rbp+740h]
  __int64 v310; // [rsp+8A0h] [rbp+748h]
  EVENT_DATA_DESCRIPTOR v311; // [rsp+8A8h] [rbp+750h] BYREF
  int *v312; // [rsp+8C8h] [rbp+770h]
  __int64 v313; // [rsp+8D0h] [rbp+778h]
  EVENT_DATA_DESCRIPTOR v314; // [rsp+8D8h] [rbp+780h] BYREF
  int *v315; // [rsp+8F8h] [rbp+7A0h]
  __int64 v316; // [rsp+900h] [rbp+7A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+908h] [rbp+7B0h] BYREF
  int *v318; // [rsp+928h] [rbp+7D0h]
  __int64 v319; // [rsp+930h] [rbp+7D8h]
  wil::details::in1diag3 *retaddr; // [rsp+9B0h] [rbp+858h]

  v202 = -2LL;
  *(_QWORD *)v161 = a4;
  v119 = a3;
  v158 = a2;
  v186 = this;
  v109 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PVOID, unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v109);
  SaDeviceForSharedStream = v4;
  if ( v4 < 0 )
  {
    v6 = 2750LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_184;
  }
  v7 = (unsigned int)CEndpointCharacteristics::HardwareLoopbackEnabled(v109) != 0
     ? eLoopbackConnector
     : eHostProcessConnector;
  v118[0] = v7;
  v187 = GUID_00000000_0000_0000_0000_000000000000;
  v188 = GUID_00000000_0000_0000_0000_000000000000;
  v189 = GUID_00000000_0000_0000_0000_000000000000;
  v190 = GUID_00000000_0000_0000_0000_000000000000;
  v4 = DeriveAudioProcessingModeConfiguration(0, 0, 0, v109, 2, 0, v7, 0, 0, &v187, &v188, &v189, &v190);
  SaDeviceForSharedStream = v4;
  if ( v4 < 0 )
  {
    v6 = 2769LL;
    goto LABEL_5;
  }
  v112 = 0LL;
  Src = 0LL;
  v113 = 0LL;
  v111 = 0LL;
  v165 = &v111;
  v166 = 0LL;
  v167 = 1;
  v171 = &v113;
  v172 = 0LL;
  v173 = 1;
  p_Src = &Src;
  v175 = 0LL;
  v176 = 1;
  v177 = &v112;
  v178 = 0LL;
  v179 = 1;
  v8 = v187;
  v203 = v187;
  v9 = v188;
  v193 = v188;
  v194 = v189;
  SaDeviceForSharedStream = DeriveDeviceGraphFormatsForStream(
                              v109,
                              0,
                              (struct _GUID *)(unsigned int)v7,
                              AUDCLNT_SHAREMODE_SHARED,
                              &v194,
                              &v193,
                              &v203,
                              0LL,
                              &v178,
                              &v175,
                              &v172,
                              &v166);
  if ( v179 )
  {
    v10 = *v177;
    *v177 = v178;
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( v176 )
  {
    v11 = *p_Src;
    *p_Src = v175;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( v173 )
  {
    v12 = *v171;
    *v171 = v172;
    if ( v12 )
      CoTaskMemFree(v12);
  }
  if ( v167 )
  {
    v13 = *v165;
    *v165 = v166;
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( SaDeviceForSharedStream >= 0 )
  {
    v14 = v112;
    if ( v112 )
    {
      v19 = *(_WORD *)v112;
      if ( *(_WORD *)v112 == 0xFFFE )
      {
        v148 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v126, &v148) && v126 )
        {
          v148 = &qword_1801B7588;
          qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v23);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
        }
        if ( **((_DWORD **)v148 + 1) > 4u )
        {
          TlgCreateWsz(&v226, L"WAVEFORMATEXTENSIBLE");
          v227 = (char *)v112 + 2;
          v228 = 2LL;
          v229 = (char *)v112 + 4;
          v230 = 4LL;
          v231 = (char *)v112 + 8;
          v232 = 4LL;
          v233 = (char *)(v14 + 6);
          v234 = 16LL;
          v127 = v14[5];
          v235 = &v127;
          v236 = 4LL;
          TlgWrite(v25, &unk_180177F81, v24, (LPCGUID)v25, 8u, &v225);
        }
      }
      else
      {
        v210 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v210.Data1 = v19;
        v147 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v125, &v147) && v125 )
        {
          v147 = &qword_1801B7588;
          qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v20);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
        }
        if ( **((_DWORD **)v147 + 1) > 4u )
        {
          TlgCreateWsz(&pDesc, L"WAVEFORMATEX");
          v280 = (char *)v112 + 2;
          v281 = 2LL;
          v282 = (char *)v112 + 4;
          v283 = 4LL;
          v284 = (char *)v112 + 8;
          v285 = 4LL;
          v286 = &v210;
          v287 = 16LL;
          TlgWrite(v22, &unk_180178025, v21, (LPCGUID)v22, 7u, &v278);
        }
      }
    }
    else
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_1801B7588;
        qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v17);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
      }
      v18 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v18 > 4u )
      {
        v124 = 0;
        v318 = &v124;
        v319 = 4LL;
        TlgWrite(v18, &unk_1801780BC, v15, v16, 3u, &pData);
      }
    }
    v26 = Src;
    if ( Src )
    {
      v31 = *(_WORD *)Src;
      if ( *(_WORD *)Src == 0xFFFE )
      {
        v151 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v131, &v151) && v131 )
        {
          v151 = &qword_1801B7588;
          qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v35);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
        }
        if ( **((_DWORD **)v151 + 1) > 4u )
        {
          TlgCreateWsz(&v238, L"WAVEFORMATEXTENSIBLE");
          v239 = (char *)Src + 2;
          v240 = 2LL;
          v241 = (char *)Src + 4;
          v242 = 4LL;
          v243 = (char *)Src + 8;
          v244 = 4LL;
          v245 = (char *)(v26 + 6);
          v246 = 16LL;
          v132 = v26[5];
          v247 = &v132;
          v248 = 4LL;
          TlgWrite(v37, &unk_180177DDF, v36, (LPCGUID)v37, 8u, &v237);
        }
      }
      else
      {
        v212 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v212.Data1 = v31;
        v150 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v130, &v150) && v130 )
        {
          v150 = &qword_1801B7588;
          qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v32);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
        }
        if ( **((_DWORD **)v150 + 1) > 4u )
        {
          TlgCreateWsz(&v289, L"WAVEFORMATEX");
          v290 = (char *)Src + 2;
          v291 = 2LL;
          v292 = (char *)Src + 4;
          v293 = 4LL;
          v294 = (char *)Src + 8;
          v295 = 4LL;
          v296 = &v212;
          v297 = 16LL;
          TlgWrite(v34, &unk_180177E86, v33, (LPCGUID)v34, 7u, &v288);
        }
      }
    }
    else
    {
      v149 = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v128, &v149) && v128 )
      {
        v149 = &qword_1801B7588;
        qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v29);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
      }
      v30 = (const struct _TlgProvider_t *)*((_QWORD *)v149 + 1);
      if ( *(_DWORD *)v30 > 4u )
      {
        v129 = 0;
        v309 = &v129;
        v310 = 4LL;
        TlgWrite(v30, &unk_180177F20, v27, v28, 3u, &v308);
      }
    }
    v38 = v113;
    if ( v113 )
    {
      wFormatTag = v113->wFormatTag;
      if ( v113->wFormatTag == 0xFFFE )
      {
        v154 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v135, &v154) && v135 )
        {
          v154 = &qword_1801B7588;
          qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v47);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
        }
        if ( **((_DWORD **)v154 + 1) > 4u )
        {
          TlgCreateWsz(&v250, L"WAVEFORMATEXTENSIBLE");
          p_nChannels = &v113->nChannels;
          v252 = 2LL;
          p_nSamplesPerSec = &v113->nSamplesPerSec;
          v254 = 4LL;
          p_nAvgBytesPerSec = &v113->nAvgBytesPerSec;
          v256 = 4LL;
          v257 = (char *)&v38[1].nSamplesPerSec + 2;
          v258 = 16LL;
          v136 = *(_DWORD *)&v38[1].nChannels;
          v259 = &v136;
          v260 = 4LL;
          TlgWrite(v49, &unk_180177C40, v48, (LPCGUID)v49, 8u, &v249);
        }
      }
      else
      {
        v211 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v211.Data1 = wFormatTag;
        v153 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v134, &v153) && v134 )
        {
          v153 = &qword_1801B7588;
          qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v44);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
        }
        if ( **((_DWORD **)v153 + 1) > 4u )
        {
          TlgCreateWsz(&v262, L"WAVEFORMATEX");
          v263 = &v113->nChannels;
          v264 = 2LL;
          v265 = &v113->nSamplesPerSec;
          v266 = 4LL;
          v267 = &v113->nAvgBytesPerSec;
          v268 = 4LL;
          v269 = &v211;
          v270 = 16LL;
          TlgWrite(v46, &unk_180177CE6, v45, (LPCGUID)v46, 7u, &v261);
        }
      }
    }
    else
    {
      v152 = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v133, &v152) && v133 )
      {
        v152 = &qword_1801B7588;
        qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v41);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
      }
      v42 = (const struct _TlgProvider_t *)*((_QWORD *)v152 + 1);
      if ( *(_DWORD *)v42 > 4u )
      {
        v145 = 0;
        v315 = &v145;
        v316 = 4LL;
        TlgWrite(v42, &unk_180177D7F, v39, v40, 3u, &v314);
      }
    }
    v50 = v111;
    if ( v111 )
    {
      v55 = v111->wFormatTag;
      if ( v111->wFormatTag == 0xFFFE )
      {
        v157 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v140, &v157) && v140 )
        {
          v157 = &qword_1801B7588;
          qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v59);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
        }
        if ( **((_DWORD **)v157 + 1) > 4u )
        {
          TlgCreateWsz(&v214, L"WAVEFORMATEXTENSIBLE");
          v215 = &v111->nChannels;
          v216 = 2LL;
          v217 = &v111->nSamplesPerSec;
          v218 = 4LL;
          v219 = &v111->nAvgBytesPerSec;
          v220 = 4LL;
          v221 = (char *)&v50[1].nSamplesPerSec + 2;
          v222 = 16LL;
          v141 = *(_DWORD *)&v50[1].nChannels;
          v223 = &v141;
          v224 = 4LL;
          TlgWrite(v61, &unk_180177AA4, v60, (LPCGUID)v61, 8u, &v213);
        }
      }
      else
      {
        v209 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v209.Data1 = v55;
        v156 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v139, &v156) && v139 )
        {
          v156 = &qword_1801B7588;
          qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v56);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
        }
        if ( **((_DWORD **)v156 + 1) > 4u )
        {
          TlgCreateWsz(&v299, L"WAVEFORMATEX");
          v300 = &v111->nChannels;
          v301 = 2LL;
          v302 = &v111->nSamplesPerSec;
          v303 = 4LL;
          v304 = &v111->nAvgBytesPerSec;
          v305 = 4LL;
          v306 = &v209;
          v307 = 16LL;
          TlgWrite(v58, &unk_180177B49, v57, (LPCGUID)v58, 7u, &v298);
        }
      }
    }
    else
    {
      v155 = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v137, &v155) && v137 )
      {
        v155 = &qword_1801B7588;
        qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v53);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
      }
      v54 = (const struct _TlgProvider_t *)*((_QWORD *)v155 + 1);
      if ( *(_DWORD *)v54 > 4u )
      {
        v138 = 0;
        v312 = &v138;
        v313 = 4LL;
        TlgWrite(v54, &unk_180177BE1, v51, v52, 3u, &v311);
      }
    }
    v199 = v8;
    v62 = v118[0];
    SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                    (__int64)v109,
                                    v118[0],
                                    &v111->wFormatTag,
                                    &v199,
                                    0,
                                    &v142,
                                    0LL,
                                    0LL,
                                    0LL);
    SaDeviceForSharedStream = SharedModeEnginePeriodicity;
    if ( SharedModeEnginePeriodicity < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAEA,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)SharedModeEnginePeriodicity);
      goto LABEL_176;
    }
    v64 = (double)v142 * 10000000.0 / (double)(int)v111->nSamplesPerSec + 0.5;
    v65 = (unsigned int)(int)v64;
    pv = 0LL;
    p_pv = &pv;
    v169 = 0LL;
    v170 = 1;
    v195 = v9;
    v196 = v8;
    SaDeviceForSharedStream = InitializeStreamAndModeDescriptors(
                                v109,
                                0,
                                131074,
                                2u,
                                v62,
                                &v196,
                                &v195,
                                0,
                                0LL,
                                (__int64)v112,
                                0LL,
                                v65,
                                0LL,
                                0LL,
                                0LL,
                                0LL,
                                0LL,
                                0LL,
                                0,
                                0,
                                0,
                                0LL,
                                0LL,
                                0LL,
                                &v169);
    if ( v170 )
    {
      v66 = *p_pv;
      *p_pv = v169;
      if ( v66 )
        CoTaskMemFree(v66);
    }
    if ( SaDeviceForSharedStream < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAF3,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)SaDeviceForSharedStream);
LABEL_174:
      v102 = pv;
      pv = 0LL;
      if ( v102 )
        CoTaskMemFree(v102);
      goto LABEL_176;
    }
    v206 = 0;
    v207 = (unsigned int)(int)v64;
    v204[0] = 2;
    v205 = v9;
    v204[2] = v62;
    v208 = v158;
    v204[1] = 1;
    if ( pv )
    {
      *((_DWORD *)pv + 2) = *((unsigned __int16 *)v112 + 8) + 18;
      *((_QWORD *)pv + 2) = v112;
      v65 = v207;
    }
    v123 = 0LL;
    *(GUID *)v197 = v190;
    v67 = DeriveStreamGroupParametersForStream(
            (__int64)v109,
            v62,
            2,
            (void *)v65,
            cData,
            (__int128 *)v197,
            0,
            0,
            (unsigned __int16 *)Src,
            0,
            (LPVOID **)&v123);
    SaDeviceForSharedStream = v67;
    if ( v67 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB07,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v67);
      goto LABEL_172;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McTemplateU0(v68, (int)&AudioResourceManager_StreamSettings_Derived, v69);
    v122 = 0LL;
    v70 = v158;
    v71 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                               + 24LL))(
            g_DeviceGraphStore,
            v158,
            &v122);
    SaDeviceForSharedStream = v71;
    if ( v71 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0D,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v71);
LABEL_171:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v122);
LABEL_172:
      if ( v123 )
        StreamGroupParams::`scalar deleting destructor'((void **)v123);
      goto LABEL_174;
    }
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v122 + 112LL))(v122, &lpCriticalSection);
    v115 = 0LL;
    SaDeviceForSharedStream = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, StreamGroupParams *, _QWORD, LPVOID, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
                                g_DeviceGraphManager,
                                v122,
                                v123,
                                0LL,
                                pv,
                                &v115);
    if ( SaDeviceForSharedStream < 0 )
    {
      v72 = 2837LL;
LABEL_107:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v72,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)SaDeviceForSharedStream);
      goto LABEL_169;
    }
    SaDeviceForSharedStream = (*(__int64 (__fastcall **)(__int64, _DWORD *, LPVOID, _QWORD))(*(_QWORD *)v115 + 248LL))(
                                v115,
                                v204,
                                v119,
                                *(_QWORD *)v161);
    if ( SaDeviceForSharedStream < 0 )
    {
      v72 = 2840LL;
      goto LABEL_107;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McTemplateU0(v73, (int)&AudioResourceManager_Stream_Created, v74);
    v110 = 0LL;
    v75 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v115 + 200LL))(v115, &v110);
    SaDeviceForSharedStream = v75;
    if ( v75 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1E,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v75);
LABEL_168:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v110);
LABEL_169:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v115);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_171;
    }
    v76 = v110;
    SaDeviceForSharedStream = 0;
    if ( !v110 )
    {
      v121 = 0LL;
      *(_QWORD *)v180 = &v121;
      v181 = 0LL;
      v182 = 1;
      v198 = v9;
      v201 = v8;
      SaDeviceForSharedStream = DeriveSaDeviceParametersForStream(
                                  v109,
                                  AUDCLNT_SHAREMODE_SHARED,
                                  v62,
                                  &v201,
                                  &v198,
                                  v111,
                                  v113,
                                  *((_QWORD *)v123 + 3),
                                  &v181);
      if ( v182 )
      {
        v77 = **(LPVOID ***)v180;
        **(_QWORD **)v180 = v181;
        if ( v77 )
          SaDeviceParams::`scalar deleting destructor'(v77);
      }
      if ( SaDeviceForSharedStream < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB26,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)SaDeviceForSharedStream);
LABEL_144:
        v94 = (LPVOID *)v121;
LABEL_166:
        if ( v94 )
          SaDeviceParams::`scalar deleting destructor'(v94);
        goto LABEL_168;
      }
      v117 = 0LL;
      AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v117);
      SaDeviceForSharedStream = AudioSessionManagerProvider;
      if ( AudioSessionManagerProvider < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB2A,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)AudioSessionManagerProvider);
        v79 = v117;
LABEL_142:
        if ( v79 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v79);
        goto LABEL_144;
      }
      v120 = 0LL;
      v80 = v70;
      v79 = v117;
      AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v117, v80, &v120);
      SaDeviceForSharedStream = AudioSessionManager;
      if ( AudioSessionManager < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB2D,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)AudioSessionManager);
LABEL_125:
        v82 = v120;
LABEL_140:
        if ( v82 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release((__int64)v82);
        goto LABEL_142;
      }
      if ( CEndpointCharacteristics::DoesExclusiveModeOverrideShared(v109) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v120 + 77, 0, 0) )
        {
          SaDeviceForSharedStream = -2005139364;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB35,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)0x887C005CLL);
          v79 = v117;
          goto LABEL_125;
        }
        v8 = v187;
        v79 = v117;
      }
      *(_QWORD *)v163 = 0LL;
      v164 = 0;
      v200 = v8;
      v83 = (__int64 *)*((_QWORD *)v186 + 6);
      v84 = *v83;
      v85 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v109 + 56LL))(v109);
      v86 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 *, _QWORD, struct _GUID *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, _DWORD))(v84 + 56))(
              v83,
              v158,
              v85,
              &v200,
              v118[0],
              0);
      SaDeviceForSharedStream = v86;
      v82 = v120;
      if ( v86 < 0 )
      {
        v87 = (unsigned int)v86;
        v88 = 2875LL;
        goto LABEL_138;
      }
      v89 = v110;
      v110 = 0LL;
      if ( v89 )
        (*(void (__fastcall **)(CAudioResourceManager *, _QWORD))(*(_QWORD *)v89 + 16LL))(v89, 0LL);
      SaDeviceForSharedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                  v89,
                                  v109,
                                  v121,
                                  0x20002u,
                                  AUDCLNT_SHAREMODE_SHARED,
                                  (struct SaDeviceResourceParams *)v163,
                                  (bool)v163,
                                  0,
                                  v82,
                                  0,
                                  0,
                                  &v110);
      if ( SaDeviceForSharedStream < 0 )
      {
        v88 = 2880LL;
LABEL_137:
        v87 = (unsigned int)SaDeviceForSharedStream;
LABEL_138:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v88,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v87);
        if ( *(_QWORD *)v163 )
          (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
        goto LABEL_140;
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McTemplateU0(v90, (int)&AudioResourceManager_SaDevice_Created, v91);
      SaDeviceForSharedStream = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, struct ISaDeviceProxy *, __int64, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                                  g_DeviceGraphManager,
                                  v115,
                                  v110,
                                  1LL,
                                  *(_QWORD *)v161);
      if ( SaDeviceForSharedStream < 0 )
      {
        v88 = 2892LL;
        goto LABEL_137;
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McTemplateU0(v92, (int)&AudioResourceManager_SaDevice_Connected, v93);
      SaDeviceForSharedStream = 0;
      if ( *(_QWORD *)v163 )
        (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
      if ( v82 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release((__int64)v82);
      if ( v79 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v79);
      if ( v121 )
        SaDeviceParams::`scalar deleting destructor'((LPVOID *)v121);
      v76 = v110;
    }
    v160 = 0LL;
    *(_QWORD *)v183 = &v160;
    v184 = 0LL;
    v185 = 1;
    v95 = (*(int (__fastcall **)(struct ISaDeviceProxy *, __int64 *))(*(_QWORD *)v76 + 104LL))(v76, &v184) >= 0;
    if ( v185 )
    {
      v96 = **(LPVOID ***)v183;
      **(_QWORD **)v183 = v184;
      if ( v96 )
        SaDeviceParams::`scalar deleting destructor'(v96);
    }
    if ( v95 )
    {
      v119 = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v143, &v119) && v143 )
      {
        v191 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
        v119 = &qword_1801B7588;
        qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v192 = 0;
        wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v191, v97, v98);
      }
      v99 = (const struct _TlgProvider_t *)*((_QWORD *)v119 + 1);
      if ( *(_DWORD *)v99 > 4u )
      {
        v272 = &GUID_00000000_0000_0000_0000_000000000000;
        v273 = 16LL;
        v274 = (char *)v160 + 80;
        v275 = 16LL;
        v144 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v109 + 56LL))(v109);
        v276 = &v144;
        v277 = 4LL;
        TlgWrite(v99, &unk_180177A5D, v100, v101, 5u, &v271);
      }
    }
    v94 = (LPVOID *)v160;
    goto LABEL_166;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAE0,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)SaDeviceForSharedStream);
LABEL_176:
  v103 = v111;
  v111 = 0LL;
  if ( v103 )
    CoTaskMemFree(v103);
  v104 = v113;
  v113 = 0LL;
  if ( v104 )
    CoTaskMemFree(v104);
  v105 = Src;
  Src = 0LL;
  if ( v105 )
    CoTaskMemFree(v105);
  v106 = v112;
  v112 = 0LL;
  if ( v106 )
    CoTaskMemFree(v106);
LABEL_184:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v109);
  return (unsigned int)SaDeviceForSharedStream;
}
