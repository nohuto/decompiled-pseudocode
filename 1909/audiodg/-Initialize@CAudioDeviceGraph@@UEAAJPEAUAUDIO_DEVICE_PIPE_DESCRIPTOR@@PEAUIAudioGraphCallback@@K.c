/*
 * XREFs of ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCStandardCrossProcessEventManager@@UICrossProcessEventManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEventManager@@@Z @ 0x140003440 (--$MakeAndInitialize@VCStandardCrossProcessEventManager@@UICrossProcessEventManager@@$$V@Details.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140003A58 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140003DB4 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000606C (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009EBC (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000BCF0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     _TlgKeywordOn @ 0x14000EEB0 (_TlgKeywordOn.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x14000FF9C (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@.c)
 *     ?AddHead@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPipeInstance@@@Z @ 0x1400131C4 (-AddHead@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU.c)
 *     _TlgWrite @ 0x140014224 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1400143CC (_TlgCreateWsz.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x1400148D8 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     atexit @ 0x140016558 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140029D3C (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14002A31C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     WPP_SF_qq @ 0x140039270 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioDeviceGraph::Initialize(
        CAudioDeviceGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        WINBOOL a4)
{
  CAudioDeviceGraph *v6; // r15
  struct _RTL_CRITICAL_SECTION *v7; // r13
  struct _RTL_CRITICAL_SECTION *v8; // r14
  int v9; // eax
  HRESULT Instance; // edi
  __int64 v11; // rax
  int *v12; // r12
  struct IUnknown **v13; // r12
  int v14; // eax
  __int64 *v15; // rdi
  HRESULT v16; // eax
  unsigned int v17; // edx
  int DevicePipeInstance; // ebx
  CPipeInstance *v19; // rbx
  int v20; // eax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  struct Windows::Media::Devices::IAudioDeviceModulesManager *v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  bool v27; // zf
  LPVOID *v28; // rax
  __int64 v29; // rcx
  WINBOOL v30; // eax
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v31; // rdi
  unsigned int v32; // ecx
  __int64 v33; // rax
  LPCGUID v34; // r9
  LPCGUID v35; // r10
  TraceLoggingHProvider v36; // r11
  WINBOOL *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rdx
  struct _RTL_CRITICAL_SECTION *v41; // rcx
  struct IUnknown *v42; // rcx
  struct IUnknown *v43; // rcx
  __int64 v44; // rcx
  struct IUnknown *v45; // rcx
  __int64 v46; // rdx
  unsigned int v47; // edx
  __int64 v48; // rcx
  DWORD LastError; // edi
  __int64 v50; // rdx
  unsigned int v51; // edx
  __int64 v52; // rcx
  struct IUnknown *v53; // rcx
  unsigned int v54; // edx
  CAudioDeviceGraph *v55; // rbx
  __int64 v56; // rcx
  __int64 v57; // rcx
  int ppv; // [rsp+20h] [rbp-208h]
  int ppva; // [rsp+20h] [rbp-208h]
  int ppvb; // [rsp+20h] [rbp-208h]
  WINBOOL fPending; // [rsp+30h] [rbp-1F8h] BYREF
  unsigned int v62; // [rsp+34h] [rbp-1F4h] BYREF
  LPVOID v63; // [rsp+38h] [rbp-1F0h] BYREF
  bool v64; // [rsp+40h] [rbp-1E8h]
  LPVOID Context; // [rsp+48h] [rbp-1E0h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-1D8h] BYREF
  int v67; // [rsp+58h] [rbp-1D0h] BYREF
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v68; // [rsp+60h] [rbp-1C8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-1C0h] BYREF
  int v70; // [rsp+70h] [rbp-1B8h]
  double v71; // [rsp+78h] [rbp-1B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v72; // [rsp+80h] [rbp-1A8h]
  char *v73; // [rsp+88h] [rbp-1A0h]
  CAudioDeviceGraph *v74; // [rsp+90h] [rbp-198h]
  unsigned __int16 *v75; // [rsp+98h] [rbp-190h]
  __int64 v76; // [rsp+A0h] [rbp-188h]
  char *v77; // [rsp+A8h] [rbp-180h]
  ATL::CAtlException *v78[2]; // [rsp+B0h] [rbp-178h] BYREF
  char v79; // [rsp+C0h] [rbp-168h]
  CAudioDeviceGraph *v80; // [rsp+C8h] [rbp-160h]
  char v81; // [rsp+D0h] [rbp-158h]
  __int64 v82; // [rsp+D8h] [rbp-150h] BYREF
  float v83; // [rsp+E0h] [rbp-148h] BYREF
  int v84; // [rsp+E4h] [rbp-144h] BYREF
  BOOL v85; // [rsp+E8h] [rbp-140h] BYREF
  GUID v86; // [rsp+F0h] [rbp-138h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp-128h] BYREF
  char *v88; // [rsp+120h] [rbp-108h]
  __int64 v89; // [rsp+128h] [rbp-100h]
  double *v90; // [rsp+130h] [rbp-F8h]
  __int64 v91; // [rsp+138h] [rbp-F0h]
  unsigned int *v92; // [rsp+140h] [rbp-E8h]
  __int64 v93; // [rsp+148h] [rbp-E0h]
  float *v94; // [rsp+150h] [rbp-D8h]
  __int64 v95; // [rsp+158h] [rbp-D0h]
  int *v96; // [rsp+160h] [rbp-C8h]
  __int64 v97; // [rsp+168h] [rbp-C0h]
  BOOL *v98; // [rsp+170h] [rbp-B8h]
  __int64 v99; // [rsp+178h] [rbp-B0h]
  char *v100; // [rsp+180h] [rbp-A8h]
  __int64 v101; // [rsp+188h] [rbp-A0h]
  char *v102; // [rsp+190h] [rbp-98h]
  __int64 v103; // [rsp+198h] [rbp-90h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1A0h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v105; // [rsp+1B0h] [rbp-78h] BYREF
  GUID *v106; // [rsp+1C0h] [rbp-68h]
  __int64 v107; // [rsp+1C8h] [rbp-60h]
  int *v108; // [rsp+1D0h] [rbp-58h]
  __int64 v109; // [rsp+1D8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+0h]

  v76 = -2LL;
  fPending = a4;
  pv = a3;
  v68 = a2;
  v6 = this;
  v74 = this;
  v71 = *(double *)&a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    ppv = (int)a3;
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, this);
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 264);
  v73 = (char *)v6 + 264;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 264);
  v72 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 264));
  v77 = (char *)v6 + 264;
  if ( !a3 )
  {
    DevicePipeInstance = -2147467261;
    v39 = 128LL;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)DevicePipeInstance,
      ppv);
LABEL_55:
    if ( v6 != (CAudioDeviceGraph *)-264LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 264));
    return (unsigned int)DevicePipeInstance;
  }
  if ( *((_DWORD *)v6 + 64) )
  {
    DevicePipeInstance = -2005139440;
    v39 = 131LL;
    goto LABEL_53;
  }
  v9 = ValidateDevicePipeDescriptor(a2);
  Instance = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v9,
      ppv);
LABEL_63:
    if ( v6 == (CAudioDeviceGraph *)-264LL )
      return (unsigned int)Instance;
    v41 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 264);
LABEL_65:
    LeaveCriticalSection(v41);
    return (unsigned int)Instance;
  }
  v11 = *((_QWORD *)a2 + 4);
  if ( (double)(int)v11 > 25000000.0 )
  {
    DevicePipeInstance = -2147024809;
    v39 = 137LL;
    goto LABEL_53;
  }
  *((_QWORD *)v6 + 16) = v11;
  *((_DWORD *)v6 + 35) = *((_DWORD *)a2 + 18);
  *((_DWORD *)v6 + 76) = *((_DWORD *)a2 + 34);
  *((_DWORD *)v6 + 77) = *((_DWORD *)a2 + 35);
  *((_OWORD *)v6 + 22) = *(_OWORD *)((char *)a2 + 152);
  v75 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v12 = (int *)v75;
  *((_DWORD *)v6 + 78) = *((_DWORD *)a2 + 25);
  *((float *)v6 + 34) = (float)v12[1];
  v63 = 0LL;
  Instance = CoCreateInstance(
               &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
               0LL,
               0x17u,
               &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
               &v63);
  if ( Instance < 0 )
  {
    v40 = 159LL;
LABEL_61:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)Instance,
      ppva);
LABEL_62:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v63);
    goto LABEL_63;
  }
  v82 = *((_QWORD *)a2 + 4);
  v83 = (float)v12[1];
  v84 = *((unsigned __int16 *)v12 + 1);
  v85 = *((_DWORD *)a2 + 25) == 1;
  Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *, __int64))(*(_QWORD *)v63 + 24LL))(
               v63,
               *((_QWORD *)a2 + 7),
               &v82,
               (__int64)v6 + 344);
  if ( Instance < 0 )
  {
    v40 = 167LL;
    goto LABEL_61;
  }
  v13 = (struct IUnknown **)((char *)v6 + 144);
  Instance = CoCreateInstance(
               &GUID_e1150ce9_5bd4_4044_8fe9_98cf40137a41,
               0LL,
               0x17u,
               &GUID_cfbc31a5_5756_48a3_aa45_b6b6dd4c363e,
               (LPVOID *)v6 + 18);
  if ( Instance < 0 )
  {
    v40 = 170LL;
    goto LABEL_61;
  }
  v78[1] = v6;
  v79 = 1;
  v14 = ((__int64 (__fastcall *)(struct IUnknown *, bool, _QWORD))(*v13)->lpVtbl[1].QueryInterface)(
          *v13,
          *((_DWORD *)v6 + 35) != 0,
          *((_QWORD *)v6 + 43));
  Instance = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v14,
      ppva);
    v42 = *v13;
    if ( *v13 )
    {
      *v13 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v42->lpVtbl->Release)(v42);
    }
    goto LABEL_62;
  }
  v15 = (__int64 *)((char *)v6 + 152);
  v16 = CoCreateInstance(
          &GUID_948cfd8c_1888_4e52_8703_99610347ebb6,
          0LL,
          0x17u,
          &GUID_86bd0213_24de_404d_b06c_8a2183db436b,
          (LPVOID *)v6 + 19);
  v62 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v16,
      ppvb);
LABEL_72:
    v43 = *v13;
    if ( *v13 )
    {
      *v13 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v43->lpVtbl->Release)(v43);
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v63);
    if ( v6 != (CAudioDeviceGraph *)-264LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 264));
    return v62;
  }
  v80 = v6;
  v81 = 1;
  Context = 0LL;
  DevicePipeInstance = CPipeInstance::CreateDevicePipeInstance(
                         *v13,
                         *((struct IUnknown **)v6 + 43),
                         (__int64)a2,
                         (CPipeInstance **)&Context);
  if ( DevicePipeInstance < 0 )
  {
    if ( Context )
      CPipeInstance::`scalar deleting destructor'((CPipeInstance *)Context, v17);
    v44 = *v15;
    if ( *v15 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    v45 = *v13;
    if ( *v13 )
    {
      *v13 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v45->lpVtbl->Release)(v45);
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v63);
    goto LABEL_55;
  }
  v19 = (CPipeInstance *)Context;
  v20 = CPipeInstance::Initialize((CPipeInstance *)Context);
  v62 = v20;
  if ( v20 < 0 )
  {
    v46 = 188LL;
LABEL_85:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v46,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v20,
      ppvb);
    if ( v19 )
      CPipeInstance::`scalar deleting destructor'(v19, v47);
    v48 = *v15;
    if ( *v15 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    goto LABEL_72;
  }
  v20 = CPipeInstance::ConnectAPOs(v19, (struct IAudioGraphCallback *)pv);
  v62 = v20;
  if ( v20 < 0 )
  {
    v46 = 190LL;
    goto LABEL_85;
  }
  v21 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail((__int64)v19 + 16)
                   + 32LL);
  pv = v21;
  v22 = *((_QWORD *)v6 + 48);
  *((_QWORD *)v6 + 48) = 0LL;
  if ( v22 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v21 = pv;
  }
  v23 = (struct Windows::Media::Devices::IAudioDeviceModulesManager *)v21[3];
  *((_QWORD *)v6 + 48) = v23;
  v24 = v21[3];
  if ( v24 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    v23 = (struct Windows::Media::Devices::IAudioDeviceModulesManager *)*((_QWORD *)v6 + 48);
  }
  v20 = CPipeInstance::AddConnectionsAndActivateAPOs(v19, v23);
  v62 = v20;
  if ( v20 < 0 )
  {
    v46 = 195LL;
    goto LABEL_85;
  }
  v64 = (fPending & 0x400001) != 0;
  v25 = (_QWORD *)((char *)v6 + 392);
  pv = (LPVOID)*((_QWORD *)v6 + 49);
  if ( pv )
  {
    LastError = GetLastError();
    CoTaskMemFree(pv);
    SetLastError(LastError);
    v15 = (__int64 *)((char *)v6 + 152);
    v25 = (_QWORD *)((char *)v6 + 392);
  }
  *v25 = 0LL;
  mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)v68 + 7), v25);
  pv = (char *)v68 + 168;
  v26 = *((_QWORD *)v68 + 21) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v26 )
    v26 = *((_QWORD *)v68 + 22) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v27 = v26 == 0;
  v28 = (LPVOID *)((char *)v6 + 400);
  v29 = *((_QWORD *)v6 + 50);
  *((_QWORD *)v6 + 50) = 0LL;
  if ( v27 )
  {
    if ( v29 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      v28 = (LPVOID *)((char *)v6 + 400);
    }
    v30 = Microsoft::WRL::Details::MakeAndInitialize<CStandardCrossProcessEventManager,ICrossProcessEventManager,>(v28);
    fPending = v30;
    if ( v30 < 0 )
    {
      v50 = 209LL;
LABEL_92:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v50,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v30,
        ppvb);
      if ( v19 )
        CPipeInstance::`scalar deleting destructor'(v19, v51);
      v52 = *v15;
      if ( *v15 )
      {
        *v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      }
      v53 = *v13;
      if ( *v13 )
      {
        *v13 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v53->lpVtbl->Release)(v53);
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v63);
      if ( v6 != (CAudioDeviceGraph *)-264LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 264));
      return (unsigned int)fPending;
    }
  }
  else
  {
    if ( v29 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      v28 = (LPVOID *)((char *)v6 + 400);
    }
    v30 = CoCreateInstance((const IID *const)pv, 0LL, 0x17u, &GUID_c4e70434_407d_416b_94be_9717b79065fb, v28);
    fPending = v30;
    if ( v30 < 0 )
    {
      v50 = 213LL;
      goto LABEL_92;
    }
    v30 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v6 + 50) + 24LL))(
            *((_QWORD *)v6 + 50),
            (char *)v68 + 184);
    fPending = v30;
    if ( v30 < 0 )
    {
      v50 = 214LL;
      goto LABEL_92;
    }
  }
  v30 = CAudioDeviceGraph::InitializePump(v6, v19, v68, v64);
  fPending = v30;
  if ( v30 < 0 )
  {
    v50 = 218LL;
    goto LABEL_92;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 216);
  LOBYTE(v70) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  try
  {
    pv = v19;
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::AddHead((char *)v6 + 168, &pv);
  }
  catch ( ATL::CAtlException *v78 )
  {
    v38 = (WINBOOL *)v78[0];
    if ( *(_DWORD *)v78[0] == -1073741571 )
      _o__resetstkoflw();
    fPending = *v38;
    Instance = fPending;
    if ( fPending < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE1,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)fPending,
        ppvb);
      if ( (_BYTE)v70 )
        LeaveCriticalSection(lpCriticalSection);
      if ( Context )
        CPipeInstance::`scalar deleting destructor'((CPipeInstance *)Context, v54);
      v55 = v74;
      v56 = *((_QWORD *)v74 + 19);
      if ( v56 )
      {
        *((_QWORD *)v74 + 19) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      }
      v57 = *((_QWORD *)v55 + 18);
      if ( v57 )
      {
        *((_QWORD *)v55 + 18) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v63);
      if ( !v73 )
        return (unsigned int)Instance;
      v41 = v72;
      goto LABEL_65;
    }
    v19 = (CPipeInstance *)Context;
    v8 = v72;
    v7 = v72;
    v6 = v74;
    v31 = *(struct AUDIO_DEVICE_PIPE_DESCRIPTOR **)&v71;
    goto LABEL_31;
  }
  v31 = v68;
LABEL_31:
  if ( (_BYTE)v70 )
    LeaveCriticalSection(lpCriticalSection);
  *((_QWORD *)v6 + 20) = v19;
  *((_DWORD *)v6 + 64) = 1;
  *((_DWORD *)v6 + 28) = 0;
  if ( *v75 == 0xFFFE )
  {
    v86 = *(GUID *)(v75 + 12);
  }
  else
  {
    v86 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v86.Data1 = *v75;
  }
  v67 = 0;
  v32 = 0;
  if ( *((_DWORD *)v31 + 24) )
  {
    while ( 1 )
    {
      v33 = *((_QWORD *)v31 + 2 * v32 + 25) - *(_QWORD *)&GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data1;
      if ( !v33 )
        v33 = *((_QWORD *)v31 + 2 * v32 + 26) - *(_QWORD *)GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data4;
      if ( !v33 )
        break;
      if ( ++v32 >= *((_DWORD *)v31 + 24) )
        goto LABEL_40;
    }
    v67 = 1;
  }
LABEL_40:
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_140085EE8;
    qword_140085EE8 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_140085F00 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v70 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&lpCriticalSection);
  }
  if ( **((_DWORD **)Context + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000001uLL) )
  {
    v88 = (char *)v6 + 352;
    v89 = 16LL;
    v71 = (double)(int)*((_QWORD *)v6 + 16) / 10000000.0;
    v90 = &v71;
    v91 = 8LL;
    v62 = *((_DWORD *)v6 + 35);
    v92 = &v62;
    v93 = 4LL;
    v94 = &v83;
    v95 = 4LL;
    v96 = &v84;
    v97 = 4LL;
    v98 = &v85;
    v99 = 4LL;
    v100 = (char *)v31 + 104;
    v101 = 16LL;
    v102 = (char *)v31 + 120;
    v103 = 16LL;
    TlgCreateWsz(&pDesc, *((LPCWSTR *)v31 + 7));
    TlgCreateWsz(&v105, *((LPCWSTR *)v6 + 49));
    v106 = &v86;
    v107 = 16LL;
    v108 = &v67;
    v109 = 4LL;
    TlgWrite(v36, &unk_14006FB31, v35, v34, 0xEu, &pData);
  }
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v63);
  if ( v7 )
    LeaveCriticalSection(v8);
  return 0LL;
}
