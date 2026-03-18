/*
 * XREFs of FopFreeMappingTable @ 0x140951234
 * Callers:
 *     FopFreeFontData @ 0x1409511C0 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x1409FAAAC (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016ECCC (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
