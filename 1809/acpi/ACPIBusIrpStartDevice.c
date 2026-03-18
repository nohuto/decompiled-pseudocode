/*
 * XREFs of ACPIBusIrpStartDevice @ 0x1C008E9D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C000D6A8 (ACPIInitStartDevice.c)
 *     ACPIModuleFilterStartResources @ 0x1C004C338 (ACPIModuleFilterStartResources.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C0054A28 (ACPIQueryGedDeviceInterface.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C008E1FC (PcisuppAcquirePciInterfaces.c)
 *     AcpiArblibCommitResources @ 0x1C00A93AC (AcpiArblibCommitResources.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00B3640 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00B383C (ArbAddMmConfigRangeAsBootReserved.c)
 */

int __fastcall ACPIBusIrpStartDevice(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v2; // rbp
  __int64 StartContext; // rbx
  int result; // eax
  int v7; // eax
  __int64 v8; // r13
  _QWORD *v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rax
  PKSTART_ROUTINE StartRoutine; // [rsp+28h] [rbp-80h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-68h] BYREF
  void *ThreadHandle; // [rsp+B8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  StartContext = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  if ( (*(_DWORD *)(StartContext + 8) & 0x2000000) != 0 )
  {
    result = PcisuppAcquirePciInterfaces(DeviceObject);
    if ( result < 0 )
      return result;
    if ( !*(_QWORD *)(StartContext + 296) )
    {
      KeInitializeEvent((PRKEVENT)(StartContext + 248), SynchronizationEvent, 0);
      KeInitializeEvent((PRKEVENT)(StartContext + 272), SynchronizationEvent, 0);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = PsCreateSystemThread(
                 &ThreadHandle,
                 0,
                 &ObjectAttributes,
                 0LL,
                 0LL,
                 (PKSTART_ROUTINE)PciRootBusBiosMethodDispatcherOnResume,
                 (PVOID)StartContext);
      if ( result < 0 )
        return result;
      ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      *(_QWORD *)(StartContext + 296) = Object;
      ZwClose(ThreadHandle);
    }
  }
  if ( (*(_QWORD *)(StartContext + 952) & 0x4000000000LL) != 0 )
  {
    v7 = ACPIQueryGedDeviceInterface((_QWORD *)StartContext);
    if ( v7 < 0 )
    {
      LODWORD(StartRoutine) = v7;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        8u,
        0x3Bu,
        (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
        StartRoutine);
    }
  }
  if ( (*(_QWORD *)(StartContext + 8) & 0x2000000000LL) != 0 && *(_BYTE *)(StartContext + 184) )
  {
    ACPIModuleFilterStartResources(0x2000000000LL, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
    v8 = *(_QWORD *)(v2 + 8);
    v9 = (_QWORD *)(StartContext + 192);
    v10 = 0;
    while ( 1 )
    {
      v11 = *v9;
      result = AcpiArblibCommitResources(*v9, v8);
      if ( result < 0 )
        break;
      if ( *(_DWORD *)(v11 + 168) == 3 )
      {
        result = ArbAddInaccessibleAllocationRange(v11 + 136, *(_QWORD *)(v11 + 176));
        if ( result < 0 )
          break;
        result = ArbAddMmConfigRangeAsBootReserved(v11 + 136, *(_QWORD *)(v11 + 176));
        if ( result < 0 )
          break;
      }
      v12 = *v9;
      ++v10;
      ++v9;
      *(_BYTE *)(v12 + 130) = 1;
      if ( v10 >= 3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    result = ACPIInitStartDevice(
               (ULONG_PTR)DeviceObject,
               v2,
               (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPIBusIrpStartDeviceCompletion,
               a2,
               a2);
    if ( result >= 0 )
      return 259;
  }
  return result;
}
