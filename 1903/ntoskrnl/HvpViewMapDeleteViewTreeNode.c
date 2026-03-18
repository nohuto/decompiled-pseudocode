/*
 * XREFs of HvpViewMapDeleteViewTreeNode @ 0x1406E6FE8
 * Callers:
 *     HvpViewMapCleanup @ 0x1406E3090 (HvpViewMapCleanup.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmSiUnmapViewOfSection @ 0x1401379A0 (CmSiUnmapViewOfSection.c)
 */

void __fastcall HvpViewMapDeleteViewTreeNode(PPRIVILEGE_SET Privileges, __int64 a2)
{
  void *v2; // r8

  v2 = *(void **)&Privileges[2].Privilege[0].Attributes;
  if ( v2 )
    CmSiUnmapViewOfSection((__int64)Privileges, *(HANDLE **)(a2 + 24), v2);
  CmSiFreeMemory(Privileges);
}
