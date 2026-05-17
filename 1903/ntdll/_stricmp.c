/*
 * XREFs of _stricmp @ 0x18008DB50
 * Callers:
 *     sub_1800CF1D4 @ 0x1800CF1D4 (sub_1800CF1D4.c)
 *     sub_1800D9E2C @ 0x1800D9E2C (sub_1800D9E2C.c)
 *     sub_1800DF53C @ 0x1800DF53C (sub_1800DF53C.c)
 * Callees:
 *     sub_18008DB00 @ 0x18008DB00 (sub_18008DB00.c)
 */

int __cdecl stricmp(const char *String1, const char *String2)
{
  return sub_18008DB00((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
