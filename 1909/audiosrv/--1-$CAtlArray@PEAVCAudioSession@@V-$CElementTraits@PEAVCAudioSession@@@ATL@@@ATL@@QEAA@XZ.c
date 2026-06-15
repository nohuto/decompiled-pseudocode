/*
 * XREFs of ??1?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x180046AD8
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800468C0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$6 @ 0x180073E33 (_CAudioSessionManager--Disconnect_--_1_--dtor$6.c)
 *     ??1CAudioSessionManager@@EEAA@XZ @ 0x1800D5708 (--1CAudioSessionManager@@EEAA@XZ.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$7 @ 0x1800D5A6D (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::~CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    free(v1);
}
