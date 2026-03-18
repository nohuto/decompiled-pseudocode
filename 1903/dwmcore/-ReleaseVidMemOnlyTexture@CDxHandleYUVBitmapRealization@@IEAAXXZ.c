/*
 * XREFs of ?ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x180264774
 * Callers:
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1802639D0 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180264740 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18003AB30 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x18015F530 (-RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::ReleaseVidMemOnlyTexture(CDxHandleYUVBitmapRealization *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  CMILPoolResource *v4; // rcx

  v1 = *((_QWORD *)this + 53);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 53);
    if ( !*((_DWORD *)this + 74) && (*(_DWORD *)(v1 + 168) & 0x80000) != 0 )
    {
      CD3DDeviceManager::RemoveHwProtectedEntity(
        (CD3DDeviceManager *)&g_D3DDeviceManager,
        *(struct _LUID *)((char *)this + 288));
      v3 = *((_QWORD *)this + 53);
    }
    CD3DResource::RemoveResourceNotifier(
      (CD3DResource *)(v3 + 24),
      (CDxHandleYUVBitmapRealization *)((char *)this + 24));
    v4 = (CMILPoolResource *)*((_QWORD *)this + 53);
    if ( v4 )
    {
      CMILPoolResource::Release(v4);
      *((_QWORD *)this + 53) = 0LL;
    }
  }
}
