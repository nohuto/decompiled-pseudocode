/*
 * XREFs of ?IsWindowOnCurrentVirtualDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@PEAH@Z @ 0x1803FC4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop(VirtualDesktopsApi *this, HWND a2, int *a3)
{
  __int64 v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int (__fastcall *v9)(__int64, HWND, __int64 *); // rbx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+70h] [rbp+40h] BYREF
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
  v16 = 0LL;
  v9 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( v9(v6, a2, &v16) >= 0 )
  {
    v15 = 0LL;
    v10 = *((_QWORD *)this + 7);
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 224LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v12 = v11(v10, &v15);
    v7 = v12;
    if ( v12 >= 0 )
    {
      *a3 = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 9) + 24LL))(
              *((_QWORD *)this + 9),
              v16,
              v15);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
        (const char *)(unsigned int)v12);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  else
  {
    *a3 = 1;
    v7 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
LABEL_13:
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v7;
}
