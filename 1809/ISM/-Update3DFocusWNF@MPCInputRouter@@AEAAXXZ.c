/*
 * XREFs of ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x180008268
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180007CDC (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180007EE8 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z @ 0x18000952C (-MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18000C778 (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x18000C8D0 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::Update3DFocusWNF(MPCInputRouter *this)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  struct IViewHierarchy *v4; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  unsigned __int64 WindowIdFromViewId; // rbx
  struct IViewHierarchy *v7; // rax
  char *v8; // r8
  _DWORD *v9; // rdi
  struct IViewHierarchy *v10; // rax
  __int64 v11; // rcx
  const struct std::nothrow_t *v12; // rdx
  char *v13; // rax
  int v14; // eax
  _DWORD *v15; // rcx
  ISMTracing *v16; // rcx
  void *v17; // [rsp+48h] [rbp+7h] BYREF
  _DWORD *v18; // [rsp+50h] [rbp+Fh]
  __int64 v19; // [rsp+58h] [rbp+17h]
  __int64 v20; // [rsp+60h] [rbp+1Fh]
  unsigned __int64 v21; // [rsp+68h] [rbp+27h] BYREF
  unsigned __int64 Ancestor; // [rsp+70h] [rbp+2Fh]
  unsigned int v23; // [rsp+78h] [rbp+37h]
  char v24[4]; // [rsp+7Ch] [rbp+3Bh]
  char v25[4]; // [rsp+80h] [rbp+3Fh]
  char v26[4]; // [rsp+84h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v20 = -2LL;
  v2 = *((_QWORD *)this + 98);
  if ( v2 )
  {
    memset_0(&v21, 0, 0x20uLL);
    v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    *(_DWORD *)v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 98) + 72LL))(*((_QWORD *)this + 98));
    *(_DWORD *)v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 98) + 80LL))(*((_QWORD *)this + 98));
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 98) + 56LL))(*((_QWORD *)this + 98));
    Ancestor = v21;
    if ( *((_BYTE *)this + 880) )
      v3 = *((_DWORD *)this + 221);
    else
      v3 = v23;
    *(_DWORD *)v26 = v3;
    if ( *(_DWORD *)v25
      || (v4 = ISMStatics::GetViewHierarchy(), (*(_DWORD *)v25 = ViewHelper::GetViewIdFromWindowId(v4, v21)) != 0) )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, *(unsigned int *)v25);
      v7 = ISMStatics::GetViewHierarchy();
      (*(void (__fastcall **)(struct IViewHierarchy *, void **, _QWORD))(*(_QWORD *)v7 + 56LL))(
        v7,
        &v17,
        *(unsigned int *)v25);
      v8 = (char *)v17;
      v9 = v18;
      if ( v17 != v18 )
      {
        v10 = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v10, *(v9 - 1));
        v8 = (char *)v17;
      }
      v11 = gdwDeviceFamily;
      if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
      {
        Ancestor = (unsigned __int64)GetAncestor((HWND)(int)WindowIdFromViewId, 2u);
        v8 = (char *)v17;
      }
      else
      {
        Ancestor = WindowIdFromViewId;
      }
      if ( v8 )
      {
        v12 = (const struct std::nothrow_t *)((v19 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFFCuLL);
        v13 = v8;
        if ( (unsigned __int64)v12 >= 0x1000 )
        {
          v12 = (const struct std::nothrow_t *)((char *)v12 + 39);
          v8 = (char *)*((_QWORD *)v8 - 1);
          if ( (unsigned __int64)(v13 - v8 - 8) > 0x1F )
          {
            _o__invalid_parameter_noinfo_noreturn(v11, v12);
            __debugbreak();
          }
        }
        operator delete(v8, v12);
      }
    }
    v14 = RtlPublishWnfStateData(WNF_HOLO_INPUT_FOCUS_CHANGE, 0LL, &v21, 32LL, 0LL) | 0x10000000;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x34E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v14);
      JUMPOUT(0x1800084B4LL);
    }
    v15 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v15 )
    {
      if ( *v15 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCInputRouter_Update3DFocusWNF_(v16, v21, Ancestor, v23, v24[0], v25[0], v26[0]);
      }
    }
  }
}
