/*
 * XREFs of ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0136588
 * Callers:
 *     UmfdDispatchEscape @ 0x1C008C040 (UmfdDispatchEscape.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02A3E40 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 */

void UmfdHostLifeTimeManager::OnHostReady(void)
{
  struct _FONTHASH **v0; // rbx
  __int64 i; // rdi
  struct PFF *j; // rcx
  void **v3; // rax
  void **v4; // rsi
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent) )
  {
    if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitialized || UmfdHostLifeTimeManager::s_UmfdHostGenerationId != 1 )
    {
      v5 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      v0 = gpPFTPublic;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v0 + 6); i = (unsigned int)(i + 1) )
      {
        for ( j = v0[i + 5]; ; j = (struct PFF *)v4[1] )
        {
          v3 = (void **)SkipInvalidPff(j);
          v4 = v3;
          if ( !v3 )
            break;
          UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(0LL, v3[10], v3);
        }
      }
      UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 1;
      KeSetEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
      KeSetEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
      SEMOBJ::vUnlock((SEMOBJ *)&v5);
    }
    else
    {
      KeSetEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent, 0, 0);
      KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
    }
  }
}
