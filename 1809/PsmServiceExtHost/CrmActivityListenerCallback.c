/*
 * XREFs of CrmActivityListenerCallback @ 0x180033AE0
 * Callers:
 *     <none>
 * Callees:
 *     CrmLogActivityUpdate @ 0x180033CD0 (CrmLogActivityUpdate.c)
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x180034128 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     CrmActivityTimeSpentUpdate @ 0x180034338 (CrmActivityTimeSpentUpdate.c)
 *     CrmRegistrationReadyQueueAdd @ 0x180034A90 (CrmRegistrationReadyQueueAdd.c)
 *     CrmRegistrationReadyQueueRemove @ 0x180034D48 (CrmRegistrationReadyQueueRemove.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmActivityListenerCallback(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // r12
  __int64 v7; // r13
  int v8; // r15d
  int v9; // eax
  int v10; // r14d
  int v11; // ebx
  int v12; // ebp
  int v14; // eax
  int v15; // eax
  __int64 v16; // [rsp+60h] [rbp-48h]
  int v17; // [rsp+B0h] [rbp+8h]
  __int64 v19; // [rsp+C8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  v7 = 0LL;
  v16 = *(_QWORD *)(v3 + 40);
  v17 = *(_DWORD *)(v3 + 52);
  v19 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 16LL);
  RtlAcquireSRWLockExclusive(v3 + 56);
  *(_DWORD *)(v3 + 64) = GetCurrentThreadId();
  v8 = *(_DWORD *)(a1 + 48);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 40))(0LL, a3);
  v10 = v9;
  if ( v9 == v8 )
  {
    v11 = *(_DWORD *)(v3 + 76);
    v12 = v11;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v9;
    RtlAcquireSRWLockShared(*(_QWORD *)(v3 + 32));
    if ( *(_DWORD *)(v3 + 112) || *(_DWORD *)(v3 + 116) )
      CrmRegistrationNotifyWindowClosedReasonChange(*(_QWORD *)(v3 + 32), v3);
    RtlReleaseSRWLockShared(*(_QWORD *)(v3 + 32));
    v11 = *(_DWORD *)(v3 + 76);
    if ( v10 )
      v12 = v11 + 1;
    else
      v12 = v11 - 1;
    v14 = *(_DWORD *)(v3 + 72);
    *(_DWORD *)(v3 + 76) = v12;
    if ( v12 == v14 || v11 == v14 )
    {
      v7 = *(_QWORD *)(v3 + 96);
      v6 = MEMORY[0x7FFE0008];
      v15 = *(_DWORD *)(v3 + 72);
      *(_QWORD *)(v3 + 96) = MEMORY[0x7FFE0008];
      if ( v12 == v15 )
      {
        RtlQueryUnbiasedInterruptTime(v3 + 128);
        *(_QWORD *)(v3 + 136) = MEMORY[0x7FFE0008];
        CrmActivityTimeSpentUpdate(v3, 0LL);
        CrmRegistrationReadyQueueAdd(*(_QWORD *)(v3 + 32), v3);
        v15 = *(_DWORD *)(v3 + 72);
      }
      if ( v11 == v15 )
      {
        *(_QWORD *)(v3 + 128) = -1LL;
        *(_QWORD *)(v3 + 136) = -1LL;
        CrmActivityTimeSpentUpdate(v3, 1LL);
        CrmRegistrationReadyQueueRemove(*(_QWORD *)(v3 + 32), v3, 1LL);
      }
    }
  }
  *(_DWORD *)(v3 + 64) = 0;
  RtlReleaseSRWLockExclusive(v3 + 56);
  return CrmLogActivityUpdate(v16, v17, v19, a2, v8, v10, v11, v12, v7, v6, 0);
}
