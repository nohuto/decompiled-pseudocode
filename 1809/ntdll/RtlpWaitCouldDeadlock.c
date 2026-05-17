/*
 * XREFs of RtlpWaitCouldDeadlock @ 0x18005EDEC
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWaitOnCriticalSection @ 0x18005EA34 (RtlpWaitOnCriticalSection.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpWaitCouldDeadlock()
{
  struct _TEB *v1; // rcx
  __int64 WowTebOffset; // rax
  __int64 v3; // rcx

  if ( byte_180165408 )
    return 1;
  if ( !UseWOW64 )
    return 0;
  v1 = NtCurrentTeb();
  WowTebOffset = v1->WowTebOffset;
  if ( (_DWORD)WowTebOffset )
  {
    if ( (int)WowTebOffset >= 0 )
      v1 = (struct _TEB *)((char *)v1 + WowTebOffset);
  }
  else
  {
    v1 = 0LL;
  }
  v3 = *(unsigned int *)(LODWORD(v1->NtTib.Self) + 0xCLL);
  return v3 && *(_BYTE *)(v3 + 40);
}
