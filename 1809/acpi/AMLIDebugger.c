/*
 * XREFs of AMLIDebugger @ 0x1C0063760
 * Callers:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     InsertReadyQueue @ 0x1C0004270 (InsertReadyQueue.c)
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseScope @ 0x1C0008310 (ParseScope.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000AAE8 (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C000EC04 (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x1C0011EC4 (AMLIEvalPackageElement.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     ACPIDockIsDockDevice @ 0x1C00206B0 (ACPIDockIsDockDevice.c)
 *     ParseOpcode @ 0x1C0022000 (ParseOpcode.c)
 *     Load @ 0x1C00248D0 (Load.c)
 *     CatError @ 0x1C00637B0 (CatError.c)
 *     BreakPoint @ 0x1C0066430 (BreakPoint.c)
 *     ProcessLoadTable @ 0x1C0067C40 (ProcessLoadTable.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1C00BA078 (AMLILoadDDB.c)
 * Callees:
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 *     Debugger @ 0x1C0064748 (Debugger.c)
 */

__int64 AMLIDebugger()
{
  __int64 result; // rax

  result = (unsigned int)gdwfAMLIInit;
  if ( (gdwfAMLIInit & 0x40) != 0 )
  {
    if ( (gDebugger & 4) != 0 )
    {
      return ConPrintf("\nRe-entering AML debugger is not allowed.\nType 'g' to go back to the AML debugger.\n");
    }
    else
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFFD);
      _InterlockedOr(&gDebugger, 1u);
      result = Debugger();
      _InterlockedAnd(&gDebugger, 0xFFFFFFFC);
    }
  }
  return result;
}
