/*
 * XREFs of sub_180002F68 @ 0x180002F68
 * Callers:
 *     sub_180003230 @ 0x180003230 (sub_180003230.c)
 * Callees:
 *     sub_180002A40 @ 0x180002A40 (sub_180002A40.c)
 */

__int64 __fastcall sub_180002F68(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  *(_OWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = off_18003E090;
  *(_QWORD *)(a1 + 168) = 0LL;
  v3 = a1 + 24;
  *(_QWORD *)(v3 + 152) = 0LL;
  sub_180002A40(v3, a2);
  *(_QWORD *)(a1 + 184) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
