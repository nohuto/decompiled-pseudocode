/*
 * XREFs of ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040F8
 * Callers:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140003E3C (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140004030 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140004980 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140004F50 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14000A0E0 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14000BC48 (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x14000EC10 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14000F4FC (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z @ 0x14000F8BC (-FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140010120 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400111C0 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14003555C (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140035BD8 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140038770 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140038C80 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x1400390EC (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14003AA9C (-DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@P.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14003AB88 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 *     ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14003ADAC (-DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVC.c)
 *     ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14003E1E0 (-DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A524 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
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
