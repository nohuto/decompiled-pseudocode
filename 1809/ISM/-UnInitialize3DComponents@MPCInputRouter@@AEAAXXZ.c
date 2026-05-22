/*
 * XREFs of ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18000701C
 * Callers:
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x180007900 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180007CDC (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180007EE8 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A930 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18003AFD4 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::UnInitialize3DComponents(MPCInputRouter *this)
{
  char *v2; // rbp
  _QWORD **v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  RTL_SRWLOCK *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v8; // eax
  __int64 v9; // rcx
  _OWORD v10[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_BYTE *)this + 856) )
  {
    v2 = (char *)this + 896;
    v3 = (_QWORD **)*((_QWORD *)this + 113);
    v4 = *v3;
    *v3 = v3;
    *(_QWORD *)(*((_QWORD *)v2 + 1) + 8LL) = *((_QWORD *)v2 + 1);
    *((_QWORD *)v2 + 2) = 0LL;
    if ( v4 != *((_QWORD **)v2 + 1) )
    {
      do
      {
        v5 = (_QWORD *)*v4;
        operator delete(v4, (const struct std::nothrow_t *)0x20);
        v4 = v5;
      }
      while ( v5 != *((_QWORD **)v2 + 1) );
    }
    std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
      v2,
      8LL);
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(Instance);
    v8 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD))(*(_QWORD *)PostProcessor + 96LL))(
           PostProcessor,
           0LL);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1DC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v8);
      JUMPOUT(0x180007171LL);
    }
    memset_0(v10, 0, 0x28uLL);
    *((_OWORD *)this + 51) = v10[0];
    *((_OWORD *)this + 52) = v10[1];
    *((_QWORD *)this + 106) = v11;
    v9 = *((_QWORD *)this + 100);
    if ( v9 )
    {
      *((_QWORD *)this + 100) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    MPCInputRouter::Set3DFocusTarget(this, 0LL);
    *((_BYTE *)this + 856) = 0;
    *((_BYTE *)this + 864) = 0;
    _InterlockedExchange((volatile __int32 *)this + 217, 0);
    _InterlockedExchange64((volatile __int64 *)this + 109, 0LL);
    MPCInputRouter::OnExclusiveModeStateChangedInputThread(this);
  }
}
