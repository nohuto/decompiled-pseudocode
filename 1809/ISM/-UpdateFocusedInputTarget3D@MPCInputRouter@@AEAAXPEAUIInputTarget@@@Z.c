/*
 * XREFs of ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180006508
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180006460 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x18000740C (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x180007624 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180007CDC (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z @ 0x180009CCC (-MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x18000AD64 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000C488 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x18000C8D0 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteType@@_K@Z @ 0x18001D8DC (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteTyp.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18008BBB0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MPCInputRouter::UpdateFocusedInputTarget3D(MPCInputRouter *this, struct IInputTarget *a2)
{
  __int64 v4; // r12
  int v5; // esi
  ISMTracing *v6; // rdi
  int v7; // eax
  int v8; // eax
  struct IViewHierarchy *ViewHierarchy; // rax
  __int64 v10; // rcx
  ISMTracing *v11; // rax
  int v12; // eax
  bool v13; // r14
  int v14; // eax
  void *v15; // rax
  void *v16; // r15
  struct InputSiteManager *InputSiteManager; // rax
  ISMTracing *v18; // rbx
  struct InputSiteManager *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  int FrameworkViewTypeFromFocusTarget; // eax
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  char v27; // bl
  struct IMPCTarget *v28; // rdi
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  int updated; // eax
  int v32; // [rsp+20h] [rbp-60h]
  __int64 v33; // [rsp+40h] [rbp-40h] BYREF
  ISMTracing *WindowIdFromViewId; // [rsp+48h] [rbp-38h] BYREF
  __int64 v35; // [rsp+50h] [rbp-30h] BYREF
  __int64 v36; // [rsp+58h] [rbp-28h] BYREF
  __int64 v37; // [rsp+60h] [rbp-20h]
  __int64 v38; // [rsp+68h] [rbp-18h]
  void *v39; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v41; // [rsp+C8h] [rbp+48h] BYREF
  int v42; // [rsp+D0h] [rbp+50h]
  int v43; // [rsp+D8h] [rbp+58h] BYREF

  v38 = -2LL;
  v4 = 0LL;
  v5 = 0;
  v42 = 0;
  if ( a2 && MPCInputRouter::IsTargetHolographic(this, a2) )
  {
    WindowIdFromViewId = 0LL;
    v6 = 0LL;
    v41 = 0;
    v33 = 0LL;
    if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
           a2,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v33) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, ISMTracing **))(*(_QWORD *)v33 + 64LL))(v33, &WindowIdFromViewId);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x102,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v7,
          v32);
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 56LL))(v33, &v41);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x103,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v8,
          v32);
      if ( v41 )
      {
        v6 = WindowIdFromViewId;
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = (ISMTracing *)ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v41);
      }
    }
    v10 = *((_QWORD *)this + 98);
    if ( v10
      && (v11 = (ISMTracing *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10),
          WindowIdFromViewId == v11)
      && (v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 98) + 88LL))(*((_QWORD *)this + 98)), v41 == v12) )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      if ( v33 )
      {
        v43 = 0;
        v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 32LL))(v33, &v43);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x116,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v14);
          JUMPOUT(0x180006873LL);
        }
        v37 = 0LL;
        v15 = malloc(0x68uLL);
        v16 = v15;
        if ( v15 )
          memset_0(v15, 0, 0x68uLL);
        v39 = v16;
        if ( v16 )
        {
          if ( v41 )
          {
            InputSiteManager = ISMStatics::GetInputSiteManager();
            InputSiteManager::GetInputSiteFromId(InputSiteManager, &v36, 1LL, v6);
            v5 = 5;
            v42 = 5;
            v4 = v36;
          }
          v18 = WindowIdFromViewId;
          v19 = ISMStatics::GetInputSiteManager();
          InputSiteManager::GetInputSiteFromId(v19, &v35, 1LL, v18);
          v5 |= 0xAu;
          v42 = v5;
          v20 = v35;
          v21 = v33;
          FrameworkViewTypeFromFocusTarget = MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(v22, v33);
          v24 = MPCFocusTarget::MPCFocusTarget(v16, v21, v20, v4, FrameworkViewTypeFromFocusTarget, v43, 0);
        }
        else
        {
          v24 = 0LL;
        }
        v37 = v24;
        if ( (v5 & 2) != 0 )
        {
          v5 &= ~2u;
          v42 = v5;
          v25 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          }
        }
        if ( (v5 & 1) != 0 )
        {
          v26 = v36;
          if ( v36 )
          {
            v36 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
        MPCInputRouter::Set3DFocusTarget(
          this,
          (struct IMPCFocusTarget *)((v24 + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)v24 >> 64)));
        v13 = 0;
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 98) + 32LL))(*((_QWORD *)this + 98));
    v28 = (struct IMPCTarget *)*((_QWORD *)this + 98);
    v29 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v29 && *v29 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D_(
        WindowIdFromViewId,
        v13,
        v28,
        v27,
        (unsigned __int64)WindowIdFromViewId);
    }
    v30 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
  }
  else
  {
    updated = DWMInputRouter::UpdateFocusedInputTarget(this, a2);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF6,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)updated,
        v32);
  }
}
