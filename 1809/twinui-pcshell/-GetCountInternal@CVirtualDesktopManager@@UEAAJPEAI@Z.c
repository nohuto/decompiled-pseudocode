/*
 * XREFs of ?GetCountInternal@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x1803860B0
 * Callers:
 *     ?GetCount@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x180386020 (-GetCount@CVirtualDesktopManager@@UEAAJPEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetCountInternal(CVirtualDesktopManager *this, unsigned int *a2)
{
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9));
  return 0LL;
}
