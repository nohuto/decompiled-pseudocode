/*
 * XREFs of ?RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x1800DE3E8
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009BF80 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009C0C0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6830 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpFlsCloneComplete(struct _RTLP_FLS_CONTEXT *a1, int a2)
{
  $2F38BEDF952D5DA5F266621B11247D04 v2; // rax
  __int64 v3; // rbx
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned int v7; // edx
  _RTL_SRWLOCK *v8; // rcx

  v2 = RtlpFlsContext.0;
  v3 = (unsigned int)qword_180166188;
  if ( a2 )
    v2 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
  RtlpFlsContext.0 = v2;
  RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  if ( (_DWORD)v3 )
  {
    v5 = v3 + 16;
    do
    {
      _BitScanReverse(&v6, v5);
      v7 = v5 ^ (1 << v6);
      v8 = (_RTL_SRWLOCK *)*((_QWORD *)&RtlpFlsContext + v6 - 3);
      if ( v8 )
        v8 += 2 * v7 + 1;
      if ( a2 )
        v8->Value = 1LL;
      RtlReleaseSRWLockExclusive(v8);
      --v5;
      --v3;
    }
    while ( v3 );
  }
}
