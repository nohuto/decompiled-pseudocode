/*
 * XREFs of sub_1800DE328 @ 0x1800DE328
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009B8E0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009BA20 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_1800DE328(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  signed __int64 result; // rax
  unsigned int v6; // edi
  unsigned int v7; // ecx
  unsigned int v8; // edx
  volatile signed __int64 *v9; // rcx

  v2 = qword_180166120[0];
  v3 = (unsigned int)qword_180166178;
  if ( a2 )
    v2 = 1LL;
  qword_180166120[0] = v2;
  result = RtlReleaseSRWLockExclusive(qword_180166120);
  if ( (_DWORD)v3 )
  {
    v6 = v3 + 16;
    do
    {
      _BitScanReverse(&v7, v6);
      v8 = v6 ^ (1 << v7);
      v9 = (volatile signed __int64 *)qword_180166120[v7 - 3];
      if ( v9 )
        v9 += 2 * v8 + 1;
      if ( a2 )
        *v9 = 1LL;
      result = RtlReleaseSRWLockExclusive(v9);
      --v6;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
