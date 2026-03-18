/*
 * XREFs of ?ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180158AE0
 * Callers:
 *     ??1CCaptureRenderTarget@@EEAA@XZ @ 0x180157CA0 (--1CCaptureRenderTarget@@EEAA@XZ.c)
 *     ?ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER@@@Z @ 0x1801589D8 (-ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTA.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x180158C70 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180063A40 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CCaptureRenderTarget::ReleaseFlipResources(void **this, __int64 a2)
{
  __int64 v3; // rdx

  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(this + 60, a2);
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(this + 61, v3);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    this + 62,
    0LL);
  CCaptureRenderTarget::ReleaseRenderingResources((CCaptureRenderTarget *)this);
}
