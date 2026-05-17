/*
 * XREFs of sub_180107810 @ 0x180107810
 * Callers:
 *     sub_180107BC4 @ 0x180107BC4 (sub_180107BC4.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall sub_180107810(__int64 a1, unsigned __int64 a2)
{
  _QWORD *i; // r8
  char v5; // bl

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
  for ( i = *(_QWORD **)(a1 + 8); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a1 + 8) )
    {
      v5 = 0;
      goto LABEL_7;
    }
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)(i + 126) )
      break;
  }
  v5 = 1;
LABEL_7:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v5;
}
