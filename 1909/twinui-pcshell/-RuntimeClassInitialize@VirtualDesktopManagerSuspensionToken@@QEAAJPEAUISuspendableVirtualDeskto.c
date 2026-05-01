/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopManagerSuspensionToken@@QEAAJPEAUISuspendableVirtualDesktopManager@@@Z @ 0x18040C728
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopManagerSuspensionToken@@UIUnknown@@PEAVCVirtualDesktopManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVCVirtualDesktopManager@@@Z @ 0x18040A3E8 (--$MakeAndInitialize@VVirtualDesktopManagerSuspensionToken@@UIUnknown@@PEAVCVirtualDesktopManage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopManagerSuspensionToken::RuntimeClassInitialize(
        VirtualDesktopManagerSuspensionToken *this,
        struct ISuspendableVirtualDesktopManager *a2)
{
  struct ISuspendableVirtualDesktopManager *v4; // rcx
  struct ISuspendableVirtualDesktopManager *v5; // rdx

  v4 = (struct ISuspendableVirtualDesktopManager *)*((_QWORD *)this + 6);
  if ( v4 != a2 )
  {
    v5 = v4;
    if ( a2 )
    {
      (*(void (__fastcall **)(struct ISuspendableVirtualDesktopManager *, struct ISuspendableVirtualDesktopManager *))(*(_QWORD *)a2 + 8LL))(
        a2,
        v4);
      v5 = (struct ISuspendableVirtualDesktopManager *)*((_QWORD *)this + 6);
    }
    *((_QWORD *)this + 6) = a2;
    v4 = a2;
    if ( v5 )
    {
      (*(void (__fastcall **)(struct ISuspendableVirtualDesktopManager *))(*(_QWORD *)v5 + 16LL))(v5);
      v4 = (struct ISuspendableVirtualDesktopManager *)*((_QWORD *)this + 6);
    }
  }
  (*(void (__fastcall **)(struct ISuspendableVirtualDesktopManager *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
  return 0LL;
}
