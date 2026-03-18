/*
 * XREFs of UserAddAtomToAtomTableEx @ 0x1C005FFD0
 * Callers:
 *     UserAddAtomEx @ 0x1C005FFA0 (UserAddAtomEx.c)
 *     Win32UserInitialize @ 0x1C01F2A58 (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ?LkdForAtomAdditionFailure@@YAXJ@Z @ 0x1C00BC004 (-LkdForAtomAdditionFailure@@YAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomToAtomTableEx(PRTL_ATOM_TABLE AtomTable, __int64 a2, int a3)
{
  int v5; // ebx
  __int64 result; // rax
  ULONG v7; // eax
  RTL_ATOM v8[12]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = 0;
  v5 = RtlAddAtomToAtomTableEx(AtomTable, a2, v8);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741773 )
  {
    LkdForAtomAdditionFailure(v5);
    v7 = RtlNtStatusToDosError(v5);
    UserSetLastError(v7);
  }
  result = v8[0];
  if ( v8[0] )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(AtomTable, v8[0]);
      return v8[0];
    }
  }
  return result;
}
