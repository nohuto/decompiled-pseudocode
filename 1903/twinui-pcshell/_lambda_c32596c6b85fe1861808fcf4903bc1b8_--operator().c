/*
 * XREFs of _lambda_c32596c6b85fe1861808fcf4903bc1b8_::operator() @ 0x1803F11F4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c32596c6b85fe1861808fcf4903bc1b8__&_::Run @ 0x1803F1690 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c32596c6b85fe1861808fcf4903bc1b8__-_--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c32596c6b85fe1861808fcf4903bc1b8_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int i; // ebp
  PVOID Ptr; // rdi
  __int64 (__fastcall *v7)(PVOID, _QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF
  RTL_SRWLOCK *v14; // [rsp+80h] [rbp+18h]

  v2 = *a1 + 4;
  AcquireSRWLockExclusive(v2);
  v14 = v2;
  if ( LOBYTE((*a1)[5].Ptr) )
  {
    v3 = (*(__int64 (__fastcall **)(PVOID, unsigned int *))(*(_QWORD *)(*a1)[3].Ptr + 24LL))((*a1)[3].Ptr, &v12);
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
    for ( i = 0; i < v12; ++i )
    {
      v13 = 0LL;
      Ptr = (*a1)[3].Ptr;
      v7 = *(__int64 (__fastcall **)(PVOID, _QWORD, GUID *, __int64 *))(*(_QWORD *)Ptr + 32LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      v8 = v7(Ptr, i, &GUID_6cafd3f1_05d1_4d26_a32a_9907a72c920b, &v13);
      if ( v8 >= 0 )
        (*(void (__fastcall **)(__int64, PVOID, PVOID))(*(_QWORD *)v13 + 24LL))(v13, (*a1)[1].Ptr, (*a1)[2].Ptr);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x53,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
          (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
    v9 = DwmpEndTransitionRequest(90LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x58,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
        (const char *)(unsigned int)v9);
  }
  v4 = 0;
LABEL_12:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v4;
}
