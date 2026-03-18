/*
 * XREFs of DCompositionSessionInitialize @ 0x1C005D120
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C005CFC0 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C005D148 (-Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C005D208 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 */

__int64 __fastcall DCompositionSessionInitialize(int a1)
{
  __int64 result; // rax

  result = DirectComposition::CConnection::OnSessionCreation(a1);
  if ( (int)result >= 0 )
  {
    result = DirectComposition::CSynchronizationManager::OnSessionCreation();
    if ( (int)result >= 0 )
      return DirectComposition::CMaterialPropertiesTable::Initialize();
  }
  return result;
}
