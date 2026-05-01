/*
 * XREFs of ?Hide@ShellFeedsDesktopExperienceView@@UEAAJXZ @ 0x18009D4F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::Hide(ShellFeedsDesktopExperienceView *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 10);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 96LL))(v1);
  return 0LL;
}
