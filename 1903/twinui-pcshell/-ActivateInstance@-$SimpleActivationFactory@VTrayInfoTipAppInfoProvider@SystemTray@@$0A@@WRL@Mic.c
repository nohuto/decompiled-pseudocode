/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VTrayInfoTipAppInfoProvider@SystemTray@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18033BEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<SystemTray::TrayInfoTipAppInfoProvider,0>::ActivateInstance(
        __int64 a1,
        volatile signed __int64 **a2)
{
  return Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipAppInfoProvider,IInspectable,>(a2);
}
