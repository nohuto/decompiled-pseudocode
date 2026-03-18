/*
 * XREFs of SmcCacheManagerStart @ 0x1408EBB24
 * Callers:
 *     SmcCacheCreatePrepare @ 0x1408E8CFC (SmcCacheCreatePrepare.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SmKmKeyGenStart @ 0x1408EA240 (SmKmKeyGenStart.c)
 *     SmpUtilsGetControlDevice @ 0x1408ECC8C (SmpUtilsGetControlDevice.c)
 */

int __fastcall SmcCacheManagerStart(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int *v5; // rbx
  unsigned int i; // edi
  int v7; // eax
  int result; // eax
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  __int16 v11; // ax
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  __int16 v14; // bx
  struct _UNICODE_STRING v15; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+40h] BYREF

  *(_QWORD *)&v15.Length = 0LL;
  v15.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v5 = (int *)&unk_14058C110;
  for ( i = 0; i < 2; ++i )
  {
    v7 = *v5;
    if ( (*v5 & 1) == 0 )
    {
      if ( !i )
      {
        result = SmpUtilsGetControlDevice(v4, v5 + 2, v5 + 4);
        if ( result < 0 )
          return result;
        v7 = *v5;
      }
      *v5 = v7 | 1;
    }
    v5 += 6;
  }
  *(_QWORD *)&v15.Length = 0LL;
  v15.Buffer = 0LL;
  v9 = 0x7FFFLL;
  v10 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  if ( v9 )
    v11 = 0x7FFF - v9;
  else
    v11 = 0;
  if ( v9 )
  {
    v15.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
    v15.Length = 2 * v11;
    v15.MaximumLength = 2 * v11 + 2;
  }
  ObjectAttributes.ObjectName = &v15;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    ZwClose(KeyHandle);
    *(_QWORD *)&v15.Length = 0LL;
    v12 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters\\CacheInfo";
    v15.Buffer = 0LL;
    v13 = 0x7FFFLL;
    do
    {
      if ( !*v12 )
        break;
      ++v12;
      --v13;
    }
    while ( v13 );
    if ( v13 )
      v14 = 0x7FFF - v13;
    else
      v14 = 0;
    if ( v13 )
    {
      v15.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StorePar"
                    "ameters\\CacheInfo";
      v15.Length = 2 * v14;
      v15.MaximumLength = 2 * v14 + 2;
    }
    result = SmKmKeyGenStart(a1 + 512, &v15);
    if ( result >= 0 )
    {
      *(_QWORD *)(a1 + 552) = a2;
      return 0;
    }
  }
  return result;
}
