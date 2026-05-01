/*
 * XREFs of ?CreateDesktopW@VirtualDesktopController@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180358B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopController::CreateDesktopW(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **a2)
{
  RTL_SRWLOCK *v4; // rdi
  PVOID Ptr; // rbx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+58h] [rbp+10h]

  *a2 = 0LL;
  v4 = this + 14;
  AcquireSRWLockShared(this + 14);
  v12 = v4;
  Ptr = this[9].Ptr;
  if ( !Ptr )
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_9;
  }
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v7 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)Ptr + 80LL))(Ptr, &v11);
  v6 = v7;
  if ( v7 < 0 )
  {
    v8 = 120LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_8;
  }
  v7 = (*(__int64 (__fastcall **)(PVOID, __int64, struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **))(*(_QWORD *)this[11].Ptr + 24LL))(
         this[11].Ptr,
         v11,
         a2);
  v6 = v7;
  if ( v7 < 0 )
  {
    v8 = 121LL;
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
LABEL_9:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v6;
}
