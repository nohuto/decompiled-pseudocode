/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1800E8950
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x18005B888 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x18005B8B4 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __cdecl RtlPinAtomInAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  NTSTATUS v5; // ebx
  _RTL_HANDLE_TABLE_ENTRY *v6; // rax
  char *v7; // rax

  if ( !RtlpLockAtomTable((__int64)AtomTableHandle) )
    return -1073741811;
  v5 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v5 = 0;
  }
  else
  {
    v6 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTableHandle, Atom & 0x3FFF);
    if ( v6 && WORD1(v6[1].NextFree) == Atom )
    {
      v7 = (char *)&v6[1].NextFree + 4;
      if ( v7 )
      {
        v5 = 0;
        *((_WORD *)v7 + 1) |= 1u;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
  return v5;
}
