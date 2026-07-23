/*
 * XREFs of PopCreateKernelPowerRequest @ 0x1407024B4
 * Callers:
 *     PoRegisterSystemState @ 0x1402DBDB0 (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x140702430 (PoCreatePowerRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1409DDC6C (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140002AE4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopInsertPowerRequestObject @ 0x140589BEC (PopInsertPowerRequestObject.c)
 *     PopCreatePowerRequestObject @ 0x140589F40 (PopCreatePowerRequestObject.c)
 *     PopDiagTracePowerRequestCreate @ 0x14058A28C (PopDiagTracePowerRequestCreate.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopCreateKernelPowerRequest(_QWORD *a1, _DWORD *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  result = PopCreatePowerRequestObject(&v8, a2);
  if ( (int)result >= 0 )
  {
    v4 = (_QWORD *)v8;
    *(_DWORD *)(v8 + 20) = 18;
    PopAcquirePowerRequestPushLock(1);
    PopInsertPowerRequestObject(v4, 0);
    PopUmpoSendPowerRequestOverrideQuery((__int64)v4, v5, v6, v7);
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    PopDiagTracePowerRequestCreate(0, (__int64)v4);
    result = 0LL;
    *a1 = v4;
  }
  return result;
}
