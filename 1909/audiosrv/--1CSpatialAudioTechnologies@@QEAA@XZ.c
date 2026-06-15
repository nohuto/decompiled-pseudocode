/*
 * XREFs of ??1CSpatialAudioTechnologies@@QEAA@XZ @ 0x1800644C0
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ListOfSpatialTech__ @ 0x180074C00 (_dynamic_atexit_destructor_for__g_ListOfSpatialTech__.c)
 * Callees:
 *     <none>
 */

void __fastcall CSpatialAudioTechnologies::~CSpatialAudioTechnologies(CSpatialAudioTechnologies *this)
{
  DeleteCriticalSection(&stru_1801B84C8);
}
