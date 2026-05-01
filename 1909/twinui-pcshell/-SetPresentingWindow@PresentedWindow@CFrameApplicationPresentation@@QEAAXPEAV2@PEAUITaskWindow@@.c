/*
 * XREFs of ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x18017098C
 * Callers:
 *     _lambda_c33ccc33460f714f139ac7c6d94dc43a_::operator() @ 0x18016FA64 (_lambda_c33ccc33460f714f139ac7c6d94dc43a_--operator().c)
 * Callees:
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180015428 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x18016F63C (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x18016F708 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 */

void __fastcall CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
        CFrameApplicationPresentation::PresentedWindow *this,
        struct CFrameApplicationPresentation *a2,
        struct ITaskWindow *a3,
        unsigned __int64 a4)
{
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
    (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v7,
    a2);
  if ( *((_OWORD *)this + 1) != __PAIR128__(a4, (unsigned __int64)a3) )
    *((_BYTE *)this + 32) = 0;
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)this + 2, (__int64)a3);
  *((_QWORD *)this + 3) = a4;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v7);
}
