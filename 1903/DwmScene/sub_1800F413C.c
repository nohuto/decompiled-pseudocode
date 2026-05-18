/*
 * XREFs of sub_1800F413C @ 0x1800F413C
 * Callers:
 *     sub_1800F627C @ 0x1800F627C (sub_1800F627C.c)
 * Callees:
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 */

__int64 __fastcall sub_1800F413C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_1800F597C(a1, a2, 5LL);
  if ( *(_QWORD *)result != *(_QWORD *)a3 || *(_QWORD *)(result + 8) != *(_QWORD *)(a3 + 8) )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
