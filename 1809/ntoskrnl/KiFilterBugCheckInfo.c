/*
 * XREFs of KiFilterBugCheckInfo @ 0x14019F91C
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall KiFilterBugCheckInfo(_DWORD *a1, __int64 a2)
{
  __int128 *result; // rax
  __int64 v3; // rax

  result = (__int128 *)KeGetCurrentPrcb();
  if ( result == (__int128 *)qword_140406668 )
  {
    KiBugCheckOriginalData = *(_OWORD *)a2;
    xmmword_140406870 = *(_OWORD *)(a2 + 16);
    qword_140406880 = *(_QWORD *)(a2 + 32);
    *a1 = 265;
    *(_QWORD *)a2 = 265LL;
    v3 = qword_140402EB0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)(a2 + 24) = qword_140406670;
    *(_QWORD *)(a2 + 32) = qword_140406678;
    result = &KiBugCheckOriginalData;
    qword_140406648 = (__int64)&KiBugCheckOriginalData;
    dword_140406658 = 40;
    KiHypervisorInitiatedCrashDump = 1;
  }
  return result;
}
