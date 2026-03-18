/*
 * XREFs of ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00EDF14
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00ED75C (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00EDA1C (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00EDB8C (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 * Callees:
 *     <none>
 */

void UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock(void)
{
  if ( UmfdHostLifeTimeManager::s_UmfdHostProcess )
  {
    ObfDereferenceObject(UmfdHostLifeTimeManager::s_UmfdHostProcess);
    UmfdHostLifeTimeManager::s_UmfdHostProcess = 0LL;
  }
}
