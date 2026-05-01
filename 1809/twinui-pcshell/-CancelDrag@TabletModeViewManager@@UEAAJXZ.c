/*
 * XREFs of ?CancelDrag@TabletModeViewManager@@UEAAJXZ @ 0x180350C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeViewManager::CancelDrag(TabletModeViewManager *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( !v2 )
    return 2147943568LL;
  if ( !*((_BYTE *)this + 80) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
  return 0LL;
}
