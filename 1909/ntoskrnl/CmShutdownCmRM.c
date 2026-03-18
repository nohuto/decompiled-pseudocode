/*
 * XREFs of CmShutdownCmRM @ 0x1406BA828
 * Callers:
 *     CmpTryToRundownHive @ 0x1401129E0 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     CmShutdownSystem @ 0x140826AC4 (CmShutdownSystem.c)
 * Callees:
 *     CmpRunDownCmRM @ 0x1406BA870 (CmpRunDownCmRM.c)
 *     CmpStopRMLog @ 0x1406BAA78 (CmpStopRMLog.c)
 */

__int64 __fastcall CmShutdownCmRM(__int64 a1, __int64 a2)
{
  char v2; // di

  v2 = a2;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 64) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 64));
      if ( !*(_DWORD *)(a1 + 64) )
        CmpStopRMLog();
    }
  }
  LOBYTE(a2) = v2;
  return CmpRunDownCmRM(a1, a2);
}
