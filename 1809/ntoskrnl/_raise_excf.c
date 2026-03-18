/*
 * XREFs of _raise_excf @ 0x14019A1B4
 * Callers:
 *     _handle_errorf @ 0x140199B08 (_handle_errorf.c)
 * Callees:
 *     _raise_exc_ex @ 0x140199F24 (_raise_exc_ex.c)
 */

__int64 __fastcall raise_excf(
        unsigned int *a1,
        unsigned __int64 *a2,
        char a3,
        int a4,
        unsigned int *a5,
        unsigned int *a6)
{
  return raise_exc_ex(a1, a2, a3, a4, a5, a6, 1);
}
