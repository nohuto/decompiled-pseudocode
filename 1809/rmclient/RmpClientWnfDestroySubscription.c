/*
 * XREFs of RmpClientWnfDestroySubscription @ 0x180005C6C
 * Callers:
 *     HampConnectionDestroy @ 0x180005B58 (HampConnectionDestroy.c)
 *     HamIpcChannelRundown @ 0x180005BA8 (HamIpcChannelRundown.c)
 *     HamDisconnectForExtendedExecution @ 0x180005D20 (HamDisconnectForExtendedExecution.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x1800088FC (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x180010780 (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpClientWnfDestroySubscription(_DWORD *P)
{
  _QWORD *v2; // rdx
  PVOID v3; // r8
  __int64 v5; // rax
  PVOID Pa; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_Pa; // [rsp+28h] [rbp-8h]

  RtlUnsubscribeWnfNotificationWaitForCompletion(*(_QWORD *)P);
  RtlAcquireSRWLockExclusive(P + 8);
  P[16] |= 4u;
  v2 = (_QWORD *)*((_QWORD *)P + 2);
  if ( v2 == (_QWORD *)(P + 4) )
  {
    p_Pa = &Pa;
    Pa = &Pa;
  }
  else
  {
    p_Pa = (PVOID *)*((_QWORD *)P + 3);
    Pa = v2;
    v2[1] = &Pa;
    *p_Pa = &Pa;
    *((_QWORD *)P + 3) = P + 4;
    *((_QWORD *)P + 2) = P + 4;
  }
  RtlReleaseSRWLockExclusive(P + 8);
  while ( 1 )
  {
    v3 = Pa;
    if ( Pa == &Pa )
      break;
    if ( *((PVOID **)Pa + 1) != &Pa || (v5 = *(_QWORD *)Pa, *(PVOID *)(*(_QWORD *)Pa + 8LL) != Pa) )
      __fastfail(3u);
    Pa = *(PVOID *)Pa;
    *(_QWORD *)(v5 + 8) = &Pa;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  TpWaitForWork(*((_QWORD *)P + 7), 0LL);
  TpReleaseWork(*((_QWORD *)P + 7));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
