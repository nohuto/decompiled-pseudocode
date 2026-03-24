/*
 * XREFs of PopAcquireAdaptiveLock @ 0x1406DC6C4
 * Callers:
 *     PopSessionInputChange @ 0x1406DC500 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x1406E1F00 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14071D688 (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x140745DF0 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x140878C00 (PopActiveLockScreenPowerRequest.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140878EF8 (PopIsLockConsoleTimeoutActive.c)
 *     PopSessionWinlogonNotification @ 0x140878FFC (PopSessionWinlogonNotification.c)
 *     PopUserPresentOverride @ 0x140879210 (PopUserPresentOverride.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1406DDC10 (PoBlockConsoleSwitch.c)
 */

struct _KTHREAD *__fastcall PopAcquireAdaptiveLock(char a1)
{
  int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[24]; // [rsp+28h] [rbp-30h] BYREF

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
    qword_14040FD90 = 0LL;
  }
  return result;
}
