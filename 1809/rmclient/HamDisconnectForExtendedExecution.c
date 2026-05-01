/*
 * XREFs of HamDisconnectForExtendedExecution @ 0x180005D20
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x180005C6C (RmpClientWnfDestroySubscription.c)
 *     HampConnectionCleanup @ 0x180005F70 (HampConnectionCleanup.c)
 *     HampIpcChannelObjectMakeZombieUnsafe @ 0x180010274 (HampIpcChannelObjectMakeZombieUnsafe.c)
 */

__int64 __fastcall HamDisconnectForExtendedExecution(_DWORD *P)
{
  int v1; // eax
  _DWORD *v3; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rax
  _QWORD *j; // rbx
  _QWORD **v7; // rcx
  _QWORD *v8; // rax
  _QWORD *i; // rcx
  char *v10; // rbx
  char *v11; // rdx
  PVOID v12; // r8
  __int64 v13; // rax
  PVOID Pa; // [rsp+20h] [rbp-18h] BYREF
  PVOID *p_Pa; // [rsp+28h] [rbp-10h]

  v1 = P[28];
  if ( v1 != 2 )
  {
    if ( v1 < 0 )
      goto LABEL_31;
    if ( v1 > 3 )
    {
      if ( v1 == 6 )
      {
        v3 = (_DWORD *)*((_QWORD *)P + 2);
        if ( v3 )
          RmpClientWnfDestroySubscription(v3);
      }
      goto LABEL_31;
    }
  }
  RtlAcquireSRWLockExclusive(P + 6);
  CurrentThreadId = GetCurrentThreadId();
  P[9] |= 1u;
  P[8] = CurrentThreadId;
  v5 = *((_QWORD *)P + 6);
  if ( (v5 & 1) == 0 )
  {
    j = (_QWORD *)*((_QWORD *)P + 6);
LABEL_11:
    while ( j )
    {
      HampIpcChannelObjectMakeZombieUnsafe(j, P + 4);
      v7 = (_QWORD **)j[1];
      v8 = j;
      if ( v7 )
      {
        j = (_QWORD *)j[1];
        for ( i = *v7; i; i = (_QWORD *)*i )
          j = i;
      }
      else
      {
        for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( (_QWORD *)*j == v8 )
            break;
          v8 = j;
        }
      }
    }
    goto LABEL_20;
  }
  if ( v5 != 1 )
  {
    j = (_QWORD *)(v5 ^ ((unsigned __int64)(P + 10) | 1));
    goto LABEL_11;
  }
LABEL_20:
  P[8] = 0;
  RtlReleaseSRWLockExclusive(P + 6);
  v10 = (char *)*((_QWORD *)P + 2);
  if ( v10 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(*(_QWORD *)v10);
    RtlAcquireSRWLockExclusive(v10 + 32);
    *((_DWORD *)v10 + 16) |= 4u;
    v11 = (char *)*((_QWORD *)v10 + 2);
    if ( v11 == v10 + 16 )
    {
      p_Pa = &Pa;
      Pa = &Pa;
    }
    else
    {
      p_Pa = (PVOID *)*((_QWORD *)v10 + 3);
      Pa = v11;
      *((_QWORD *)v11 + 1) = &Pa;
      *p_Pa = &Pa;
      *((_QWORD *)v10 + 3) = v10 + 16;
      *((_QWORD *)v10 + 2) = v10 + 16;
    }
    RtlReleaseSRWLockExclusive(v10 + 32);
    while ( 1 )
    {
      v12 = Pa;
      if ( Pa == &Pa )
        break;
      if ( *((PVOID **)Pa + 1) != &Pa || (v13 = *(_QWORD *)Pa, *(PVOID *)(*(_QWORD *)Pa + 8LL) != Pa) )
        __fastfail(3u);
      Pa = *(PVOID *)Pa;
      *(_QWORD *)(v13 + 8) = &Pa;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    }
    TpWaitForWork(*((_QWORD *)v10 + 7), 0LL);
    TpReleaseWork(*((_QWORD *)v10 + 7));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  }
LABEL_31:
  HampConnectionCleanup(P);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
