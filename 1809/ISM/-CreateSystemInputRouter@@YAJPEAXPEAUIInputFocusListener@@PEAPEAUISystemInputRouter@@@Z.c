/*
 * XREFs of ?CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800059E0
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004674 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180005CE8 (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x180007900 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000AA20 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A930 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x18003AFA0 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18003B008 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180086BBC (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18012C84C (IsGetMPCInputPostProcessorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreateSystemInputRouter(
        struct IDWMInputProxy *a1,
        struct IInputFocusListener *a2,
        struct ISystemInputRouter **a3)
{
  MPCInputRouter *v6; // rax
  const char *v7; // r9
  MPCInputRouter *v8; // rbx
  DWMInputRouter *v9; // rdi
  int v10; // eax
  int v11; // ebx
  RTL_SRWLOCK *Instance; // rcx
  RTL_SRWLOCK *v13; // rax
  DWMInputRouter *v15; // rax
  DWMInputRouter *v16; // rbx
  DWMInputRouter *v17; // rdi
  int v18; // ebx
  int v19; // eax
  unsigned int v20; // eax
  __int128 v21; // [rsp+58h] [rbp-29h]
  __int128 v22; // [rsp+68h] [rbp-19h]
  void **v23; // [rsp+78h] [rbp-9h] BYREF
  __int128 v24; // [rsp+80h] [rbp-1h]
  __int128 v25; // [rsp+90h] [rbp+Fh]
  void ***v26; // [rsp+B0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  DWMInputRouter *pvData; // [rsp+F8h] [rbp+77h] BYREF
  DWMInputRouter *pcbData; // [rsp+100h] [rbp+7Fh] BYREF

  *a3 = 0LL;
  if ( (unsigned __int8)IsGetMPCInputPostProcessorPresent() )
  {
    LODWORD(pvData) = 0;
    LODWORD(pcbData) = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\DWM",
      L"MPCInputRouterWaitForDebugger",
      0x10u,
      0LL,
      &pvData,
      (LPDWORD)&pcbData);
    if ( (_DWORD)pvData == 1 )
    {
      while ( !IsDebuggerPresent() )
        Sleep(0x64u);
      __debugbreak();
    }
    if ( !a1 )
    {
      v20 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)v20);
      __debugbreak();
    }
    v6 = (MPCInputRouter *)malloc(0x3C8uLL);
    v8 = v6;
    if ( v6 )
      memset_0(v6, 0, 0x3C8uLL);
    if ( v8 )
      v9 = MPCInputRouter::MPCInputRouter(v8, a1, a2);
    else
      v9 = 0LL;
    if ( !v9 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x74,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        v7);
      __debugbreak();
    }
    v10 = DWMInputRouter::Initialize(v9);
    v11 = v10;
    if ( v10 >= 0 )
    {
      *(_QWORD *)&v21 = MPCInputRouter::On3DCompositorRunningChanged;
      DWORD2(v21) = 0;
      *((_QWORD *)&v22 + 1) = v9;
      v23 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCInputRouter::*)(bool),MPCInputRouter *,std::_Ph<1> const &>,void,bool>::`vftable';
      v24 = v21;
      v25 = v22;
      v26 = &v23;
      Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
      MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(Instance);
      v13 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
      if ( MPC3DStateHelper::Is3DCompositorRunning(v13) )
        MPCInputRouter::On3DCompositorRunningChanged(v9, 1);
      v11 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v10);
    }
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x76,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v11);
      JUMPOUT(0x180005CE0LL);
    }
    *a3 = v9;
    return 0LL;
  }
  pvData = 0LL;
  if ( !a1 )
  {
    v18 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL);
    goto LABEL_34;
  }
  v15 = (DWMInputRouter *)malloc(0x2F8uLL);
  v16 = v15;
  if ( v15 )
    memset_0(v15, 0, 0x2F8uLL);
  pcbData = v16;
  if ( v16 )
    v17 = DWMInputRouter::DWMInputRouter(v16, a1, a2);
  else
    v17 = 0LL;
  pvData = v17;
  if ( v17 )
  {
    v19 = DWMInputRouter::Initialize(v17);
    v18 = v19;
    if ( v19 >= 0 )
    {
      *a3 = v17;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x206,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v19);
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_34:
    if ( v18 < 0 )
      goto LABEL_35;
    return 0LL;
  }
  v18 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x203,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
    (const char *)0x8007000ELL);
LABEL_35:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\factory\\lib\\inputrouterfactory.cpp",
    (const char *)(unsigned int)v18);
  return (unsigned int)v18;
}
