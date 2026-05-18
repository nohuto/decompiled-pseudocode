/*
 * XREFs of sub_18006D9F0 @ 0x18006D9F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006CD08 @ 0x18006CD08 (sub_18006CD08.c)
 */

__int64 __fastcall sub_18006D9F0(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_18006CD08(a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
}
