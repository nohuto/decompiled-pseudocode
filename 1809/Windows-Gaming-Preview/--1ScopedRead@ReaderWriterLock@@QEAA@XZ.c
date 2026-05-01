/*
 * XREFs of ??1ScopedRead@ReaderWriterLock@@QEAA@XZ @ 0x18003BAC4
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKgl_::_1_::dtor$3 @ 0x180044F77 (_Windows--Gaming--Preview--GamesEnumeration--KglDefaults--LoadKgl_--_1_--dtor$3.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::KglDefaults::CheckKGLForGameFromGameConfig_::_1_::dtor$0 @ 0x180044F89 (_Windows--Gaming--Preview--GamesEnumeration--KglDefaults--CheckKGLForGameFromGameCo_ea_180044F89.c)
 * Callees:
 *     <none>
 */

void __fastcall ReaderWriterLock::ScopedRead::~ScopedRead(PSRWLOCK *this)
{
  ReleaseSRWLockShared(*this);
}
