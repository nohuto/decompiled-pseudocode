/*
 * XREFs of PipFindDeviceOverrideEntry @ 0x1406DA434
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x140701018 (PiQueryRemovableDeviceOverride.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlHashUnicodeString @ 0x140599BE0 (RtlHashUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     IopReplaceSeperatorWithPound @ 0x1406DA5C8 (IopReplaceSeperatorWithPound.c)
 *     PipCallbackHasDeviceOverrides @ 0x140823C9C (PipCallbackHasDeviceOverrides.c)
 */

__int64 PipFindDeviceOverrideEntry(_WORD *Src, __int64 a2, __int64 a3, ...)
{
  _WORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v9; // rdi
  const WCHAR *v10; // r15
  NTSTATUS v11; // ebx
  NTSTATUS v12; // eax
  unsigned int v13; // ecx
  const UNICODE_STRING **v14; // r12
  const UNICODE_STRING *i; // r14
  __int64 v16; // rax
  HANDLE v18; // rax
  int v19; // [rsp+20h] [rbp-50h] BYREF
  const wchar_t *v20; // [rsp+28h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+48h] BYREF
  __int64 HashValue; // [rsp+C8h] [rbp+58h] BYREF
  va_list HashValuea; // [rsp+C8h] [rbp+58h]
  va_list va1; // [rsp+D0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(HashValuea, a3);
  HashValue = va_arg(va1, _QWORD);
  v4 = Src;
  Handle = 0LL;
  KeyHandle = 0LL;
  if ( *Src )
  {
    LODWORD(v5) = 0;
    do
    {
      v6 = -1LL;
      do
        ++v6;
      while ( Src[v6] );
      v5 = (unsigned int)(v6 + v5 + 1);
      Src = &v4[v5];
    }
    while ( *Src );
    v7 = v5 + 1;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v7, 0x6E697050u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v4, 2LL * v7);
      v20 = v9;
      LOWORD(v19) = 2 * v7;
      HIWORD(v19) = 2 * v7;
      IopReplaceSeperatorWithPound(&v19, &v19);
      v10 = v9;
      v11 = -1073741772;
      if ( *v9 )
      {
        do
        {
          RtlInitUnicodeString(&DestinationString, v10);
          v12 = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)HashValuea);
          v13 = HashValue;
          v11 = -1073741772;
          if ( v12 < 0 )
            v13 = 0;
          LODWORD(HashValue) = v13;
          v14 = (const UNICODE_STRING **)(PnpDeviceOverrideHashList + 16LL * (v13 % PnpDeviceOverrideHashListSize));
          for ( i = *v14; i != (const UNICODE_STRING *)v14; i = *(const UNICODE_STRING **)&i->Length )
          {
            if ( RtlEqualUnicodeString(&DestinationString, i + 1, 1u) )
            {
              v18 = Handle;
              if ( !Handle )
              {
                v19 = 8781956;
                v20 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DeviceOverrides";
                Handle = 0LL;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                v11 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
                if ( v11 < 0 )
                  goto LABEL_17;
                v18 = Handle;
              }
              ObjectAttributes.RootDirectory = v18;
              KeyHandle = 0LL;
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v11 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
              if ( v11 >= 0 )
              {
                if ( (unsigned __int8)PipCallbackHasDeviceOverrides(KeyHandle, a3) )
                  goto LABEL_15;
                ZwClose(KeyHandle);
                v11 = -1073741772;
              }
              break;
            }
          }
          v16 = -1LL;
          do
            ++v16;
          while ( v10[v16] );
          v10 += v16 + 1;
        }
        while ( *v10 );
LABEL_15:
        if ( v11 >= 0 )
          ZwClose(KeyHandle);
      }
    }
    else
    {
      v11 = -1073741670;
    }
LABEL_17:
    if ( Handle )
      ZwClose(Handle);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v11;
}
