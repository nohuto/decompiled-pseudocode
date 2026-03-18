/*
 * XREFs of ?ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER@@@Z @ 0x1801589D8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180063A40 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180158AE0 (-ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetFlipManager(
        void **this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER *a3)
{
  char *v3; // rbx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  void *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx

  v3 = (char *)*((_QWORD *)a3 + 1);
  CCaptureRenderTarget::ReleaseFlipResources((CCaptureRenderTarget *)this);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    this + 62,
    0LL);
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(this + 60, v6);
  v7 = OpenFlipProducer(*((_QWORD *)a3 + 1), this + 60, this + 62);
  if ( v7 >= 0 )
  {
    v11 = this[60];
    wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(this + 61, v8);
    v12 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD, char *))(*(_QWORD *)v11 + 32LL))(
            v11,
            0LL,
            0LL,
            (char *)this + 488);
    v10 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x2Eu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v7, 0x2Au);
    v10 = 0;
  }
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  return v10;
}
