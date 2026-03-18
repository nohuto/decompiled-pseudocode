/*
 * XREFs of ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C01410BC
 * Callers:
 *     UmfdDispatchEscape @ 0x1C007CF40 (UmfdDispatchEscape.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02BAA80 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 */

void UmfdHostLifeTimeManager::OnHostReady(void)
{
  struct _FONTHASH **v0; // rbx
  __int64 i; // rdi
  struct _FONTHASH *j; // rsi
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  if ( !KeReadStateEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent) )
  {
    if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitialized || UmfdHostLifeTimeManager::s_UmfdHostGenerationId != 1 )
    {
      v3 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      v0 = gpPFTPublic;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v0 + 6); i = (unsigned int)(i + 1) )
      {
        for ( j = v0[i + 5]; j; j = (struct _FONTHASH *)*((_QWORD *)j + 1) )
          UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(0LL, *((void **)j + 10), j);
      }
      UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 1;
      KeSetEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
      KeSetEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
      SEMOBJ::vUnlock((SEMOBJ *)&v3);
    }
    else
    {
      KeSetEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent, 0, 0);
      KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
    }
  }
}
