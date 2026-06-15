/*
 * XREFs of _CAudioSession::SetVolumeAllStreams_::_1_::dtor$1 @ 0x180070F1F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::SetVolumeAllStreams_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 104));
}
