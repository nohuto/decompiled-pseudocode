/*
 * XREFs of PopDirectedDripsNotifyAppsAndServices @ 0x1408A4610
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x1408A47F0 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140129A60 (MmUnlockPagableImageSection.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1405B1BA4 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PoBlockConsoleSwitch @ 0x1406A3A78 (PoBlockConsoleSwitch.c)
 *     MmLockPagableSectionByHandle @ 0x1406D4160 (MmLockPagableSectionByHandle.c)
 *     PoUnblockConsoleSwitch @ 0x140724A04 (PoUnblockConsoleSwitch.c)
 *     PopDiagTraceDirectedDripsNotifyAppsAndServices @ 0x1408AEDD4 (PopDiagTraceDirectedDripsNotifyAppsAndServices.c)
 */

__int64 __fastcall PopDirectedDripsNotifyAppsAndServices(_DWORD *a1, _DWORD *a2, char a3)
{
  __int64 result; // rax
  int v7; // ett
  char v8; // di
  __int64 v9; // r14
  __int64 v10; // rcx

  _m_prefetchw(a1);
  LODWORD(result) = *a1;
  do
  {
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange(a1, result, result);
  }
  while ( v7 != (_DWORD)result );
  v8 = result;
  if ( _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0) && (result & 0x800) != 0 )
  {
    v9 = MEMORY[0xFFFFF78000000008];
    if ( a3 )
    {
      if ( (result & 8) != 0 )
        return result;
      MmLockPagableSectionByHandle(ExPageLockHandle);
      _InterlockedOr(a1, 2u);
      a2[12] = *a2;
      a2[10] = 2;
      a2[11] = 5;
      a2[14] = 21;
      a2[8] = PoBlockConsoleSwitch(a2 + 9);
      PopDirectedDripsSendSuspendResumeNotification(1, 1);
      PopDirectedDripsSendSuspendResumeNotification(0, 1);
      _InterlockedOr(a1, 8u);
      a1[35] = 0;
    }
    else
    {
      if ( (result & 8) != 0 )
      {
        PopDirectedDripsSendSuspendResumeNotification(0, 0);
        PopDirectedDripsSendSuspendResumeNotification(1, 0);
        PoUnblockConsoleSwitch(a2 + 9, a2[8]);
      }
      if ( (v8 & 2) != 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
      _InterlockedAnd(a1, 0xFFFFFFF5);
    }
    v10 = MEMORY[0xFFFFF78000000008] - v9;
    LOBYTE(v10) = a3;
    return PopDiagTraceDirectedDripsNotifyAppsAndServices(
             v10,
             (MEMORY[0xFFFFF78000000008] - v9) / 0x2710uLL,
             (MEMORY[0xFFFFF78000000008] - v9) / 0x2710uLL);
  }
  return result;
}
