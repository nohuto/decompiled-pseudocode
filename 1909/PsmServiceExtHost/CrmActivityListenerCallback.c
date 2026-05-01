/*
 * XREFs of CrmActivityListenerCallback @ 0x180032CA0
 * Callers:
 *     <none>
 * Callees:
 *     CrmRegistrationReadyQueueAdd @ 0x180031220 (CrmRegistrationReadyQueueAdd.c)
 *     CrmActivityTimeSpentUpdate @ 0x1800313E4 (CrmActivityTimeSpentUpdate.c)
 *     CrmRegistrationReadyQueueRemove @ 0x180031718 (CrmRegistrationReadyQueueRemove.c)
 *     CrmLogActivityUpdate @ 0x180032E90 (CrmLogActivityUpdate.c)
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x18003C5C4 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmActivityListenerCallback(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // r12
  __int64 v7; // r13
  int v8; // r15d
  int v9; // eax
  int v10; // r14d
  int v11; // edi
  int v12; // ebp
  int v14; // eax
  int v15; // eax
  __int64 v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+A0h] [rbp+8h]
  __int64 v19; // [rsp+B8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  v7 = 0LL;
  v16 = *(_QWORD *)(v3 + 48);
  v17 = *(_DWORD *)(v3 + 60);
  v19 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 16LL);
  RtlAcquireSRWLockExclusive(v3 + 72);
  *(_DWORD *)(v3 + 80) = GetCurrentThreadId();
  v8 = *(_DWORD *)(a1 + 48);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 40))(0LL, a3);
  v10 = v9;
  if ( v9 == v8 )
  {
    v11 = *(_DWORD *)(v3 + 92);
    v12 = v11;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v9;
    RtlAcquireSRWLockShared(*(_QWORD *)(v3 + 40));
    if ( *(_DWORD *)(v3 + 128) || *(_DWORD *)(v3 + 132) )
      CrmRegistrationNotifyWindowClosedReasonChange(*(_QWORD *)(v3 + 40), v3);
    RtlReleaseSRWLockShared(*(_QWORD *)(v3 + 40));
    v11 = *(_DWORD *)(v3 + 92);
    if ( v10 )
      v12 = v11 + 1;
    else
      v12 = v11 - 1;
    v14 = *(_DWORD *)(v3 + 88);
    *(_DWORD *)(v3 + 92) = v12;
    if ( v12 == v14 || v11 == v14 )
    {
      v7 = *(_QWORD *)(v3 + 112);
      v6 = MEMORY[0x7FFE0008];
      v15 = *(_DWORD *)(v3 + 88);
      *(_QWORD *)(v3 + 112) = MEMORY[0x7FFE0008];
      if ( v12 == v15 )
      {
        RtlQueryUnbiasedInterruptTime(v3 + 144);
        *(_QWORD *)(v3 + 152) = MEMORY[0x7FFE0008];
        CrmActivityTimeSpentUpdate(v3, 0);
        CrmRegistrationReadyQueueAdd(*(_QWORD *)(v3 + 40), v3);
        v15 = *(_DWORD *)(v3 + 88);
      }
      if ( v11 == v15 )
      {
        *(_QWORD *)(v3 + 144) = -1LL;
        *(_QWORD *)(v3 + 152) = -1LL;
        CrmActivityTimeSpentUpdate(v3, 1);
        CrmRegistrationReadyQueueRemove(*(_QWORD *)(v3 + 40), v3, 1);
      }
    }
  }
  *(_DWORD *)(v3 + 80) = 0;
  RtlReleaseSRWLockExclusive(v3 + 72);
  return CrmLogActivityUpdate(v16, v17, v19, a2, v8, v10, v11, v12, v7, v6);
}
