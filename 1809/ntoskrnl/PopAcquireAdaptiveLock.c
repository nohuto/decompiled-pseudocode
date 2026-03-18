/*
 * XREFs of PopAcquireAdaptiveLock @ 0x1406DC6E4
 * Callers:
 *     PopSessionInputChange @ 0x1406DC520 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x1406E1F20 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14071D6A8 (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x140745E10 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x140878C20 (PopActiveLockScreenPowerRequest.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140878F18 (PopIsLockConsoleTimeoutActive.c)
 *     PopSessionWinlogonNotification @ 0x14087901C (PopSessionWinlogonNotification.c)
 *     PopUserPresentOverride @ 0x140879230 (PopUserPresentOverride.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1406DDC30 (PoBlockConsoleSwitch.c)
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
