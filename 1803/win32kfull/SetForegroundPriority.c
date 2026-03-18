/*
 * XREFs of SetForegroundPriority @ 0x1C005FD30
 * Callers:
 *     ?UpdateProcessPriorityWhenComponentAdded@@YAXPEAUtagWND@@0@Z @ 0x1C0007D80 (-UpdateProcessPriorityWhenComponentAdded@@YAXPEAUtagWND@@0@Z.c)
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     ?TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C005E690 (-TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z @ 0x1C005F668 (-UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z.c)
 *     ?TransitionForegroundPriority_BoostWindowHelper@@YAXPEAUtagWND@@@Z @ 0x1C00624B0 (-TransitionForegroundPriority_BoostWindowHelper@@YAXPEAUtagWND@@@Z.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C0140 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?TransitionForegroundPriority_DeBoostWindowHelper@@YAXPEAUtagWND@@@Z @ 0x1C01D6420 (-TransitionForegroundPriority_DeBoostWindowHelper@@YAXPEAUtagWND@@@Z.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z @ 0x1C01D6440 (-UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYCLASS@@@Z @ 0x1C005FE68 (-SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYC.c)
 */

__int64 __fastcall SetForegroundPriority(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx

  v2 = 0LL;
  v4 = *(_QWORD *)(a1 + 416);
  if ( a2 )
    v2 = (unsigned int)((*(_DWORD *)(v4 + 12) & 0x800) != 0) + 1;
  return SetForegroundPriorityProcess(v4, a1, v2);
}
