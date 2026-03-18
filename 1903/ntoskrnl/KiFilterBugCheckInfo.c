/*
 * XREFs of KiFilterBugCheckInfo @ 0x1401AA0DC
 * Callers:
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall KiFilterBugCheckInfo(_DWORD *a1, __int64 a2)
{
  __int128 *result; // rax
  __int64 v3; // rax

  result = (__int128 *)KeGetCurrentPrcb();
  if ( result == (__int128 *)qword_14042BBA8 )
  {
    KiBugCheckOriginalData = *(_OWORD *)a2;
    xmmword_14042BD70 = *(_OWORD *)(a2 + 16);
    qword_14042BD80 = *(_QWORD *)(a2 + 32);
    *a1 = 265;
    *(_QWORD *)a2 = 265LL;
    v3 = qword_1404281B0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)(a2 + 24) = qword_14042BBB0;
    *(_QWORD *)(a2 + 32) = qword_14042BBB8;
    result = &KiBugCheckOriginalData;
    qword_14042BB88 = (__int64)&KiBugCheckOriginalData;
    dword_14042BB98 = 40;
    KiHypervisorInitiatedCrashDump = 1;
  }
  return result;
}
