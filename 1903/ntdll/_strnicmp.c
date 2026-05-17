/*
 * XREFs of _strnicmp @ 0x18008DC70
 * Callers:
 *     sub_180021B60 @ 0x180021B60 (sub_180021B60.c)
 *     sub_18010FEDC @ 0x18010FEDC (sub_18010FEDC.c)
 * Callees:
 *     sub_18008DC08 @ 0x18008DC08 (sub_18008DC08.c)
 */

int __cdecl strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  return sub_18008DC08((unsigned __int8 *)String1, (unsigned __int8 *)String2, MaxCount);
}
