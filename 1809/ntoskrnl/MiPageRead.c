/*
 * XREFs of MiPageRead @ 0x1400DE70C
 * Callers:
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 *     MiPfExecuteReadList @ 0x14066279C (MiPfExecuteReadList.c)
 * Callees:
 *     IoPageReadEx @ 0x1400DE740 (IoPageReadEx.c)
 */

__int64 __fastcall MiPageRead(int a1, int a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  return IoPageReadEx(a1, a2, a3, a4, a5, a6, a7);
}
