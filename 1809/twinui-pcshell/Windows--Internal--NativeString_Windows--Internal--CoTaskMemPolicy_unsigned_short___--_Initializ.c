/*
 * XREFs of Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_ba3db7aa6f4c4ff7c0aefa43081dccfe___ @ 0x18002D450
 * Callers:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002D2FC (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180289C20 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003B810 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     _vsnwprintf @ 0x18008516C (_vsnwprintf.c)
 */

__int64 Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_ba3db7aa6f4c4ff7c0aefa43081dccfe___(
        __int64 a1,
        const wchar_t *a2,
        va_list a3,
        ...)
{
  __int64 v6; // rbp
  signed int v7; // ebx
  __int64 v8; // rsi
  wchar_t *v9; // r14
  size_t v10; // rsi
  int v11; // eax
  bool v12; // zf
  bool v13; // al
  unsigned __int64 v15; // rcx
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  v6 = 32LL;
  while ( 1 )
  {
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v6);
    if ( v7 < 0 )
      break;
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(wchar_t **)a1;
    _o__set_errno(0LL);
    v7 = 0;
    if ( (unsigned __int64)(v8 - 1) > 0x7FFFFFFE )
      v7 = -2147024809;
    if ( v7 < 0 )
    {
      if ( v8 )
        *v9 = 0;
    }
    else
    {
      v10 = v8 - 1;
      v7 = 0;
      v11 = vsnwprintf(v9, v10, a2, a3);
      if ( v11 < 0 || v11 > v10 )
      {
        v9[v10] = 0;
        v7 = -2147024774;
      }
      else if ( v11 == v10 )
      {
        v9[v10] = 0;
      }
    }
    v12 = v7 == -2147024774;
    if ( v7 == -2147024774 )
    {
      _o__get_errno((__int64 *)va);
      v7 = -2147024809;
      if ( (_DWORD)v16 != 22 )
        v7 = -2147024774;
      v12 = v7 == -2147024774;
    }
    v13 = v12;
    if ( !v12 )
      goto LABEL_12;
    v15 = *(_QWORD *)(a1 + 16);
    v6 = -1LL;
    if ( v15 + 32 >= v15 )
      v6 = v15 + 32;
    v7 = v15 + 32 < v15 ? 0x80070216 : 0;
    if ( v15 + 32 < v15 )
    {
      v13 = 0;
LABEL_12:
      if ( !v13 )
      {
        if ( v7 >= 0 )
        {
          *(_QWORD *)(a1 + 8) = -1LL;
          return (unsigned int)v7;
        }
        break;
      }
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
  return (unsigned int)v7;
}
