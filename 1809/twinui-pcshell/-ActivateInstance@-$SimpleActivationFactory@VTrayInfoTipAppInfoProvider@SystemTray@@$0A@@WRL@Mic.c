/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VTrayInfoTipAppInfoProvider@SystemTray@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1802DAE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<SystemTray::TrayInfoTipAppInfoProvider,0>::ActivateInstance(
        __int64 a1,
        __int64 *a2)
{
  return Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipAppInfoProvider,IInspectable,>(a2);
}
