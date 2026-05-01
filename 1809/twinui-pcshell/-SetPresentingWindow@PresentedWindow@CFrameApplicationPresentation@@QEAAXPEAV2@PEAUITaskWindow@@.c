/*
 * XREFs of ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1801280FC
 * Callers:
 *     _lambda_c95d809369eb2a01accf8ae73ccd45ab_::operator() @ 0x180127270 (_lambda_c95d809369eb2a01accf8ae73ccd45ab_--operator().c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18000E50C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x180126D08 (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x180126EFC (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
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
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 2, (__int64)a3);
  *((_QWORD *)this + 3) = a4;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v7);
}
