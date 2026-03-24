/*
 * XREFs of KeyboardAddDevice @ 0x1C000D7F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0003200 (memset.c)
 *     KeyboardAddDeviceEx @ 0x1C000DB20 (KeyboardAddDeviceEx.c)
 *     KeyboardQueryDeviceKey @ 0x1C000DEB0 (KeyboardQueryDeviceKey.c)
 *     KbdCreateClassObject @ 0x1C000DFA0 (KbdCreateClassObject.c)
 */

__int64 __fastcall KeyboardAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT PhysicalDeviceObject)
{
  __int64 result; // rax
  char *DeviceExtension; // rbx
  PDEVICE_OBJECT v6; // rax
  NTSTATUS v7; // eax
  PVOID v8; // rdi
  unsigned int v9; // esi
  _DWORD *ErrorLogEntry; // rax
  HANDLE Handle; // [rsp+30h] [rbp-19h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  PVOID P; // [rsp+40h] [rbp-9h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  int v16; // [rsp+C0h] [rbp+77h]
  PDEVICE_OBJECT SourceDevice; // [rsp+C8h] [rbp+7Fh]

  P = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  result = KbdCreateClassObject(DriverObject, 0);
  if ( (int)result >= 0 )
  {
    DeviceExtension = (char *)SourceDevice->DeviceExtension;
    v6 = IoAttachDeviceToDeviceStack(SourceDevice, PhysicalDeviceObject);
    *((_QWORD *)DeviceExtension + 2) = v6;
    if ( v6 )
    {
      *((_QWORD *)DeviceExtension + 3) = PhysicalDeviceObject;
      *((_WORD *)DeviceExtension + 32) = 1;
      *((_DWORD *)DeviceExtension + 47) = 1;
      *((_DWORD *)DeviceExtension + 48) = 1;
      PoSetPowerState(SourceDevice, DevicePowerState, (POWER_STATE)1);
      *(_QWORD *)(DeviceExtension + 284) = 0LL;
      DeviceExtension[362] = 0;
      *((_QWORD *)DeviceExtension + 37) = 0LL;
      DeviceExtension[304] = 0;
      *((_QWORD *)DeviceExtension + 39) = 0LL;
      *((_DWORD *)DeviceExtension + 80) = 0;
      DeviceExtension[66] = 0;
      *((_QWORD *)DeviceExtension + 46) = 0LL;
      *((_DWORD *)DeviceExtension + 94) = 0;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&word_1C000A2C8;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        RtlInitUnicodeString(&DestinationString, L"Parameters");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes) >= 0 )
        {
          if ( (int)KeyboardQueryDeviceKey(Handle) >= 0 )
            DeviceExtension[66] = v16 != 0;
          ZwClose(Handle);
        }
        ZwClose(KeyHandle);
      }
      SourceDevice->Flags |= 0x2000u;
      SourceDevice->Flags &= ~0x80u;
      v7 = IoRegisterDeviceInterface(
             PhysicalDeviceObject,
             &GUID_DEVINTERFACE_KEYBOARD,
             0LL,
             (PUNICODE_STRING)(DeviceExtension + 88));
      v8 = P;
      v9 = v7;
      if ( v7 < 0 )
      {
        IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 2));
        *((_QWORD *)DeviceExtension + 2) = 0LL;
        IoDeleteDevice(SourceDevice);
      }
      else
      {
        v9 = KeyboardAddDeviceEx(DeviceExtension, P, 0LL);
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      return v9;
    }
    else
    {
      ErrorLogEntry = IoAllocateErrorLogEntry(DriverObject, 0x30u);
      if ( ErrorLogEntry )
      {
        ErrorLogEntry[3] = -1073414129;
        *ErrorLogEntry = 0;
        *((_QWORD *)ErrorLogEntry + 3) = 0LL;
        ErrorLogEntry[4] = 0;
        ErrorLogEntry[5] = -1073741667;
        IoWriteErrorLogEntry(ErrorLogEntry);
      }
      IoDeleteDevice(SourceDevice);
      return 3221225629LL;
    }
  }
  return result;
}
