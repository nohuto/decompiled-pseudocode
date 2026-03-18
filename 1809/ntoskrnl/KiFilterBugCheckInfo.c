/*
 * XREFs of KiFilterBugCheckInfo @ 0x14019F7BC
 * Callers:
 *     KeBugCheck2 @ 0x140291090 (KeBugCheck2.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall KiFilterBugCheckInfo(_DWORD *a1, __int64 a2)
{
  __int128 *result; // rax
  __int64 v3; // rax

  result = (__int128 *)KeGetCurrentPrcb();
  if ( result == (__int128 *)qword_140405668 )
  {
    KiBugCheckOriginalData = *(_OWORD *)a2;
    xmmword_140405870 = *(_OWORD *)(a2 + 16);
    qword_140405880 = *(_QWORD *)(a2 + 32);
    *a1 = 265;
    *(_QWORD *)a2 = 265LL;
    v3 = qword_140401EB0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)(a2 + 24) = qword_140405670;
    *(_QWORD *)(a2 + 32) = qword_140405678;
    result = &KiBugCheckOriginalData;
    qword_140405648 = (__int64)&KiBugCheckOriginalData;
    dword_140405658 = 40;
    KiHypervisorInitiatedCrashDump = 1;
  }
  return result;
}
