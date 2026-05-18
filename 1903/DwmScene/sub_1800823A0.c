/*
 * XREFs of sub_1800823A0 @ 0x1800823A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 */

__int64 __fastcall sub_1800823A0(__int64 a1, __int64 a2)
{
  sub_180087340(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 208LL))(a2, a1);
}
