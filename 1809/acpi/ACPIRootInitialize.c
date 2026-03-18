/*
 * XREFs of ACPIRootInitialize @ 0x1C0095120
 * Callers:
 *     ACPITableLoad @ 0x1C0024FF0 (ACPITableLoad.c)
 * Callees:
 *     AMLISetNSObjectContext @ 0x1C0002418 (AMLISetNSObjectContext.c)
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C001011C (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017BC4 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIGetParent @ 0x1C001AEEC (AMLIGetParent.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0029D1C (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0029FDC (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C003010C (ACPIFixedFeatureButtonInitialize.c)
 *     IsHypervisorLpiCapable @ 0x1C00307B8 (IsHypervisorLpiCapable.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _ACPIInternalError @ 0x1C004D854 (_ACPIInternalError.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C0093BC8 (ACPIWriteOscSupportToRegistry.c)
 *     OSCreateHandle @ 0x1C0093C84 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C0093D78 (OSWriteRegValue.c)
 *     ACPIPccLegacyInitialize @ 0x1C0095470 (ACPIPccLegacyInitialize.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1C00957BC (ACPIEvaluateOscWheaMethodOnRootBus.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0097128 (ACPIAmliEvaluateOsc.c)
 *     IsHypervisorCpcCapable @ 0x1C00B1300 (IsHypervisorCpcCapable.c)
 */

__int64 ACPIRootInitialize()
{
  unsigned int v0; // edi
  int v1; // esi
  int v2; // r12d
  __int64 v3; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  __int64 *v6; // r14
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  bool v11; // bl
  USHORT HighestNodeNumber; // ax
  int v13; // r8d
  USHORT v14; // bx
  USHORT v15; // r14
  unsigned __int16 v16; // r15
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rcx
  int v22; // r8d
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  bool v25; // cc
  _QWORD *v26; // rax
  __int64 v28; // rcx
  HANDLE Handle[2]; // [rsp+30h] [rbp-50h] BYREF
  USHORT Count[2]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v31[3]; // [rsp+44h] [rbp-3Ch] BYREF
  int v32[4]; // [rsp+50h] [rbp-30h] BYREF
  __int64 Data; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v34[8]; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)v32 = 0LL;
  v31[0] = 0;
  v0 = 0;
  v1 = 0;
  v2 = 0;
  if ( (int)AMLIGetNameSpaceObject("\\_SB", 0LL, (unsigned __int64 *)v32, 0) < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0x1Du,
      (__int64)&WPP_07ea04bf8856319f8bf6d44d5c5f0bbf_Traceguids);
    ACPIInternalError(0x110AB8uLL);
  }
  ACPIInitReferenceDeviceExtension(RootDeviceExtension);
  v3 = *(_QWORD *)v32;
  v4 = *(__int64 **)v32;
  *(_QWORD *)(RootDeviceExtension + 712) = *(_QWORD *)v32;
  AMLISetNSObjectContext(v4, RootDeviceExtension);
  ACPIRootDeviceNotifyPepDiscoverDevice();
  ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice();
  ACPIFixedFeatureButtonInitialize();
  v5 = (__int64 *)AMLIGetParent(v3);
  v6 = AMLIGetNamedChild(v5, 1229867359);
  AMLIDereferenceHandleEx((__int64)v5);
  if ( v6 )
  {
    AMLIAsyncEvalObject(v6, 0LL, 0, 0LL, 0LL, 0LL);
    AMLIDereferenceHandleEx((__int64)v6);
  }
  if ( (AcpiOverrideAttributes & 0x4000) == 0 )
  {
    v32[0] = 0;
    if ( !(unsigned int)ACPIEvaluateOscWheaMethodOnRootBus(v8, v7, v9, v10, (__int64)v32) )
      v1 = 1;
  }
  ACPIPccLegacyInitialize();
  v11 = IsHypervisorLpiCapable();
  HviGetHypervisorFeatures(v32);
  if ( (*(_QWORD *)v32 & 0x100000000000LL) != 0 )
  {
    if ( !(unsigned __int8)IsHypervisorCpcCapable() )
      AcpiRootFeaturesSupported &= 0xFFFFEF9F;
    if ( !v11 )
      AcpiRootFeaturesSupported &= ~1u;
    v31[0] |= 1u;
  }
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v14 = 0;
  v15 = HighestNodeNumber + 1;
  v16 = 0;
  if ( HighestNodeNumber != 0xFFFF )
  {
    do
    {
      KeQueryNodeActiveAffinity(v14, 0LL, Count);
      if ( Count[0] )
        ++v16;
      ++v14;
    }
    while ( v14 < v15 );
    v2 = 0;
    if ( v16 > 1u )
      AcpiRootFeaturesSupported &= ~0x1000u;
  }
  HIDWORD(Handle[0]) = AcpiRootFeaturesSupported;
  LODWORD(Handle[0]) = 0;
  v17 = *(_QWORD *)(RootDeviceExtension + 712);
  *(_OWORD *)v32 = SB_OSC_UUID;
  if ( !(unsigned int)ACPIAmliEvaluateOsc(v17, (int)v32, v13, 2, Handle) )
  {
    v0 = ((unsigned int)AcpiRootFeaturesSupported >> 4) & 1;
    if ( v0 )
      v1 = 1;
    if ( (AcpiRootFeaturesSupported & 0x20) != 0 )
    {
      v2 = 2;
      if ( (AcpiRootFeaturesSupported & 0x40) == 0 )
        v2 = 1;
    }
  }
  v19 = *(_QWORD *)(RootDeviceExtension + 712);
  *(_OWORD *)Handle = SB_OSC_IOV_UUID;
  ACPIAmliEvaluateOsc(v19, (int)Handle, v18, 1, v31);
  Handle[0] = 0LL;
  *(_OWORD *)v32 = SB_OSC_VSM_UUID;
  ACPIAmliEvaluateOsc(*(_QWORD *)(RootDeviceExtension + 712), (int)v32, v20, 2, Handle);
  ACPIWriteOscSupportToRegistry(v1, v0, v2);
  if ( v1 )
  {
    ACPIEvaluateDsmEmcaMethodOnRootBus(v21, &Data);
    Handle[0] = 0LL;
    if ( (int)OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, Handle) >= 0 )
    {
      OSWriteRegValue("EMcaLoggingSupport", Handle[0], &Data, 1u);
      OSWriteRegValue("EMcaL1DirectoryBase", Handle[0], v34, 8u);
      if ( Handle[0] )
        ZwClose(Handle[0]);
    }
  }
  AcpiInterruptCombiningSupported = 0;
  v23 = *((_QWORD *)AcpiInformation + 1);
  v24 = *(_BYTE *)(v23 + 8);
  v25 = v24 <= 6u;
  if ( v24 == 6 )
  {
    if ( *(_BYTE *)(v23 + 131) >= 2u )
      goto LABEL_36;
    v25 = 1;
  }
  if ( !v25 )
  {
LABEL_36:
    AcpiRootFeaturesSupported |= 0x2000u;
    HIDWORD(Handle[0]) = AcpiRootFeaturesSupported;
    v28 = *(_QWORD *)(RootDeviceExtension + 712);
    LODWORD(Handle[0]) = 1;
    *(_OWORD *)v32 = SB_OSC_UUID;
    ACPIAmliEvaluateOsc(v28, (int)v32, v22, 2, Handle);
    AcpiInterruptCombiningSupported = (AcpiRootFeaturesSupported & 0x2000) != 0;
  }
  v26 = (_QWORD *)(RootDeviceExtension + 816);
  *(_QWORD *)(RootDeviceExtension + 824) = RootDeviceExtension + 816;
  *v26 = v26;
  KeInitializeEvent((PRKEVENT)(RootDeviceExtension + 856), SynchronizationEvent, 1u);
  return 0LL;
}
