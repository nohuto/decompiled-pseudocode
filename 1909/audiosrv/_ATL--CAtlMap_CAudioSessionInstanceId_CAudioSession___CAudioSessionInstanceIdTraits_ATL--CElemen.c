/*
 * XREFs of _ATL::CAtlMap_CAudioSessionInstanceId_CAudioSession___CAudioSessionInstanceIdTraits_ATL::CElementTraits_CAudioSession_____::SetAt_::_1_::catch$1 @ 0x180072060
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18006C94B (_CxxThrowException_0.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800D7928 (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 */

void __fastcall __noreturn ATL::CAtlMap_CAudioSessionInstanceId_CAudioSession___CAudioSessionInstanceIdTraits_ATL::CElementTraits_CAudioSession_____::SetAt_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
    *(_QWORD *)(a2 + 96),
    *(_QWORD *)(a2 + 120));
  throw;
}
