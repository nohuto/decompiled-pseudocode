/*
 * XREFs of ?GetCountInternal@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x1803EBB30
 * Callers:
 *     ?GetCount@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x1803EBAA0 (-GetCount@CVirtualDesktopManager@@UEAAJPEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetCountInternal(CVirtualDesktopManager *this, unsigned int *a2)
{
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9));
  return 0LL;
}
