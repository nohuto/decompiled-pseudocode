/*
 * XREFs of PspLockRootJobFromProcess @ 0x140601738
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x140601410 (PspRemoveProcessFromJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x14060494C (PspSendProcessNotificationToJobChain.c)
 * Callees:
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405FF100 (PspLockJobExclusive.c)
 */

__int64 __fastcall PspLockRootJobFromProcess(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h]
  __int64 i; // [rsp+50h] [rbp+18h]

  v9 = *(_QWORD *)(a1 + 944);
  v6 = a2;
  for ( i = *(_QWORD *)(v9 + 1080); ; i = *(_QWORD *)(v9 + 1080) )
  {
    PspLockJobExclusive(i, a2);
    if ( v9 == *(_QWORD *)(a1 + 944) && i == *(_QWORD *)(v9 + 1080) )
      break;
    PspUnlockJob(i, v6);
    a2 = v6;
    v9 = *(_QWORD *)(a1 + 944);
  }
  *a3 = v9;
  result = i;
  *a4 = i;
  return result;
}
