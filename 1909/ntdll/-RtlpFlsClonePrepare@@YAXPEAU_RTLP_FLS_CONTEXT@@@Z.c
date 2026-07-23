/*
 * XREFs of ?RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z @ 0x1800DE490
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009C0C0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6830 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpFlsClonePrepare(struct _RTLP_FLS_CONTEXT *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  unsigned int v3; // ebp
  __int64 v4; // rsi
  unsigned int v5; // ecx
  unsigned int v6; // edx
  _RTL_SRWLOCK *v7; // rcx

  v1 = qword_180166188;
  v2 = 1;
  while ( 1 )
  {
    if ( v2 <= v1 )
    {
      v3 = v2 + 16;
      v4 = v1 - v2 + 1;
      v2 = v1 + 1;
      do
      {
        _BitScanReverse(&v5, v3);
        v6 = v3 ^ (1 << v5);
        v7 = (_RTL_SRWLOCK *)*((_QWORD *)&RtlpFlsContext + v5 - 3);
        if ( v7 )
          v7 += 2 * v6 + 1;
        RtlAcquireSRWLockExclusive(v7);
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    if ( (unsigned int)qword_180166188 <= v1 )
      break;
    v1 = qword_180166188;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  }
}
