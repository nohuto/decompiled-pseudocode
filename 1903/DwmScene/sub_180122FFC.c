/*
 * XREFs of sub_180122FFC @ 0x180122FFC
 * Callers:
 *     sub_18011EBC4 @ 0x18011EBC4 (sub_18011EBC4.c)
 *     sub_18012201C @ 0x18012201C (sub_18012201C.c)
 * Callees:
 *     sub_18008D4F8 @ 0x18008D4F8 (sub_18008D4F8.c)
 *     sub_180121CA4 @ 0x180121CA4 (sub_180121CA4.c)
 *     sub_1801232FC @ 0x1801232FC (sub_1801232FC.c)
 */

__int64 __fastcall sub_180122FFC(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  sub_1801232FC(a1 + 8);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v6 = *(_QWORD *)(a1 + 8);
  try
  {
    sub_18008D4F8((unsigned __int64 **)(a1 + 24), (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 3, &v6);
    result = sub_180121CA4((_QWORD *)a1, **(_QWORD ***)(a2 + 8), *(_QWORD **)(a2 + 8));
  }
  catch ( ... )
  {
    sub_180123230(a1);
    throw;
  }
  return result;
}
