/*
 * XREFs of sub_180080D64 @ 0x180080D64
 * Callers:
 *     sub_18002B3B0 @ 0x18002B3B0 (sub_18002B3B0.c)
 *     sub_18002C138 @ 0x18002C138 (sub_18002C138.c)
 *     sub_1800808C0 @ 0x1800808C0 (sub_1800808C0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180080D64(unsigned __int16 a1)
{
  __int64 v1; // rdx
  bool result; // al

  result = (unsigned __int16)(a1 - 45) <= 0x2Du && (v1 = 0x3FFFFFF01FFBLL, _bittest64(&v1, (unsigned __int16)(a1 - 45)))
        || (unsigned __int16)(a1 - 97) <= 0x19u
        || a1 >= 0x80u;
  return result;
}
