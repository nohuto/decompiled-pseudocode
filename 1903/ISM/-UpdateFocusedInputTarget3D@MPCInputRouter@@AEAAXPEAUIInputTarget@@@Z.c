/*
 * XREFs of ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180056080
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000C610 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081A0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000D0D0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000DD7C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DF64 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x18002F654 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAEA_N$$QEAPEAUIMPCFocusTarget@@$$QEA_NAEA_K@Z @ 0x180053528 (--$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAE.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180053CB8 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800549E8 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180055CB4 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x180056C6C (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x180058690 (-GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x1800589F8 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MPCInputRouter::UpdateFocusedInputTarget3D(
        MPCInputRouter *this,
        int (__fastcall ***a2)(struct IInputTarget *, GUID *, struct IInputTarget **))
{
  int v4; // esi
  __int64 v5; // r12
  int v6; // r13d
  int (__fastcall *v7)(struct IInputTarget *, GUID *, struct IInputTarget **); // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct IViewHierarchy *ViewHierarchy; // rax
  struct IViewHierarchy *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  char v16; // al
  int v17; // eax
  void *v18; // r15
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *InputSiteFromId; // rax
  __int64 v21; // r12
  struct InputSiteManager *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rdi
  struct IInputTarget *v25; // rbx
  __int64 v26; // rcx
  int FrameworkViewTypeFromFocusTarget; // eax
  struct IMPCTarget *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int updated; // eax
  int v32; // [rsp+20h] [rbp-60h]
  struct IInputTarget *v33; // [rsp+40h] [rbp-40h] BYREF
  unsigned int ProcessIdFromViewId; // [rsp+48h] [rbp-38h] BYREF
  int v35; // [rsp+4Ch] [rbp-34h]
  __int64 WindowIdFromViewId; // [rsp+50h] [rbp-30h] BYREF
  struct IMPCTarget *v37; // [rsp+58h] [rbp-28h] BYREF
  __int64 v38; // [rsp+60h] [rbp-20h] BYREF
  __int64 v39[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  char v41; // [rsp+C8h] [rbp+48h] BYREF
  int v42; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v43; // [rsp+D8h] [rbp+58h] BYREF

  v39[1] = -2LL;
  v4 = 0;
  v35 = 0;
  if ( a2
    && MPCInputRouter::IsTargetHolographic(this, (__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2) )
  {
    WindowIdFromViewId = 0LL;
    ProcessIdFromViewId = 0;
    v5 = 0LL;
    v6 = 0;
    v43 = 0;
    v33 = 0LL;
    v7 = **a2;
    Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease((__int64 *)&v33);
    if ( v7((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v33) >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(struct IInputTarget *, __int64 *))(*(_QWORD *)v33 + 64LL))(
             v33,
             &WindowIdFromViewId);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10C,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v8,
          v32);
      v9 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)v33 + 32LL))(
             v33,
             &ProcessIdFromViewId);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10D,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v9,
          v32);
      v10 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)v33 + 56LL))(v33, &v43);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10E,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v10,
          v32);
      if ( v43 )
      {
        v5 = WindowIdFromViewId;
        v6 = ProcessIdFromViewId;
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v43);
        v12 = ISMStatics::GetViewHierarchy();
        ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v12, v43);
      }
    }
    v41 = 0;
    v13 = *((_QWORD *)this + 104);
    if ( !v13
      || ((v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13), WindowIdFromViewId != v14)
       || (v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 104) + 88LL))(*((_QWORD *)this + 104)),
           v43 != v15)
        ? (v16 = 0)
        : (v41 = 1, v16 = 1),
          !v16) )
    {
      if ( v33 )
      {
        v42 = 0;
        v17 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v33 + 32LL))(v33, &v42);
        if ( v17 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            291LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v17);
          __debugbreak();
        }
        v37 = 0LL;
        v18 = RefCountedObject::operator new(0x68uLL);
        v39[2] = (__int64)v18;
        if ( v18 )
        {
          if ( v43 )
          {
            InputSiteManager = ISMStatics::GetInputSiteManager();
            InputSiteFromId = InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, v39, 1, v5, v6);
            v4 = 1;
            v35 = 1;
            v21 = *InputSiteFromId;
          }
          else
          {
            v21 = 0LL;
          }
          v22 = ISMStatics::GetInputSiteManager();
          v23 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)v22, &v38, 1, WindowIdFromViewId, v42);
          v4 |= 2u;
          v35 = v4;
          v24 = *v23;
          v25 = v33;
          FrameworkViewTypeFromFocusTarget = MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(v26, v33);
          v28 = (struct IMPCTarget *)MPCFocusTarget::MPCFocusTarget(
                                       v18,
                                       v25,
                                       v24,
                                       v21,
                                       FrameworkViewTypeFromFocusTarget,
                                       v42,
                                       0);
        }
        else
        {
          v28 = 0LL;
        }
        v37 = v28;
        if ( (v4 & 2) != 0 )
        {
          v4 &= ~2u;
          v35 = v4;
          v29 = v38;
          if ( v38 )
          {
            v38 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
        }
        if ( (v4 & 1) != 0 )
        {
          v30 = v39[0];
          if ( v39[0] )
          {
            v39[0] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          }
        }
        MPCInputRouter::Set3DFocusTarget(
          this,
          (struct IMPCFocusTarget *)(((unsigned __int64)v28 + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)v28 >> 64)));
        if ( v28 )
          (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
    LOBYTE(v42) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 104) + 32LL))(*((_QWORD *)this + 104));
    v37 = (struct IMPCTarget *)*((_QWORD *)this + 104);
    ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D<bool &,IMPCFocusTarget *,bool,unsigned __int64 &>(
      (bool *)&v41,
      &v37,
      (bool *)&v42,
      (unsigned __int64 *)&WindowIdFromViewId);
    Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease((__int64 *)&v33);
  }
  else
  {
    updated = DWMInputRouter::UpdateFocusedInputTarget(this, (struct IInputTarget *)a2);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFE,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)updated,
        v32);
  }
}
