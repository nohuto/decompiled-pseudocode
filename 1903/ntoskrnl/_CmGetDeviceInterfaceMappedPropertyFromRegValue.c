/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140623620
 * Callers:
 *     _CmGetDeviceInterfaceMappedProperty @ 0x140625200 (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x14093BD08 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x1405C2178 (_CmIsDeviceInterfaceEnabled.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1405C273C (_PnpCtxRegQueryValueIndirect.c)
 *     _RegRtlQueryValue @ 0x1405C32E4 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1405C3678 (_SysCtxRegOpenKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14062535C (_CmOpenDeviceInterfaceRegKey.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // rdx
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  NTSTATUS IsDeviceInterfaceEnabled; // ebx
  int v16; // r14d
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  DEVPROPKEY **v19; // r8
  DEVPROPKEY *v20; // r9
  DEVPROPKEY **v21; // r15
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  NTSTATUS ValueIndirect; // edi
  __int64 v27; // rax
  __int64 v28; // rax
  HANDLE v29; // rdx
  int v30; // eax
  __int64 v31; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v32; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  HANDLE v34; // [rsp+58h] [rbp-8h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = 0LL;
  v12 = a6;
  v34 = 0LL;
  *a5 = 0;
  IsDeviceInterfaceEnabled = 0;
  *v10 = 0;
  Handle = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  if ( v12 )
  {
    v16 = a7;
    v12 &= -(__int64)(a7 != 0);
    v11 = 0LL;
  }
  else
  {
    v16 = 0;
  }
  v17 = *(_DWORD *)(a4 + 16);
  if ( v17 < 2 )
    return (unsigned int)-1073741264;
  v18 = 0;
  v19 = &off_1409475D8;
  while ( 1 )
  {
    v20 = *v19;
    v21 = v19;
    if ( v17 == (*v19)->pid )
      break;
LABEL_6:
    ++v18;
    v19 += 2;
    v21 = 0LL;
    if ( v18 >= 3 )
      goto LABEL_11;
  }
  v11 = *(_QWORD *)a4 - *(_QWORD *)&v20->fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&v20->fmtid.Data1 )
    v11 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v20->fmtid.Data4;
  if ( v11 )
  {
    v11 = 0LL;
    goto LABEL_6;
  }
LABEL_11:
  if ( !v21 )
    return (unsigned int)-1073741264;
  if ( a3 )
    goto LABEL_15;
  v22 = CmOpenDeviceInterfaceRegKey(a1, (_DWORD)a2, 48, (_DWORD)v20, 1, v11, (__int64)&v34, v11);
  v11 = 0LL;
  IsDeviceInterfaceEnabled = v22;
  if ( v22 >= 0 )
  {
    v8 = a5;
LABEL_15:
    v23 = *(_DWORD *)(a4 + 16);
    if ( v23 == 2 )
    {
      v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
        v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
      if ( v28 )
        goto LABEL_65;
      v29 = v34;
      if ( a3 )
        v29 = a3;
      if ( a1 )
        v11 = *(_QWORD *)(a1 + 224);
      v30 = SysCtxRegOpenKey(v11, (__int64)v29, (__int64)L"Device Parameters", 0, 1u, (__int64)&v32);
      if ( v30 == -1073741772 || v30 == -1073741444 )
        goto LABEL_55;
      if ( v30 < 0 )
      {
        IsDeviceInterfaceEnabled = v30;
        goto LABEL_27;
      }
      LODWORD(v31) = v16;
      ValueIndirect = PnpCtxRegQueryValueIndirect(a1, (__int64)v32);
      ZwClose(v32);
      if ( ValueIndirect == -1073741772 || ValueIndirect == -1073741444 )
        goto LABEL_55;
      if ( ValueIndirect && ValueIndirect != -1073741789 )
        goto LABEL_60;
      *a8 = v31;
      *a5 = 18;
      if ( ValueIndirect || !v16 )
        IsDeviceInterfaceEnabled = -1073741789;
    }
    else
    {
      if ( v23 != 3 )
      {
        if ( v23 == 256 )
        {
          v24 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
            v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
          if ( !v24 )
          {
            IsDeviceInterfaceEnabled = CmOpenDeviceInterfaceRegKey(
                                         a1,
                                         (_DWORD)a2,
                                         49,
                                         (_DWORD)v20,
                                         1,
                                         v11,
                                         (__int64)&Handle,
                                         v11);
            if ( IsDeviceInterfaceEnabled < 0 )
              goto LABEL_27;
            LODWORD(v31) = v16;
            ValueIndirect = RegRtlQueryValue(
                              Handle,
                              L"DeviceInstance",
                              (_DWORD *)&v31 + 1,
                              (void *)v12,
                              (unsigned int *)&v31);
            ZwClose(Handle);
            if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
            {
              if ( !ValueIndirect || ValueIndirect == -1073741789 )
              {
                *a8 = v31;
                *a5 = 18;
                if ( ValueIndirect || !v16 )
                  IsDeviceInterfaceEnabled = -1073741789;
                goto LABEL_27;
              }
LABEL_60:
              IsDeviceInterfaceEnabled = ValueIndirect;
              goto LABEL_27;
            }
LABEL_55:
            IsDeviceInterfaceEnabled = -1073741275;
            goto LABEL_27;
          }
        }
LABEL_65:
        IsDeviceInterfaceEnabled = -1073741264;
        goto LABEL_27;
      }
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
      if ( v27 )
        goto LABEL_65;
      *a8 = 1;
      *v8 = 17;
      if ( v16 )
      {
        IsDeviceInterfaceEnabled = CmIsDeviceInterfaceEnabled(a1, a2, (__int64)v19, (__int64)&a6);
        if ( IsDeviceInterfaceEnabled >= 0 )
          *(_BYTE *)v12 = -((_BYTE)a6 != 0);
      }
      else
      {
        IsDeviceInterfaceEnabled = -1073741789;
      }
    }
  }
LABEL_27:
  if ( v34 )
    ZwClose(v34);
  return (unsigned int)IsDeviceInterfaceEnabled;
}
