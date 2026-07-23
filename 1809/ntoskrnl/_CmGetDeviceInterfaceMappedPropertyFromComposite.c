/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14059CAB4
 * Callers:
 *     _CmGetDeviceInterfaceMappedProperty @ 0x14059C38C (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1408FEA50 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14059BDB0 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406D6914 (_CmGetDeviceInterfaceReferenceString.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromComposite(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r15
  _DWORD *v9; // rsi
  __int64 v11; // rbp
  __int64 v12; // r13
  int DeviceInterfaceClassGuid; // ebx
  unsigned int v14; // edi
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v18; // rax
  PVOID PoolWithTag; // rax
  void *v20; // r14
  __int64 v21; // rax
  int ObjectProperty; // eax
  __int64 v23; // rax
  int DeviceInterfaceReferenceString; // eax
  unsigned __int64 v25; // rax

  v8 = a5;
  v9 = a8;
  v11 = a6;
  v12 = a1;
  DeviceInterfaceClassGuid = 0;
  *a5 = 0;
  *v9 = 0;
  if ( v11 )
  {
    v14 = a7;
    a1 = -(__int64)(a7 != 0);
    v11 &= a1;
  }
  else
  {
    v14 = 0;
  }
  v15 = *(_DWORD *)(a4 + 16);
  if ( v15 < 2 )
  {
    return (unsigned int)-1073741264;
  }
  else
  {
    switch ( v15 )
    {
      case 0xAu:
        v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
          v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
        if ( !v21 )
        {
          ObjectProperty = PnpGetObjectProperty(
                             v12,
                             a2,
                             3u,
                             a3,
                             0LL,
                             (__int64)&DEVPKEY_DeviceInterface_FriendlyName,
                             (__int64)v8,
                             v11,
                             v14,
                             (__int64)&a5,
                             0);
          DeviceInterfaceClassGuid = ObjectProperty;
          if ( !ObjectProperty || ObjectProperty == -1073741789 )
            *v9 = (_DWORD)a5;
        }
        break;
      case 4u:
        v16 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1 )
          v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data4;
        if ( !v16 )
        {
          *v9 = 16;
          *v8 = 13;
          if ( v14 < 0x10 )
            DeviceInterfaceClassGuid = -1073741789;
          else
            DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid(a1, a2, (GUID *)v11);
        }
        break;
      case 5u:
        v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ReferenceString.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ReferenceString.fmtid.Data1 )
          v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ReferenceString.fmtid.Data4;
        if ( !v23 )
        {
          DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(a1, a2, v11, v14 >> 1, &a8);
          DeviceInterfaceClassGuid = DeviceInterfaceReferenceString;
          if ( DeviceInterfaceReferenceString == -1073741772 )
          {
            DeviceInterfaceClassGuid = -1073741275;
          }
          else if ( !DeviceInterfaceReferenceString || DeviceInterfaceReferenceString == -1073741789 )
          {
            v25 = 2LL * (unsigned int)a8;
            if ( v25 > 0xFFFFFFFF )
            {
              DeviceInterfaceClassGuid = -1073741595;
            }
            else
            {
              *v9 = v25;
              *v8 = 18;
            }
          }
        }
        break;
      case 2u:
        v18 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
          v18 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
        if ( !v18 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
          v20 = PoolWithTag;
          if ( PoolWithTag )
          {
            DeviceInterfaceClassGuid = PnpGetObjectProperty(
                                         v12,
                                         a2,
                                         3u,
                                         a3,
                                         0LL,
                                         (__int64)&DEVPKEY_Device_InstanceId,
                                         (__int64)&a6,
                                         (__int64)PoolWithTag,
                                         400,
                                         (__int64)&a5,
                                         0);
            if ( DeviceInterfaceClassGuid >= 0 )
            {
              if ( (_DWORD)a6 != 18
                || (DeviceInterfaceClassGuid = PnpGetObjectProperty(
                                                 v12,
                                                 (__int64)v20,
                                                 1u,
                                                 0LL,
                                                 0LL,
                                                 (__int64)&DEVPKEY_Device_ContainerId,
                                                 (__int64)v8,
                                                 v11,
                                                 v14,
                                                 (__int64)&a5,
                                                 0),
                    DeviceInterfaceClassGuid == -1073741772) )
              {
                DeviceInterfaceClassGuid = -1073741275;
              }
            }
            ExFreePoolWithTag(v20, 0);
            if ( !DeviceInterfaceClassGuid || DeviceInterfaceClassGuid == -1073741789 )
              *v9 = (_DWORD)a5;
          }
          else
          {
            DeviceInterfaceClassGuid = -1073741801;
          }
        }
        break;
    }
  }
  return (unsigned int)DeviceInterfaceClassGuid;
}
