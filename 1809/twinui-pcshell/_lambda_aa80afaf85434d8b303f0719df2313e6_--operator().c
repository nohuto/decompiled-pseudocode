/*
 * XREFs of _lambda_aa80afaf85434d8b303f0719df2313e6_::operator() @ 0x1800E5C08
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_aa80afaf85434d8b303f0719df2313e6___::Run @ 0x1800E71F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_aa80afaf85434d8b303f0719df2313e6___--Run.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180025E48 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_aa80afaf85434d8b303f0719df2313e6_::operator()(_BYTE *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  v2 = AgileGitPtr::CopyLocal((AgileGitPtr *)(a1 + 8), &GUID_18661d31_3944_41b1_bd96_da3defc2c268, &v7);
  v4 = v2;
  if ( v2 >= 0
    && (LOBYTE(v3) = *a1,
        v2 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v7 + 24LL))(v7, v3),
        v4 = v2,
        v2 >= 0) )
  {
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F,
      (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return v4;
}
