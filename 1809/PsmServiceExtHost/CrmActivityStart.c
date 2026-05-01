/*
 * XREFs of CrmActivityStart @ 0x180033278
 * Callers:
 *     CrmRegistrationCreateActivity @ 0x180032FD4 (CrmRegistrationCreateActivity.c)
 * Callees:
 *     RmpWnfCreateStateNameForClient @ 0x180013918 (RmpWnfCreateStateNameForClient.c)
 *     CrmLogActivityStart @ 0x18003319C (CrmLogActivityStart.c)
 *     CrmRegisterToStateMonitor @ 0x18003349C (CrmRegisterToStateMonitor.c)
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x180034128 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall CrmActivityStart(struct _WNF_STATE_NAME *a1, __int64 a2, ULONG a3, void *a4)
{
  ULONG v8; // r14d
  char *v9; // rdi
  __int64 v10; // rbp
  PVOID Heap; // rax
  unsigned int v12; // r14d
  __int64 v13; // r12
  unsigned int *v14; // r15
  unsigned int v15; // edi
  _QWORD *v16; // rbx
  int v17; // ebx
  int StateNameForClient; // eax
  char *v20; // rax
  ULONG Key; // [rsp+30h] [rbp-B8h] BYREF
  int v22; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE Source2[80]; // [rsp+40h] [rbp-A8h] BYREF

  Key = dword_18007F798[3 * a3];
  v8 = Key;
  v9 = (char *)&CrmPolicyTable + 440 * (int)Key;
  if ( dword_18009BCB8 == 14 )
  {
    v20 = (char *)bsearch(&Key, &CrmPolicyTable8828080Override, 1uLL, 0x1B8uLL, CrmPolicyTableCompare);
    if ( v20 )
      v9 = v20;
  }
  v10 = *((unsigned int *)v9 + 1);
  a1[6].Data[1] = v8;
  a1[6].Data[0] = a3;
  a1[5] = (struct _WNF_STATE_NAME)_InterlockedIncrement64(&qword_18009BC50);
  memset_0(Source2, 0, 0x44uLL);
  if ( RtlCompareMemory(a4, Source2, 0x44uLL) != 68 )
  {
    StateNameForClient = RmpWnfCreateStateNameForClient(a4, 4u, 0, a1 + 13);
    goto LABEL_14;
  }
  if ( a3 == 17 )
  {
    a1[14] = (struct _WNF_STATE_NAME)WNF_RM_QUIET_MODE;
    v22 = 255;
    StateNameForClient = RtlPublishWnfStateData(WNF_RM_QUIET_MODE, 0LL, &v22, 4LL, 0LL);
LABEL_14:
    v17 = StateNameForClient;
    if ( StateNameForClient < 0 )
      goto LABEL_12;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 56 * v10);
  a1[11] = (struct _WNF_STATE_NAME)Heap;
  if ( Heap )
  {
    v12 = 0;
    a1[9].Data[0] = v10;
    if ( (_DWORD)v10 )
    {
      v13 = 0LL;
      v14 = (unsigned int *)(v9 + 8);
      while ( 1 )
      {
        v15 = *v14;
        v16 = (_QWORD *)(v13 + *(_QWORD *)&a1[11]);
        memset_0(v16, 0, 0x38uLL);
        v16[3] = a1;
        *((_OWORD *)v16 + 2) = *(_OWORD *)v14;
        v16[1] = 0LL;
        v16[2] = 0LL;
        v16[2] = v16 + 1;
        v16[1] = v16 + 1;
        *v16 = CrmActivityListenerCallback;
        v17 = CrmRegisterToStateMonitor(v16, v15);
        if ( v17 < 0 )
          break;
        ++a1[10].Data[0];
        ++v12;
        v13 += 56LL;
        v14 += 4;
        if ( v12 >= (unsigned int)v10 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( a1[6].Data[0] == 17 )
      {
        RtlAcquireSRWLockExclusive(&a1[7]);
        a1[8].Data[0] = GetCurrentThreadId();
        CrmRegistrationNotifyWindowClosedReasonChange(a2, a1);
        a1[8].Data[0] = 0;
        RtlReleaseSRWLockExclusive(&a1[7]);
      }
      v17 = 0;
    }
  }
  else
  {
    v17 = -1073741801;
  }
LABEL_12:
  CrmLogActivityStart((__int64)a1, a2, v17);
  return (unsigned int)v17;
}
