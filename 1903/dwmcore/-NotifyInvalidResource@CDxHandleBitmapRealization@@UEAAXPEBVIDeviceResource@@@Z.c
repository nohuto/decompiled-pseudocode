/*
 * XREFs of ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180257310
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180263770 (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::NotifyInvalidResource(
        CDxHandleBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 49);
  if ( v2 && (const struct IDeviceResource *)(v2 + 16) == a2 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 3) + 88LL))((char *)this - 24);
  CBitmapRealization::NotifyInvalidResource(this, a2);
}
