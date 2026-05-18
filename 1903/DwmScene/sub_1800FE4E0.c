/*
 * XREFs of sub_1800FE4E0 @ 0x1800FE4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FE4E0(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // xmm1_4

  result = *(unsigned int *)(a2 + 8);
  v3 = HIDWORD(*(_QWORD *)a2);
  a1[450] = *(_QWORD *)a2;
  a1[452] = result;
  a1[451] = v3;
  return result;
}
