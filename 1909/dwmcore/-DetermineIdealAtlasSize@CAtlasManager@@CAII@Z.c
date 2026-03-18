/*
 * XREFs of ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x18001A1AC
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180018C7C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x180164564 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?RoundToPow2@@YAII@Z @ 0x180158F0C (-RoundToPow2@@YAII@Z.c)
 */

unsigned int __fastcall CAtlasManager::DetermineIdealAtlasSize(int a1)
{
  unsigned int v1; // ecx
  unsigned int result; // eax

  v1 = a1 + 1;
  result = 8;
  if ( v1 >= 8 )
  {
    result = RoundToPow2(v1 + 1);
    if ( result >= 0x800 )
      return 2048;
  }
  return result;
}
