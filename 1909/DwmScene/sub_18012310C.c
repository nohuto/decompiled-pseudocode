/*
 * XREFs of sub_18012310C @ 0x18012310C
 * Callers:
 *     sub_18011ECD4 @ 0x18011ECD4 (sub_18011ECD4.c)
 *     sub_18012212C @ 0x18012212C (sub_18012212C.c)
 * Callees:
 *     sub_18008D608 @ 0x18008D608 (sub_18008D608.c)
 *     sub_180121DB4 @ 0x180121DB4 (sub_180121DB4.c)
 *     sub_18012340C @ 0x18012340C (sub_18012340C.c)
 */

__int64 __fastcall sub_18012310C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  sub_18012340C(a1 + 8);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v6 = *(_QWORD *)(a1 + 8);
  try
  {
    sub_18008D608((unsigned __int64 **)(a1 + 24), (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 3, &v6);
    result = sub_180121DB4((_QWORD *)a1, **(_QWORD ***)(a2 + 8), *(_QWORD **)(a2 + 8));
  }
  catch ( ... )
  {
    sub_180123340(a1);
    throw;
  }
  return result;
}
