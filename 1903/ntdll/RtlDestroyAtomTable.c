/*
 * XREFs of RtlDestroyAtomTable @ 0x180088450
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005B7E8 @ 0x18005B7E8 (sub_18005B7E8.c)
 *     RtlDestroyHandleTable @ 0x180084850 (RtlDestroyHandleTable.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

NTSTATUS __cdecl RtlDestroyAtomTable(PVOID AtomTableHandle)
{
  unsigned int v2; // ebp
  _QWORD **i; // rdi
  _QWORD *v4; // rsi
  _QWORD *v5; // r8

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)AtomTableHandle + 1, 0xFFFFFFFF) != 1 )
    return 0;
  if ( sub_18005B7E8((__int64)AtomTableHandle) )
  {
    v2 = 0;
    for ( i = (_QWORD **)((char *)AtomTableHandle + 72); v2 < *((_DWORD *)AtomTableHandle + 16); ++v2 )
    {
      v4 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v5 = v4;
        if ( !v4 )
          break;
        v4 = (_QWORD *)*v4;
        *v5 = 0LL;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      }
    }
    *(_DWORD *)AtomTableHandle = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
    RtlDestroyHandleTable((PRTL_HANDLE_TABLE)((char *)AtomTableHandle + 16));
    memset(AtomTableHandle, 0, 0x50uLL);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AtomTableHandle);
    return 0;
  }
  return -1073741811;
}
