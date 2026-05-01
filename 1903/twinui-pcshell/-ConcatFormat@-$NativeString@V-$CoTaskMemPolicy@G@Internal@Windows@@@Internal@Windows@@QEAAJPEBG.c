/*
 * XREFs of ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002B780
 * Callers:
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x18002B8D4 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803AD354 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180029A60 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_fe718337787c493ce2d833414db25eba___ @ 0x18002B338 (Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_short___--_Initializ.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B8A4 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
        _QWORD *a1,
        const wchar_t *a2,
        ...)
{
  int v3; // ebp
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  _WORD *v8; // rdx
  __int64 v9; // rsi
  __int16 v10; // ax
  _WORD *v11; // rax
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  if ( *a1 && *(_WORD *)*a1 )
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v3 = Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_fe718337787c493ce2d833414db25eba___(
           (__int64)&v13,
           a2,
           va);
    if ( v3 >= 0 )
    {
      v4 = v14;
      v5 = v13;
      if ( v14 == -1LL )
      {
        if ( v13 )
        {
          do
            ++v4;
          while ( *(_WORD *)(v13 + 2 * v4) );
        }
        else
        {
          v4 = 0LL;
        }
      }
      v3 = 0;
      if ( v13 )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
        v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
               v6,
               v4 + a1[1]);
        if ( v3 >= 0 )
        {
          v7 = v4 + 1;
          v8 = (_WORD *)(*a1 + 2LL * a1[1]);
          if ( v4 > 0x7FFFFFFE )
          {
            if ( v4 != -1LL )
              *v8 = 0;
          }
          else
          {
            v9 = v5 - (_QWORD)v8;
            do
            {
              if ( v7 == 1 )
                break;
              v10 = *(_WORD *)((char *)v8 + v9);
              if ( !v10 )
                break;
              *v8++ = v10;
              --v7;
            }
            while ( v7 );
            v11 = v8 - 1;
            if ( v7 )
              v11 = v8;
            *v11 = 0;
          }
          a1[1] += v4;
        }
      }
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v13);
  }
  else
  {
    return (unsigned int)Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_fe718337787c493ce2d833414db25eba___(
                           (__int64)a1,
                           a2,
                           va);
  }
  return (unsigned int)v3;
}
