/*
 * XREFs of PiDevCfgEnumDeviceKeys @ 0x1406FB338
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x1406FAEA8 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgResetDeviceKeys @ 0x14082FFDC (PiDevCfgResetDeviceKeys.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140707540 (_PnpCtxOpenContextBaseKey.c)
 *     _PnpCtxOpenContextNodeBaseKey @ 0x1408F703C (_PnpCtxOpenContextNodeBaseKey.c)
 */

__int64 __fastcall PiDevCfgEnumDeviceKeys(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        char a5,
        __int64 (__fastcall *a6)(__int64, __int64, int *, HANDLE),
        __int64 a7)
{
  int *v7; // rsi
  void *v8; // rbx
  unsigned int v11; // edi
  unsigned int v12; // r14d
  NTSTATUS v13; // eax
  int v15; // r8d
  int DeviceRegProp; // ebx
  int v17; // edx
  int v18; // eax
  const WCHAR *v19; // rdx
  __int64 v20; // rdx
  NTSTATUS v21; // eax
  int v22; // [rsp+20h] [rbp-E0h]
  int v23; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v31)(__int64, __int64, int *, HANDLE); // [rsp+70h] [rbp-90h]
  void *v32; // [rsp+78h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v35[76]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v36; // [rsp+10Ch] [rbp+Ch]

  v7 = &dword_14090C25C;
  v31 = a6;
  v8 = a3;
  v29 = a7;
  v32 = a3;
  v30 = a1;
  v11 = 0;
  KeyHandle = 0LL;
  v12 = 0;
  Handle = 0LL;
  v28 = 0LL;
  while ( 1 )
  {
    if ( (a4 & *(v7 - 1)) == 0 )
      goto LABEL_4;
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v7 - 3));
    ObjectAttributes.Length = 48;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v13 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v13 == -1073741772 )
      goto LABEL_4;
    if ( v13 < 0 )
      goto LABEL_26;
    v15 = v7[1];
    if ( v15 )
    {
      DeviceRegProp = CmOpenDeviceRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        *(_QWORD *)(a2 + 8),
                        v15,
                        0,
                        983103,
                        a5,
                        (__int64)&Handle,
                        0LL);
      goto LABEL_14;
    }
    v17 = *v7;
    if ( (MEMORY[0xFFFFF780000002F0] & 0x400) == 0 )
      goto LABEL_20;
    if ( v17 == 4 )
    {
      v17 = 4;
LABEL_20:
      v18 = PnpCtxOpenContextBaseKey(0, v17, 0, 983103, (__int64)&Handle);
      goto LABEL_21;
    }
    if ( v17 == 6 )
      goto LABEL_36;
    v18 = PnpCtxOpenContextNodeBaseKey(0, v17, 0, v17, v22, v23, (__int64)&Handle);
LABEL_21:
    DeviceRegProp = v18;
    if ( v18 < 0 )
      goto LABEL_14;
    if ( *v7 == 7 )
    {
      v20 = *(_QWORD *)(a2 + 8);
      v26 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v20,
                        0LL,
                        9,
                        (__int64)&v27,
                        (__int64)v35,
                        (__int64)&v26,
                        0);
      if ( DeviceRegProp < 0 )
        goto LABEL_14;
      if ( v27 != 1 )
      {
LABEL_36:
        ZwClose(KeyHandle);
        KeyHandle = 0LL;
        goto LABEL_4;
      }
      v36 = 0;
      v19 = (const WCHAR *)v35;
    }
    else
    {
      v19 = *(const WCHAR **)(v7 + 3);
    }
    if ( v19 )
    {
      RtlInitUnicodeString(&DestinationString, v19);
      ObjectAttributes.Length = 48;
      v28 = 0LL;
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v21 = ZwOpenKey(&v28, 0xF003Fu, &ObjectAttributes);
      DeviceRegProp = v21;
      if ( v21 >= 0 )
      {
        ZwClose(Handle);
        Handle = v28;
      }
    }
LABEL_14:
    if ( DeviceRegProp == -1073741772 )
      goto LABEL_36;
    if ( DeviceRegProp < 0 )
      break;
    v23 = v29;
    v22 = (int)Handle;
    v13 = v31(v30, a2, v7 - 3, KeyHandle);
    if ( v13 == -1073741248 )
      goto LABEL_6;
    if ( v13 < 0 )
    {
LABEL_26:
      v11 = v13;
      goto LABEL_6;
    }
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
    ZwClose(Handle);
    Handle = 0LL;
LABEL_4:
    ++v12;
    v7 += 8;
    if ( v12 >= 7 )
      goto LABEL_6;
    v8 = v32;
  }
  v11 = DeviceRegProp;
LABEL_6:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return v11;
}
