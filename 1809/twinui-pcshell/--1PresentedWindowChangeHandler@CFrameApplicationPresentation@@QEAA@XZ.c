/*
 * XREFs of ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x180126EFC
 * Callers:
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1801280FC (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler(
        CFrameApplicationPresentation::PresentedWindowChangeHandler *this)
{
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 64LL))(*(_QWORD *)this, &v2);
  if ( v2 != *((_QWORD *)this + 1) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 584LL) + 520LL))(*(_QWORD *)(*(_QWORD *)this + 584LL));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
}
