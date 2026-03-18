/*
 * XREFs of ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C0105ED4
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0104764 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C0105D0C (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C0160BFC (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
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
