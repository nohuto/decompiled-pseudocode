/*
 * XREFs of PopPowerActionWatchdog @ 0x1402F7810
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x140596AA0 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1402ED674 (PopInternalAddToDumpFile.c)
 */

void __noreturn PopPowerActionWatchdog()
{
  ULONG_PTR v0; // rbx
  struct _KTHREAD *BugCheckParameter4; // rcx

  if ( dword_14044315C == 1 )
  {
    v0 = 240LL;
  }
  else
  {
    v0 = 15LL;
    if ( dword_14044315C == 2 )
      v0 = 241LL;
  }
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  BugCheckParameter4 = (struct _KTHREAD *)::BugCheckParameter4;
  if ( !::BugCheckParameter4 )
  {
    BugCheckParameter4 = (struct _KTHREAD *)qword_140443168;
    if ( !qword_140443168 )
    {
      BugCheckParameter4 = (struct _KTHREAD *)qword_140443170;
      if ( !qword_140443170 )
      {
        BugCheckParameter4 = (struct _KTHREAD *)qword_140443178;
        if ( !qword_140443178 )
        {
          BugCheckParameter4 = (struct _KTHREAD *)PopTransitionLockOwnerThread;
          if ( !PopTransitionLockOwnerThread )
          {
            BugCheckParameter4 = (struct _KTHREAD *)PopPolicyLockThread;
            if ( !PopPolicyLockThread )
              BugCheckParameter4 = KeGetCurrentThread();
          }
        }
      }
    }
  }
  KeBugCheckEx(0xA0u, v0, dword_140442FE0, PopSleepCheckpoint, (ULONG_PTR)BugCheckParameter4);
}
