/*
 * XREFs of ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180006C80
 * Callers:
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x180007900 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180007CDC (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ??A?$unordered_map@_KPEAUIMPCTarget@@U?$hash@_K@std@@U?$equal_to@_K@3@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@@std@@QEAAAEAPEAUIMPCTarget@@$$QEA_K@Z @ 0x1800086E4 (--A-$unordered_map@_KPEAUIMPCTarget@@U-$hash@_K@std@@U-$equal_to@_K@3@V-$allocator@_ea_1800086E4.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x18000AD64 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000C488 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteType@@_K@Z @ 0x18001D8DC (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteTyp.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A930 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18003AFD4 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x180042F48 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z @ 0x18008E0D4 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCInputRouter::Initialize3DComponents(MPCInputRouter *this, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3 *v5; // rcx
  MPCHolographicInputManager *Instance; // rax
  unsigned int *v7; // r12
  int v8; // eax
  const char *v9; // r9
  struct IInputTarget *v10; // rbx
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  __int64 **v13; // rcx
  __int64 *i; // rax
  struct IInputTarget *v15; // rdi
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  struct IInputTarget *v18; // rdi
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  void *v21; // rax
  void *v22; // rsi
  struct InputSiteManager *InputSiteManager; // rax
  char v24; // r15
  __int64 v25; // rcx
  struct IMPCFocusTarget *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rsi
  RTL_SRWLOCK *v30; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // [rsp+30h] [rbp-38h]
  _QWORD v35[4]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  __int64 v37; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v38; // [rsp+C0h] [rbp+58h] BYREF
  struct IInputTarget *v39; // [rsp+C8h] [rbp+60h] BYREF

  v35[1] = -2LL;
  if ( *((_BYTE *)this + 856) )
    return;
  *((_BYTE *)this + 856) = 1;
  v5 = retaddr;
  if ( !*((_QWORD *)this + 101) )
  {
LABEL_35:
    wil::details::in1diag3::_FailFast_Unexpected(
      v5,
      (void *)0x19D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      a4);
    __debugbreak();
  }
  if ( *((_QWORD *)this + 100) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x19E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      a4);
    __debugbreak();
  }
  Instance = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::SetMPCInputRouter(Instance, this);
  v7 = (unsigned int *)((char *)this + 816);
  v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 101) + 24LL))(
         *((_QWORD *)this + 101),
         (char *)this + 816);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v8);
LABEL_38:
    wil::details::in1diag3::_FailFast_Unexpected(
      v11,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v9);
    __debugbreak();
  }
  v10 = 0LL;
  v11 = retaddr;
  if ( !ISMTestMode::s_instance )
    goto LABEL_38;
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v12 = *v7;
    v13 = (__int64 **)*((_QWORD *)this + 12);
    for ( i = *v13; ; i = (__int64 *)*i )
    {
      if ( i == (__int64 *)v13 )
      {
        v15 = 0LL;
        goto LABEL_12;
      }
      if ( *((_DWORD *)i + 4) == (_DWORD)v12 )
        break;
    }
    v15 = (struct IInputTarget *)i[7];
LABEL_12:
    if ( v15 )
    {
      (*(void (__fastcall **)(struct IInputTarget *, __int64))(*(_QWORD *)v15 + 8LL))(v15, v12);
      v10 = v15;
    }
    if ( !v10 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1AB,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        v9);
      goto LABEL_40;
    }
  }
  v39 = 0LL;
  v16 = DWMFocusedInputTarget::Create(v10, *((_DWORD *)this + 205), 0, 0, 0LL, 0, 0, &v39);
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_40:
    wil::details::in1diag3::FailFast_Hr(
      v17,
      (void *)0x1B8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_41;
  }
  v37 = 0LL;
  v18 = v39;
  v19 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))v39)(
          v39,
          &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
          &v37);
  v20 = retaddr;
  if ( v19 < 0 )
  {
LABEL_41:
    wil::details::in1diag3::FailFast_Hr(
      v20,
      (void *)0x1BB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v19);
    JUMPOUT(0x180007015LL);
  }
  v21 = malloc(0x68uLL);
  v22 = v21;
  if ( v21 )
    memset_0(v21, 0, 0x68uLL);
  v35[0] = v22;
  if ( v22 )
  {
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteManager::GetInputSiteFromId(InputSiteManager, &v38, 1LL, 0LL);
    v24 = 3;
    LOBYTE(v34) = 1;
    v25 = MPCFocusTarget::MPCFocusTarget(v22, v37, v38, 0LL, 5, *v7, v34);
  }
  else
  {
    v25 = 0LL;
    v24 = 0;
  }
  v26 = (struct IMPCFocusTarget *)((v25 + 72) & -(__int64)(v25 != 0));
  v27 = *((_QWORD *)this + 100);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  *((_QWORD *)this + 100) = v26;
  if ( (v24 & 1) != 0 )
  {
    v28 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      v26 = (struct IMPCFocusTarget *)*((_QWORD *)this + 100);
    }
  }
  MPCInputRouter::Set3DFocusTarget(this, v26);
  v35[0] = 0LL;
  v29 = *((_QWORD *)this + 100);
  *(_QWORD *)std::unordered_map<unsigned __int64,IMPCTarget *>::operator[]((char *)this + 896, v35) = v29;
  v30 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  PostProcessor = MPC3DStateHelper::GetPostProcessor(v30);
  v32 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, char *))(*(_QWORD *)PostProcessor + 96LL))(
          PostProcessor,
          (char *)this + 768);
  if ( v32 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1CD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v32);
    goto LABEL_35;
  }
  v33 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v10 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v10 + 16LL))(v10);
}
