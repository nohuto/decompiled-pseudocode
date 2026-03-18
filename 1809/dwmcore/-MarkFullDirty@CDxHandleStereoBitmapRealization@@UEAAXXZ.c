/*
 * XREFs of ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1802284E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x18006E460 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::MarkFullDirty(CDxHandleStereoBitmapRealization *this)
{
  CBitmapRealization::MarkFullDirty(this);
  if ( *((_QWORD *)this + 36) )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 39) + 40LL))((char *)this + 312);
}
