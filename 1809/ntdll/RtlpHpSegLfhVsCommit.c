/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x1800150B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x180015130 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegDescriptorValidate @ 0x1800154AC (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // edi
  __int64 v6; // rax

  v4 = a2;
  v6 = RtlpHpSegDescriptorValidate(a1, a2);
  return RtlpHpSegPageRangeCommit(
           a1,
           v6,
           (v4
          - ((unsigned int)v6 & *(_DWORD *)a1)
          - (unsigned int)((v6 - (v6 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8))) >> 12,
           a3 >> 12,
           0,
           0LL);
}
