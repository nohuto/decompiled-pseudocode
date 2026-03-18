/*
 * XREFs of ConPrintf @ 0x1C0065888
 * Callers:
 *     ProcessEvalObj @ 0x1C0001620 (ProcessEvalObj.c)
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     AsyncEvalObject @ 0x1C0002B10 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0004A80 (InsertReadyQueue.c)
 *     ParseScope @ 0x1C000DDB0 (ParseScope.c)
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     ParseIntObj @ 0x1C001162C (ParseIntObj.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     ParsePackage @ 0x1C0012880 (ParsePackage.c)
 *     ParseOpcode @ 0x1C0012CB0 (ParseOpcode.c)
 *     ParseCall @ 0x1C0012EB0 (ParseCall.c)
 *     ACPIDockIsDockDevice @ 0x1C0017620 (ACPIDockIsDockDevice.c)
 *     ParseFieldList @ 0x1C00177D8 (ParseFieldList.c)
 *     ParseField @ 0x1C00178D0 (ParseField.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     ParseSuperName @ 0x1C00195D0 (ParseSuperName.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C001A770 (AMLIGetNameSpaceObjectNoLock.c)
 *     ParseString @ 0x1C001ABC0 (ParseString.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B48C (AMLIEvalPkgDataElement.c)
 *     ReadObject @ 0x1C001BF34 (ReadObject.c)
 *     AccFieldUnit @ 0x1C001C0C0 (AccFieldUnit.c)
 *     ParseName @ 0x1C001D054 (ParseName.c)
 *     AMLIEvalPackageElement @ 0x1C00246E0 (AMLIEvalPackageElement.c)
 *     ParseLocalObj @ 0x1C002A1B8 (ParseLocalObj.c)
 *     ParseArgObj @ 0x1C002A218 (ParseArgObj.c)
 *     ParseInteger @ 0x1C002CB1C (ParseInteger.c)
 *     AMLIDebugger @ 0x1C00657A8 (AMLIDebugger.c)
 *     CatError @ 0x1C00657F8 (CatError.c)
 *     DebugInPort @ 0x1C0065B5C (DebugInPort.c)
 *     DebugNotify @ 0x1C0065C60 (DebugNotify.c)
 *     DebugQuit @ 0x1C0065EF0 (DebugQuit.c)
 *     DebugRunMethod @ 0x1C0065F60 (DebugRunMethod.c)
 *     PrintBuffData @ 0x1C0066360 (PrintBuffData.c)
 *     PrintIndent @ 0x1C00663D8 (PrintIndent.c)
 *     PrintObject @ 0x1C006641C (PrintObject.c)
 *     RunMethodCallBack @ 0x1C0066540 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0067204 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C0067F3C (NestAsyncEvalObject.c)
 *     BreakPoint @ 0x1C0068490 (BreakPoint.c)
 *     ToDecStr @ 0x1C006A300 (ToDecStr.c)
 *     ToHexStr @ 0x1C006A6D0 (ToHexStr.c)
 *     DbgParseOneArg @ 0x1C006B2B8 (DbgParseOneArg.c)
 *     AMLILoadDDB @ 0x1C00BD8C8 (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchVPrintfA @ 0x1C0062C90 (RtlStringCchVPrintfA.c)
 */

ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(byte_1C0083430, 0x400uLL, pszFormat, va);
  if ( qword_1C0082838 )
    return qword_1C0082838(byte_1C0083430, qword_1C0082840);
  else
    return DbgPrintEx(0x19u, 3u, byte_1C0083430);
}
