/*
 * XREFs of PiDevCfgEnumDeviceKeys @ 0x14071587C
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x1407153A8 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgResetDeviceKeys @ 0x140869648 (PiDevCfgResetDeviceKeys.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14072D10C (_PnpCtxOpenContextBaseKey.c)
 *     _PnpCtxOpenContextNodeBaseKey @ 0x140933A2C (_PnpCtxOpenContextNodeBaseKey.c)
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
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  __int64 (__fastcall *v32)(__int64, __int64, int *, HANDLE); // [rsp+80h] [rbp-80h]
  void *v33; // [rsp+88h] [rbp-78h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES v35; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v36[76]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v37; // [rsp+13Ch] [rbp+3Ch]

  v7 = &dword_14094967C;
  v32 = a6;
  v8 = a3;
  v30 = a7;
  v33 = a3;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v11 = 0;
  v31 = a1;
  v12 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  v28 = 0LL;
  while ( 1 )
  {
    if ( (a4 & *(v7 - 1)) == 0 )
      goto LABEL_4;
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v7 - 3));
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = v8;
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
                        (__int64)v36,
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
      v37 = 0;
      v19 = (const WCHAR *)v36;
    }
    else
    {
      v19 = *(const WCHAR **)(v7 + 3);
    }
    if ( v19 )
    {
      RtlInitUnicodeString(&DestinationString, v19);
      *(_QWORD *)&v35.Length = 48LL;
      v28 = 0LL;
      v35.RootDirectory = Handle;
      *(_QWORD *)&v35.Attributes = 576LL;
      v35.ObjectName = &DestinationString;
      *(_OWORD *)&v35.SecurityDescriptor = 0LL;
      v21 = ZwOpenKey(&v28, 0xF003Fu, &v35);
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
    v23 = v30;
    v22 = (int)Handle;
    v13 = v32(v31, a2, v7 - 3, KeyHandle);
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
    v8 = v33;
  }
  v11 = DeviceRegProp;
LABEL_6:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return v11;
}
