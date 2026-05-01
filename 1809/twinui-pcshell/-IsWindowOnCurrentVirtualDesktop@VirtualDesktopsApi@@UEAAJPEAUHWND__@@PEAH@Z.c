/*
 * XREFs of ?IsWindowOnCurrentVirtualDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180396210
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop(VirtualDesktopsApi *this, HWND a2, int *a3)
{
  __int64 v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp+48h] BYREF

  *a3 = 1;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), &SRWLock);
  v6 = *((_QWORD *)this + 12);
  if ( !v6 )
  {
    v7 = -2147019873;
    v8 = 65LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)v7);
    goto LABEL_13;
  }
  if ( !a2 )
  {
    v7 = -2147024809;
    v8 = 66LL;
    goto LABEL_5;
  }
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  if ( (*(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, a2, &v14) >= 0 )
  {
    v13 = 0LL;
    v9 = *((_QWORD *)this + 7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 224LL))(v9, &v13);
    v7 = v10;
    if ( v10 >= 0 )
    {
      *a3 = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 9) + 24LL))(
              *((_QWORD *)this + 9),
              v14,
              v13);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  }
  else
  {
    *a3 = 1;
    v7 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
LABEL_13:
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v7;
}
