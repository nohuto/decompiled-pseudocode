/*
 * XREFs of _lambda_c32596c6b85fe1861808fcf4903bc1b8_::operator() @ 0x18038B454
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c32596c6b85fe1861808fcf4903bc1b8__&___ptr64_::Run @ 0x18038B8F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c32596c6b85fe1861808fcf4903bc1b8__-___ptr64.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c32596c6b85fe1861808fcf4903bc1b8_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int i; // esi
  PVOID Ptr; // rbx
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  RTL_SRWLOCK *v13; // [rsp+70h] [rbp+18h]

  v2 = *a1 + 4;
  AcquireSRWLockExclusive(v2);
  v13 = v2;
  if ( LOBYTE((*a1)[5].Ptr) )
  {
    v3 = (*(__int64 (__fastcall **)(PVOID, unsigned int *))(*(_QWORD *)(*a1)[3].Ptr + 24LL))((*a1)[3].Ptr, &v11);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
        (const char *)(unsigned int)v3);
      goto LABEL_12;
    }
    for ( i = 0; i < v11; ++i )
    {
      v12 = 0LL;
      Ptr = (*a1)[3].Ptr;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      v7 = (*(__int64 (__fastcall **)(PVOID, _QWORD, GUID *, __int64 *))(*(_QWORD *)Ptr + 32LL))(
             Ptr,
             i,
             &GUID_6cafd3f1_05d1_4d26_a32a_9907a72c920b,
             &v12);
      if ( v7 >= 0 )
        (*(void (__fastcall **)(__int64, PVOID, PVOID))(*(_QWORD *)v12 + 24LL))(v12, (*a1)[1].Ptr, (*a1)[2].Ptr);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          83LL,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
          (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    }
    v8 = DwmpEndTransitionRequest(90LL);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        88LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
        (const char *)(unsigned int)v8);
  }
  v4 = 0;
LABEL_12:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v4;
}
