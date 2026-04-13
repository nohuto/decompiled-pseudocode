/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18001718C
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180012CA4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005354C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?LowerCaseBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18006CFE0 (-LowerCaseBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18009C098 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  _WORD *v7; // rcx
  _WORD *v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // r14
  LPVOID v11; // rax

  v2 = -1LL;
  if ( a2 + 1 >= a2 )
    v2 = a2 + 1;
  v4 = a2 + 1 < a2 ? 0x80070216 : 0;
  if ( a2 + 1 >= a2 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 == -1LL )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v7 = *(_WORD **)a1;
      if ( v6 == -1 )
      {
        if ( v7 )
        {
          v6 = -1LL;
          do
            ++v6;
          while ( v7[v6] );
        }
        else
        {
          v6 = 0LL;
        }
        *(_QWORD *)(a1 + 8) = v6;
      }
      v5 = (v6 + 1) & -(__int64)(v7 != 0LL);
      *(_QWORD *)(a1 + 16) = v5;
    }
    if ( !v5 )
    {
      if ( !is_mul_ok(v2, 2uLL) )
        return (unsigned int)-2147024362;
      v4 = 0;
      v8 = CoTaskMemAlloc(2 * v2);
      if ( v8 )
      {
        *(_QWORD *)(a1 + 16) = v2;
        *(_QWORD *)a1 = v8;
        *v8 = 0;
        return v4;
      }
      return (unsigned int)-2147024882;
    }
    if ( v2 > v5 )
    {
      v9 = 2 * v5;
      if ( is_mul_ok(v5, 2uLL) )
      {
        v4 = 0;
      }
      else
      {
        v9 = -1LL;
        v4 = -2147024362;
      }
      if ( (v4 & 0x80000000) == 0 )
      {
        v10 = v5 + 2048;
        if ( v9 - v5 <= 0x800 )
          v10 = v9;
        if ( v2 > v10 )
          v10 = v2;
        v11 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v10);
        if ( v11 )
        {
          *(_QWORD *)(a1 + 16) = v10;
          *(_QWORD *)a1 = v11;
          return v4;
        }
        return (unsigned int)-2147024882;
      }
    }
  }
  return v4;
}
