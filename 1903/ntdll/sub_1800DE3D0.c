/*
 * XREFs of sub_1800DE3D0 @ 0x1800DE3D0
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009BA20 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 sub_1800DE3D0()
{
  unsigned int v0; // edi
  unsigned int v1; // ebx
  unsigned int v2; // ebp
  __int64 v3; // rsi
  unsigned int v4; // ecx
  unsigned int v5; // edx
  _RTL_SRWLOCK *v6; // rcx
  __int64 result; // rax

  v0 = qword_180166178;
  v1 = 1;
  while ( 1 )
  {
    if ( v1 <= v0 )
    {
      v2 = v1 + 16;
      v3 = v0 - v1 + 1;
      v1 = v0 + 1;
      do
      {
        _BitScanReverse(&v4, v2);
        v5 = v2 ^ (1 << v4);
        v6 = (_RTL_SRWLOCK *)*((_QWORD *)&stru_180166120 + v4 - 3);
        if ( v6 )
          v6 += 2 * v5 + 1;
        RtlAcquireSRWLockExclusive(v6);
        ++v2;
        --v3;
      }
      while ( v3 );
    }
    RtlAcquireSRWLockExclusive(&stru_180166120);
    result = qword_180166178;
    if ( (unsigned int)qword_180166178 <= v0 )
      break;
    v0 = qword_180166178;
    RtlReleaseSRWLockExclusive(&stru_180166120);
  }
  return result;
}
