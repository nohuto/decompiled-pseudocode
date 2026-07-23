/*
 * XREFs of IoOpenDriverRegistryKey @ 0x140758110
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x14070A7D4 (PipOpenServiceEnumKeys.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407583E8 (PiCreateDriverRedirectedStateKey.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14082B350 (PiAuGetServiceStateSecurityObject.c)
 */

__int64 __fastcall IoOpenDriverRegistryKey(__int64 a1, int a2, ACCESS_MASK a3, int a4, _QWORD *a5)
{
  PVOID v7; // rsi
  HANDLE v8; // r14
  void *v9; // r13
  HANDLE v10; // r15
  __int64 v11; // rax
  int v12; // eax
  NTSTATUS v13; // ebx
  NTSTATUS RegistryValue; // eax
  int DriverRedirectedStateKey; // eax
  NTSTATUS v16; // eax
  int ServiceStateSecurityObject; // eax
  HANDLE v18; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp-31h] BYREF
  PVOID P; // [rsp+50h] [rbp-29h] BYREF
  void *v22; // [rsp+58h] [rbp-21h] BYREF
  void *v23; // [rsp+60h] [rbp-19h]
  HANDLE Handle; // [rsp+68h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF

  KeyHandle = 0LL;
  P = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  v8 = 0LL;
  v22 = 0LL;
  v9 = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  if ( !a1 )
    goto LABEL_31;
  v11 = *(_QWORD *)(a1 + 48);
  if ( !v11 || !*(_QWORD *)(v11 + 32) || !*(_WORD *)(v11 + 24) || a4 || !a5 )
    goto LABEL_31;
  v12 = PipOpenServiceEnumKeys((UNICODE_STRING *)(v11 + 24), 0x2001Du, &Handle, 0LL, 0);
  v10 = Handle;
  v13 = v12;
  if ( v12 < 0 )
    goto LABEL_34;
  RegistryValue = IopGetRegistryValue(Handle, L"Type", 0, &P);
  v7 = P;
  v13 = RegistryValue;
  if ( RegistryValue == -1073741772 )
    goto LABEL_31;
  if ( RegistryValue < 0 )
    goto LABEL_32;
  if ( *((_DWORD *)P + 1) != 4 || *((_DWORD *)P + 3) != 4 )
  {
    v13 = -1073741492;
    goto LABEL_32;
  }
  if ( (*(_DWORD *)((_BYTE *)P + *((unsigned int *)P + 2)) & 0xB) == 0 )
    goto LABEL_31;
  if ( !a2 )
  {
    if ( (a3 & 0x2000000) != 0 )
      a3 = a3 & 0xFDFDFFE6 | 0x20019;
    if ( (a3 & 0x7FFDFFE6) == 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyParametersName;
      ObjectAttributes.RootDirectory = v10;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v13 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
      goto LABEL_28;
    }
    v13 = -1073741790;
    goto LABEL_32;
  }
  if ( a2 != 1 )
  {
LABEL_31:
    v13 = -1073741811;
    goto LABEL_32;
  }
  DriverRedirectedStateKey = PiCreateDriverRedirectedStateKey((unsigned int)*(_QWORD *)(a1 + 48) + 24);
  v13 = DriverRedirectedStateKey;
  if ( DriverRedirectedStateKey == -1073741772 )
  {
    v8 = v10;
  }
  else
  {
    v8 = v23;
    if ( DriverRedirectedStateKey < 0 )
      goto LABEL_32;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyPersistentStateName;
  ObjectAttributes.RootDirectory = v8;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  v13 = v16;
  if ( v16 == -1073741772 )
  {
    ServiceStateSecurityObject = PiAuGetServiceStateSecurityObject(&v22);
    v9 = v22;
    v13 = ServiceStateSecurityObject;
    if ( ServiceStateSecurityObject < 0 )
      goto LABEL_32;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyPersistentStateName;
    ObjectAttributes.SecurityDescriptor = v22;
    v16 = ZwCreateKey(&KeyHandle, a3, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v13 = v16;
  }
  if ( v16 >= 0 )
  {
LABEL_28:
    if ( v13 >= 0 )
    {
      v18 = KeyHandle;
      KeyHandle = 0LL;
      *a5 = v18;
    }
  }
LABEL_32:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_34:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v8 && v8 != v10 )
    ZwClose(v8);
  if ( v10 )
    ZwClose(v10);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v13;
}
