/*
 * XREFs of ?OnButtonRegistryKeyChangeStatic@ButtonProcessor@@SAXPEAXPEAUHKEY__@@@Z @ 0x1800EAB60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnButtonRegistryKeyChange@ButtonProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x1800EAB7C (-OnButtonRegistryKeyChange@ButtonProcessor@@AEAAXPEAUHKEY__@@@Z.c)
 */

void __fastcall ButtonProcessor::OnButtonRegistryKeyChangeStatic(ButtonProcessor *a1, HKEY a2)
{
  if ( a1 )
    ButtonProcessor::OnButtonRegistryKeyChange(a1, a2);
}
