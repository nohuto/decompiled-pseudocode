/*
 * XREFs of memmove @ 0x1C0031A00
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0001940 (ACPIMapNamedTable.c)
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     ACPIIoctlEnumChildren @ 0x1C000819C (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C00083C4 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     AMLIFindNameSpaceObject @ 0x1C00084CC (AMLIFindNameSpaceObject.c)
 *     FindNSObjMainNoLock @ 0x1C0008600 (FindNSObjMainNoLock.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C00090A0 (ACPIThermalCompletePendingIrps.c)
 *     ACPIBusIrpQueryInterface @ 0x1C000B2A0 (ACPIBusIrpQueryInterface.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C000BD28 (ACPIAmliBuildObjectPathname.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C000BE04 (AMLIGetNameSpaceObjectPath.c)
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 *     ACPIDetectPdoDevices @ 0x1C000D28C (ACPIDetectPdoDevices.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0010284 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C0010844 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIDetectDockDevices @ 0x1C0011CE0 (ACPIDetectDockDevices.c)
 *     ParsePackage @ 0x1C0012880 (ParsePackage.c)
 *     FindNSObj @ 0x1C0014240 (FindNSObj.c)
 *     Method @ 0x1C0014A40 (Method.c)
 *     ParseField @ 0x1C00178D0 (ParseField.c)
 *     CreateNameSpaceObject @ 0x1C0017B60 (CreateNameSpaceObject.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     GetNameSpaceObjectNoLock @ 0x1C00193E0 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C00195D0 (ParseSuperName.c)
 *     ExprOp2_64 @ 0x1C0019E50 (ExprOp2_64.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 *     ParseString @ 0x1C001ABC0 (ParseString.c)
 *     GetNameSpaceObject @ 0x1C001AD04 (GetNameSpaceObject.c)
 *     WriteObject @ 0x1C001B6E0 (WriteObject.c)
 *     Return @ 0x1C001B880 (Return.c)
 *     DupObjData @ 0x1C001B9B0 (DupObjData.c)
 *     Buffer @ 0x1C001BD00 (Buffer.c)
 *     AccFieldUnit @ 0x1C001C0C0 (AccFieldUnit.c)
 *     ParseObjName @ 0x1C001D3D0 (ParseObjName.c)
 *     WriteFieldObj @ 0x1C001F6A0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C001FB60 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C00201A0 (AccessBaseField.c)
 *     WriteSystemMem @ 0x1C0020714 (WriteSystemMem.c)
 *     PushAccFieldObj @ 0x1C0020858 (PushAccFieldObj.c)
 *     ReadSystemMem @ 0x1C0020984 (ReadSystemMem.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0021BC0 (ACPIInterruptDispatchEventDpc.c)
 *     WriteFieldLoop @ 0x1C0025230 (WriteFieldLoop.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0025B70 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0029800 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIGetWorkerForBuffer @ 0x1C002A2F0 (ACPIGetWorkerForBuffer.c)
 *     ConvertToInteger @ 0x1C002AB2C (ConvertToInteger.c)
 *     ACPIBuildProcessorExtension @ 0x1C002C704 (ACPIBuildProcessorExtension.c)
 *     ParseInteger @ 0x1C002CB1C (ParseInteger.c)
 *     CopyObjBuffer @ 0x1C002CBF4 (CopyObjBuffer.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C002D980 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002E608 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004CCA0 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDetectEjectDevices @ 0x1C004F140 (ACPIDetectEjectDevices.c)
 *     AcpiDeviceResetInterface @ 0x1C0052430 (AcpiDeviceResetInterface.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0055D30 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C0057348 (ACPIIoctlCalculateOutputBufferV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0057920 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C0057C80 (ACPIIoctlGetDeviceInformation.c)
 *     IpmiOpRegionHandler @ 0x1C00582A0 (IpmiOpRegionHandler.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C005A5AC (AcpiConvertMethodArgumentsToObjData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005C5F0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005CEFC (ACPIProcessorContainerFillIoctlBuffer.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005E218 (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ACPIVectorGetEntry @ 0x1C0060BAC (ACPIVectorGetEntry.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x1C0062790 (AcpiRecordBlackboxInformationWorker.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0064754 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0064848 (AMLICreateOverrideObjectDep.c)
 *     RawFieldAccess @ 0x1C0067824 (RawFieldAccess.c)
 *     Concat @ 0x1C0068720 (Concat.c)
 *     LoadTable @ 0x1C00690A0 (LoadTable.c)
 *     ToDecStr @ 0x1C006A300 (ToDecStr.c)
 *     ToHexStr @ 0x1C006A6D0 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C006AD38 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C006AF00 (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C006B4D8 (ParseFieldConnection.c)
 *     LinkNodepRunSrsWorker @ 0x1C006BD20 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008FB24 (ACPIBusIrpQueryHardwareId.c)
 *     OSReadRegValue @ 0x1C0090BC8 (OSReadRegValue.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0091A98 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalBuildConstraints @ 0x1C0093090 (ACPIThermalBuildConstraints.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C00932E8 (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     ACPIInternalGrowBuffer @ 0x1C0093D60 (ACPIInternalGrowBuffer.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C00947C0 (ACPIFilterIrpQueryInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1C0094BFC (ACPIBusIommuBusInterface.c)
 *     PnpBiosResourcesToNtResources @ 0x1C0095CE4 (PnpBiosResourcesToNtResources.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0097DE4 (ACPIBusIrpQueryDeviceId.c)
 *     IrqArbpSetDeviceProperties @ 0x1C00988AC (IrqArbpSetDeviceProperties.c)
 *     ArbAddOrdering @ 0x1C009E49C (ArbAddOrdering.c)
 *     ACPIGetPnpLocationString @ 0x1C009E810 (ACPIGetPnpLocationString.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009F364 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIIommuGetDeviceId @ 0x1C00A0660 (ACPIIommuGetDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00A071C (ACPIBusIrpQueryInstanceId.c)
 *     IrqTranslatorEjectInterface @ 0x1C00A2FD0 (IrqTranslatorEjectInterface.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00ABC70 (ACPIDockIrpQueryInterface.c)
 *     WppTraceCallback @ 0x1C00AC410 (WppTraceCallback.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00AC704 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectHandler @ 0x1C00AE630 (ACPIEcConnectHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00AF848 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C00AF8FC (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x1C00AFDA0 (ACPIGetUniqueId.c)
 *     ACPIQuerySpareDsm @ 0x1C00B0034 (ACPIQuerySpareDsm.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B1010 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00B1D58 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00B1FD8 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C00B24FC (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00B2740 (OSReadNextRegValue.c)
 *     PnpiAddSidebandResources @ 0x1C00B2964 (PnpiAddSidebandResources.c)
 *     BuildTranslatorRanges @ 0x1C00B53FC (BuildTranslatorRanges.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B6244 (LinkNodeGetPossibleResources.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00B71DC (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbPruneOrdering @ 0x1C00B7734 (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1C00B7900 (ArbQueryConflict.c)
 *     RtlDuplicateCmResourceList @ 0x1C00BB0E0 (RtlDuplicateCmResourceList.c)
 *     AMLIInitialize @ 0x1C00BC5B4 (AMLIInitialize.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto LABEL_38;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_38:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto LABEL_13;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_13:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
