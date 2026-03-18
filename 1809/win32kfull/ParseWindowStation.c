/*
 * XREFs of ParseWindowStation @ 0x1C00B21E0
 * Callers:
 *     <none>
 * Callees:
 *     ParseDesktop @ 0x1C00B22C0 (ParseDesktop.c)
 */

__int64 __fastcall ParseWindowStation(__int64 a1)
{
  PVOID v1; // rdi
  __int64 v3; // rcx
  _WORD *v5; // rax
  int v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+40h] [rbp-18h]

  v1 = *(PVOID *)a1;
  **(_QWORD **)(a1 + 64) = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  if ( *(_WORD *)v3 )
  {
    v5 = *(_WORD **)(v3 + 8);
    if ( *v5 == 92 )
    {
      *(_QWORD *)(v3 + 8) = v5 + 1;
      **(_WORD **)(a1 + 40) -= 2;
      *(_WORD *)(*(_QWORD *)(a1 + 40) + 2LL) -= 2;
      v3 = *(_QWORD *)(a1 + 40);
    }
    if ( wcschr(*(const wchar_t **)(v3 + 8), 0x5Cu) )
      return 3221225529LL;
    if ( *(POBJECT_TYPE **)(a1 + 8) == ExDesktopObjectType )
      return ParseDesktop(
               *(PVOID *)a1,
               *(_DWORD *)(a1 + 28),
               v6,
               *(PCUNICODE_STRING *)(a1 + 40),
               *(_QWORD *)(a1 + 48),
               v7,
               *(void ***)(a1 + 64));
  }
  else if ( *(_QWORD *)(a1 + 8) == ExWindowStationObjectType )
  {
    ObfReferenceObject(v1);
    **(_QWORD **)(a1 + 64) = v1;
    return 0LL;
  }
  return 3221225508LL;
}
