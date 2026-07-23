/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1800E8860
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_18005B7E8 @ 0x18005B7E8 (sub_18005B7E8.c)
 *     sub_18005B814 @ 0x18005B814 (sub_18005B814.c)
 */

NTSTATUS __cdecl RtlPinAtomInAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  NTSTATUS v5; // ebx
  _RTL_HANDLE_TABLE_ENTRY *v6; // rax
  char *v7; // rax

  if ( !sub_18005B7E8((__int64)AtomTableHandle) )
    return -1073741811;
  v5 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v5 = 0;
  }
  else
  {
    v6 = sub_18005B814((__int64)AtomTableHandle, Atom & 0x3FFF);
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
