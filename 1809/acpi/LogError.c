/*
 * XREFs of LogError @ 0x1C0029B44
 * Callers:
 *     ReadFieldObj @ 0x1C00013A0 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C00019E0 (AccessBaseField.c)
 *     LogOp2_32 @ 0x1C0002144 (LogOp2_32.c)
 *     ParseString @ 0x1C00022CC (ParseString.c)
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     ParseRelease @ 0x1C0003260 (ParseRelease.c)
 *     SyncEvalObject @ 0x1C0003F70 (SyncEvalObject.c)
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     ParseCall @ 0x1C00065E0 (ParseCall.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseScope @ 0x1C0008310 (ParseScope.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0008BF0 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0008DE0 (ParseSuperName.c)
 *     IfElse @ 0x1C00096F0 (IfElse.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     AccFieldUnit @ 0x1C0009B30 (AccFieldUnit.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     Return @ 0x1C000A220 (Return.c)
 *     ParseAcquire @ 0x1C000A350 (ParseAcquire.c)
 *     NewObjData @ 0x1C000A678 (NewObjData.c)
 *     Store @ 0x1C000A740 (Store.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     CopyObjBuffer @ 0x1C000AA64 (CopyObjBuffer.c)
 *     While @ 0x1C000ACB0 (While.c)
 *     Index @ 0x1C000ADE0 (Index.c)
 *     ValidateTarget @ 0x1C000AF3C (ValidateTarget.c)
 *     Buffer @ 0x1C000B020 (Buffer.c)
 *     AMLIEvalPkgDataElement @ 0x1C000EC04 (AMLIEvalPkgDataElement.c)
 *     PerformMutexDriverCallbacks @ 0x1C000FF18 (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C000FFF8 (InitMutex.c)
 *     AMLIEvalPackageElement @ 0x1C0011EC4 (AMLIEvalPackageElement.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 *     Package @ 0x1C0020DF0 (Package.c)
 *     ParseName @ 0x1C0020F94 (ParseName.c)
 *     ParseNameTail @ 0x1C0021070 (ParseNameTail.c)
 *     ParseAndGetNameSpaceObject @ 0x1C0021208 (ParseAndGetNameSpaceObject.c)
 *     PushCall @ 0x1C0021414 (PushCall.c)
 *     SleepStall @ 0x1C0021550 (SleepStall.c)
 *     Field @ 0x1C00215D0 (Field.c)
 *     ParseFieldList @ 0x1C00216F8 (ParseFieldList.c)
 *     ParseField @ 0x1C00217F0 (ParseField.c)
 *     ParseObjName @ 0x1C0021A7C (ParseObjName.c)
 *     ParseArg @ 0x1C0021B5C (ParseArg.c)
 *     ParsePackage @ 0x1C0021BD0 (ParsePackage.c)
 *     ParseOpcode @ 0x1C0022000 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C00221F4 (ParseIntObj.c)
 *     ParseArgObj @ 0x1C00222B8 (ParseArgObj.c)
 *     PushScope @ 0x1C00224A8 (PushScope.c)
 *     WriteField @ 0x1C00225A0 (WriteField.c)
 *     Acquire @ 0x1C00226E0 (Acquire.c)
 *     PushFrame @ 0x1C00227C0 (PushFrame.c)
 *     Release @ 0x1C0022840 (Release.c)
 *     Processor @ 0x1C0022D20 (Processor.c)
 *     NewObjOwner @ 0x1C0023018 (NewObjOwner.c)
 *     LoadDDB @ 0x1C0023114 (LoadDDB.c)
 *     IndexField @ 0x1C00231D0 (IndexField.c)
 *     PowerRes @ 0x1C0023590 (PowerRes.c)
 *     NewGlobalHeap @ 0x1C0023C48 (NewGlobalHeap.c)
 *     ReadField @ 0x1C0023DF0 (ReadField.c)
 *     ReadBuffField @ 0x1C0023EB8 (ReadBuffField.c)
 *     GetFieldUnitRegionObj @ 0x1C0024410 (GetFieldUnitRegionObj.c)
 *     WriteBuffField @ 0x1C00244AC (WriteBuffField.c)
 *     PushAccFieldObj @ 0x1C0024724 (PushAccFieldObj.c)
 *     LoadMemDDB @ 0x1C0024870 (LoadMemDDB.c)
 *     Load @ 0x1C00248D0 (Load.c)
 *     Notify @ 0x1C0024BD0 (Notify.c)
 *     Method @ 0x1C00262E0 (Method.c)
 *     WriteFieldLoop @ 0x1C0026A60 (WriteFieldLoop.c)
 *     PushTerm @ 0x1C0028534 (PushTerm.c)
 *     CreateXField @ 0x1C0028790 (CreateXField.c)
 *     WriteCookAccess @ 0x1C0029190 (WriteCookAccess.c)
 *     OpRegion @ 0x1C0029440 (OpRegion.c)
 *     MapUnmapPhysMem @ 0x1C0029590 (MapUnmapPhysMem.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C00296A8 (AmlpValidateFirmwareMemoryAddress.c)
 *     IncDec @ 0x1C0029A90 (IncDec.c)
 *     ProcessIncDec @ 0x1C002A1D0 (ProcessIncDec.c)
 *     AMLIRegEventHandler @ 0x1C002B7F4 (AMLIRegEventHandler.c)
 *     RegEventHandler @ 0x1C002B9E8 (RegEventHandler.c)
 *     RegRSAccess @ 0x1C002BA10 (RegRSAccess.c)
 *     AcquireGL @ 0x1C0062C38 (AcquireGL.c)
 *     RegOpcodeHandler @ 0x1C0063660 (RegOpcodeHandler.c)
 *     LoadFieldUnitDDB @ 0x1C00648AC (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C0064AD0 (BankField.c)
 *     CreateField @ 0x1C0064CF0 (CreateField.c)
 *     InitEvent @ 0x1C0064E60 (InitEvent.c)
 *     RawFieldAccess @ 0x1C0065834 (RawFieldAccess.c)
 *     NestAsyncEvalObject @ 0x1C0065EDC (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C00664D0 (ResetSignal.c)
 *     Concat @ 0x1C00666C0 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00669C0 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0066BC0 (CopyObject.c)
 *     LoadTable @ 0x1C0067040 (LoadTable.c)
 *     MidString @ 0x1C00677B0 (MidString.c)
 *     ObjTypeSizeOf @ 0x1C0067A10 (ObjTypeSizeOf.c)
 *     ProcessLoadTable @ 0x1C0067C40 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C00682A0 (ToDecStr.c)
 *     ToHexStr @ 0x1C0068670 (ToHexStr.c)
 *     ToString @ 0x1C0068990 (ToString.c)
 *     Wait @ 0x1C0068B70 (Wait.c)
 *     ParseFieldConnection @ 0x1C0069484 (ParseFieldConnection.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00B99F0 (InitIllegalIOAddressListFromHAL.c)
 *     SyncLoadDDB @ 0x1C00BA184 (SyncLoadDDB.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000C604 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C0029BEC (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall LogError(int a1)
{
  int v1; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+20h] [rbp-28h]

  v1 = 0;
  dword_1C0080868 = a1;
  if ( off_1C007E9F8 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C007E9F0 + v4) )
    {
      ++v3;
      ++v1;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C007E9F0 + 2 * v3 + 1) )
        return;
    }
    v5 = 2LL * v1;
    RtlStringCchPrintfA(&pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", a1, *((const char **)&unk_1C007E9F0 + 2 * v1 + 1));
    WPP_RECORDER_SF_Ds(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v9, a1, *((_QWORD *)&unk_1C007E9F0 + v5 + 1));
  }
}
