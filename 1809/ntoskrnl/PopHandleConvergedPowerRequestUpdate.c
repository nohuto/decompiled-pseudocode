/*
 * XREFs of PopHandleConvergedPowerRequestUpdate @ 0x14058AD88
 * Callers:
 *     PopExecutionRequiredCallback @ 0x140589DE0 (PopExecutionRequiredCallback.c)
 *     PopSystemRequiredCallback @ 0x14058AA00 (PopSystemRequiredCallback.c)
 * Callees:
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x1400039AC (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     RtlLookupElementGenericTableAvl @ 0x140006BF0 (RtlLookupElementGenericTableAvl.c)
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x14058A974 (PopPowerRequestIsExecutionRequiredStatusHeld.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14058A99C (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x14058AD2C (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 */

void __fastcall PopHandleConvergedPowerRequestUpdate(int a1, int a2)
{
  __int64 *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  char v7; // dl
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  PopAcquirePowerRequestPushLock(1);
  v9 = a1;
  v4 = (__int64 *)RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  if ( v4 && PopPowerRequestIsExecutionRequiredCapable(*v4) )
  {
    if ( !PopPowerRequestIsExecutionRequiredStatusHeld(v5) )
    {
      v7 = 0;
      goto LABEL_7;
    }
    if ( (_BYTE)PopExecutionRequiredContext && !qword_14041A318 )
    {
      v7 = 1;
LABEL_7:
      PopUpdatePowerRequestProcessWakeCounter(v6, v7);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  PopHandleSystemRequiredPowerRequestsUpdate(a2);
}
