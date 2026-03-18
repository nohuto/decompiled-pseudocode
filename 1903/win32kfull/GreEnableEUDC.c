/*
 * XREFs of GreEnableEUDC @ 0x1C00E966C
 * Callers:
 *     NtGdiEnableEudc @ 0x1C00E8940 (NtGdiEnableEudc.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00E92D4 (-CleanUpEUDC@@YAXXZ.c)
 * Callees:
 *     bDeleteAllFlEntry @ 0x1C004990C (bDeleteAllFlEntry.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C004F048 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     bAddAllFlEntry @ 0x1C00E9794 (bAddAllFlEntry.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C0291C8C (-bSetupDefaultFlEntry@@YAHXZ.c)
 */

__int64 __fastcall GreEnableEUDC(int a1)
{
  int v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // edi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v2 = 0;
  if ( !ghsemEUDC1 || !ghsemEnableEUDC )
  {
    if ( !gbAttemptedEnableEUDC )
      gbAttemptedEnableEUDC = 1;
    v2 = 1;
    goto LABEL_11;
  }
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
  {
LABEL_11:
    v4 = v2;
    goto LABEL_9;
  }
  GreAcquireSemaphore(ghsemEnableEUDC);
  if ( a1 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    if ( bReadyToInitializeFontAssocDefault == 1 && !bFinallyInitializeFontAssocDefault )
      bFinallyInitializeFontAssocDefault = bSetupDefaultFlEntry() != 0;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    v3 = bAddAllFlEntry(1LL);
  }
  else
  {
    v3 = bDeleteAllFlEntry();
  }
  v4 = v3;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEnableEUDC", ghsemEnableEUDC);
  GreReleaseSemaphoreInternal(ghsemEnableEUDC);
  if ( !gbAttemptedEnableEUDC )
    gbAttemptedEnableEUDC = 1;
LABEL_9:
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  return v4;
}
