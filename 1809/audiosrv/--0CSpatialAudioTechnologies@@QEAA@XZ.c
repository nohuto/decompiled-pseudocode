/*
 * XREFs of ??0CSpatialAudioTechnologies@@QEAA@XZ @ 0x180049094
 * Callers:
 *     _dynamic_initializer_for__g_ListOfSpatialTech__ @ 0x180001300 (_dynamic_initializer_for__g_ListOfSpatialTech__.c)
 * Callees:
 *     memset_0 @ 0x18006158E (memset_0.c)
 */

CSpatialAudioTechnologies *__fastcall CSpatialAudioTechnologies::CSpatialAudioTechnologies(
        CSpatialAudioTechnologies *this)
{
  g_ListOfSpatialTech = 0;
  InitializeCriticalSectionEx(&stru_1801B4418, 0, 0);
  dword_1801B4440 = 0;
  memset_0(&unk_1801B43D8, 0, 0x40uLL);
  return (CSpatialAudioTechnologies *)&g_ListOfSpatialTech;
}
