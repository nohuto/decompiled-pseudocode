/*
 * XREFs of ??1?$optional@UExeData@@@std@@QEAA@XZ @ 0x1800BA77C
 * Callers:
 *     _Win32AppStateManager::UpdateAppViewWorker_::_1_::dtor$2 @ 0x1800BC767 (_Win32AppStateManager--UpdateAppViewWorker_--_1_--dtor$2.c)
 * Callees:
 *     ??1ExeData@@QEAA@XZ @ 0x1800BA798 (--1ExeData@@QEAA@XZ.c)
 */

void __fastcall std::optional<ExeData>::~optional<ExeData>(ExeData *a1)
{
  if ( *((_BYTE *)a1 + 72) )
    ExeData::~ExeData(a1);
}
