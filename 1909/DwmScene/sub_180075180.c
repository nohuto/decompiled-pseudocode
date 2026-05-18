/*
 * XREFs of sub_180075180 @ 0x180075180
 * Callers:
 *     sub_18012DB46 @ 0x18012DB46 (sub_18012DB46.c)
 *     sub_18012DD95 @ 0x18012DD95 (sub_18012DD95.c)
 *     sub_180130117 @ 0x180130117 (sub_180130117.c)
 *     sub_1801301EB @ 0x1801301EB (sub_1801301EB.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180075180(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 8) )
  {
    _o_terminate(a1, a2);
    __debugbreak();
  }
}
