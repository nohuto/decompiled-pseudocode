/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801260E8
 * Callers:
 *     sub_18000D570 @ 0x18000D570 (sub_18000D570.c)
 *     sub_180013978 @ 0x180013978 (sub_180013978.c)
 *     sub_1800161F0 @ 0x1800161F0 (sub_1800161F0.c)
 *     sub_1800162EC @ 0x1800162EC (sub_1800162EC.c)
 *     sub_1800163D8 @ 0x1800163D8 (sub_1800163D8.c)
 *     sub_1800164C4 @ 0x1800164C4 (sub_1800164C4.c)
 *     sub_1800165F0 @ 0x1800165F0 (sub_1800165F0.c)
 *     sub_1800166DC @ 0x1800166DC (sub_1800166DC.c)
 *     sub_1800167C8 @ 0x1800167C8 (sub_1800167C8.c)
 *     sub_18001BD24 @ 0x18001BD24 (sub_18001BD24.c)
 *     sub_180080710 @ 0x180080710 (sub_180080710.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

void *__fastcall operator new(unsigned __int64 a1, const struct std::nothrow_t *a2)
{
  void *result; // rax

  try
  {
    result = operator new(a1);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
