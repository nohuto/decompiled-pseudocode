/*
 * XREFs of sub_1800F424C @ 0x1800F424C
 * Callers:
 *     sub_1800F638C @ 0x1800F638C (sub_1800F638C.c)
 * Callees:
 *     sub_1800F5A8C @ 0x1800F5A8C (sub_1800F5A8C.c)
 */

__int64 __fastcall sub_1800F424C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_1800F5A8C(a1, a2, 5LL);
  if ( *(_QWORD *)result != *(_QWORD *)a3 || *(_QWORD *)(result + 8) != *(_QWORD *)(a3 + 8) )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
