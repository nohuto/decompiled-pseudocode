/*
 * XREFs of DereferenceObjectEx @ 0x1C00038B0
 * Callers:
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     DerefOf @ 0x1C000B120 (DerefOf.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     PerformMutexDriverCallbacks @ 0x1C000FF18 (PerformMutexDriverCallbacks.c)
 *     AMLIEvalPackageElement @ 0x1C0011EC4 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C001398C (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     EnableDisableCMOSRegions @ 0x1C0016140 (EnableDisableCMOSRegions.c)
 *     AMLIIterateSiblingsNext @ 0x1C0017200 (AMLIIterateSiblingsNext.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0018130 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C00186D0 (GetPciAddressWorker.c)
 *     ACPIDockIsDockDevice @ 0x1C00206B0 (ACPIDockIsDockDevice.c)
 *     ParseNameObj @ 0x1C0021368 (ParseNameObj.c)
 *     Field @ 0x1C00215D0 (Field.c)
 *     ParseField @ 0x1C00217F0 (ParseField.c)
 *     CreateNativeNameSpaceObject @ 0x1C00229A0 (CreateNativeNameSpaceObject.c)
 *     Alias @ 0x1C0022C10 (Alias.c)
 *     AMLIApplyNamespaceOverride @ 0x1C00230F0 (AMLIApplyNamespaceOverride.c)
 *     IndexField @ 0x1C00231D0 (IndexField.c)
 *     Load @ 0x1C00248D0 (Load.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005A890 (InternalRawAccessOpRegionHandler.c)
 *     Simulator_EvaluateNode @ 0x1C00616C4 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C006198C (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0061DD8 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0061EF8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C00623F8 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0062558 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C00626C0 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0062A44 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0062BCC (AMLIReadNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C0063414 (ParseDLMObjectInternal.c)
 *     DebugNotify @ 0x1C0063C20 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C0063F20 (DebugRunMethod.c)
 *     BankField @ 0x1C0064AD0 (BankField.c)
 *     FreeContext @ 0x1C0065B50 (FreeContext.c)
 *     LoadTable @ 0x1C0067040 (LoadTable.c)
 *     ParseNestedContext @ 0x1C0069730 (ParseNestedContext.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 */

void __fastcall DereferenceObjectEx(unsigned __int64 a1)
{
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), 0xFFFFFFFF) == 1 )
  {
    *(_WORD *)(a1 + 64) |= 4u;
    if ( (*(_WORD *)(a1 + 64) & 0x40) == 0 )
      FreeNameSpaceObjects(a1);
  }
}
