/*
 * XREFs of sub_180088C38 @ 0x180088C38
 * Callers:
 *     sub_180088B70 @ 0x180088B70 (sub_180088B70.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_18010FC5C @ 0x18010FC5C (sub_18010FC5C.c)
 */

signed __int64 __fastcall sub_180088C38(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  signed __int64 result; // rax

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&qword_1801664C8);
    v2 = qword_1801660A8;
    while ( v2 )
    {
      v3 = *(_QWORD *)(v2 - 96);
      if ( v3 < *(_QWORD *)(a1 + 24) )
        goto LABEL_9;
      if ( v3 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        sub_18010FC5C(a1);
        return RtlReleaseSRWLockExclusive(&qword_1801664C8);
      }
      if ( v3 < *(_QWORD *)(a1 + 24) )
LABEL_9:
        v2 = *(_QWORD *)(v2 + 16);
      else
        v2 = *(_QWORD *)(v2 + 8);
    }
    return RtlReleaseSRWLockExclusive(&qword_1801664C8);
  }
  return result;
}
