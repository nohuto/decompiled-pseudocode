/*
 * XREFs of PiGetDeviceRegistryProperty @ 0x140825918
 * Callers:
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     wcsstr @ 0x140197A90 (wcsstr.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpFindAlternateStringData @ 0x140588E34 (PnpFindAlternateStringData.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1406EC740 (PnpDeviceObjectToDeviceInstance.c)
 *     RtlFormatMessageEx @ 0x1408925F4 (RtlFormatMessageEx.c)
 */

__int64 __fastcall PiGetDeviceRegistryProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, WCHAR *a5, ULONG *a6)
{
  va_list v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  int RegistryValue; // ebx
  _DWORD *v10; // rdi
  ULONG v11; // esi
  wchar_t *v12; // r14
  wchar_t *v13; // r15
  wchar_t *v14; // rax
  __int64 v15; // rcx
  const wchar_t *v16; // rcx
  unsigned int i; // r13d
  va_list v18; // rax
  __int64 v19; // rcx
  wchar_t *v20; // rax
  char v21; // cl
  PULONG v22; // r13
  _PARSE_MESSAGE_CONTEXT *v24; // [rsp+48h] [rbp-B8h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  size_t Size; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *Str; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  PWSTR Buffer; // [rsp+80h] [rbp-80h]
  PULONG ReturnLength; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  va_list Arguments[20]; // [rsp+D0h] [rbp-30h] BYREF

  Buffer = a5;
  v7 = 0LL;
  ReturnLength = a6;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  Str = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  RegistryValue = PnpDeviceObjectToDeviceInstance(a1, (__int64)&Handle, 131097);
  if ( RegistryValue >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LogConf");
    ObjectAttributes.RootDirectory = Handle;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RegistryValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( RegistryValue >= 0 )
    {
      ZwClose(Handle);
      Handle = KeyHandle;
      RegistryValue = IopGetRegistryValue(KeyHandle, L"BootConfig", 320, &P);
    }
    ZwClose(Handle);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( RegistryValue >= 0 )
  {
    v10 = P;
    v11 = *((_DWORD *)P + 3);
    v12 = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
    if ( *((_DWORD *)P + 1) == 1
      && (unsigned int)PnpFindAlternateStringData((char *)P + *((unsigned int *)P + 2), v11, &Str, &Size) )
    {
      v13 = Str;
      v11 = Size;
      v12 = Str;
      v14 = wcsstr(Str, L";(");
      v7 = (va_list)v14;
      if ( v14 && (v15 = (v11 >> 1) - 2, v13[v15] == 41) )
      {
        *v14 = 0;
        v7 = (va_list)(v14 + 2);
        v13[v15] = 0;
        memset(Arguments, 0, sizeof(Arguments));
        v16 = (const wchar_t *)v7;
        Arguments[0] = v7;
        for ( i = 1; ; ++i )
        {
          v20 = wcschr(v16, 0x2Cu);
          if ( !v20 )
          {
            v21 = 0;
            goto LABEL_15;
          }
          *v20 = 0;
          v18 = (va_list)(v20 + 1);
          if ( i >= 0x13 )
            break;
          v19 = i;
          Arguments[v19] = v18;
          v16 = (const wchar_t *)v18;
        }
        v21 = 1;
      }
      else
      {
        v21 = 0;
      }
    }
    else
    {
      v13 = Str;
      v21 = 0;
    }
LABEL_15:
    v22 = ReturnLength;
    if ( *ReturnLength < v11 )
    {
      RegistryValue = -1073741789;
    }
    else if ( v10[1] == 8 )
    {
      if ( v7 )
      {
        if ( v21 )
          RegistryValue = -1073741619;
        else
          RegistryValue = RtlFormatMessageEx(v13, 0, 0, 0, 1u, Arguments, Buffer, *ReturnLength, ReturnLength, v24);
      }
      else
      {
        memmove(Buffer, v12, v11);
      }
    }
    else
    {
      RegistryValue = -1073741584;
    }
    *v22 = v11;
    ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)RegistryValue;
}
