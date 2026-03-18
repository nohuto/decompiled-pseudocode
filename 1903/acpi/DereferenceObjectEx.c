/*
 * XREFs of DereferenceObjectEx @ 0x1C0013B20
 * Callers:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     CreateNativeNameSpaceObject @ 0x1C0006870 (CreateNativeNameSpaceObject.c)
 *     AMLIApplyNamespaceOverride @ 0x1C0006FB0 (AMLIApplyNamespaceOverride.c)
 *     PerformMutexDriverCallbacks @ 0x1C0007088 (PerformMutexDriverCallbacks.c)
 *     AMLIFindNameSpaceObject @ 0x1C00084CC (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     ParseNameObj @ 0x1C0011FCC (ParseNameObj.c)
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     ACPIDockIsDockDevice @ 0x1C0017620 (ACPIDockIsDockDevice.c)
 *     ParseField @ 0x1C00178D0 (ParseField.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     DerefOf @ 0x1C001BE00 (DerefOf.c)
 *     Load @ 0x1C001E7B0 (Load.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0022A70 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C0023040 (GetPciAddressWorker.c)
 *     AMLIIterateSiblingsNext @ 0x1C0023A90 (AMLIIterateSiblingsNext.c)
 *     EnableDisableCMOSRegions @ 0x1C0023E80 (EnableDisableCMOSRegions.c)
 *     AMLIEvalPackageElement @ 0x1C00246E0 (AMLIEvalPackageElement.c)
 *     Field @ 0x1C002A090 (Field.c)
 *     Alias @ 0x1C002E750 (Alias.c)
 *     IndexField @ 0x1C002F8E0 (IndexField.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005C5F0 (InternalRawAccessOpRegionHandler.c)
 *     Simulator_EvaluateNode @ 0x1C0063644 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C006390C (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0063D58 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0063E84 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0064384 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C00644E4 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C006464C (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C00649D0 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0064B58 (AMLIReadNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C00653C4 (ParseDLMObjectInternal.c)
 *     DebugNotify @ 0x1C0065C60 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C0065F60 (DebugRunMethod.c)
 *     BankField @ 0x1C0066AC0 (BankField.c)
 *     FreeContext @ 0x1C0067BB4 (FreeContext.c)
 *     LoadTable @ 0x1C00690A0 (LoadTable.c)
 *     ParseNestedContext @ 0x1C006B790 (ParseNestedContext.c)
 *     AMLIInitialize @ 0x1C00BC5B4 (AMLIInitialize.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
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
