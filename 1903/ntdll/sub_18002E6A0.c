/*
 * XREFs of sub_18002E6A0 @ 0x18002E6A0
 * Callers:
 *     sub_18002DEC8 @ 0x18002DEC8 (sub_18002DEC8.c)
 *     sub_18002E4A8 @ 0x18002E4A8 (sub_18002E4A8.c)
 *     sub_180070758 @ 0x180070758 (sub_180070758.c)
 * Callees:
 *     sub_18002284C @ 0x18002284C (sub_18002284C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_18002E6A0(PUNICODE_STRING String1, PUNICODE_STRING a2, char a3, int a4, _QWORD *a5)
{
  _UNICODE_STRING *v9; // rdx
  int v10; // ebx

  *a5 = 0LL;
  RtlAcquireSRWLockExclusive(&stru_1801660B0);
  v9 = 0LL;
  if ( (a3 & 0x20) == 0 )
    v9 = a2;
  v10 = sub_18002284C(String1, v9, a3, a5, a4);
  if ( v10 == -1073741515 && (a3 & 8) != 0 )
  {
    v10 = sub_18002284C(0LL, a2, 0, a5, a4);
    if ( v10 >= 0 )
      *(_DWORD *)(*a5 + 104LL) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&stru_1801660B0);
  return (unsigned int)v10;
}
