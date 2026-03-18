/*
 * XREFs of IopGetInterruptConnectionData @ 0x14073F934
 * Callers:
 *     IoConnectInterruptEx @ 0x140741210 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x140779928 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectLineBasedInterrupt @ 0x1407814E8 (IopConnectLineBasedInterrupt.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoGetDevicePropertyData @ 0x140623060 (IoGetDevicePropertyData.c)
 */

NTSTATUS __fastcall IopGetInterruptConnectionData(PDEVICE_OBJECT Pdo, _QWORD *a2)
{
  NTSTATUS result; // eax
  _DWORD *Data; // rbx
  NTSTATUS DevicePropertyData; // edi
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF
  ULONG Type; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0LL;
  result = IoGetDevicePropertyData(Pdo, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0, 0LL, (PULONG)&NumberOfBytes, &Type);
  if ( result == -1073741789 && (unsigned int)NumberOfBytes >= 0x60 )
  {
    Data = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6F697050u);
    if ( !Data )
      return -1073741670;
    DevicePropertyData = IoGetDevicePropertyData(
                           Pdo,
                           &INTERRUPT_CONNECTION_DATA_PKEY,
                           0,
                           0,
                           NumberOfBytes,
                           Data,
                           (PULONG)&NumberOfBytes,
                           &Type);
    if ( DevicePropertyData >= 0 )
    {
      if ( (unsigned int)NumberOfBytes >= 88 * *Data + 8 )
      {
        *a2 = Data;
        return DevicePropertyData;
      }
      DevicePropertyData = -1073741762;
    }
    ExFreePoolWithTag(Data, 0);
    return DevicePropertyData;
  }
  return result;
}
