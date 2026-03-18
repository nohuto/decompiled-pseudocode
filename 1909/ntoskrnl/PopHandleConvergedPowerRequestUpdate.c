/*
 * XREFs of PopHandleConvergedPowerRequestUpdate @ 0x140671960
 * Callers:
 *     PopSystemRequiredCallback @ 0x140671EF0 (PopSystemRequiredCallback.c)
 *     PopExecutionRequiredCallback @ 0x140672390 (PopExecutionRequiredCallback.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x1400D5F84 (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406719F8 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x140671A30 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x140671CA0 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x140671D00 (PopPowerRequestIsExecutionRequiredStatusHeld.c)
 */

__int64 __fastcall PopHandleConvergedPowerRequestUpdate(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  _QWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  Buffer[1] = v2;
  Buffer[0] = 0LL;
  v4 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  if ( v4 && (unsigned __int8)PopPowerRequestIsExecutionRequiredCapable(*v4) )
  {
    if ( !(unsigned __int8)PopPowerRequestIsExecutionRequiredStatusHeld(v5) )
    {
      v6 = 0LL;
      goto LABEL_7;
    }
    if ( (_BYTE)PopExecutionRequiredContext && !qword_140444BD8 )
    {
      LOBYTE(v6) = 1;
LABEL_7:
      PopUpdatePowerRequestProcessWakeCounter(v7, v6);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return PopHandleSystemRequiredPowerRequestsUpdate(a2, v8);
}
