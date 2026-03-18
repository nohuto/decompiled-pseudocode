/*
 * XREFs of UserDeleteAtomFromAtomTable @ 0x1C003BAC0
 * Callers:
 *     RealInternalRemoveProp @ 0x1C002E9E0 (RealInternalRemoveProp.c)
 *     DeleteProperties @ 0x1C003B8A0 (DeleteProperties.c)
 *     UserDeleteAtom @ 0x1C003BAA0 (UserDeleteAtom.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 */

__int64 __fastcall UserDeleteAtomFromAtomTable(struct _RTL_ATOM_TABLE *a1, RTL_ATOM a2)
{
  int v3; // eax
  ULONG v5; // eax

  if ( a2 <= (unsigned __int16)gatomLastPinned && a2 >= (unsigned __int16)gatomFirstPinned )
    return 0LL;
  v3 = RtlDeleteAtomFromAtomTable(a1, a2);
  if ( v3 >= 0 )
    return 0LL;
  v5 = RtlNtStatusToDosError(v3);
  UserSetLastError(v5);
  return a2;
}
