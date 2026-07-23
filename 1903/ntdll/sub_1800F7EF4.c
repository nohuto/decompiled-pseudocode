/*
 * XREFs of sub_1800F7EF4 @ 0x1800F7EF4
 * Callers:
 *     sub_1800F8260 @ 0x1800F8260 (sub_1800F8260.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_1800F7FE8 @ 0x1800F7FE8 (sub_1800F7FE8.c)
 */

__int64 __fastcall sub_1800F7EF4(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  _QWORD *i; // rcx
  __int64 v6; // rbx

  v2 = sub_1800F7FE8();
  v3 = v2 & 0xF;
  if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_1801669E8 + 8 * v3), 0LL) )
    return 0LL;
  for ( i = *(_QWORD **)(qword_180166870 + 16LL * v2); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(qword_180166870 + 16LL * v2) )
    {
      v6 = 0LL;
      goto LABEL_8;
    }
    if ( i[3] == a1 )
      break;
  }
  v6 = i[4];
  i[3] = 0LL;
LABEL_8:
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801669E8 + 8 * v3));
  return v6;
}
