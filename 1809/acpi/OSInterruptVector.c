/*
 * XREFs of OSInterruptVector @ 0x1C00B9728
 * Callers:
 *     ACPIInterruptInitialize @ 0x1C00950E8 (ACPIInterruptInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0094260 (AcpiIrqLibSetupSciInterrupt.c)
 */

NTSTATUS __fastcall OSInterruptVector(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rbx
  int v2; // eax
  int v3; // edi
  struct _DEVICE_OBJECT *v4; // rax
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  int v7; // [rsp+28h] [rbp-60h]
  NTSTATUS v8; // [rsp+28h] [rbp-60h]
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+30h] [rbp-58h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeDpc(
    (PRKDPC)(DeviceExtension + 96),
    (PKDEFERRED_ROUTINE)ACPIInterruptServiceRoutineDPC,
    (PVOID)DeviceExtension);
  v2 = AcpiIrqLibSetupSciInterrupt();
  v3 = v2;
  if ( v2 < 0 )
  {
    v7 = v2;
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0xAu,
      (__int64)&WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids,
      v7);
    return v3;
  }
  else
  {
    Parameters.Version = 2;
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(DeviceExtension + 80);
    v4 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 736);
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    Parameters.FullySpecified.PhysicalDeviceObject = v4;
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ACPIInterruptServiceRoutine;
    *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)DeviceExtension;
    result = IoConnectInterruptEx(&Parameters);
    v6 = result;
    if ( result < 0 )
    {
      v8 = result;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xBu,
        (__int64)&WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids,
        v8);
      return v6;
    }
  }
  return result;
}
