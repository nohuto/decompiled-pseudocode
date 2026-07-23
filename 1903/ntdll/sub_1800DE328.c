/*
 * XREFs of sub_1800DE328 @ 0x1800DE328
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009B8E0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009BA20 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall sub_1800DE328(__int64 a1, int a2)
{
  __int64 Ptr; // rax
  __int64 v3; // rbx
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned int v7; // edx
  _RTL_SRWLOCK *v8; // rcx

  Ptr = (__int64)stru_180166120.Ptr;
  v3 = (unsigned int)qword_180166178;
  if ( a2 )
    Ptr = 1LL;
  stru_180166120.Ptr = (PVOID)Ptr;
  RtlReleaseSRWLockExclusive(&stru_180166120);
  if ( (_DWORD)v3 )
  {
    v5 = v3 + 16;
    do
    {
      _BitScanReverse(&v6, v5);
      v7 = v5 ^ (1 << v6);
      v8 = (_RTL_SRWLOCK *)*((_QWORD *)&stru_180166120 + v6 - 3);
      if ( v8 )
        v8 += 2 * v7 + 1;
      if ( a2 )
        v8->Ptr = (PVOID)1;
      RtlReleaseSRWLockExclusive(v8);
      --v5;
      --v3;
    }
    while ( v3 );
  }
}
