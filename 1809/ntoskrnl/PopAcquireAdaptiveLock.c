/*
 * XREFs of PopAcquireAdaptiveLock @ 0x1406DD964
 * Callers:
 *     PopSessionInputChange @ 0x1406DD7A0 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x1406E31A0 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14071E928 (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x140746FE0 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x140879E60 (PopActiveLockScreenPowerRequest.c)
 *     PopIsLockConsoleTimeoutActive @ 0x14087A158 (PopIsLockConsoleTimeoutActive.c)
 *     PopSessionWinlogonNotification @ 0x14087A25C (PopSessionWinlogonNotification.c)
 *     PopUserPresentOverride @ 0x14087A470 (PopUserPresentOverride.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1406DEEB0 (PoBlockConsoleSwitch.c)
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
    qword_140410DF0 = 0LL;
  }
  return result;
}
