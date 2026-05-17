/*
 * XREFs of sub_18009BC24 @ 0x18009BC24
 * Callers:
 *     RtlFlsSetValue @ 0x1800548B0 (RtlFlsSetValue.c)
 *     sub_180074610 @ 0x180074610 (sub_180074610.c)
 * Callees:
 *     sub_18009BB3C @ 0x18009BB3C (sub_18009BB3C.c)
 */

__int64 __fastcall sub_18009BC24(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ecx
  int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // rax

  v5 = 0;
  _BitScanReverse(&v6, a2);
  v7 = 1 << v6;
  v8 = v6 - 4;
  v9 = a2 ^ v7;
  v10 = *(_QWORD **)(a1 + 8 * v8);
  if ( v10 || (v10 = sub_18009BB3C(a1, v8)) != 0LL )
    v10[v9 + 1] = a3;
  else
    return (unsigned int)-1073741801;
  return v5;
}
