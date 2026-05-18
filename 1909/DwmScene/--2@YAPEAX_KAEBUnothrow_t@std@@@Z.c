/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801261F8
 * Callers:
 *     sub_18000D570 @ 0x18000D570 (sub_18000D570.c)
 *     sub_1800139C8 @ 0x1800139C8 (sub_1800139C8.c)
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 *     sub_18001635C @ 0x18001635C (sub_18001635C.c)
 *     sub_180016448 @ 0x180016448 (sub_180016448.c)
 *     sub_180016534 @ 0x180016534 (sub_180016534.c)
 *     sub_180016660 @ 0x180016660 (sub_180016660.c)
 *     sub_18001674C @ 0x18001674C (sub_18001674C.c)
 *     sub_180016838 @ 0x180016838 (sub_180016838.c)
 *     sub_18001BE34 @ 0x18001BE34 (sub_18001BE34.c)
 *     sub_180080820 @ 0x180080820 (sub_180080820.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
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
