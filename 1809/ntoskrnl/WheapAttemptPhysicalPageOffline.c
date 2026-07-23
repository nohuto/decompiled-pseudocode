/*
 * XREFs of WheapAttemptPhysicalPageOffline @ 0x1408DD00C
 * Callers:
 *     WheaAttemptPhysicalPageOffline @ 0x1408DCCC0 (WheaAttemptPhysicalPageOffline.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1408DD130 (WheapAttemptPhysicalPageOfflineWorker.c)
 * Callees:
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7600 (MmMarkPhysicalMemoryAsBad.c)
 *     WheaPersistOfflinedPage @ 0x140320794 (WheaPersistOfflinedPage.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x1403211F8 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x1408DD168 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapClearPoison @ 0x1408DD244 (WheapClearPoison.c)
 *     WheapSqmAddToStream @ 0x1408DE454 (WheapSqmAddToStream.c)
 */

__int64 __fastcall WheapAttemptPhysicalPageOffline(UNICODE_STRING *a1, char a2, char a3)
{
  __int64 v3; // rbp
  char v4; // di
  int v8; // r12d
  int v9; // eax
  unsigned int v10; // esi
  bool v11; // bl
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  _DWORD v16[22]; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER StartAddress; // [rsp+90h] [rbp+8h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+20h] BYREF

  v18 = 4096LL;
  v3 = (_QWORD)a1 << 12;
  v4 = 0;
  StartAddress.QuadPart = (_QWORD)a1 << 12;
  if ( a3 )
  {
    v8 = 2;
    if ( WheapClearPoisonSupported )
      WheapClearPoison(&StartAddress);
  }
  else
  {
    v8 = 1;
    StartAddress.QuadPart = v3 | 1;
  }
  v9 = MmMarkPhysicalMemoryAsBad(&StartAddress, &v18);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = v9 == 0;
    v16[2] = v8;
    v16[6] = v9 == 0;
    v16[0] = 1;
    v16[4] = 1;
    WheapSqmAddToStream(7212LL, 2LL, v16);
    if ( !v11 )
    {
      LOBYTE(v13) = a3;
      LOBYTE(v12) = a2;
      WheapCallInUsePageNotificationCallbacks(a1, v12, v13);
    }
  }
  if ( WheapPolicyMemPersistOffline )
  {
    v14 = WheaPersistOfflinedPage(a1);
    if ( v14 >= 0 )
      v4 = 1;
    else
      v10 = v14;
  }
  WheapLogPageOfflineAttemptEvent(v3, v10 == 259, a3, v4, a2);
  return v10;
}
