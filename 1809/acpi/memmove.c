/*
 * XREFs of memmove @ 0x1C0030D80
 * Callers:
 *     ReadFieldObj @ 0x1C00013A0 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C00019E0 (AccessBaseField.c)
 *     ParseString @ 0x1C00022CC (ParseString.c)
 *     ACPIMapNamedTable @ 0x1C0002480 (ACPIMapNamedTable.c)
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0008BF0 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0008DE0 (ParseSuperName.c)
 *     AccFieldUnit @ 0x1C0009B30 (AccFieldUnit.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     Return @ 0x1C000A220 (Return.c)
 *     CopyObjBuffer @ 0x1C000AA64 (CopyObjBuffer.c)
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     Buffer @ 0x1C000B020 (Buffer.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C000BC24 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ConvertToInteger @ 0x1C000BE4C (ConvertToInteger.c)
 *     ACPIInitStartDevice @ 0x1C000D6A8 (ACPIInitStartDevice.c)
 *     ACPIBusIrpQueryInterface @ 0x1C0010840 (ACPIBusIrpQueryInterface.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C00112C8 (ACPIAmliBuildObjectPathname.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C00113A4 (AMLIGetNameSpaceObjectPath.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C0012970 (ACPIThermalCompletePendingIrps.c)
 *     ACPIIoctlEnumChildren @ 0x1C001365C (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C0013884 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     AMLIFindNameSpaceObject @ 0x1C001398C (AMLIFindNameSpaceObject.c)
 *     FindNSObjMainNoLock @ 0x1C0013AC0 (FindNSObjMainNoLock.c)
 *     FindNSObj @ 0x1C0013B90 (FindNSObj.c)
 *     ACPIBuildProcessorExtension @ 0x1C0015CA4 (ACPIBuildProcessorExtension.c)
 *     ACPIDetectPdoDevices @ 0x1C0018F84 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x1C001A3C0 (ACPIDetectDockDevices.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001B320 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 *     GetNameSpaceObject @ 0x1C0021288 (GetNameSpaceObject.c)
 *     ParseField @ 0x1C00217F0 (ParseField.c)
 *     ParseObjName @ 0x1C0021A7C (ParseObjName.c)
 *     ParsePackage @ 0x1C0021BD0 (ParsePackage.c)
 *     WriteFieldObj @ 0x1C0023F50 (WriteFieldObj.c)
 *     WriteSystemMem @ 0x1C002454C (WriteSystemMem.c)
 *     ReadSystemMem @ 0x1C0024690 (ReadSystemMem.c)
 *     PushAccFieldObj @ 0x1C0024724 (PushAccFieldObj.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C00257B0 (ACPIInterruptDispatchEventDpc.c)
 *     Method @ 0x1C00262E0 (Method.c)
 *     WriteFieldLoop @ 0x1C0026A60 (WriteFieldLoop.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0027490 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0028E9C (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIGetWorkerForBuffer @ 0x1C002A6F0 (ACPIGetWorkerForBuffer.c)
 *     ParseInteger @ 0x1C002C338 (ParseInteger.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002D678 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C002D884 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004B530 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDetectEjectDevices @ 0x1C004D880 (ACPIDetectEjectDevices.c)
 *     AcpiDeviceResetInterface @ 0x1C0050AC0 (AcpiDeviceResetInterface.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C00542C0 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C0055878 (ACPIIoctlCalculateOutputBufferV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0055E50 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C00561B0 (ACPIIoctlGetDeviceInformation.c)
 *     IpmiOpRegionHandler @ 0x1C00567D0 (IpmiOpRegionHandler.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C00589B8 (AcpiConvertMethodArgumentsToObjData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005A890 (InternalRawAccessOpRegionHandler.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005B174 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005C46C (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ACPIVectorGetEntry @ 0x1C005ECAC (ACPIVectorGetEntry.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x1C0060810 (AcpiRecordBlackboxInformationWorker.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C00627C8 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C00628BC (AMLICreateOverrideObjectDep.c)
 *     RawFieldAccess @ 0x1C0065834 (RawFieldAccess.c)
 *     Concat @ 0x1C00666C0 (Concat.c)
 *     LoadTable @ 0x1C0067040 (LoadTable.c)
 *     ToDecStr @ 0x1C00682A0 (ToDecStr.c)
 *     ToHexStr @ 0x1C0068670 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C0068CD8 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0068EAC (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C0069484 (ParseFieldConnection.c)
 *     LinkNodepRunSrsWorker @ 0x1C0069CC0 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008DA80 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C008F190 (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     ACPIThermalBuildConstraints @ 0x1C008F5E0 (ACPIThermalBuildConstraints.c)
 *     IrqArbpSetDeviceProperties @ 0x1C008FF20 (IrqArbpSetDeviceProperties.c)
 *     OSReadRegValue @ 0x1C00945C8 (OSReadRegValue.c)
 *     IrqTranslatorEjectInterface @ 0x1C00958EC (IrqTranslatorEjectInterface.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C0096120 (ACPIFilterIrpQueryInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1C0096554 (ACPIBusIommuBusInterface.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0097128 (ACPIAmliEvaluateOsc.c)
 *     ACPIInternalGrowBuffer @ 0x1C0098B84 (ACPIInternalGrowBuffer.c)
 *     PnpBiosResourcesToNtResources @ 0x1C0099A10 (PnpBiosResourcesToNtResources.c)
 *     ArbAddOrdering @ 0x1C009CC9C (ArbAddOrdering.c)
 *     ACPIGetPnpLocationString @ 0x1C009D000 (ACPIGetPnpLocationString.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009D250 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C009D5A4 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIIommuGetDeviceId @ 0x1C009EAA0 (ACPIIommuGetDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C009EE44 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00A86D0 (ACPIDockIrpQueryInterface.c)
 *     WppTraceCallback @ 0x1C00A8DF0 (WppTraceCallback.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00A90E4 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectHandler @ 0x1C00AAF70 (ACPIEcConnectHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00AC130 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C00AC1E4 (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x1C00AC690 (ACPIGetUniqueId.c)
 *     ACPIQuerySpareDsm @ 0x1C00AC914 (ACPIQuerySpareDsm.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00AD8B0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00AE520 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00AE790 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C00AEC98 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00AEEA4 (OSReadNextRegValue.c)
 *     PnpiAddSidebandResources @ 0x1C00AF094 (PnpiAddSidebandResources.c)
 *     BuildTranslatorRanges @ 0x1C00B1A4C (BuildTranslatorRanges.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B2854 (LinkNodeGetPossibleResources.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00B383C (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbPruneOrdering @ 0x1C00B3D48 (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1C00B3F10 (ArbQueryConflict.c)
 *     RtlDuplicateCmResourceList @ 0x1C00B70E0 (RtlDuplicateCmResourceList.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
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
