/*
 * XREFs of ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x1801587A8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002FEF4 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180158B24 (-ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetAdapterLUID(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURERENDERTARGET_SETADAPTERLUID *a3)
{
  __int64 v5; // rax
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx

  CCaptureRenderTarget::ReleaseRenderingResources(this);
  v5 = *((_QWORD *)a3 + 1);
  v6 = (char *)this + 400;
  *((_QWORD *)this + 51) = v5;
  v7 = *((_QWORD *)this + 50);
  *((_QWORD *)this + 50) = 0LL;
  if ( v7 )
    CD3DSurface::Release((CD3DSurface *)(v7 + 496));
  v8 = *(_QWORD *)v6;
  *(_QWORD *)v6 = 0LL;
  if ( v8 )
    CD3DSurface::Release((CD3DSurface *)(v8 + 496));
  if ( (int)CD3DDeviceManager::GetD3DDevice(
              (CD3DDeviceManager *)&g_D3DDeviceManager,
              *(struct _LUID *)((char *)this + 408),
              (struct CD3DDeviceLevel1 **)this + 50) >= 0 )
  {
    if ( (v9 = *(_QWORD *)(*(_QWORD *)v6 + 696LL), !*(_BYTE *)(v9 + 344)) && !*(_BYTE *)(v9 + 345)
      || (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 60) + 40LL))(
           *((_QWORD *)this + 60),
           *(_QWORD *)(*(_QWORD *)v6 + 632LL)) < 0 )
    {
      v10 = *(_QWORD *)v6;
      *(_QWORD *)v6 = 0LL;
      if ( v10 )
        CD3DSurface::Release((CD3DSurface *)(v10 + 496));
    }
  }
  return 0LL;
}
