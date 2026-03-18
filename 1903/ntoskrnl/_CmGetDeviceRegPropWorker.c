/*
 * XREFs of _CmGetDeviceRegPropWorker @ 0x1405C23C4
 * Callers:
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 * Callees:
 *     _CmDevicePropertyRead @ 0x140002974 (_CmDevicePropertyRead.c)
 *     _MapCmDevicePropertyToNtProperty @ 0x1400029AC (_MapCmDevicePropertyToNtProperty.c)
 *     _MapCmDevicePropertyToRegValue @ 0x140002A10 (_MapCmDevicePropertyToRegValue.c)
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyNExW @ 0x140135360 (RtlStringCbCopyNExW.c)
 *     _MapCmDevicePropertyToRegType @ 0x14013AD90 (_MapCmDevicePropertyToRegType.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     wcschr @ 0x1401A1F20 (wcschr.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     _PnpGetObjectProperty @ 0x1405BC368 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1405C273C (_PnpCtxRegQueryValueIndirect.c)
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1406E9290 (_NtPlugPlayGetDeviceProperty.c)
 *     _CmGetInstallerClassRegProp @ 0x140701190 (_CmGetInstallerClassRegProp.c)
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
  wchar_t *v12; // r12
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
  NTSTATUS DeviceProperty; // eax
  wchar_t *v28; // rax
  __int64 v29; // rax
  HANDLE v30; // r8
  NTSTATUS DeviceRegProp; // eax
  int v32; // ecx
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

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  inited = 0;
  v42 = a3;
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
    v15 = v42;
    v13 = v43;
  }
  switch ( a4 )
  {
    case 23:
      v28 = wcschr(a2, 0x5Cu);
      if ( v28 )
      {
        *a7 = (_DWORD)v28 - (_DWORD)a2 + 2;
        *a5 = 1;
        v29 = (unsigned int)*a7;
        if ( cbDest < (unsigned int)v29 )
          goto LABEL_36;
        InstallerClassRegProp = RtlStringCbCopyNExW(v12, cbDest, a2, v29 - 2, ppszDestEnd, pcbRemaining, dwFlags);
LABEL_46:
        inited = InstallerClassRegProp;
        goto LABEL_26;
      }
LABEL_62:
      inited = -1073741811;
      goto LABEL_26;
    case 8:
      v30 = Handle;
      cbDest_4 = 78;
      if ( v15 )
        v30 = v15;
      DeviceRegProp = CmGetDeviceRegProp(
                        v13,
                        (__int64)a2,
                        (__int64)v30,
                        9,
                        (__int64)&v40,
                        (__int64)v46,
                        (__int64)&cbDest_4,
                        v16);
      inited = DeviceRegProp;
      if ( DeviceRegProp == -1073741789 )
      {
        inited = -1073741595;
        goto LABEL_26;
      }
      if ( DeviceRegProp )
        goto LABEL_26;
      v32 = v43;
      v47 = 0;
      *a7 = cbDest;
      InstallerClassRegProp = CmGetInstallerClassRegProp(
                                v32,
                                (unsigned int)v46,
                                0,
                                8,
                                (__int64)a5,
                                (__int64)v12,
                                (__int64)a7);
      goto LABEL_46;
    case 36:
      v33 = Handle;
      if ( v15 )
        v33 = v15;
      ObjectProperty = PnpGetObjectProperty(
                         v13,
                         (__int64)a2,
                         1LL,
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
    if ( inited < 0 )
      goto LABEL_26;
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
    goto LABEL_46;
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
