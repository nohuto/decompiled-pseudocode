/*
 * XREFs of ObCreateObject @ 0x1405BD820
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     MiSectionInitialization @ 0x1409BA060 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x1409C3FAC (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x1409CBA80 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObCreateObjectEx @ 0x1405E05E0 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(int a1, int a2, int a3, int a4)
{
  return ObCreateObjectEx(a1, a2, a3, a4);
}
