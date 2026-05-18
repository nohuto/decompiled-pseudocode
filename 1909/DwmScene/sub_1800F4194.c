/*
 * XREFs of sub_1800F4194 @ 0x1800F4194
 * Callers:
 *     sub_1800F5C84 @ 0x1800F5C84 (sub_1800F5C84.c)
 * Callees:
 *     sub_1800F5A8C @ 0x1800F5A8C (sub_1800F5A8C.c)
 */

__int64 __fastcall sub_1800F4194(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_1800F5A8C(a1, a2, 6LL);
  if ( *(_QWORD *)result != *(_QWORD *)a3 || *(_QWORD *)(result + 8) != *(_QWORD *)(a3 + 8) )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
