/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x14059FE90
 * Callers:
 *     _CmGetDeviceInterfaceMappedProperty @ 0x14059C38C (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1408FEA50 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14059C4E8 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x1405C67EC (_CmIsDeviceInterfaceEnabled.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1405C7E94 (_PnpCtxRegQueryValueIndirect.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // rdx
  _DWORD *v10; // rax
  _DWORD *v11; // rcx
  __int64 v12; // r12
  int IsDeviceInterfaceEnabled; // ebx
  int v16; // r14d
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  DEVPROPKEY **v19; // r8
  DEVPROPKEY *v20; // r9
  DEVPROPKEY **v21; // r15
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  int ValueIndirect; // edi
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // edx
  int v30; // eax
  _DWORD *v31; // rax
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v33; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  HANDLE v35; // [rsp+58h] [rbp-8h] BYREF
  char v37; // [rsp+B8h] [rbp+58h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = 0LL;
  v12 = a6;
  v35 = 0LL;
  *a5 = 0;
  IsDeviceInterfaceEnabled = 0;
  *v10 = 0;
  Handle = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v37 = 0;
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
  v19 = &off_14090A1B8;
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
  v11 = (_DWORD *)(*(_QWORD *)a4 - *(_QWORD *)&v20->fmtid.Data1);
  if ( *(_QWORD *)a4 == *(_QWORD *)&v20->fmtid.Data1 )
    v11 = (_DWORD *)(*(_QWORD *)(a4 + 8) - *(_QWORD *)v20->fmtid.Data4);
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
  v22 = CmOpenDeviceInterfaceRegKey(a1, a2, 0x30u, (__int64)v20, 1, (char)v11, (__int64)&v35, v11);
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
        goto LABEL_66;
      v29 = (int)v35;
      if ( a3 )
        v29 = a3;
      if ( a1 )
        v11 = *(_DWORD **)(a1 + 224);
      v30 = SysCtxRegOpenKey((_DWORD)v11, v29, (unsigned int)L"Device Parameters", 0, 1, (__int64)&v33);
      if ( v30 == -1073741772 || v30 == -1073741444 )
        goto LABEL_56;
      if ( v30 < 0 )
      {
        IsDeviceInterfaceEnabled = v30;
        goto LABEL_27;
      }
      LODWORD(v32) = v16;
      ValueIndirect = PnpCtxRegQueryValueIndirect(
                        a1,
                        (_DWORD)v33,
                        (unsigned int)L"FriendlyName",
                        (unsigned int)&v32 + 4,
                        v12,
                        (__int64)&v32,
                        (__int64)&v37);
      ZwClose(v33);
      if ( ValueIndirect == -1073741772 || ValueIndirect == -1073741444 )
        goto LABEL_56;
      if ( ValueIndirect && ValueIndirect != -1073741789 )
        goto LABEL_61;
      *a8 = v32;
      v31 = a5;
      *a5 = 18;
      if ( ValueIndirect || !v16 )
        IsDeviceInterfaceEnabled = -1073741789;
      if ( v37 )
        *v31 = 25;
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
                                         a2,
                                         0x31u,
                                         (__int64)v20,
                                         1,
                                         (char)v11,
                                         (__int64)&Handle,
                                         v11);
            if ( IsDeviceInterfaceEnabled < 0 )
              goto LABEL_27;
            LODWORD(v32) = v16;
            ValueIndirect = RegRtlQueryValue(Handle, (__int64)&v32);
            ZwClose(Handle);
            if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
            {
              if ( !ValueIndirect || ValueIndirect == -1073741789 )
              {
                *a8 = v32;
                *a5 = 18;
                if ( ValueIndirect || !v16 )
                  IsDeviceInterfaceEnabled = -1073741789;
                goto LABEL_27;
              }
LABEL_61:
              IsDeviceInterfaceEnabled = ValueIndirect;
              goto LABEL_27;
            }
LABEL_56:
            IsDeviceInterfaceEnabled = -1073741275;
            goto LABEL_27;
          }
        }
LABEL_66:
        IsDeviceInterfaceEnabled = -1073741264;
        goto LABEL_27;
      }
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
      if ( v27 )
        goto LABEL_66;
      *a8 = 1;
      *v8 = 17;
      if ( v16 )
      {
        IsDeviceInterfaceEnabled = CmIsDeviceInterfaceEnabled(a1, a2, v19, &a6);
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
  if ( v35 )
    ZwClose(v35);
  return (unsigned int)IsDeviceInterfaceEnabled;
}
