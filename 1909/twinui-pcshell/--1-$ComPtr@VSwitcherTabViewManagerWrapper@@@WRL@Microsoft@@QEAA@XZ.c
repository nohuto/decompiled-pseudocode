/*
 * XREFs of ??1?$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1802E3470
 * Callers:
 *     _wil::MakeOrThrow_SwitcherTabViewManagerWrapper_ITabViewManager____::_1_::dtor$0 @ 0x1802DF41A (_wil--MakeOrThrow_SwitcherTabViewManagerWrapper_ITabViewManager____--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005D490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowM.c)
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
