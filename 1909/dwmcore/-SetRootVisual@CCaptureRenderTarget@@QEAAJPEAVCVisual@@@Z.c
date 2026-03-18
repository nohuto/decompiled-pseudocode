/*
 * XREFs of ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18024E66C
 * Callers:
 *     ?SetDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCResource@@@Z @ 0x1801A5A10 (-SetDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCResource@@@Z.c)
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801CD724 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?ProcessSetRoot@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETROOT@@@Z @ 0x1801CD8B4 (-ProcessSetRoot@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SET.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801CDB2C (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x1800E71F0 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x180159330 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

__int64 __fastcall CCaptureRenderTarget::SetRootVisual(
        CCaptureRenderTarget *this,
        struct CComposition **a2,
        __int64 a3)
{
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v5 = CRenderTarget::SetRoot(this, a2, a3);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x90u, 0LL);
  else
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
      (__int64 *)this + 63,
      (__int64)a2);
  return v7;
}
