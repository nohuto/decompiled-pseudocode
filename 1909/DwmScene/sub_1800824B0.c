/*
 * XREFs of sub_1800824B0 @ 0x1800824B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 */

__int64 __fastcall sub_1800824B0(__int64 a1, __int64 a2)
{
  sub_180087450(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 208LL))(a2, a1);
}
