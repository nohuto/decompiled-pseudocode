/*
 * XREFs of LogError @ 0x1C0020D64
 * Callers:
 *     SyncEvalObject @ 0x1C0002800 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C0002B10 (AsyncEvalObject.c)
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     AMLIRegEventHandler @ 0x1C0005980 (AMLIRegEventHandler.c)
 *     RegEventHandler @ 0x1C0005B74 (RegEventHandler.c)
 *     RegRSAccess @ 0x1C0005B9C (RegRSAccess.c)
 *     NewObjOwner @ 0x1C0006ED8 (NewObjOwner.c)
 *     PerformMutexDriverCallbacks @ 0x1C0007088 (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C0007168 (InitMutex.c)
 *     ParseScope @ 0x1C000DDB0 (ParseScope.c)
 *     PushCall @ 0x1C001070C (PushCall.c)
 *     PushScope @ 0x1C0011540 (PushScope.c)
 *     ParseIntObj @ 0x1C001162C (ParseIntObj.c)
 *     ProcessIncDec @ 0x1C0011BE0 (ProcessIncDec.c)
 *     ParseArg @ 0x1C0012808 (ParseArg.c)
 *     ParsePackage @ 0x1C0012880 (ParsePackage.c)
 *     ParseOpcode @ 0x1C0012CB0 (ParseOpcode.c)
 *     ParseCall @ 0x1C0012EB0 (ParseCall.c)
 *     ParseRelease @ 0x1C0013B40 (ParseRelease.c)
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     Method @ 0x1C0014A40 (Method.c)
 *     ParseFieldList @ 0x1C00177D8 (ParseFieldList.c)
 *     ParseField @ 0x1C00178D0 (ParseField.c)
 *     CreateNameSpaceObject @ 0x1C0017B60 (CreateNameSpaceObject.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     GetNameSpaceObjectNoLock @ 0x1C00193E0 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C00195D0 (ParseSuperName.c)
 *     CreateXField @ 0x1C0019A9C (CreateXField.c)
 *     While @ 0x1C0019B90 (While.c)
 *     Package @ 0x1C0019CC0 (Package.c)
 *     ExprOp2_64 @ 0x1C0019E50 (ExprOp2_64.c)
 *     IfElse @ 0x1C001A330 (IfElse.c)
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     ParseString @ 0x1C001ABC0 (ParseString.c)
 *     PushTerm @ 0x1C001ADE4 (PushTerm.c)
 *     Index @ 0x1C001AEF0 (Index.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B48C (AMLIEvalPkgDataElement.c)
 *     Store @ 0x1C001B540 (Store.c)
 *     WriteObject @ 0x1C001B6E0 (WriteObject.c)
 *     Return @ 0x1C001B880 (Return.c)
 *     DupObjData @ 0x1C001B9B0 (DupObjData.c)
 *     NewObjData @ 0x1C001BAD0 (NewObjData.c)
 *     ValidateTarget @ 0x1C001BBA0 (ValidateTarget.c)
 *     SleepStall @ 0x1C001BC80 (SleepStall.c)
 *     Buffer @ 0x1C001BD00 (Buffer.c)
 *     IncDec @ 0x1C001BE80 (IncDec.c)
 *     AccFieldUnit @ 0x1C001C0C0 (AccFieldUnit.c)
 *     WriteField @ 0x1C001C620 (WriteField.c)
 *     ParseAndGetNameSpaceObject @ 0x1C001CFD4 (ParseAndGetNameSpaceObject.c)
 *     ParseName @ 0x1C001D054 (ParseName.c)
 *     ParseNameTail @ 0x1C001D130 (ParseNameTail.c)
 *     ParseObjName @ 0x1C001D3D0 (ParseObjName.c)
 *     Notify @ 0x1C001E6E0 (Notify.c)
 *     Load @ 0x1C001E7B0 (Load.c)
 *     LoadMemDDB @ 0x1C001E898 (LoadMemDDB.c)
 *     NewGlobalHeap @ 0x1C001E95C (NewGlobalHeap.c)
 *     LoadDDB @ 0x1C001EEB0 (LoadDDB.c)
 *     Release @ 0x1C001F230 (Release.c)
 *     LogOp2_32 @ 0x1C001F31C (LogOp2_32.c)
 *     Acquire @ 0x1C001F460 (Acquire.c)
 *     ReadField @ 0x1C001F540 (ReadField.c)
 *     ReadBuffField @ 0x1C001F608 (ReadBuffField.c)
 *     ReadFieldObj @ 0x1C001FB60 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C00201A0 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C00205D8 (GetFieldUnitRegionObj.c)
 *     WriteBuffField @ 0x1C0020674 (WriteBuffField.c)
 *     PushAccFieldObj @ 0x1C0020858 (PushAccFieldObj.c)
 *     PushFrame @ 0x1C0020A84 (PushFrame.c)
 *     AMLIEvalPackageElement @ 0x1C00246E0 (AMLIEvalPackageElement.c)
 *     ParseAcquire @ 0x1C0024F00 (ParseAcquire.c)
 *     WriteFieldLoop @ 0x1C0025230 (WriteFieldLoop.c)
 *     WriteCookAccess @ 0x1C0028940 (WriteCookAccess.c)
 *     OpRegion @ 0x1C0028BF0 (OpRegion.c)
 *     MapUnmapPhysMem @ 0x1C0028D40 (MapUnmapPhysMem.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C0028E58 (AmlpValidateFirmwareMemoryAddress.c)
 *     Field @ 0x1C002A090 (Field.c)
 *     ParseArgObj @ 0x1C002A218 (ParseArgObj.c)
 *     CopyObjBuffer @ 0x1C002CBF4 (CopyObjBuffer.c)
 *     Processor @ 0x1C002E1F0 (Processor.c)
 *     PowerRes @ 0x1C002F010 (PowerRes.c)
 *     IndexField @ 0x1C002F8E0 (IndexField.c)
 *     AcquireGL @ 0x1C0064BC4 (AcquireGL.c)
 *     RegOpcodeHandler @ 0x1C00656A8 (RegOpcodeHandler.c)
 *     LoadFieldUnitDDB @ 0x1C006688C (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C0066AC0 (BankField.c)
 *     CreateField @ 0x1C0066CE0 (CreateField.c)
 *     InitEvent @ 0x1C0066E50 (InitEvent.c)
 *     RawFieldAccess @ 0x1C0067824 (RawFieldAccess.c)
 *     NestAsyncEvalObject @ 0x1C0067F3C (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C0068530 (ResetSignal.c)
 *     Concat @ 0x1C0068720 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0068A20 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0068C20 (CopyObject.c)
 *     LoadTable @ 0x1C00690A0 (LoadTable.c)
 *     MidString @ 0x1C0069810 (MidString.c)
 *     ObjTypeSizeOf @ 0x1C0069A70 (ObjTypeSizeOf.c)
 *     ProcessLoadTable @ 0x1C0069CA0 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C006A300 (ToDecStr.c)
 *     ToHexStr @ 0x1C006A6D0 (ToHexStr.c)
 *     ToString @ 0x1C006A9F0 (ToString.c)
 *     Wait @ 0x1C006ABD0 (Wait.c)
 *     ParseFieldConnection @ 0x1C006B4D8 (ParseFieldConnection.c)
 *     AMLIInitialize @ 0x1C00BC5B4 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00BD00C (InitIllegalIOAddressListFromHAL.c)
 *     SyncLoadDDB @ 0x1C00BD9D4 (SyncLoadDDB.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0005788 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C0020E1C (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall LogError(int a1)
{
  int v1; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+20h] [rbp-28h]

  v1 = 0;
  dword_1C0082858 = a1;
  if ( off_1C00809F8 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C00809F0 + v4) )
    {
      ++v3;
      ++v1;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C00809F0 + 2 * v3 + 1) )
        return;
    }
    v5 = 2LL * v1;
    RtlStringCchPrintfA(&pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", a1, *((const char **)&unk_1C00809F0 + 2 * v1 + 1));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ds(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v9, a1, *((_QWORD *)&unk_1C00809F0 + v5 + 1));
  }
}
