/*
 * XREFs of PsspDumpObject_Event @ 0x1801121B0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryEvent @ 0x18009D950 (NtQueryEvent.c)
 */

__int64 __fastcall PsspDumpObject_Event(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 >= 8 )
    return NtQueryEvent();
  else
    return 3221225507LL;
}
