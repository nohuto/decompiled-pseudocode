/*
 * XREFs of RtlFlsSetValue @ 0x180054950
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     ?SetValue@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z @ 0x18009C2C4 (-SetValue@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z.c)
 */

__int64 __fastcall RtlFlsSetValue(int a1, __int64 a2)
{
  struct _TEB *v2; // rdi
  _QWORD *FlsData; // rbx
  unsigned int v5; // esi
  _QWORD *v7; // rax

  v2 = NtCurrentTeb();
  if ( (unsigned int)(a1 - 1) > 0xFEE )
    return 3221225485LL;
  FlsData = v2->FlsData;
  v5 = a1 + 16;
  if ( !FlsData )
  {
    FlsData = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 80LL);
    if ( !FlsData )
      return 3221225495LL;
    *FlsData = 0LL;
    FlsData[1] = 0LL;
    FlsData[2] = 0LL;
    FlsData[3] = 0LL;
    FlsData[4] = 0LL;
    FlsData[5] = 0LL;
    FlsData[6] = 0LL;
    FlsData[7] = 0LL;
    FlsData[8] = 0LL;
    FlsData[9] = 0LL;
    v2->FlsData = FlsData;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
    v7 = (_QWORD *)qword_180166180;
    if ( *(__int64 **)qword_180166180 != &qword_180166178 )
      __fastfail(3u);
    *FlsData = &qword_180166178;
    FlsData[1] = v7;
    *v7 = FlsData;
    qword_180166180 = (__int64)FlsData;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  }
  return RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::SetValue(FlsData + 2, v5, a2);
}
