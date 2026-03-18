/*
 * XREFs of UserDeleteAtomFromAtomTable @ 0x1C0087F80
 * Callers:
 *     DeleteProperties @ 0x1C000FC70 (DeleteProperties.c)
 *     RealInternalRemoveProp @ 0x1C0011370 (RealInternalRemoveProp.c)
 *     UserDeleteAtom @ 0x1C0087F60 (UserDeleteAtom.c)
 * Callees:
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 */

__int64 __fastcall UserDeleteAtomFromAtomTable(struct _RTL_ATOM_TABLE *a1, RTL_ATOM a2)
{
  int v3; // eax
  ULONG v5; // eax
  __int64 v6; // rdx

  if ( a2 <= (unsigned __int16)gatomLastPinned && a2 >= (unsigned __int16)gatomFirstPinned )
    return 0LL;
  v3 = RtlDeleteAtomFromAtomTable(a1, a2);
  if ( v3 >= 0 )
    return 0LL;
  v5 = RtlNtStatusToDosError(v3);
  UserSetLastError(v5, v6);
  return a2;
}
