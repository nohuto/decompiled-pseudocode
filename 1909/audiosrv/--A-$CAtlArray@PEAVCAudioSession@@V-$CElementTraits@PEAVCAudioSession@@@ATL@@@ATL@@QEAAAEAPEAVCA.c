/*
 * XREFs of ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C8BA0
 * Callers:
 *     ?SetWindowId@CAudioSession@@UEAAJI@Z @ 0x1800032B0 (-SetWindowId@CAudioSession@@UEAAJI@Z.c)
 *     ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z @ 0x180024720 (-NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180028210 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180028BE0 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18002EDD0 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x1800306CC (--1CAudioSession@@MEAA@XZ.c)
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x18003ECE0 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800468C0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x18004A610 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x1800C8D30 (-AddInterface@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV-$CCo.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800C8FE0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCL.c)
 *     ?RemoveInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x1800C9BD4 (-RemoveInterface@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV-$.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CD2B0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800CD65C (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800CD900 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800CDE70 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x1800CE550 (-GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800CE680 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x1800CF010 (-IsExclusiveModeSession@CAudioSession@@QEAAHXZ.c)
 *     ??1CAudioSessionManager@@EEAA@XZ @ 0x1800D5708 (--1CAudioSessionManager@@EEAA@XZ.c)
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800D5D98 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 *     ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800D7988 (-RemoveInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNo.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
        _QWORD *a1,
        unsigned __int64 a2)
{
  if ( a2 >= a1[1] )
    ATL::AtlThrowImpl(-2147024809);
  return *a1 + 8 * a2;
}
