/*
 * XREFs of sub_180008A20 @ 0x180008A20
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x180008720 (RtlpMuiRegLoadRegistryInfo.c)
 *     sub_18000EC54 @ 0x18000EC54 (sub_18000EC54.c)
 *     sub_180015318 @ 0x180015318 (sub_180015318.c)
 * Callees:
 *     sub_180005F60 @ 0x180005F60 (sub_180005F60.c)
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 *     sub_180009360 @ 0x180009360 (sub_180009360.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     sub_1800FD0D0 @ 0x1800FD0D0 (sub_1800FD0D0.c)
 *     sub_1800FD168 @ 0x1800FD168 (sub_1800FD168.c)
 *     sub_1800FF0C8 @ 0x1800FF0C8 (sub_1800FF0C8.c)
 */

__int64 __fastcall sub_180008A20(int a1, __int64 *a2, __int64 a3)
{
  void *v6; // r12
  HANDLE v7; // rdi
  int v8; // eax
  NTSTATUS v9; // eax
  int v10; // ebx
  __int64 v11; // rax
  NTSTATUS v13; // eax
  void *v14; // rcx
  HANDLE KeyHandle; // [rsp+28h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+30h] [rbp-50h]
  HANDLE v17; // [rsp+38h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  KeyHandle = 0LL;
  v17 = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 && a3 )
  {
    v6 = (void *)*a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v10 = sub_1800FD168(KeyHandle);
      if ( v10 >= 0 )
      {
LABEL_12:
        v7 = Handle;
        goto LABEL_13;
      }
      if ( a1 == 8 )
        sub_1800FD0D0(KeyHandle);
      ZwClose(KeyHandle);
      KeyHandle = 0LL;
    }
    v8 = sub_180009204(0x2000000u);
    v7 = Handle;
    if ( v8 < 0 )
      v7 = 0LL;
    Handle = v7;
    if ( a1 != 8 )
    {
      if ( a1 == 4 )
      {
        if ( v7 )
        {
          RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
          KeyHandle = 0LL;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = v7;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v13 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        }
        else
        {
          v13 = -1073741772;
        }
        if ( v13 < 0 )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
          KeyHandle = 0LL;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
          v10 = v9;
          if ( v9 < 0 )
          {
LABEL_10:
            if ( v9 == -1073741772 )
              v10 = 0;
            goto LABEL_12;
          }
        }
      }
LABEL_36:
      v10 = sub_1800FF0C8(KeyHandle, a2, a3);
      goto LABEL_12;
    }
    if ( v7 )
    {
      RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
      ObjectAttributes.RootDirectory = v7;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&v17, 0x20019u, &ObjectAttributes) >= 0 )
      {
        v10 = sub_1800FD168(v17);
        if ( v10 >= 0 )
          goto LABEL_12;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      ObjectAttributes.RootDirectory = Handle;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      v10 = v9;
      if ( v9 < 0 )
        goto LABEL_10;
      goto LABEL_36;
    }
    v10 = 0;
  }
  else
  {
    v10 = -1073741811;
  }
LABEL_13:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    v7 = Handle;
  }
  if ( v17 )
  {
    ZwClose(v17);
    v7 = Handle;
  }
  if ( v7 )
    ZwClose(v7);
  if ( v10 >= 0 )
  {
    if ( *a2 )
      return (unsigned int)v10;
    v11 = sub_180009360(1LL);
    *a2 = v11;
    if ( v11 )
      return (unsigned int)v10;
    v10 = -1073741801;
LABEL_43:
    *a2 = (__int64)v6;
    return (unsigned int)v10;
  }
  if ( a2 )
  {
    v14 = (void *)*a2;
    if ( (void *)*a2 != v6 )
    {
      if ( v14 )
        sub_180005F60(v14);
      goto LABEL_43;
    }
  }
  return (unsigned int)v10;
}
