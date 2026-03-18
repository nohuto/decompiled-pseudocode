/*
 * XREFs of UserAddAtomToAtomTableEx @ 0x1C006C790
 * Callers:
 *     UserAddAtomEx @ 0x1C006C760 (UserAddAtomEx.c)
 *     Win32UserInitialize @ 0x1C021B110 (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C00F3A18 (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomToAtomTableEx(struct _RTL_ATOM_TABLE *a1, __int64 a2, int a3)
{
  int v5; // ebx
  __int64 result; // rax
  ULONG v7; // eax
  RTL_ATOM v8[12]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = 0;
  v5 = RtlAddAtomToAtomTableEx(a1, a2, v8);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741773 )
  {
    LkdForAtomAdditionFailure(a1, v5);
    v7 = RtlNtStatusToDosError(v5);
    UserSetLastError(v7);
  }
  result = v8[0];
  if ( v8[0] )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(a1, v8[0]);
      return v8[0];
    }
  }
  return result;
}
