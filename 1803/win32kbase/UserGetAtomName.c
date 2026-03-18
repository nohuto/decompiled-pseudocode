/*
 * XREFs of UserGetAtomName @ 0x1C005AAE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 */

__int64 __fastcall UserGetAtomName(RTL_ATOM a1, WCHAR *AtomName, int a3)
{
  int v3; // eax
  ULONG v5; // eax
  ULONG NameLength; // [rsp+50h] [rbp+18h] BYREF

  NameLength = 2 * a3;
  v3 = RtlQueryAtomInAtomTable(UserAtomTableHandle, a1, 0LL, 0LL, AtomName, &NameLength);
  if ( v3 >= 0 )
    return NameLength >> 1;
  v5 = RtlNtStatusToDosError(v3);
  UserSetLastError(v5);
  return 0LL;
}
