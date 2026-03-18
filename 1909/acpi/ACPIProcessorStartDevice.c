/*
 * XREFs of ACPIProcessorStartDevice @ 0x1C0007460
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C00075FC (ACPIInternalSetDeviceInterface.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DBF8 (ACPIThermalAcquireCoolingInterfaces.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001A938 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIInternalEvaluateOST @ 0x1C00568FC (ACPIInternalEvaluateOST.c)
 *     ACPICheckModuleStarted @ 0x1C0058588 (ACPICheckModuleStarted.c)
 *     WPP_RECORDER_SF_ddqss @ 0x1C005CA74 (WPP_RECORDER_SF_ddqss.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C0090694 (ACPIProcessorBuildBootApicIds.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0091424 (ACPIProcessorGetInitialApicId.c)
 */

__int64 __fastcall ACPIProcessorStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  NTSTATUS InitialApicId; // edi
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx
  KIRQL v10; // r8
  __int64 i; // rdx
  __int64 v13; // rax
  void *v14; // rdi
  void *v15; // rdx
  USHORT v16; // ax
  int started; // eax
  __int64 v18; // rdx
  void *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  _QWORD *v22; // rbx
  _QWORD *v23; // rax
  _DWORD v24[4]; // [rsp+50h] [rbp-10h] BYREF
  USHORT NodeNumber; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int Data; // [rsp+A8h] [rbp+48h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = DeviceExtension;
  if ( *((_QWORD *)AcpiInformation + 4) )
  {
    InitialApicId = ACPIProcessorGetInitialApicId(DeviceExtension, &Data);
    if ( InitialApicId < 0 )
      goto LABEL_21;
    v7 = AcpiBootProcessorApicIds == 0;
    *(_DWORD *)(v5 + 192) = Data;
    if ( v7 )
    {
      InitialApicId = ACPIProcessorBuildBootApicIds();
      if ( InitialApicId < 0 )
        goto LABEL_21;
    }
    v24[0] = 0;
    if ( AcpiBootProcessorCount )
    {
      v8 = 0LL;
      while ( *(_DWORD *)(AcpiBootProcessorApicIds + 4 * v8) != Data )
      {
        v8 = (unsigned int)(v8 + 1);
        v24[0] = v8;
        if ( (unsigned int)v8 >= AcpiBootProcessorCount )
          goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      v13 = *(_QWORD *)(v5 + 8);
      if ( (v13 & 0x4000) == 0 )
      {
        v14 = &unk_1C006FE7D;
        v15 = &unk_1C006FE7D;
        if ( (v13 & 0x200000000000LL) != 0 )
          v15 = *(void **)(v5 + 560);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ddqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v15, 0, Data);
        if ( IoGetDeviceNumaNode(PhysicalDeviceObject, &NodeNumber) )
        {
          v16 = -1;
          NodeNumber = -1;
        }
        else
        {
          v16 = NodeNumber;
        }
        started = KeStartDynamicProcessor(*(unsigned int *)(v5 + 196), Data, v16, v24);
        if ( started >= 0 )
        {
          v20 = 0LL;
        }
        else
        {
          v18 = *(_QWORD *)(v5 + 8);
          v19 = &unk_1C006FE7D;
          if ( (v18 & 0x200000000000LL) != 0 )
          {
            v14 = *(void **)(v5 + 560);
            if ( (v18 & 0x400000000000LL) != 0 )
              v19 = *(void **)(v5 + 568);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = 2;
            WPP_RECORDER_SF_Dqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v18,
              1,
              13,
              (__int64)&WPP_72dd1c1115013f02fe06a3c7ab98b878_Traceguids,
              started,
              v5,
              (__int64)v14,
              (__int64)v19);
          }
          v20 = 163LL;
        }
        ACPIInternalEvaluateOST(v5, 0LL, v20);
      }
    }
  }
  else
  {
    Data = -1;
  }
  ACPIThermalAcquireCoolingInterfaces(v5);
  if ( (*(_DWORD *)(v5 + 8) & 0x4000LL) != 0 )
  {
    InitialApicId = IoSetDevicePropertyData(PhysicalDeviceObject, &DEVPKEY_Spare_Processor_Apic_Id, 0, 0, 7u, 4u, &Data);
  }
  else
  {
    InitialApicId = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_PROCESSOR);
    if ( InitialApicId < 0 )
      goto LABEL_21;
  }
  if ( InitialApicId >= 0 )
    *(_DWORD *)(v5 + 320) = 2;
  v9 = *(_QWORD *)(v5 + 744);
  if ( (*(_QWORD *)(v9 + 8) & 0x2000000000LL) != 0 )
    ACPICheckModuleStarted(v9, (unsigned int)InitialApicId);
  v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( !AcpiProcessorContainerHierarchyLocked )
  {
    for ( i = *(_QWORD *)(v5 + 744); i; i = *(_QWORD *)(i + 744) )
    {
      if ( (*(_QWORD *)(i + 952) & 0x8000000000LL) != 0 )
      {
        v21 = i + 216;
        v22 = (_QWORD *)(v5 + 200);
        v23 = *(_QWORD **)(v21 + 8);
        if ( *v23 != v21 )
          __fastfail(3u);
        *v22 = v21;
        v22[1] = v23;
        *v23 = v22;
        *(_QWORD *)(v21 + 8) = v22;
        break;
      }
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
LABEL_21:
  Irp->IoStatus.Status = InitialApicId;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)InitialApicId;
}
