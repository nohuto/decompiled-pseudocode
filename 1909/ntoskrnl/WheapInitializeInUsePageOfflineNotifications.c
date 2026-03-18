/*
 * XREFs of WheapInitializeInUsePageOfflineNotifications @ 0x1407816DC
 * Callers:
 *     WheaInitializeServices @ 0x140A1B478 (WheaInitializeServices.c)
 * Callees:
 *     <none>
 */

PVOID *WheapInitializeInUsePageOfflineNotifications()
{
  PVOID *result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  WheapInUsePageOfflineNotifyLock = 0LL;
  result = &WheapInUsePageOfflineNotifyList;
  qword_1405093A8 = (__int64)&WheapInUsePageOfflineNotifyList;
  WheapInUsePageOfflineNotifyList = &WheapInUsePageOfflineNotifyList;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  WheapInUsePageOfflineNotifyInit = 1;
  return result;
}
