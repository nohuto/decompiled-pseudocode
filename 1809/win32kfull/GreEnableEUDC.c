/*
 * XREFs of GreEnableEUDC @ 0x1C00C3D7C
 * Callers:
 *     NtGdiEnableEudc @ 0x1C00C2C30 (NtGdiEnableEudc.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00C3A08 (-CleanUpEUDC@@YAXXZ.c)
 * Callees:
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C0024378 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     bAddAllFlEntry @ 0x1C00C6838 (bAddAllFlEntry.c)
 *     bDeleteAllFlEntry @ 0x1C00CAE88 (bDeleteAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C027B91C (-bSetupDefaultFlEntry@@YAHXZ.c)
 */

__int64 __fastcall GreEnableEUDC(int a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx

  if ( ghsemEUDC1 && ghsemEnableEUDC )
  {
    if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    {
      return 0LL;
    }
    else
    {
      GreAcquireSemaphore(ghsemEnableEUDC);
      if ( a1 )
      {
        GreAcquireSemaphore(ghsemEUDC1);
        if ( bReadyToInitializeFontAssocDefault == 1 && !bFinallyInitializeFontAssocDefault )
          bFinallyInitializeFontAssocDefault = bSetupDefaultFlEntry() != 0;
        EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
        v2 = bAddAllFlEntry(1LL);
      }
      else
      {
        v2 = bDeleteAllFlEntry();
      }
      v3 = v2;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEnableEUDC", ghsemEnableEUDC);
      GreReleaseSemaphoreInternal(ghsemEnableEUDC);
      if ( !gbAttemptedEnableEUDC )
        gbAttemptedEnableEUDC = 1;
      return v3;
    }
  }
  else
  {
    if ( !gbAttemptedEnableEUDC )
      gbAttemptedEnableEUDC = 1;
    return 1LL;
  }
}
