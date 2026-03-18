/*
 * XREFs of _anonymous_namespace_::RequestPriorityUpdate @ 0x1C012FDA8
 * Callers:
 *     ?UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0006B24 (-UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C010EB00 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C012F900 (-TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z @ 0x1C012FC38 (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z.c)
 *     _anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper @ 0x1C02118E0 (_anonymous_namespace_--TransitionForegroundPriority_DeBoostWindowHelper.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0211904 (-UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z.c)
 *     SetForegroundPriority @ 0x1C02119B0 (SetForegroundPriority.c)
 * Callees:
 *     _anonymous_namespace_::SetForegroundPriorityProcess @ 0x1C012FF2C (_anonymous_namespace_--SetForegroundPriorityProcess.c)
 */

__int64 __fastcall anonymous_namespace_::RequestPriorityUpdate(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx

  v2 = 0LL;
  v4 = *(_QWORD *)(a1 + 416);
  if ( !a2 )
    v2 = (unsigned int)((*(_DWORD *)(v4 + 12) & 0x800) != 0) + 1;
  return anonymous_namespace_::SetForegroundPriorityProcess(v4, a1, v2);
}
