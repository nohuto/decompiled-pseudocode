/*
 * XREFs of _CmGetDeviceRegPropWorker @ 0x1405C7B1C
 * Callers:
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 * Callees:
 *     _CmDevicePropertyRead @ 0x140015BB4 (_CmDevicePropertyRead.c)
 *     _MapCmDevicePropertyToNtProperty @ 0x140015BEC (_MapCmDevicePropertyToNtProperty.c)
 *     _MapCmDevicePropertyToRegValue @ 0x140015C50 (_MapCmDevicePropertyToRegValue.c)
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyNExW @ 0x140133530 (RtlStringCbCopyNExW.c)
 *     _MapCmDevicePropertyToRegType @ 0x140138648 (_MapCmDevicePropertyToRegType.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1405C7E94 (_PnpCtxRegQueryValueIndirect.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1406C8EEC (_NtPlugPlayGetDeviceProperty.c)
 *     _CmGetInstallerClassRegProp @ 0x1406F24D4 (_CmGetInstallerClassRegProp.c)
 */

__int64 __fastcall CmGetDeviceRegPropWorker(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        int *a7,
        __int16 a8)
{
  NTSTATUS inited; // ebx
  int v11; // r14d
  wchar_t *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r8
  void *v15; // r10
  __int64 v16; // r11
  int v17; // eax
  __int64 v18; // rcx
  const wchar_t *v19; // rax
  int v20; // ecx
  __int64 v21; // r10
  __int64 v22; // r11
  int v23; // edx
  NTSTATUS InstallerClassRegProp; // eax
  int v25; // edx
  HANDLE v27; // r8
  NTSTATUS DeviceRegProp; // eax
  int v29; // ecx
  NTSTATUS DeviceProperty; // eax
  wchar_t *v31; // rax
  __int64 v32; // rax
  HANDLE v33; // r9
  NTSTATUS ObjectProperty; // eax
  NTSTRSAFE_PWSTR *ppszDestEnd; // [rsp+20h] [rbp-E0h]
  size_t *pcbRemaining; // [rsp+28h] [rbp-D8h]
  ULONG dwFlags; // [rsp+30h] [rbp-D0h]
  unsigned int cbDest; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int cbDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  int v40; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  void *v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  char v44[8]; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v46[76]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v47; // [rsp+ECh] [rbp-14h]

  v42 = a3;
  inited = 0;
  v43 = a1;
  Handle = 0LL;
  v40 = 0;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
    goto LABEL_62;
  v11 = *a7;
  if ( *a7 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
  }
  *a7 = 0;
  cbDest = v11;
  *a5 = 0;
  v12 = (wchar_t *)(a6 & -(__int64)(v11 != 0));
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmDevicePropertyRead(a1, a4) )
    return (unsigned int)-1073741264;
  if ( !v14 )
  {
    v17 = CmOpenDeviceRegKey(v13, (_DWORD)a2, 16, 0, 33554433, v16, (__int64)&Handle, v16);
    v16 = 0LL;
    inited = v17;
    if ( v17 < 0 )
      goto LABEL_26;
    v11 = cbDest;
    v13 = v43;
    v15 = v42;
  }
  switch ( a4 )
  {
    case 8:
      v27 = Handle;
      cbDest_4 = 78;
      if ( v15 )
        v27 = v15;
      v40 = v16;
      DeviceRegProp = CmGetDeviceRegProp(
                        v13,
                        (__int64)a2,
                        (__int64)v27,
                        9,
                        (__int64)&v40,
                        (__int64)v46,
                        (__int64)&cbDest_4,
                        v16);
      inited = DeviceRegProp;
      if ( DeviceRegProp != -1073741789 )
      {
        if ( DeviceRegProp )
          goto LABEL_26;
        v29 = v43;
        v47 = 0;
        *a7 = cbDest;
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  v29,
                                  (unsigned int)v46,
                                  0,
                                  8,
                                  (__int64)a5,
                                  (__int64)v12,
                                  (__int64)a7);
        goto LABEL_44;
      }
      inited = -1073741595;
      goto LABEL_26;
    case 23:
      v31 = wcschr(a2, 0x5Cu);
      if ( v31 )
      {
        *a7 = (_DWORD)v31 - (_DWORD)a2 + 2;
        *a5 = 1;
        v32 = (unsigned int)*a7;
        if ( cbDest >= (unsigned int)v32 )
        {
          InstallerClassRegProp = RtlStringCbCopyNExW(v12, cbDest, a2, v32 - 2, ppszDestEnd, pcbRemaining, dwFlags);
LABEL_44:
          inited = InstallerClassRegProp;
          goto LABEL_26;
        }
        goto LABEL_36;
      }
LABEL_62:
      inited = -1073741811;
      goto LABEL_26;
    case 36:
      v33 = Handle;
      if ( v15 )
        v33 = v15;
      ObjectProperty = PnpGetObjectProperty(
                         v13,
                         (__int64)a2,
                         1u,
                         (__int64)v33,
                         v16,
                         (__int64)&DEVPKEY_Device_LocationPaths,
                         (__int64)v44,
                         (__int64)v12,
                         v11,
                         (__int64)a7,
                         v16);
      *a5 = 7;
      inited = ObjectProperty;
      if ( ObjectProperty != -1073741772 )
        goto LABEL_26;
      goto LABEL_29;
  }
  LODWORD(v42) = MapCmDevicePropertyToNtProperty(v13, a4);
  if ( (_DWORD)v42 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited >= 0 )
    {
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v43,
                         (unsigned int)&DestinationString,
                         (_DWORD)v42,
                         (_DWORD)v12,
                         v11,
                         (__int64)&cbDest);
      inited = DeviceProperty;
      if ( DeviceProperty != -1073741772 )
      {
        if ( (int)(DeviceProperty + 0x80000000) < 0 || DeviceProperty == -1073741789 )
        {
          *a7 = cbDest;
          *a5 = MapCmDevicePropertyToRegType(a4);
        }
        goto LABEL_26;
      }
      goto LABEL_29;
    }
    goto LABEL_26;
  }
  v19 = MapCmDevicePropertyToRegValue(v18, a4);
  if ( !v19 )
  {
    inited = -1073741264;
    goto LABEL_26;
  }
  v23 = (int)Handle;
  cbDest_4 = v11;
  if ( v21 )
    v23 = v21;
  InstallerClassRegProp = PnpCtxRegQueryValueIndirect(
                            v20,
                            v23,
                            (_DWORD)v19,
                            (unsigned int)&v40,
                            (__int64)v12,
                            (__int64)&cbDest_4,
                            v22);
  if ( InstallerClassRegProp == -1073741772 || InstallerClassRegProp == -1073741444 )
    goto LABEL_29;
  if ( (int)(InstallerClassRegProp + 0x80000000) >= 0 && InstallerClassRegProp != -1073741789 )
    goto LABEL_44;
  if ( (v25 = v40, v40 == 1) && cbDest_4 < 2 || cbDest_4 < 2 && v40 == 7 || v40 == 4 && cbDest_4 != 4 )
  {
LABEL_29:
    inited = -1073741275;
    goto LABEL_26;
  }
  *a7 = cbDest_4;
  *a5 = v25;
  if ( InstallerClassRegProp || !cbDest )
LABEL_36:
    inited = -1073741789;
LABEL_26:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
