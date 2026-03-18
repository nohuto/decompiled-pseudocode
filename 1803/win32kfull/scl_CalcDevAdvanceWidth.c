/*
 * XREFs of scl_CalcDevAdvanceWidth @ 0x1C02B404C
 * Callers:
 *     fs__Contour @ 0x1C02B207C (fs__Contour.c)
 *     scl_CalcLSBsAndAdvanceWidths @ 0x1C02B4150 (scl_CalcLSBsAndAdvanceWidths.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_CalcDevAdvanceWidth(__int64 a1, _DWORD *a2)
{
  unsigned __int16 v2; // r9
  unsigned __int16 v3; // ax
  __int64 v4; // r10
  __int64 result; // rax

  v2 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1));
  v3 = v2 + 2;
  ++v2;
  v4 = v3;
  result = *(_QWORD *)(a1 + 8);
  *a2 = *(_DWORD *)(*(_QWORD *)a1 + 4 * v4) - *(_DWORD *)(*(_QWORD *)a1 + 4LL * v2);
  a2[1] = *(_DWORD *)(result + 4 * v4) - *(_DWORD *)(result + 4LL * v2);
  return result;
}
