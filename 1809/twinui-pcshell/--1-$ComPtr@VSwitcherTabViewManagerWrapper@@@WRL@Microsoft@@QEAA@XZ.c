/*
 * XREFs of ??1?$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x18026AE74
 * Callers:
 *     _wil::MakeOrThrow_SwitcherTabViewManagerWrapper_ITabViewManager_____ptr64__::_1_::dtor$0 @ 0x180266EEB (_wil--MakeOrThrow_SwitcherTabViewManagerWrapper_ITabViewManager_____ptr64__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowM.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SwitcherTabViewManagerWrapper>::~ComPtr<SwitcherTabViewManagerWrapper>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(result);
  }
  return result;
}
