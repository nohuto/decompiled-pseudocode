/*
 * XREFs of MmFreePagesFromMdlEx @ 0x14015CBD0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreePagesFromMdl @ 0x1400F0784 (MiFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

ULONG_PTR *__fastcall MmFreePagesFromMdlEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( (BugCheckParameter3 & 0xFFFFFFFE) != 0 || (*(_DWORD *)(BugCheckParameter2 + 40) & 0xFFF) != 0 )
    KeBugCheckEx(
      0x1Au,
      0x1302uLL,
      BugCheckParameter2,
      (unsigned int)BugCheckParameter3,
      *(unsigned int *)(BugCheckParameter2 + 40));
  return MiFreePagesFromMdl(BugCheckParameter2, BugCheckParameter3);
}
