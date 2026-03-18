/*
 * XREFs of ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0053138
 * Callers:
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0051B00 (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0051F28 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0052360 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?ShouldCreateSecure@WDFDEVICE_INIT@@QEAAEXZ @ 0x1C005158C (-ShouldCreateSecure@WDFDEVICE_INIT@@QEAAEXZ.c)
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00920E4 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00C81A0 (WdmlibIoCreateDeviceSecure.c)
 */

NTSTATUS __fastcall FxDevice::CreateDevice(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  NTSTATUS result; // eax
  __int64 DeviceType; // rbx
  unsigned int Exclusive; // edi
  FxString *Sddl; // rdx
  const _UNICODE_STRING *DeviceClassGuid; // rdx
  NTSTATUS v9; // eax
  NTSTATUS v10; // r14d
  _DEVICE_OBJECT *v11; // rbx
  _DEVICE_OBJECT *v12; // rdi
  unsigned __int16 m_ObjectSize; // ax
  char *v14; // rax
  _DEVICE_OBJECT *v15; // rax
  _WDF_DEVICE_IO_TYPE ReadWriteIoType; // ecx
  _DEVICE_OBJECT *pNewDeviceObject; // [rsp+70h] [rbp+8h] BYREF

  result = FxPkgGeneral::Initialize(this->m_PkgGeneral, DeviceInit);
  if ( result >= 0 )
  {
    DeviceType = DeviceInit->DeviceType;
    if ( (unsigned int)DeviceType < 0x3C )
      this->m_DefaultPriorityBoost = FxDevice::m_PriorityBoosts[DeviceType];
    Exclusive = DeviceInit->Characteristics;
    if ( WDFDEVICE_INIT::ShouldCreateSecure(DeviceInit) )
    {
      Sddl = DeviceInit->Security.Sddl;
      if ( Sddl )
        DeviceClassGuid = &Sddl->m_UnicodeString;
      else
        DeviceClassGuid = &SDDL_DEVOBJ_SYS_ALL_ADM_ALL;
      v9 = WdmlibIoCreateDeviceSecure(
             this->m_Driver->m_DriverObject.m_DriverObject,
             (unsigned int)DeviceClassGuid,
             (_UNICODE_STRING *)((__int64)&DeviceInit->DeviceName->m_UnicodeString & -(__int64)(DeviceInit->DeviceName != 0LL)),
             DeviceType,
             Exclusive,
             this->m_Exclusive,
             DeviceClassGuid,
             (const _GUID *)((unsigned __int64)&DeviceInit->Security.DeviceClass & -(__int64)(DeviceInit->Security.DeviceClassSet != 0)),
             &pNewDeviceObject);
    }
    else
    {
      v9 = IoCreateDevice(
             this->m_Driver->m_DriverObject.m_DriverObject,
             0x28u,
             0LL,
             DeviceType,
             Exclusive,
             this->m_Exclusive,
             &pNewDeviceObject);
    }
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = pNewDeviceObject;
      v12 = pNewDeviceObject + 1;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)&pNewDeviceObject[1], this->m_Globals->Tag, 0, 0, 0x20u);
      LODWORD(v12->CurrentIrp) = DeviceInit->RemoveLockOptionFlags | this->m_Globals->RemoveLockOptionFlags;
      m_ObjectSize = this->m_ObjectSize;
      v14 = m_ObjectSize ? (char *)this + m_ObjectSize : 0LL;
      v11->DeviceExtension = v14 + 48;
      v15 = pNewDeviceObject;
      this->m_DeviceObject.m_DeviceObject = pNewDeviceObject;
      if ( !this->m_Filter )
      {
        ReadWriteIoType = DeviceInit->ReadWriteIoType;
        if ( ReadWriteIoType == WdfDeviceIoBuffered )
        {
          v15->Flags |= 4u;
        }
        else if ( ReadWriteIoType == WdfDeviceIoDirect )
        {
          v15->Flags |= 0x10u;
        }
        this->m_ReadWriteIoType = DeviceInit->ReadWriteIoType;
        this->m_PowerPageableCapable = DeviceInit->PowerPageable;
      }
    }
    return v10;
  }
  return result;
}
