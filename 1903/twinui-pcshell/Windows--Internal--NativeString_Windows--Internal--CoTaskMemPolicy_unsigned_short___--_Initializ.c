/*
 * XREFs of Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_fe718337787c493ce2d833414db25eba___ @ 0x18002B338
 * Callers:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002B780 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1802E3370 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B8A4 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _vsnwprintf @ 0x180087D88 (_vsnwprintf.c)
 */

__int64 Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_fe718337787c493ce2d833414db25eba___(
        __int64 a1,
        const wchar_t *a2,
        va_list a3,
        ...)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // rsi
  signed int v8; // ebx
  unsigned __int64 v9; // r8
  _WORD *v10; // rax
  __int64 v11; // rsi
  wchar_t *v12; // r14
  size_t v13; // rsi
  int v14; // eax
  unsigned __int64 v16; // rdx
  LPVOID v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  v5 = 32LL;
  while ( 1 )
  {
    v7 = -1LL;
    if ( v5 + 1 >= v5 )
      v7 = v5 + 1;
    v8 = v5 + 1 < v5 ? 0x80070216 : 0;
    if ( v5 + 1 >= v5 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      if ( v9 == -1LL )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
        if ( *(_QWORD *)a1 )
          v9 = *(_QWORD *)(a1 + 8) + 1LL;
        else
          v9 = 0LL;
        *(_QWORD *)(a1 + 16) = v9;
      }
      if ( v9 )
      {
        if ( v7 <= v9 )
          goto LABEL_10;
        if ( !is_mul_ok(v9, 2uLL) )
          goto LABEL_42;
        v16 = v9 + 2048;
        v8 = 0;
        if ( v9 <= 0x800 )
          v16 = 2 * v9;
        if ( v7 <= v16 )
          v7 = v16;
        v17 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v7);
        if ( v17 )
        {
          *(_QWORD *)(a1 + 16) = v7;
          *(_QWORD *)a1 = v17;
          goto LABEL_10;
        }
      }
      else
      {
        if ( !is_mul_ok(v7, 2uLL) )
          goto LABEL_42;
        v8 = 0;
        v10 = CoTaskMemAlloc(2 * v7);
        if ( v10 )
        {
          *(_QWORD *)(a1 + 16) = v7;
          *(_QWORD *)a1 = v10;
          *v10 = 0;
          goto LABEL_10;
        }
      }
      v8 = -2147024882;
    }
LABEL_10:
    if ( v8 < 0 )
      goto LABEL_43;
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(wchar_t **)a1;
    _o__set_errno(0LL);
    v8 = 0;
    if ( (unsigned __int64)(v11 - 1) > 0x7FFFFFFE )
      v8 = -2147024809;
    if ( v8 < 0 )
    {
      if ( v11 )
        *v12 = 0;
    }
    else
    {
      v13 = v11 - 1;
      v8 = 0;
      v14 = vsnwprintf(v12, v13, a2, a3);
      if ( v14 < 0 || v14 > v13 )
      {
        v12[v13] = 0;
        v8 = -2147024774;
      }
      else if ( v14 == v13 )
      {
        v12[v13] = 0;
      }
    }
    if ( v8 != -2147024774 )
      break;
    _o__get_errno((__int64 *)va);
    v8 = -2147024809;
    if ( (_DWORD)v19 != 22 )
      v8 = -2147024774;
    if ( v8 != -2147024774 )
      break;
    v18 = *(_QWORD *)(a1 + 16);
    v5 = v18 + 32;
    if ( v18 + 32 < v18 )
    {
LABEL_42:
      v8 = -2147024362;
      goto LABEL_43;
    }
  }
  if ( v8 >= 0 )
  {
    *(_QWORD *)(a1 + 8) = -1LL;
    return (unsigned int)v8;
  }
LABEL_43:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
  return (unsigned int)v8;
}
