/*
 * XREFs of _lambda_9701aea2da7df8b00511ef6d56188392_::_lambda_invoker_cdecl_ @ 0x180399A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z @ 0x18039AB28 (-Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z.c)
 */

__int64 __fastcall lambda_9701aea2da7df8b00511ef6d56188392_::_lambda_invoker_cdecl_(unsigned int *Parameter)
{
  if ( (int)RoInitialize(1LL) >= 0 )
  {
    TwinUI::Lighting::AssistantLightManager::Animate(Parameter, Parameter[26]);
    RoUninitialize();
  }
  return 0LL;
}
