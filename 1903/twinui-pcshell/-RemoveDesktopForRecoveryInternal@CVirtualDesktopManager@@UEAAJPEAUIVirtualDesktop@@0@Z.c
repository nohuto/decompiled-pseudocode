/*
 * XREFs of ?RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1803ECA50
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x1803EFEB4 (-_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
 */

__int64 __fastcall CVirtualDesktopManager::RemoveDesktopForRecoveryInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = CVirtualDesktopManager::_CheckDesktopRemovalPreconditions((CVirtualDesktopManager *)((char *)this - 8), a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D2,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  if ( *((_QWORD *)this + 10) )
  {
    v9 = -2147019873;
    v10 = 467LL;
  }
  else
  {
    if ( (unsigned int)SHIsSameObject((struct IUnknown *)a2, *((struct IUnknown **)this + 17)) )
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 17, (__int64)a3);
    v9 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 9) + 64LL))(
           *((_QWORD *)this + 9),
           a2);
    if ( (v9 & 0x80000000) == 0 )
      return v9;
    v10 = 472LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)v9);
  return v9;
}
