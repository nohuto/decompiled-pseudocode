/*
 * XREFs of sub_1800557EC @ 0x1800557EC
 * Callers:
 *     sub_18005575C @ 0x18005575C (sub_18005575C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800557EC(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
