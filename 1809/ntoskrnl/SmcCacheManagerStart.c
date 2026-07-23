/*
 * XREFs of SmcCacheManagerStart @ 0x1408AFD60
 * Callers:
 *     SmcCacheCreatePrepare @ 0x1408ACE9C (SmcCacheCreatePrepare.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     SmKmKeyGenStart @ 0x1408AE54C (SmKmKeyGenStart.c)
 *     SmpUtilsGetControlDevice @ 0x1408B0E8C (SmpUtilsGetControlDevice.c)
 */

int __fastcall SmcCacheManagerStart(__int64 a1, __int64 a2)
{
  int *v2; // rbx
  unsigned int i; // edi
  int v6; // eax
  int result; // eax
  __int64 v8; // rcx
  const wchar_t *v9; // rax
  const wchar_t *v10; // rcx
  __int64 v11; // rax
  struct _UNICODE_STRING v12; // [rsp+40h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-48h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+18h] BYREF

  v2 = (int *)&unk_14055C110;
  for ( i = 0; i < 2; ++i )
  {
    v6 = *v2;
    if ( (*v2 & 1) == 0 )
    {
      if ( !i )
      {
        result = SmpUtilsGetControlDevice(a1, v2 + 2, v2 + 4);
        if ( result < 0 )
          return result;
        v6 = *v2;
      }
      *v2 = v6 | 1;
    }
    v2 += 6;
  }
  *(_QWORD *)&v12.Length = 0LL;
  v12.Buffer = 0LL;
  v8 = 0x7FFFLL;
  v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
  while ( *v9 )
  {
    ++v9;
    if ( !--v8 )
      goto LABEL_13;
  }
  v12.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
  v12.Length = 2 * (0x7FFF - v8);
  v12.MaximumLength = v12.Length + 2;
LABEL_13:
  ObjectAttributes.ObjectName = &v12;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    ZwClose(KeyHandle);
    *(_QWORD *)&v12.Length = 0LL;
    v10 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters\\CacheInfo";
    v12.Buffer = 0LL;
    v11 = 0x7FFFLL;
    while ( *v10 )
    {
      ++v10;
      if ( !--v11 )
        goto LABEL_19;
    }
    v12.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParam"
                  "eters\\CacheInfo";
    v12.Length = 2 * (0x7FFF - v11);
    v12.MaximumLength = v12.Length + 2;
LABEL_19:
    result = SmKmKeyGenStart(a1 + 512, &v12);
    if ( result >= 0 )
    {
      *(_QWORD *)(a1 + 552) = a2;
      return 0;
    }
  }
  return result;
}
