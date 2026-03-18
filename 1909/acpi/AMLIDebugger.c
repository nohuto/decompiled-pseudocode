/*
 * XREFs of AMLIDebugger @ 0x1C00657A8
 * Callers:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0004A80 (InsertReadyQueue.c)
 *     ParseScope @ 0x1C000DDB0 (ParseScope.c)
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     ParseOpcode @ 0x1C0012CB0 (ParseOpcode.c)
 *     ACPIDockIsDockDevice @ 0x1C0017620 (ACPIDockIsDockDevice.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C001A770 (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B48C (AMLIEvalPkgDataElement.c)
 *     Load @ 0x1C001E7B0 (Load.c)
 *     AMLIEvalPackageElement @ 0x1C00246E0 (AMLIEvalPackageElement.c)
 *     CatError @ 0x1C00657F8 (CatError.c)
 *     BreakPoint @ 0x1C0068490 (BreakPoint.c)
 *     ProcessLoadTable @ 0x1C0069CA0 (ProcessLoadTable.c)
 *     AMLIInitialize @ 0x1C00BC5B4 (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1C00BD8C8 (AMLILoadDDB.c)
 * Callees:
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 *     Debugger @ 0x1C0066728 (Debugger.c)
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
