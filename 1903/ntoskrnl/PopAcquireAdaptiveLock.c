/*
 * XREFs of PopAcquireAdaptiveLock @ 0x1406A3C58
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405B5070 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x140723C24 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x14072A294 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x1407468A8 (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x14074B0E0 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x1408B5E80 (PopActiveLockScreenPowerRequest.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408B60DC (PopIsLockConsoleTimeoutActive.c)
 *     PopUserPresentOverride @ 0x1408B62F8 (PopUserPresentOverride.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1406A3A78 (PoBlockConsoleSwitch.c)
 */

struct _KTHREAD *__fastcall PopAcquireAdaptiveLock(char a1)
{
  ULONG v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v6[6]; // [rsp+28h] [rbp-30h] BYREF

  v1 = -1;
  memset(v6, 0, sizeof(v6));
  if ( !a1 )
  {
    v1 = PoBlockConsoleSwitch(v6);
    Interval.QuadPart = -100000LL;
    while ( v1 != PopConsoleContext )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  result = KeGetCurrentThread();
  PopAdpmLockThread = (__int64)result;
  if ( !a1 )
  {
    result = 0LL;
    PopLazyContext = 1uLL;
    DWORD1(PopLazyContext) = v1;
    qword_1404387F0 = 0LL;
  }
  return result;
}
