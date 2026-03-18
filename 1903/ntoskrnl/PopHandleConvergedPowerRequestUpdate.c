/*
 * XREFs of PopHandleConvergedPowerRequestUpdate @ 0x1406A057C
 * Callers:
 *     PopExecutionRequiredCallback @ 0x14069FC30 (PopExecutionRequiredCallback.c)
 *     PopSystemRequiredCallback @ 0x14069FF70 (PopSystemRequiredCallback.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x1400ED42C (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x1406A0258 (PopPowerRequestIsExecutionRequiredStatusHeld.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1406A0280 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x1406A0520 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A0544 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopHandleConvergedPowerRequestUpdate(unsigned int a1, unsigned int a2)
{
  __int64 *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  char v7; // dl
  __int64 v8; // rdx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquirePowerRequestPushLock(1);
  Buffer[1] = a1;
  Buffer[0] = 0LL;
  v4 = (__int64 *)RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  if ( v4 && PopPowerRequestIsExecutionRequiredCapable(*v4) )
  {
    if ( !PopPowerRequestIsExecutionRequiredStatusHeld(v5) )
    {
      v7 = 0;
      goto LABEL_7;
    }
    if ( (_BYTE)PopExecutionRequiredContext && !qword_140444EE8 )
    {
      v7 = 1;
LABEL_7:
      PopUpdatePowerRequestProcessWakeCounter(v6, v7);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return PopHandleSystemRequiredPowerRequestsUpdate(a2, v8);
}
