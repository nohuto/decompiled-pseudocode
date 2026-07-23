/*
 * XREFs of WheapAttemptPhysicalPageOffline @ 0x140919F1C
 * Callers:
 *     WheaAttemptClearPoison @ 0x140919AB0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140919BA0 (WheaAttemptPhysicalPageOffline.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x14091A090 (WheapAttemptPhysicalPageOfflineWorker.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x140199660 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEDE0 (MmMarkPhysicalMemoryAsBad.c)
 *     WheaPersistOfflinedPage @ 0x140340BBC (WheaPersistOfflinedPage.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x140341A2C (WheapLogPageOfflineAttemptEvent.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x14091A0D4 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapClearPoison @ 0x14091A1B0 (WheapClearPoison.c)
 */

__int64 __fastcall WheapAttemptPhysicalPageOffline(LARGE_INTEGER a1, UNICODE_STRING *a2, char a3, char a4, char a5)
{
  char v6; // r14
  char v8; // bl
  int v9; // r15d
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // edi
  bool v14; // r14
  int v15; // eax
  __int64 v18; // [rsp+38h] [rbp-49h] BYREF
  __int64 v19; // [rsp+40h] [rbp-41h] BYREF
  LARGE_INTEGER StartAddress; // [rsp+48h] [rbp-39h] BYREF
  _QWORD Src[6]; // [rsp+50h] [rbp-31h] BYREF

  StartAddress = a1;
  v6 = a3;
  memset(Src, 0, 0x29uLL);
  v19 = 4096LL;
  v8 = 0;
  v18 = (_QWORD)a2 << 12;
  if ( a4 )
  {
    v9 = 2;
  }
  else
  {
    v9 = 1;
    v18 = ((_QWORD)a2 << 12) | 1LL;
  }
  v10 = MmMarkPhysicalMemoryAsBad(&v18, &v19);
  v13 = v10;
  if ( v10 >= 0 )
  {
    v14 = v10 == 0;
    if ( WheapClearPoisonSupported && a5 && (int)WheapClearPoison(&StartAddress) >= 0 )
      return v13;
    if ( !v14 )
    {
      LOBYTE(v11) = a3;
      LOBYTE(v12) = a4;
      WheapCallInUsePageNotificationCallbacks(a2, v11, v12);
    }
    Src[0] = 0x1674C6857LL;
    Src[1] = 41LL;
    Src[2] = 0x800000064C4E524BuLL;
    Src[3] = 0x900000003LL;
    LODWORD(Src[4]) = v9;
    BYTE4(Src[4]) = v14;
    *(_DWORD *)((char *)&Src[4] + 5) = (_DWORD)a2;
    WheaLogInternalEvent(Src);
    v6 = a3;
  }
  if ( WheapPolicyMemPersistOffline )
  {
    v15 = WheaPersistOfflinedPage(a2);
    if ( v15 >= 0 )
      v8 = 1;
    else
      v13 = v15;
  }
  WheapLogPageOfflineAttemptEvent((_QWORD)a2 << 12, v13 == 259, a4, v8, v6);
  return v13;
}
