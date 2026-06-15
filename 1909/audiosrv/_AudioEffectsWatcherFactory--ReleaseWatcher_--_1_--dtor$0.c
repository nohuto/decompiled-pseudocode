/*
 * XREFs of _AudioEffectsWatcherFactory::ReleaseWatcher_::_1_::dtor$0 @ 0x1800CC10F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioEffectsWatcherFactory::ReleaseWatcher_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 40));
}
