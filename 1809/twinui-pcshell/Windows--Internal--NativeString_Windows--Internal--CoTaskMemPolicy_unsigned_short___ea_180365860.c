/*
 * XREFs of Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_b31a7ee49596f02cdde0545643ebbb5a___ @ 0x180365860
 * Callers:
 *     ?InitializeMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18036633C (-InitializeMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18037A678 (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003B810 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_b31a7ee49596f02cdde0545643ebbb5a___(
        WCHAR **a1,
        const void *a2,
        va_list a3,
        ...)
{
  unsigned __int64 v6; // rsi
  signed int Error; // ebx
  bool v8; // al
  unsigned __int64 v9; // rcx
  WCHAR *lpBuffer; // [rsp+20h] [rbp-38h]
  DWORD nSize; // [rsp+28h] [rbp-30h]
  va_list Arguments; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  Arguments = va_arg(va1, va_list);
  v6 = 32LL;
  while ( 1 )
  {
    Error = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
              (__int64)a1,
              v6);
    if ( Error < 0 )
      break;
    nSize = (unsigned int)a1[2];
    lpBuffer = *a1;
    va_copy(Arguments, a3);
    if ( FormatMessageW(0x400u, a2, 0, 0, lpBuffer, nSize, (va_list *)va) )
      Error = 0;
    else
      Error = ResultFromKnownLastError();
    v8 = Error == -2147024774;
    if ( Error != -2147024774 )
      goto LABEL_11;
    v9 = (unsigned __int64)a1[2];
    v6 = -1LL;
    if ( v9 + 32 >= v9 )
      v6 = v9 + 32;
    Error = v9 + 32 < v9 ? 0x80070216 : 0;
    if ( v9 + 32 < v9 )
    {
      v8 = 0;
LABEL_11:
      if ( !v8 )
      {
        if ( Error >= 0 )
        {
          a1[1] = (WCHAR *)-1LL;
          return (unsigned int)Error;
        }
        break;
      }
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)a1);
  return (unsigned int)Error;
}
