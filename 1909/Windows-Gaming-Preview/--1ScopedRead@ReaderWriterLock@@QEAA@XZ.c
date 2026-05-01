/*
 * XREFs of ??1ScopedRead@ReaderWriterLock@@QEAA@XZ @ 0x18003BDA0
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKgl_::_1_::dtor$3 @ 0x180045507 (_Windows--Gaming--Preview--GamesEnumeration--KglDefaults--LoadKgl_--_1_--dtor$3.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::KglDefaults::CheckKGLForGameFromGameConfig_::_1_::dtor$0 @ 0x180045519 (_Windows--Gaming--Preview--GamesEnumeration--KglDefaults--CheckKGLForGameFromGameCo_ea_180045519.c)
 * Callees:
 *     <none>
 */

void __fastcall ReaderWriterLock::ScopedRead::~ScopedRead(PSRWLOCK *this)
{
  ReleaseSRWLockShared(*this);
}
