/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VTrayInfoTipActivator@SystemTray@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18033D370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<SystemTray::TrayInfoTipActivator,0>::ActivateInstance(
        __int64 a1,
        volatile signed __int64 **a2)
{
  return Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipActivator,IInspectable,>(a2);
}
