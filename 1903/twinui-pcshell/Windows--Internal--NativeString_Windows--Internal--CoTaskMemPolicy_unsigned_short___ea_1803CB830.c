/*
 * XREFs of Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_255728157cf8e92998065ff06efe801f___ @ 0x1803CB830
 * Callers:
 *     ?InitializeMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1803CC29C (-InitializeMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1803E04F0 (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180029A60 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_255728157cf8e92998065ff06efe801f___(
        WCHAR **a1,
        const void *a2,
        va_list a3,
        ...)
{
  unsigned __int64 v5; // rcx
  int Error; // ebx
  unsigned __int64 v8; // rax
  WCHAR *lpBuffer; // [rsp+20h] [rbp-28h]
  DWORD nSize; // [rsp+28h] [rbp-20h]
  va_list Arguments; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  Arguments = va_arg(va1, va_list);
  v5 = 32LL;
  while ( 1 )
  {
    Error = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
              (__int64)a1,
              v5);
    if ( Error < 0 )
      goto LABEL_7;
    nSize = (unsigned int)a1[2];
    lpBuffer = *a1;
    va_copy(Arguments, a3);
    if ( FormatMessageW(0x400u, a2, 0, 0, lpBuffer, nSize, (va_list *)va) )
      break;
    Error = ResultFromKnownLastError();
    if ( Error != -2147024774 )
      goto LABEL_10;
    v8 = (unsigned __int64)a1[2];
    v5 = v8 + 32;
    if ( v8 + 32 < v8 )
    {
      Error = -2147024362;
      goto LABEL_7;
    }
  }
  Error = 0;
LABEL_10:
  if ( Error < 0 )
  {
LABEL_7:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)a1);
    return (unsigned int)Error;
  }
  a1[1] = (WCHAR *)-1LL;
  return (unsigned int)Error;
}
