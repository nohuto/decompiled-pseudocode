/*
 * XREFs of sub_1800700E8 @ 0x1800700E8
 * Callers:
 *     sub_180070084 @ 0x180070084 (sub_180070084.c)
 * Callees:
 *     sub_18007013C @ 0x18007013C (sub_18007013C.c)
 */

__int64 __fastcall sub_1800700E8(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  result = sub_18007013C(a1, 192LL, &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    *v6 = a1 + 3264;
    result = 0LL;
    *((_WORD *)v5 + 86) = v2;
    *(_QWORD *)(a1 + 8 * v2 + 1192) = v5;
  }
  return result;
}
