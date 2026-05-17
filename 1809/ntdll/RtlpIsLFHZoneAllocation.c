/*
 * XREFs of RtlpIsLFHZoneAllocation @ 0x18010A4A4
 * Callers:
 *     RtlpWalkLFHBlock @ 0x18010A858 (RtlpWalkLFHBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpIsLFHZoneAllocation(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *i; // r8
  char v7; // bl

  RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  for ( i = *(_QWORD **)(a1 + 8); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a1 + 8) )
    {
      v7 = 0;
      goto LABEL_7;
    }
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)(i + 126) )
      break;
  }
  v7 = 1;
LABEL_7:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v7;
}
