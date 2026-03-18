/*
 * XREFs of ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x180158F58
 * Callers:
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18018DC3C (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?ProcessSetRoot@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURECONTROLLER_SETROOT@@@Z @ 0x18018DDC0 (-ProcessSetRoot@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURECONTROLLER_SETROO.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18018DF5C (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 * Callees:
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x18007AAD0 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x1800EF5B8 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

__int64 __fastcall CCaptureRenderTarget::SetRootVisual(CCaptureRenderTarget *this, struct CVisual *a2, bool a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v5 = CRenderTarget::SetRoot(this, a2, a3);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x9Du);
  else
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
      (__int64 *)this + 63,
      (__int64)a2);
  return v7;
}
