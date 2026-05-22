/*
 * XREFs of ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180007EE8
 * Callers:
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18000701C (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     _lambda_ec705bf725d52d27b1686ede0253a48a_::_lambda_invoker_cdecl_ @ 0x180007ED0 (_lambda_ec705bf725d52d27b1686ede0253a48a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x18000740C (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x180008268 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ?MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z @ 0x180009640 (-MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x18000AD64 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000C488 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18000C778 (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteType@@_K@Z @ 0x18001D8DC (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteTyp.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x180089880 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall MPCInputRouter::OnExclusiveModeStateChangedInputThread(MPCInputRouter *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct IInputTarget *v5; // rbx
  struct IInputTarget *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  struct IViewHierarchy *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  int v13; // eax
  struct IInputTarget *v14; // rcx
  struct IInputTarget *v15; // rdi
  int v16; // eax
  void *v17; // rax
  void *v18; // r15
  __int64 v19; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  char v21; // r12
  __int64 v22; // rsi
  struct IInputTarget *v23; // rbx
  __int64 v24; // rcx
  int FrameworkViewTypeFromFocusTarget; // eax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct IInputTarget *v30; // rcx
  _DWORD *v31; // rcx
  ISMTracing *v32; // rcx
  unsigned int v33; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  struct IInputTarget *v35; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v36; // [rsp+C0h] [rbp+58h] BYREF
  struct IInputTarget *v37; // [rsp+C8h] [rbp+60h] BYREF

  if ( *((_BYTE *)this + 880) != (*((_BYTE *)this + 864) != 0)
    || *((_DWORD *)this + 221) != *((_DWORD *)this + 217)
    || *((_QWORD *)this + 111) != *((_QWORD *)this + 109) )
  {
    *((_BYTE *)this + 880) = *((_BYTE *)this + 864) != 0;
    *((_DWORD *)this + 221) = *((_DWORD *)this + 217);
    *((_QWORD *)this + 111) = *((_QWORD *)this + 109);
    v2 = *((_QWORD *)this + 97);
    if ( v2 )
    {
      *((_QWORD *)this + 97) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    if ( !*((_BYTE *)this + 880) )
      goto LABEL_39;
    v3 = *((_QWORD *)this + 98);
    if ( v3 && (v4 = *((_QWORD *)this + 109), v4 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3)) )
    {
      v5 = (struct IInputTarget *)*((_QWORD *)this + 98);
    }
    else
    {
      v8 = *((_QWORD *)this + 99);
      if ( !v8 || (v9 = *((_QWORD *)this + 109), v9 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8)) )
      {
        v37 = 0LL;
        v35 = 0LL;
        v10 = *((_QWORD *)this + 111);
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v10);
        v13 = DWMInputRouter::CreateAndRegisterTarget(
                this,
                *((_DWORD *)this + 221),
                0,
                ViewIdFromWindowId,
                0,
                v10,
                0,
                0,
                &v37);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x30F,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v13);
          JUMPOUT(0x18000825FLL);
        }
        v14 = v35;
        if ( v35 )
        {
          v35 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v15 = v37;
        v16 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, struct IInputTarget **))v37)(
                v37,
                &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
                &v35);
        if ( v16 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x310,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v16);
          __debugbreak();
        }
        v17 = malloc(0x68uLL);
        v18 = v17;
        if ( v17 )
          memset_0(v17, 0, 0x68uLL);
        if ( v18 )
        {
          v19 = *((_QWORD *)this + 111);
          InputSiteManager = ISMStatics::GetInputSiteManager();
          InputSiteManager::GetInputSiteFromId(InputSiteManager, &v36, 1LL, v19);
          v21 = 3;
          v22 = v36;
          v23 = v35;
          FrameworkViewTypeFromFocusTarget = MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(v24, v35);
          LOBYTE(v33) = 0;
          v26 = MPCFocusTarget::MPCFocusTarget(
                  v18,
                  v23,
                  v22,
                  0LL,
                  FrameworkViewTypeFromFocusTarget,
                  *((_DWORD *)this + 221),
                  v33);
        }
        else
        {
          v26 = 0LL;
          v21 = 0;
        }
        v27 = (v26 + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)v26 >> 64);
        v28 = *((_QWORD *)this + 97);
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        *((_QWORD *)this + 97) = v27;
        if ( (v21 & 1) != 0 )
        {
          v29 = v36;
          if ( v36 )
          {
            v36 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
        }
        v30 = v35;
        if ( v35 )
        {
          v35 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v30 + 16LL))(v30);
        }
        v7 = *(_QWORD *)v15;
        v6 = v15;
        goto LABEL_35;
      }
      v5 = (struct IInputTarget *)*((_QWORD *)this + 99);
    }
    v6 = (struct IInputTarget *)*((_QWORD *)this + 97);
    if ( v6 == v5 )
      goto LABEL_36;
    if ( v5 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = (struct IInputTarget *)*((_QWORD *)this + 97);
    }
    *((_QWORD *)this + 97) = v5;
    if ( !v6 )
      goto LABEL_36;
    v7 = *(_QWORD *)v6;
LABEL_35:
    (*(void (__fastcall **)(struct IInputTarget *))(v7 + 16))(v6);
LABEL_36:
    v31 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v31 )
    {
      if ( *v31 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCInputRouter_OnExclusiveModeStateChangedInputThread_(
          v32,
          *((_BYTE *)this + 880),
          *((_DWORD *)this + 221),
          *((_QWORD *)this + 111));
      }
    }
LABEL_39:
    MPCInputRouter::Update3DFocusWNF(this);
  }
}
