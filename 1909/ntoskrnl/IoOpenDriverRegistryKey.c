/*
 * XREFs of IoOpenDriverRegistryKey @ 0x14077F430
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1406D426C (IopApplyMutableTagToRegistryKey.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x1407360F0 (PipOpenServiceEnumKeys.c)
 *     PiCreateDriverRedirectedStateKey @ 0x14077F688 (PiCreateDriverRedirectedStateKey.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140863FE4 (PiAuGetServiceStateSecurityObject.c)
 */

__int64 __fastcall IoOpenDriverRegistryKey(__int64 a1, int a2, ACCESS_MASK a3, int a4, _QWORD *a5)
{
  HANDLE v9; // rsi
  void *v10; // r15
  HANDLE v11; // r14
  __int64 v12; // rax
  int v13; // eax
  NTSTATUS v14; // ebx
  NTSTATUS RegistryValue; // eax
  int DriverRedirectedStateKey; // eax
  HANDLE v17; // rax
  NTSTATUS v19; // eax
  int ServiceStateSecurityObject; // eax
  void *v21; // [rsp+48h] [rbp-21h] BYREF
  void *v22; // [rsp+50h] [rbp-19h]
  HANDLE Handle; // [rsp+58h] [rbp-11h] BYREF
  _DWORD *v24; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+5Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  v9 = 0LL;
  v24 = 0LL;
  v10 = 0LL;
  v22 = 0LL;
  v11 = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  if ( !a1 )
    goto LABEL_42;
  v12 = *(_QWORD *)(a1 + 48);
  if ( !v12 || !*(_QWORD *)(v12 + 32) || !*(_WORD *)(v12 + 24) || a4 || !a5 )
    goto LABEL_42;
  v13 = PipOpenServiceEnumKeys((UNICODE_STRING *)(v12 + 24), 0x2001Du, &Handle, 0LL, 0);
  v11 = Handle;
  v14 = v13;
  if ( v13 < 0 )
    goto LABEL_43;
  RegistryValue = IopGetRegistryValue(Handle, L"Type", 0, &v24);
  v14 = RegistryValue;
  if ( RegistryValue == -1073741772 )
    goto LABEL_42;
  if ( RegistryValue < 0 )
    goto LABEL_43;
  if ( v24[1] != 4 || v24[3] != 4 )
  {
    v14 = -1073741492;
    goto LABEL_43;
  }
  if ( (*(_DWORD *)((char *)v24 + (unsigned int)v24[2]) & 0xB) == 0 )
    goto LABEL_42;
  if ( !a2 )
  {
    if ( (a3 & 0x2000000) != 0 )
      a3 = a3 & 0xFDFDFFE6 | 0x20019;
    if ( (a3 & 0x7FFDFFE6) != 0 )
    {
      v14 = -1073741790;
      goto LABEL_43;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyParametersName;
    ObjectAttributes.RootDirectory = v11;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v19 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
    goto LABEL_35;
  }
  if ( a2 != 1 )
  {
LABEL_42:
    v14 = -1073741811;
    goto LABEL_43;
  }
  DriverRedirectedStateKey = PiCreateDriverRedirectedStateKey((unsigned int)*(_QWORD *)(a1 + 48) + 24);
  v14 = DriverRedirectedStateKey;
  if ( DriverRedirectedStateKey == -1073741772 )
  {
    v9 = v11;
  }
  else
  {
    v9 = v22;
    if ( DriverRedirectedStateKey < 0 )
      goto LABEL_43;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v9;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyPersistentStateName;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  if ( v14 != -1073741772 )
    goto LABEL_18;
  ServiceStateSecurityObject = PiAuGetServiceStateSecurityObject(&v21);
  v10 = v21;
  v14 = ServiceStateSecurityObject;
  if ( ServiceStateSecurityObject < 0 )
    goto LABEL_43;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v9;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyPersistentStateName;
  ObjectAttributes.SecurityDescriptor = v21;
  v19 = ZwCreateKey(&KeyHandle, a3, &ObjectAttributes, 0, 0LL, 0, 0LL);
LABEL_35:
  v14 = v19;
LABEL_18:
  if ( v14 >= 0 )
  {
    v17 = KeyHandle;
    if ( a2 == 1 && KeyHandle )
    {
      IopApplyMutableTagToRegistryKey(KeyHandle);
      v17 = KeyHandle;
    }
    KeyHandle = 0LL;
    *a5 = v17;
    goto LABEL_23;
  }
LABEL_43:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_23:
  if ( v9 && v9 != v11 )
    ZwClose(v9);
  if ( v11 )
    ZwClose(v11);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v14;
}
