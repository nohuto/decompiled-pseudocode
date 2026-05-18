/*
 * XREFs of sub_180066EB4 @ 0x180066EB4
 * Callers:
 *     sub_180066090 @ 0x180066090 (sub_180066090.c)
 *     sub_1800667DC @ 0x1800667DC (sub_1800667DC.c)
 *     sub_180067C48 @ 0x180067C48 (sub_180067C48.c)
 * Callees:
 *     sub_18006945C @ 0x18006945C (sub_18006945C.c)
 */

__int64 __fastcall sub_180066EB4(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = (__int64 *)(a1 + 136);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v5 = sub_18006945C(a1 + 136);
  *v2 = v5;
  *v2 = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a2 + 136) = v5;
  v6 = v2[1];
  v2[1] = *(_QWORD *)(a2 + 144);
  result = a1;
  *(_QWORD *)(a2 + 144) = v6;
  return result;
}
