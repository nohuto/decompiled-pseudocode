/*
 * XREFs of ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140001BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x1400019E0 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x140001A24 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14000234C (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000236C (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400049D4 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140005A40 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006814 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140009910 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B260 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000C7B0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     _TlgCreateWsz @ 0x140019440 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400318CC (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qq @ 0x14003D458 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioDeviceGraph::Initialize(
        CAudioDeviceGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct _RTL_CRITICAL_SECTION *a3,
        int a4)
{
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v5; // rsi
  CAudioDeviceGraph *v6; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned __int16 *v11; // r12
  HRESULT v12; // eax
  int v13; // eax
  unsigned int v14; // r13d
  _QWORD *v15; // r13
  HRESULT Instance; // eax
  HRESULT v17; // eax
  int v18; // eax
  CPipeInstance *v19; // rbx
  int v20; // eax
  int v21; // eax
  __int64 v22; // r13
  __int64 v23; // rcx
  struct Windows::Media::Devices::IAudioDeviceModulesManager *v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // r13
  struct ATL::CAtlPlex *v29; // r8
  int v30; // edx
  _QWORD *v31; // rcx
  int i; // edx
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // r11
  __int64 v40; // r11
  __int64 v41; // r10
  ATL::CAtlException *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned int v49; // edx
  __int64 v50; // rcx
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // rcx
  unsigned int v54; // edx
  __int64 v55; // rcx
  unsigned int v56; // edi
  unsigned int v57; // edx
  CAudioDeviceGraph *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rcx
  int ppv; // [rsp+20h] [rbp-208h]
  int ppva; // [rsp+20h] [rbp-208h]
  int ppvb; // [rsp+20h] [rbp-208h]
  unsigned int v64; // [rsp+30h] [rbp-1F8h]
  LPVOID v65; // [rsp+38h] [rbp-1F0h] BYREF
  int v66; // [rsp+40h] [rbp-1E8h] BYREF
  int v67; // [rsp+44h] [rbp-1E4h] BYREF
  __int64 *v68; // [rsp+48h] [rbp-1E0h]
  struct CPipeInstance *v69; // [rsp+50h] [rbp-1D8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-1D0h] BYREF
  char v71; // [rsp+60h] [rbp-1C8h]
  double v72; // [rsp+68h] [rbp-1C0h] BYREF
  __int64 *v73; // [rsp+70h] [rbp-1B8h]
  LPCRITICAL_SECTION v74; // [rsp+78h] [rbp-1B0h]
  CAudioDeviceGraph *v75; // [rsp+80h] [rbp-1A8h]
  _QWORD v76[2]; // [rsp+88h] [rbp-1A0h] BYREF
  char *v77; // [rsp+98h] [rbp-190h]
  __int64 v78; // [rsp+A0h] [rbp-188h]
  char *v79; // [rsp+A8h] [rbp-180h]
  ATL::CAtlException *v80[2]; // [rsp+B0h] [rbp-178h] BYREF
  char v81; // [rsp+C0h] [rbp-168h]
  CAudioDeviceGraph *v82; // [rsp+C8h] [rbp-160h]
  char v83; // [rsp+D0h] [rbp-158h]
  __int64 v84; // [rsp+D8h] [rbp-150h] BYREF
  float v85; // [rsp+E0h] [rbp-148h] BYREF
  int v86; // [rsp+E4h] [rbp-144h] BYREF
  BOOL v87; // [rsp+E8h] [rbp-140h] BYREF
  GUID v88; // [rsp+F0h] [rbp-138h] BYREF
  unsigned __int16 *v89; // [rsp+100h] [rbp-128h] BYREF
  int v90; // [rsp+108h] [rbp-120h]
  int v91; // [rsp+10Ch] [rbp-11Ch]
  void *v92; // [rsp+110h] [rbp-118h]
  int v93; // [rsp+118h] [rbp-110h]
  int v94; // [rsp+11Ch] [rbp-10Ch]
  char *v95; // [rsp+120h] [rbp-108h]
  __int64 v96; // [rsp+128h] [rbp-100h]
  double *v97; // [rsp+130h] [rbp-F8h]
  __int64 v98; // [rsp+138h] [rbp-F0h]
  int *v99; // [rsp+140h] [rbp-E8h]
  __int64 v100; // [rsp+148h] [rbp-E0h]
  float *v101; // [rsp+150h] [rbp-D8h]
  __int64 v102; // [rsp+158h] [rbp-D0h]
  int *v103; // [rsp+160h] [rbp-C8h]
  __int64 v104; // [rsp+168h] [rbp-C0h]
  BOOL *v105; // [rsp+170h] [rbp-B8h]
  __int64 v106; // [rsp+178h] [rbp-B0h]
  char *v107; // [rsp+180h] [rbp-A8h]
  __int64 v108; // [rsp+188h] [rbp-A0h]
  char *v109; // [rsp+190h] [rbp-98h]
  __int64 v110; // [rsp+198h] [rbp-90h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1A0h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+1B0h] [rbp-78h] BYREF
  GUID *v113; // [rsp+1C0h] [rbp-68h]
  __int64 v114; // [rsp+1C8h] [rbp-60h]
  int *v115; // [rsp+1D0h] [rbp-58h]
  __int64 v116; // [rsp+1D8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+0h]

  v78 = -2LL;
  v66 = a4;
  lpCriticalSection = a3;
  v5 = a2;
  v6 = this;
  v75 = this;
  v72 = *(double *)&a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    ppv = (int)a3;
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, this);
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 264);
  v77 = (char *)v6 + 264;
  v74 = (LPCRITICAL_SECTION)((char *)v6 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 264));
  v79 = (char *)v6 + 264;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x80004003LL,
      ppv);
    if ( v6 != (CAudioDeviceGraph *)-264LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 264));
    return 2147500035LL;
  }
  if ( *((_DWORD *)v6 + 64) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0010LL,
      ppv);
    if ( v6 != (CAudioDeviceGraph *)-264LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 264));
    return 2289827856LL;
  }
  v8 = ValidateDevicePipeDescriptor((const struct tWAVEFORMATEX **)v5);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v8,
      ppv);
    if ( v6 != (CAudioDeviceGraph *)-264LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 264));
    return v9;
  }
  v10 = *((_QWORD *)v5 + 4);
  if ( (double)(int)v10 > 25000000.0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x80070057LL,
      ppv);
    if ( v6 != (CAudioDeviceGraph *)-264LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 264));
    return 2147942487LL;
  }
  *((_QWORD *)v6 + 16) = v10;
  *((_DWORD *)v6 + 35) = *((_DWORD *)v5 + 18);
  *((_DWORD *)v6 + 76) = *((_DWORD *)v5 + 34);
  *((_DWORD *)v6 + 77) = *((_DWORD *)v5 + 35);
  *((_OWORD *)v6 + 22) = *(_OWORD *)((char *)v5 + 152);
  v76[0] = *((_QWORD *)v5 + 1);
  v11 = (unsigned __int16 *)v76[0];
  *((_DWORD *)v6 + 78) = *((_DWORD *)v5 + 25);
  *((float *)v6 + 34) = (float)*((int *)v11 + 1);
  v65 = 0LL;
  v12 = CoCreateInstance(
          &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
          0LL,
          0x17u,
          &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
          &v65);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v12,
      ppva);
    goto LABEL_64;
  }
  v84 = *((_QWORD *)v5 + 4);
  v85 = (float)*((int *)v11 + 1);
  v86 = v11[1];
  v87 = *((_DWORD *)v5 + 25) == 1;
  v13 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *, __int64))(*(_QWORD *)v65 + 24LL))(
          v65,
          *((_QWORD *)v5 + 7),
          &v84,
          (__int64)v6 + 344);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v13,
      ppva);
LABEL_67:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v65);
    if ( v6 != (CAudioDeviceGraph *)-264LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 264));
    return v14;
  }
  v15 = (_QWORD *)((char *)v6 + 144);
  v73 = (__int64 *)((char *)v6 + 144);
  Instance = CoCreateInstance(
               &GUID_e1150ce9_5bd4_4044_8fe9_98cf40137a41,
               0LL,
               0x17u,
               &GUID_f6e73867_71c3_4ec9_9186_ecb99cc5a50e,
               (LPVOID *)v6 + 18);
  v64 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)Instance,
      ppvb);
LABEL_71:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v65);
    if ( v6 != (CAudioDeviceGraph *)-264LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 264));
    return v64;
  }
  v80[1] = v6;
  v81 = 1;
  v17 = (*(__int64 (__fastcall **)(_QWORD, bool, _QWORD))(*(_QWORD *)*v15 + 24LL))(
          *v15,
          *((_DWORD *)v6 + 35) != 0,
          *((_QWORD *)v6 + 43));
  v64 = v17;
  if ( v17 < 0 )
  {
    v44 = 172LL;
LABEL_76:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v44,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v17,
      ppvb);
LABEL_77:
    v45 = *v15;
    if ( *v15 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    goto LABEL_71;
  }
  v68 = (__int64 *)((char *)v6 + 152);
  v17 = CoCreateInstance(
          &GUID_948cfd8c_1888_4e52_8703_99610347ebb6,
          0LL,
          0x17u,
          &GUID_4cf5cb7f_c0c6_46a8_8d11_2bf1e3d3e642,
          (LPVOID *)v6 + 19);
  v64 = v17;
  if ( v17 < 0 )
  {
    v44 = 174LL;
    goto LABEL_76;
  }
  v82 = v6;
  v83 = 1;
  v69 = 0LL;
  v18 = CPipeInstance::CreateDevicePipeInstance(*v15, *((_QWORD *)v6 + 43), v5, &v69);
  v9 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v18,
      ppvb);
    if ( v69 )
      CPipeInstance::`scalar deleting destructor'(v69, v46);
    v47 = *v68;
    if ( *v68 )
    {
      *v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    }
    v48 = *v15;
    if ( *v15 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
LABEL_64:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v65);
    if ( v6 != (CAudioDeviceGraph *)-264LL )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 264));
      return v9;
    }
    return v9;
  }
  v19 = v69;
  v20 = CPipeInstance::Initialize(v69);
  v64 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB8,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v20,
      ppvb);
    if ( !v19 )
      goto LABEL_87;
    goto LABEL_86;
  }
  v21 = CPipeInstance::ConnectAPOs(v19, (struct IAudioGraphCallback *)lpCriticalSection);
  v64 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v21,
      ppvb);
    if ( !v19 )
    {
LABEL_87:
      v50 = *v68;
      if ( *v68 )
      {
        *v68 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
      }
      goto LABEL_77;
    }
LABEL_86:
    CPipeInstance::`scalar deleting destructor'(v19, v49);
    goto LABEL_87;
  }
  v22 = *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail((char *)v19 + 16)
                  + 32LL);
  v23 = *((_QWORD *)v6 + 48);
  *((_QWORD *)v6 + 48) = 0LL;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v24 = *(struct Windows::Media::Devices::IAudioDeviceModulesManager **)(v22 + 24);
  *((_QWORD *)v6 + 48) = v24;
  v25 = *(_QWORD *)(v22 + 24);
  if ( v25 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
    v24 = (struct Windows::Media::Devices::IAudioDeviceModulesManager *)*((_QWORD *)v6 + 48);
  }
  v26 = CPipeInstance::AddConnectionsAndActivateAPOs(v19, v24);
  v14 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v26,
      ppvb);
    if ( v19 )
      CPipeInstance::`scalar deleting destructor'(v19, v51);
    v52 = *v68;
    if ( *v68 )
    {
      *v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    }
    v53 = *v73;
    if ( !*v73 )
      goto LABEL_67;
LABEL_96:
    *v73 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    goto LABEL_67;
  }
  v27 = CAudioDeviceGraph::InitializePump(v6, v19, v5, (v66 & 0x400001) != 0);
  v14 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v27,
      ppvb);
    if ( v19 )
      CPipeInstance::`scalar deleting destructor'(v19, v54);
    v55 = *v68;
    if ( *v68 )
    {
      *v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    }
    v53 = *v73;
    if ( !*v73 )
      goto LABEL_67;
    goto LABEL_96;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 216);
  v71 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  try
  {
    v28 = *((_QWORD *)v6 + 21);
    if ( !*((_QWORD *)v6 + 25) )
    {
      v29 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v6 + 24, *((unsigned int *)v6 + 52), 0x18uLL);
      if ( !v29 )
        ATL::AtlThrowImpl(-2147024882);
      v30 = *((_DWORD *)v6 + 52);
      v31 = (_QWORD *)((char *)v29 + 16 * (v30 - 1) + 8 * (unsigned int)(v30 - 1) + 8);
      for ( i = v30 - 1; i >= 0; --i )
      {
        *v31 = *((_QWORD *)v6 + 25);
        *((_QWORD *)v6 + 25) = v31;
        v31 -= 3;
      }
    }
    v33 = (__int64 *)*((_QWORD *)v6 + 25);
    v34 = *v33;
    v33[2] = (__int64)v19;
    *((_QWORD *)v6 + 25) = v34;
    v33[1] = 0LL;
    *v33 = v28;
    ++*((_QWORD *)v6 + 23);
    v35 = *((_QWORD *)v6 + 21);
    if ( v35 )
      *(_QWORD *)(v35 + 8) = v33;
    else
      *((_QWORD *)v6 + 22) = v33;
    *((_QWORD *)v6 + 21) = v33;
  }
  catch ( ATL::CAtlException *v80 )
  {
    v43 = v80[0];
    if ( *(_DWORD *)v80[0] == -1073741571 )
      _o__resetstkoflw();
    v66 = *(_DWORD *)v43;
    v56 = v66;
    if ( v66 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD0,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v66,
        ppvb);
      if ( v71 )
        LeaveCriticalSection(lpCriticalSection);
      if ( v69 )
        CPipeInstance::`scalar deleting destructor'(v69, v57);
      v58 = v75;
      v59 = *((_QWORD *)v75 + 19);
      if ( v59 )
      {
        *((_QWORD *)v75 + 19) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
      }
      v60 = *((_QWORD *)v58 + 18);
      if ( v60 )
      {
        *((_QWORD *)v58 + 18) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v65);
      if ( v77 )
        LeaveCriticalSection(v74);
      return v56;
    }
    v11 = (unsigned __int16 *)v76[0];
    v19 = v69;
    v7 = v74;
    v6 = v75;
    v5 = *(struct AUDIO_DEVICE_PIPE_DESCRIPTOR **)&v72;
  }
  if ( v71 )
    LeaveCriticalSection(lpCriticalSection);
  *((_QWORD *)v6 + 20) = v19;
  *((_DWORD *)v6 + 64) = 1;
  *((_DWORD *)v6 + 28) = 0;
  if ( !*((_QWORD *)v6 + 49) )
  {
    *((_QWORD *)v6 + 49) = 0LL;
    mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)v5 + 7), (char *)v6 + 392);
  }
  if ( *v11 == 0xFFFE )
  {
    v88 = *(GUID *)(v11 + 12);
  }
  else
  {
    v88 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v88.Data1 = *v11;
  }
  v67 = 0;
  v36 = 0LL;
  v37 = *((_DWORD *)v5 + 24);
  if ( v37 )
  {
    while ( 1 )
    {
      v38 = *((_QWORD *)v5 + 2 * (unsigned int)v36 + 21) - *(_QWORD *)&GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data1;
      if ( !v38 )
        v38 = *((_QWORD *)v5 + 2 * (unsigned int)v36 + 22) - *(_QWORD *)GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data4;
      if ( !v38 )
        break;
      v36 = (unsigned int)(v36 + 1);
      if ( (unsigned int)v36 >= v37 )
        goto LABEL_40;
    }
    v67 = 1;
  }
LABEL_40:
  v39 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                      v36,
                      lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *(_DWORD *)v39 > 4u
    && (*(_QWORD *)(v39 + 16) & 0x400000000001LL) != 0
    && (*(_QWORD *)(v39 + 24) & 0x400000000001LL) == *(_QWORD *)(v39 + 24) )
  {
    v95 = (char *)v6 + 352;
    v96 = 16LL;
    v72 = (double)(int)*((_QWORD *)v6 + 16) / 10000000.0;
    v97 = &v72;
    v98 = 8LL;
    v66 = *((_DWORD *)v6 + 35);
    v99 = &v66;
    v100 = 4LL;
    v101 = &v85;
    v102 = 4LL;
    v103 = &v86;
    v104 = 4LL;
    v105 = &v87;
    v106 = 4LL;
    v107 = (char *)v5 + 104;
    v108 = 16LL;
    v109 = (char *)v5 + 120;
    v110 = 16LL;
    TlgCreateWsz(&pDesc, *((LPCWSTR *)v5 + 7));
    TlgCreateWsz(&v112, *((LPCWSTR *)v6 + 49));
    v113 = &v88;
    v114 = 16LL;
    v115 = &v67;
    v116 = 4LL;
    LODWORD(v76[0]) = ((unsigned int)&unk_140072047 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    HIDWORD(v76[0]) = 4;
    v76[1] = 0x400000000001LL;
    v89 = *(unsigned __int16 **)(v40 + 8);
    v90 = *v89;
    v91 = 2;
    v92 = &unk_140072052;
    v93 = 223;
    v94 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v40 + 32), v76, v41, 0LL, 14, &v89);
  }
  if ( v65 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v65 + 16LL))(v65);
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
