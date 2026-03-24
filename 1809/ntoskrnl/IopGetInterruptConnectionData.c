/*
 * XREFs of IopGetInterruptConnectionData @ 0x140710D44
 * Callers:
 *     IoConnectInterruptEx @ 0x1407104D0 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x140753480 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectLineBasedInterrupt @ 0x14075A5A0 (IopConnectLineBasedInterrupt.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IoGetDevicePropertyData @ 0x140586930 (IoGetDevicePropertyData.c)
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
