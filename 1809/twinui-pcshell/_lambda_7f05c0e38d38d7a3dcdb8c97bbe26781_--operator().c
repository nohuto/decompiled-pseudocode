/*
 * XREFs of _lambda_7f05c0e38d38d7a3dcdb8c97bbe26781_::operator() @ 0x180094C68
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f05c0e38d38d7a3dcdb8c97bbe26781___::Run @ 0x180094EF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7f05c0e38d38d7a3dcdb8c97bbe26781___--Run.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180025E48 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7f05c0e38d38d7a3dcdb8c97bbe26781_::operator()(AgileGitPtr *this)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  v2 = AgileGitPtr::CopyLocal(this, &GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c, &v7);
  v4 = v2;
  if ( v2 >= 0 )
  {
    LOBYTE(v3) = *((_DWORD *)this + 2) == 0;
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v7 + 64LL))(v7, v3);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return v4;
}
