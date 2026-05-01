/*
 * XREFs of ??1ScopedWrite@ReaderWriterLock@@QEAA@XZ @ 0x18003BE20
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKgl_::_1_::dtor$2 @ 0x18004532D (_Windows--Gaming--Preview--GamesEnumeration--KglDefaults--LoadKgl_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall ReaderWriterLock::ScopedWrite::~ScopedWrite(PSRWLOCK *this)
{
  ReleaseSRWLockExclusive(*this);
}
