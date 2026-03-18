/*
 * XREFs of ConPrintf @ 0x1C0063840
 * Callers:
 *     ProcessEvalObj @ 0x1C0001D60 (ProcessEvalObj.c)
 *     ParseString @ 0x1C00022CC (ParseString.c)
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     InsertReadyQueue @ 0x1C0004270 (InsertReadyQueue.c)
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 *     ParseCall @ 0x1C00065E0 (ParseCall.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseScope @ 0x1C0008310 (ParseScope.c)
 *     ParseSuperName @ 0x1C0008DE0 (ParseSuperName.c)
 *     AccFieldUnit @ 0x1C0009B30 (AccFieldUnit.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000AAE8 (AMLIGetNameSpaceObjectNoLock.c)
 *     ReadObject @ 0x1C000B1A0 (ReadObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C000EC04 (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x1C0011EC4 (AMLIEvalPackageElement.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     ACPIDockIsDockDevice @ 0x1C00206B0 (ACPIDockIsDockDevice.c)
 *     ParseName @ 0x1C0020F94 (ParseName.c)
 *     ParseFieldList @ 0x1C00216F8 (ParseFieldList.c)
 *     ParseField @ 0x1C00217F0 (ParseField.c)
 *     ParsePackage @ 0x1C0021BD0 (ParsePackage.c)
 *     ParseOpcode @ 0x1C0022000 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C00221F4 (ParseIntObj.c)
 *     ParseArgObj @ 0x1C00222B8 (ParseArgObj.c)
 *     ParseLocalObj @ 0x1C0022CB4 (ParseLocalObj.c)
 *     ParseInteger @ 0x1C002C338 (ParseInteger.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 *     CatError @ 0x1C00637B0 (CatError.c)
 *     DebugInPort @ 0x1C0063B1C (DebugInPort.c)
 *     DebugNotify @ 0x1C0063C20 (DebugNotify.c)
 *     DebugQuit @ 0x1C0063EB0 (DebugQuit.c)
 *     DebugRunMethod @ 0x1C0063F20 (DebugRunMethod.c)
 *     PrintBuffData @ 0x1C0064384 (PrintBuffData.c)
 *     PrintIndent @ 0x1C00643FC (PrintIndent.c)
 *     PrintObject @ 0x1C0064440 (PrintObject.c)
 *     RunMethodCallBack @ 0x1C0064560 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0065214 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C0065EDC (NestAsyncEvalObject.c)
 *     BreakPoint @ 0x1C0066430 (BreakPoint.c)
 *     ToDecStr @ 0x1C00682A0 (ToDecStr.c)
 *     ToHexStr @ 0x1C0068670 (ToHexStr.c)
 *     DbgParseOneArg @ 0x1C0069264 (DbgParseOneArg.c)
 *     AMLILoadDDB @ 0x1C00BA078 (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchVPrintfA @ 0x1C0060D04 (RtlStringCchVPrintfA.c)
 */

ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(byte_1C0081430, 0x400uLL, pszFormat, va);
  if ( qword_1C0080848 )
    return qword_1C0080848(byte_1C0081430, qword_1C0080850);
  else
    return DbgPrintEx(0x19u, 3u, byte_1C0081430);
}
