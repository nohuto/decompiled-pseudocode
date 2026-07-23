/*
 * XREFs of PiLastGoodCopyKeyContents @ 0x1409DBBA4
 * Callers:
 *     PpLastGoodDoBootProcessing @ 0x1409DBB04 (PpLastGoodDoBootProcessing.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1401B8550 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x1401B9CB0 (ZwDeleteKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiLastGoodCopyKeyContents(UNICODE_STRING *a1, UNICODE_STRING *a2, char a3)
{
  char *PoolWithTag; // rdi
  NTSTATUS v6; // ebx
  NTSTATUS v8; // eax
  HANDLE v9; // rcx
  NTSTATUS v10; // eax
  ULONG v11; // esi
  HANDLE KeyHandle; // [rsp+48h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES v16; // [rsp+98h] [rbp+17h] BYREF
  ULONG ResultLength; // [rsp+F8h] [rbp+77h] BYREF
  ULONG Disposition; // [rsp+100h] [rbp+7Fh] BYREF

  LOBYTE(ResultLength) = a3;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x418uLL, 0x674C7050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    v16.RootDirectory = 0LL;
    v16.Length = 48;
    v16.Attributes = 576;
    v16.ObjectName = a2;
    *(_OWORD *)&v16.SecurityDescriptor = 0LL;
    v8 = ZwCreateKey(&Handle, 0xF003Fu, &v16, 0, 0LL, 0, &Disposition);
    v9 = KeyHandle;
    v6 = v8;
    if ( v8 >= 0 )
    {
      v10 = ZwEnumerateValueKey(KeyHandle, 0, KeyValueFullInformation, PoolWithTag, 0x418u, &ResultLength);
      v11 = 1;
      if ( v10 < 0 )
      {
LABEL_9:
        v6 = 0;
        if ( v10 != -2147483622 )
          v6 = v10;
        if ( v6 >= 0 )
          ZwDeleteKey(KeyHandle);
      }
      else
      {
        while ( 1 )
        {
          ValueName.Buffer = (wchar_t *)(PoolWithTag + 20);
          ValueName.Length = *((_WORD *)PoolWithTag + 8);
          ValueName.MaximumLength = ValueName.Length;
          v6 = ZwSetValueKey(
                 Handle,
                 &ValueName,
                 0,
                 *((_DWORD *)PoolWithTag + 1),
                 &PoolWithTag[*((unsigned int *)PoolWithTag + 2)],
                 *((_DWORD *)PoolWithTag + 3));
          if ( v6 < 0 )
            break;
          v10 = ZwEnumerateValueKey(KeyHandle, v11++, KeyValueFullInformation, PoolWithTag, 0x418u, &ResultLength);
          if ( v10 < 0 )
            goto LABEL_9;
        }
      }
      ZwClose(KeyHandle);
      v9 = Handle;
    }
    ZwClose(v9);
  }
  ExFreePoolWithTag(PoolWithTag, 0x674C7050u);
  return (unsigned int)v6;
}
