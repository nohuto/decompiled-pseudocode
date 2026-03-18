/*
 * XREFs of ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C01422D8
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0141D14 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C0141F30 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C0161BBC (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
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
