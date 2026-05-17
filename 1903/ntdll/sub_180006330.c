/*
 * XREFs of sub_180006330 @ 0x180006330
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     sub_18000AD08 @ 0x18000AD08 (sub_18000AD08.c)
 *     EtwNotificationUnregister @ 0x1800537B0 (EtwNotificationUnregister.c)
 * Callees:
 *     sub_1800062DC @ 0x1800062DC (sub_1800062DC.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_180006330(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 52), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    sub_1800062DC(a1);
    RtlAcquireSRWLockExclusive(&unk_180166440);
    RtlRbRemoveNode(&qword_180166420, a1);
    RtlReleaseSRWLockExclusive(&unk_180166440);
    *(_DWORD *)(a1 + 48) = 0;
    RtlReleaseSRWLockExclusive(a1 + 40);
    v3 = *(_QWORD *)(a1 + 168);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  return result;
}
