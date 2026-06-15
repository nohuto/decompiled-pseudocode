/*
 * XREFs of ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004644
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140004670 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000B36C (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F2B0 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140010F90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?StopStream@CSubmixImpl@@UEAAJ_K@Z @ 0x1400116F0 (-StopStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140011790 (-StartStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140011850 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400118F0 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x140012550 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x140012824 (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012A60 (-OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140017C10 (-DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x14001A590 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14003C344 (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x14003D274 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14003E618 (-DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@P.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14003E704 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 *     ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14003E928 (-DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVC.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rcx

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}
