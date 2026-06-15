/*
 * XREFs of ??0CSpatialAudioTechnologies@@QEAA@XZ @ 0x1800506F4
 * Callers:
 *     _dynamic_initializer_for__g_ListOfSpatialTech__ @ 0x180001370 (_dynamic_initializer_for__g_ListOfSpatialTech__.c)
 * Callees:
 *     memset_0 @ 0x180065BEE (memset_0.c)
 */

CSpatialAudioTechnologies *__fastcall CSpatialAudioTechnologies::CSpatialAudioTechnologies(
        CSpatialAudioTechnologies *this)
{
  g_ListOfSpatialTech[0] = 0;
  InitializeCriticalSectionEx(&stru_1801B84C8, 0, 0);
  dword_1801B84F0 = 0;
  memset_0(&unk_1801B8488, 0, 0x40uLL);
  return (CSpatialAudioTechnologies *)g_ListOfSpatialTech;
}
