/*
 * XREFs of UserAddAtomToAtomTable @ 0x1C00BC08C
 * Callers:
 *     UserAddAtom @ 0x1C00BC070 (UserAddAtom.c)
 * Callees:
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ?LkdForAtomAdditionFailure@@YAXJ@Z @ 0x1C00BC004 (-LkdForAtomAdditionFailure@@YAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomToAtomTable(__int64 a1, WCHAR *a2, int a3)
{
  struct _RTL_ATOM_TABLE *v3; // rdi
  NTSTATUS v5; // ebx
  ULONG v6; // eax
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v3 = UserAtomTableHandle;
  LOWORD(v8) = 0;
  v5 = RtlAddAtomToAtomTable(UserAtomTableHandle, a2, (PRTL_ATOM)&v8);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741773 )
  {
    LkdForAtomAdditionFailure(v5);
    v6 = RtlNtStatusToDosError(v5);
    UserSetLastError(v6);
  }
  result = (unsigned __int16)v8;
  if ( (_WORD)v8 )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(v3, v8);
      return (unsigned __int16)v8;
    }
  }
  return result;
}
