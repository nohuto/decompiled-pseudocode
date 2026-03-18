/*
 * XREFs of SetForegroundPriority @ 0x1C00CF050
 * Callers:
 *     ?UpdateProcessPriorityWhenComponentAdded@@YAXPEAUtagWND@@0@Z @ 0x1C0008D6C (-UpdateProcessPriorityWhenComponentAdded@@YAXPEAUtagWND@@0@Z.c)
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?TransitionForegroundPriority_BoostWindowHelper@@YAXPEAUtagWND@@@Z @ 0x1C00CD2C0 (-TransitionForegroundPriority_BoostWindowHelper@@YAXPEAUtagWND@@@Z.c)
 *     ?TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00CDE60 (-TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z @ 0x1C00CEE18 (-UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E4278 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?TransitionForegroundPriority_DeBoostWindowHelper@@YAXPEAUtagWND@@@Z @ 0x1C01FB0A0 (-TransitionForegroundPriority_DeBoostWindowHelper@@YAXPEAUtagWND@@@Z.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z @ 0x1C01FB0C0 (-UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYCLASS@@@Z @ 0x1C00CF188 (-SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYC.c)
 */

__int64 __fastcall SetForegroundPriority(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx

  v2 = 0LL;
  v4 = *(_QWORD *)(a1 + 424);
  if ( a2 )
    v2 = (unsigned int)((*(_DWORD *)(v4 + 12) & 0x800) != 0) + 1;
  return SetForegroundPriorityProcess(v4, a1, v2);
}
