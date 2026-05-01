/*
 * XREFs of ??1?$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C3F40
 * Callers:
 *     _wil::MakeOrThrow_SwitcherTabViewManagerWrapper_ITabViewManager____::_1_::dtor$0 @ 0x1802BFEEE (_wil--MakeOrThrow_SwitcherTabViewManagerWrapper_ITabViewManager____--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017FD20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImm_ea_18017FD20.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<SwitcherTabViewManagerWrapper>::~ComPtr<SwitcherTabViewManagerWrapper>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(result);
  }
  return result;
}
