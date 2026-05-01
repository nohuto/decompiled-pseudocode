/*
 * XREFs of ??1?$CCoSimpleArray@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@@@QEAA@XZ @ 0x180416D88
 * Callers:
 *     _VirtualPinnedAppsHandler::LoadPinnedAppsFromRegistry_::_1_::dtor$0 @ 0x1804171C7 (_VirtualPinnedAppsHandler--LoadPinnedAppsFromRegistry_--_1_--dtor$0.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall CCoSimpleArray<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,4294967294,CSimpleArrayStandardCompareHelper<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>>::~CCoSimpleArray<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,4294967294,CSimpleArrayStandardCompareHelper<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>>(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v4 = 0LL;
      do
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v4 + *(_QWORD *)a1);
        ++v3;
        v4 += 24LL;
      }
      while ( v3 < *(_QWORD *)(a1 + 8) );
      v2 = *(void **)a1;
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
