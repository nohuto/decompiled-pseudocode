/*
 * XREFs of ??1CSpatialAudioTechnologies@@QEAA@XZ @ 0x1800634D0
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ListOfSpatialTech__ @ 0x180073BC0 (_dynamic_atexit_destructor_for__g_ListOfSpatialTech__.c)
 * Callees:
 *     <none>
 */

void __fastcall CSpatialAudioTechnologies::~CSpatialAudioTechnologies(CSpatialAudioTechnologies *this)
{
  DeleteCriticalSection(&stru_1801B94C8);
}
