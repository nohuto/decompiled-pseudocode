/*
 * XREFs of RtlEmptyAtomTable @ 0x180088600
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005B7E8 @ 0x18005B7E8 (sub_18005B7E8.c)
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 */

NTSTATUS __cdecl RtlEmptyAtomTable(PVOID AtomTableHandle, BOOLEAN IncludePinnedAtoms)
{
  unsigned int v4; // ebp
  __int64 *i; // r14
  __int64 *v6; // rsi
  _BYTE *v7; // rbx
  __int64 v9; // rdx

  if ( !sub_18005B7E8((__int64)AtomTableHandle) )
    return -1073741811;
  v4 = 0;
  for ( i = (__int64 *)((char *)AtomTableHandle + 72); v4 < *((_DWORD *)AtomTableHandle + 16); ++v4 )
  {
    v6 = i++;
    while ( 1 )
    {
      v7 = (_BYTE *)*v6;
      if ( !*v6 )
        break;
      if ( IncludePinnedAtoms || (v7[14] & 1) == 0 )
      {
        v9 = *v6;
        *v6 = *(_QWORD *)v7;
        *(_QWORD *)v7 = 0LL;
        sub_18005BFD4((__int64)AtomTableHandle, v9);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      }
      else
      {
        v6 = (__int64 *)*v6;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
  return 0;
}
