/*
 * XREFs of PopAcquireAdaptiveLock @ 0x1406EF0C8
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405B5450 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x140725AC4 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x14072C12C (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x1407487A8 (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x140759C90 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x1408B5750 (PopActiveLockScreenPowerRequest.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408B59AC (PopIsLockConsoleTimeoutActive.c)
 *     PopUserPresentOverride @ 0x1408B5BC8 (PopUserPresentOverride.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1406EF198 (PoBlockConsoleSwitch.c)
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
    qword_140438770 = 0LL;
  }
  return result;
}
