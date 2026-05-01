/*
 * XREFs of ??1?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x1801BCC50
 * Callers:
 *     _Win32BackedViewHostItem::put_Visibility_::_1_::dtor$0 @ 0x1801C13D7 (_Win32BackedViewHostItem--put_Visibility_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::~ComPtr<PresentationReadyChangedEventArgs>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease(a1);
}
