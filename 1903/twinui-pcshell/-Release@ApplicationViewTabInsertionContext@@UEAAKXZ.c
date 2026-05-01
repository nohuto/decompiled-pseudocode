/*
 * XREFs of ?Release@ApplicationViewTabInsertionContext@@UEAAKXZ @ 0x180245900
 * Callers:
 *     ?Release@ApplicationViewTabInsertionContext@@W7EAAKXZ @ 0x1800B8240 (-Release@ApplicationViewTabInsertionContext@@W7EAAKXZ.c)
 *     ?Release@ApplicationViewTabInsertionContext@@WBA@EAAKXZ @ 0x1800B8250 (-Release@ApplicationViewTabInsertionContext@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApplicationViewTabInsertionContext::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Microsoft::WRL::FtmBase>::Release(this);
}
