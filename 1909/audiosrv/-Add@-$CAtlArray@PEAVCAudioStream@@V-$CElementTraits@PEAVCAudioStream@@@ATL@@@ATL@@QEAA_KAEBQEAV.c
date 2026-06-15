/*
 * XREFs of ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800CCBF4
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x18004A610 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CD2B0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800CD65C (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800CD900 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18002BA78 (-GrowBuffer@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

unsigned __int64 __fastcall ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 result; // rax

  v2 = a1[1];
  if ( v2 >= a1[2]
    && !ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::GrowBuffer((__int64)a1, v2 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  result = v2;
  *(_QWORD *)(*a1 + 8 * v2) = *a2;
  ++a1[1];
  return result;
}
