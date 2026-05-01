/*
 * XREFs of ?SetManagerReference@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewManager@@@Z @ 0x1803405D0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18010E82C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x1801418E8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::SetManagerReference(
        CMultitaskingViewServiceProvider *this,
        struct IMultitaskingViewManager *a2)
{
  signed __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v5 = ((unsigned __int64)this + 24) & -(__int64)(this != (CMultitaskingViewServiceProvider *)88);
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v5, 1);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 9, (__int64)a2);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v5);
  return 0LL;
}
