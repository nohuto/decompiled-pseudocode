/*
 * XREFs of sub_180075070 @ 0x180075070
 * Callers:
 *     sub_18012DA36 @ 0x18012DA36 (sub_18012DA36.c)
 *     sub_18012DC85 @ 0x18012DC85 (sub_18012DC85.c)
 *     sub_180130007 @ 0x180130007 (sub_180130007.c)
 *     sub_1801300DB @ 0x1801300DB (sub_1801300DB.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180075070(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 8) )
  {
    _o_terminate(a1, a2);
    __debugbreak();
  }
}
