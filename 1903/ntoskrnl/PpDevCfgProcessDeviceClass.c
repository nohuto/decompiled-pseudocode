/*
 * XREFs of PpDevCfgProcessDeviceClass @ 0x14086C08C
 * Callers:
 *     PiConfigureDevice @ 0x140874DE4 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x1405BBEC0 (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406A11E8 (RtlStringFromGUIDEx.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406F93F4 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x1406F99E8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FCD34 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgInitDeviceContext @ 0x1406FD444 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1407153A8 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14071CFF8 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x14071D154 (PiDevCfgGetDeviceClassConfigFlags.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceClass(__int64 a1)
{
  wchar_t *Buffer; // r14
  int v3; // edi
  unsigned __int8 v4; // si
  int inited; // ebx
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rdx
  int v9; // eax
  NTSTATUS v10; // eax
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  int P; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+54h] [rbp-B4h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  const wchar_t *v23; // [rsp+80h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  int v25[20]; // [rsp+B8h] [rbp-50h] BYREF
  GUID Guid; // [rsp+108h] [rbp+0h] BYREF

  memset(v25, 0, 0x48uLL);
  v18 = 1;
  Handle = 0LL;
  Buffer = 0LL;
  KeyHandle = 0LL;
  v3 = 0;
  v22 = 0LL;
  v4 = 0;
  v23 = 0LL;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  P = 0;
  v17 = 0LL;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_29;
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v6 )
  {
    inited = -1073741808;
    goto LABEL_29;
  }
  inited = PiDevCfgInitDeviceContext(v6, 0LL, v25);
  if ( inited < 0 )
    goto LABEL_29;
  v7 = *(_QWORD *)&v25[4];
  v8 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&ObjectAttributes.Length = &DEVPKEY_Device_ClassGuid;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&Guid;
  ObjectAttributes.RootDirectory = (HANDLE)13;
  *(_QWORD *)(&ObjectAttributes.Attributes + 1) = 0LL;
  HIDWORD(ObjectAttributes.SecurityDescriptor) = 0;
  ObjectAttributes.Attributes = 16;
  inited = PiDevCfgQueryObjectProperties(1LL, v8, 1u, *(void **)&v25[4], (__int64)&ObjectAttributes, 1u);
  if ( inited < 0 )
    goto LABEL_29;
  if ( SLODWORD(ObjectAttributes.SecurityDescriptor) < 0 )
    goto LABEL_12;
  inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
  if ( inited < 0 )
    goto LABEL_29;
  Buffer = GuidString.Buffer;
  v9 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)GuidString.Buffer, 2u, 131097, 0, (__int64)&Handle);
  inited = v9;
  if ( v9 != -1073741772 )
  {
    if ( v9 < 0 )
      goto LABEL_29;
LABEL_12:
    if ( Handle )
    {
      ObjectAttributes.RootDirectory = Handle;
      v23 = L"Configuration";
      LODWORD(v22) = 1835034;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      inited = v10;
      if ( v10 != -1073741772 )
      {
        if ( v10 < 0 )
          goto LABEL_29;
        inited = PiDevCfgConfigureDeviceKeys(a1, (__int64)v25, KeyHandle, -1, &P, &v17);
        if ( inited < 0 )
          goto LABEL_29;
        v3 = P;
        v4 = v17;
      }
    }
    goto LABEL_17;
  }
  Handle = 0LL;
LABEL_17:
  inited = PiDevCfgConfigureDeviceLocation(a1, (__int64)v25, &P, &v17);
  if ( inited < 0 )
    goto LABEL_29;
  v11 = P | v3;
  if ( (((unsigned __int8)v17 | v4) & 4) == 0 && Buffer && Handle )
  {
    inited = PiDevCfgGetDeviceClassConfigFlags((__int64)Buffer, (__int64)Handle, &P);
    if ( inited < 0 )
      goto LABEL_29;
    v11 |= P;
  }
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    HIDWORD(v17) = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v12,
                v7,
                11,
                (__int64)&v18,
                (__int64)&P,
                (__int64)&v17 + 4,
                0) < 0
      || v18 != 4
      || (v14 = P, HIDWORD(v17) != 4) )
    {
      v14 = 0;
    }
    P = v11 | v14;
    PiDevCfgSetDeviceRegProp(v13, (__int64)v25, 0xBu, 4, (__int64)&P, 4);
  }
LABEL_29:
  RtlFreeAnsiString(&GuidString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  PiDevCfgFreeDeviceContext((__int64)v25);
  return (unsigned int)inited;
}
