/*
 * XREFs of ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180228520
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800EAF5C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180226FE0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x180228580 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::NotifyInvalidResource(
        CDxHandleStereoBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  __int64 v4; // rax

  if ( !CD2DBitmapCache::RemoveFromCache((CDxHandleStereoBitmapRealization *)((char *)this + 416), a2) )
  {
    v4 = *((_QWORD *)this + 51);
    if ( v4 )
    {
      if ( (const struct IDeviceResource *)(v4 + 16) == a2 )
        CDxHandleStereoBitmapRealization::ReleaseD2DBitmap((CDxHandleStereoBitmapRealization *)((char *)this - 24));
    }
    CDxHandleBitmapRealization::NotifyInvalidResource(this, a2);
  }
}
