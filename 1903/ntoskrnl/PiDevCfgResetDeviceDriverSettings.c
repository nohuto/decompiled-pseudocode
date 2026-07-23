/*
 * XREFs of PiDevCfgResetDeviceDriverSettings @ 0x140869208
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x14086CB44 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
 *     PnpIsNullGuid @ 0x1405B6094 (PnpIsNullGuid.c)
 *     _PnpOpenObjectRegKey @ 0x1405BBEC0 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x1405BC368 (_PnpGetObjectProperty.c)
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406A11E8 (RtlStringFromGUIDEx.c)
 *     PiDevCfgSetObjectProperty @ 0x140705E2C (PiDevCfgSetObjectProperty.c)
 *     _RegRtlDeleteTreeInternal @ 0x14073A40C (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgResetDeviceKeys @ 0x140869648 (PiDevCfgResetDeviceKeys.c)
 */

__int64 __fastcall PiDevCfgResetDeviceDriverSettings(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, PGUID Guid)
{
  __int64 *v5; // rbx
  __int64 v8; // rdi
  GUID **v9; // rdi
  __int64 v10; // r12
  NTSTATUS v11; // r15d
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  const WCHAR *v17; // rdx
  NTSTATUS v18; // ebx
  const WCHAR *v19; // rdx
  HANDLE v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rbx
  int v27; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+70h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v32; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING GuidString; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v34[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  __int64 Source2; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v40; // [rsp+100h] [rbp+0h]

  v5 = (__int64 *)off_1409ADC60;
  v35 = a4;
  v29 = a1;
  Source2 = 0LL;
  v40 = 0LL;
  Handle = 0LL;
  v8 = 17LL;
  KeyHandle = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v32 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  do
  {
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      (_DWORD *)a2,
      *(_QWORD *)(a2 + 8),
      1u,
      *(_QWORD *)(a2 + 16),
      v27,
      *v5++,
      0,
      0LL,
      0,
      0);
    --v8;
  }
  while ( v8 );
  if ( (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a2 + 8),
              1LL,
              *(_QWORD *)(a2 + 16),
              0LL,
              (__int64)&DEVPKEY_Device_BusTypeGuid,
              (__int64)&v30,
              (__int64)&Source2,
              16,
              (__int64)v34,
              0) < 0
    || v30 != 13 )
  {
    Source2 = 0LL;
    v40 = 0LL;
  }
  v9 = &off_140949898;
  v10 = 2LL;
  v11 = 0;
  do
  {
    v12 = *(v9 - 1);
    if ( !v12 )
    {
      if ( !*v9 || PnpIsNullGuid(&Source2) )
        goto LABEL_36;
      v16 = *(_QWORD *)&(*v9)->Data1 - Source2;
      if ( !v16 )
        v16 = *(_QWORD *)(*v9)->Data4 - v40;
      v15 = v16 == 0;
      goto LABEL_21;
    }
    if ( !a3 )
      goto LABEL_12;
    v13 = *v12 - *a3;
    if ( *v12 == *a3 )
      v13 = v12[1] - a3[1];
    if ( v13 )
    {
LABEL_12:
      if ( !Guid )
        goto LABEL_36;
      v14 = *v12 - *(_QWORD *)&Guid->Data1;
      if ( *v12 == *(_QWORD *)&Guid->Data1 )
        v14 = v12[1] - *(_QWORD *)Guid->Data4;
      v15 = v14 == 0;
LABEL_21:
      if ( !v15 )
        goto LABEL_36;
    }
    if ( (int)CmOpenDeviceRegKey(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a2 + 8),
                *((_DWORD *)v9 + 2),
                0,
                983103,
                1,
                (__int64)&Handle,
                0LL) < 0 )
      goto LABEL_36;
    v17 = (const WCHAR *)v9[2];
    if ( v17 )
    {
      RtlInitUnicodeString(&DestinationString, v17);
      ObjectAttributes.RootDirectory = Handle;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      KeyHandle = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v18 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      ZwClose(Handle);
      if ( v18 < 0 )
        goto LABEL_36;
      Handle = KeyHandle;
    }
    v19 = (const WCHAR *)v9[3];
    if ( v19 )
    {
      v20 = Handle;
      *(_QWORD *)&ValueName.Length = 0LL;
      ValueName.Buffer = 0LL;
      if ( RtlInitUnicodeStringEx(&ValueName, v19) >= 0 )
        ZwDeleteValueKey(v20, &ValueName);
    }
    else if ( v9[2] )
    {
      if ( *(_QWORD *)&PiPnpRtlCtx && (v21 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v22 = *(_QWORD *)(v21 + 8);
      else
        v22 = 0LL;
      RegRtlDeleteTreeInternal((char *)Handle, 0LL, v22, 0);
    }
    ZwClose(Handle);
LABEL_36:
    v9 += 5;
    --v10;
  }
  while ( v10 );
  if ( !Guid )
    goto LABEL_46;
  if ( !a3 )
    goto LABEL_42;
  v23 = *(_QWORD *)&Guid->Data1 - *a3;
  if ( *(_QWORD *)&Guid->Data1 == *a3 )
    v23 = *(_QWORD *)Guid->Data4 - a3[1];
  if ( v23 )
  {
LABEL_42:
    v11 = RtlStringFromGUIDEx(Guid, &GuidString, 1u);
    if ( v11 >= 0 )
    {
      v24 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)GuidString.Buffer, 2u, 131097, 0, (__int64)&v32);
      v25 = v29;
      if ( v24 < 0 )
        goto LABEL_47;
      v11 = PiDevCfgResetDeviceKeys(v29, a2, v32);
      if ( v11 >= 0 )
        goto LABEL_47;
    }
  }
  else
  {
LABEL_46:
    v25 = v29;
LABEL_47:
    if ( a3 && v35 )
      v11 = PiDevCfgResetDeviceKeys(v25, a2, v35);
  }
  RtlFreeAnsiString(&GuidString);
  if ( v32 )
    ZwClose(v32);
  return (unsigned int)v11;
}
