/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x180014210
 * Callers:
 *     ?_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@PEAPEAUHSTRING__@@@Z @ 0x1800126B4 (-_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 *     ?InsertAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUHSTRING__@@@Z @ 0x180013730 (-InsertAt@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collectio.c)
 *     ?Append@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180013750 (-Append@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections.c)
 *     ?GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x1800377D4 (-GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000D030 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000D0EC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180014CE0 (-ResizeStorage@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Coll.c)
 *     _invalid_parameter_noinfo @ 0x180043B2A (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800443BF (memmove_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        HSTRING a3,
        char a4)
{
  int v7; // esi
  _DWORD *v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rdx
  size_t v14; // r8
  void *v15; // rcx
  HSTRING newString; // [rsp+30h] [rbp-38h] BYREF
  char v18; // [rsp+80h] [rbp+18h] BYREF

  v7 = WindowsDuplicateString(a3, &newString);
  if ( v7 < 0 )
  {
    newString = 0LL;
    goto LABEL_34;
  }
  v8 = (_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !*v8 )
      *v8 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  v9 = *(_DWORD *)(a1 + 72);
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 72);
  if ( a2 <= v9 )
  {
    if ( v9 >= 0x7FFFFFFF )
    {
      v7 = -2147024882;
      goto LABEL_28;
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v18);
    v7 = 0;
    v10 = *(_DWORD *)(a1 + 76);
    if ( *(_DWORD *)(a1 + 72) + 1 > v10 )
    {
      v11 = v10 >> 1;
      if ( v10 + 1 > (v10 >> 1) + v10 )
        v11 = 1;
      v7 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::ResizeStorage(
             a1,
             v10 + v11);
      if ( v7 < 0 )
        goto LABEL_28;
    }
    v12 = *(_DWORD *)(a1 + 72);
    if ( a2 < v12 )
    {
      v13 = *(_QWORD *)(a1 + 88);
      v14 = 8LL * (v12 - a2);
      v15 = (void *)(v13 + 8LL * (a2 + 1));
      if ( v14 )
      {
        if ( !v15 || !(v13 + 8LL * a2) )
        {
          *(_DWORD *)_o__errno(v15) = 22;
LABEL_24:
          invalid_parameter_noinfo();
          v7 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          goto LABEL_26;
        }
        if ( 8 * (unsigned __int64)(*(_DWORD *)(a1 + 76) - a2 - 1) < v14 )
        {
          *(_DWORD *)_o__errno(v15) = 34;
          goto LABEL_24;
        }
        memmove_0(v15, (const void *)(v13 + 8LL * a2), v14);
      }
    }
LABEL_26:
    if ( v7 >= 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2) = newString;
      newString = 0LL;
      ++*(_DWORD *)(a1 + 72);
      ++*(_DWORD *)(a1 + 120);
    }
    goto LABEL_28;
  }
  v7 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
LABEL_28:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      *v8 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  if ( v7 >= 0 )
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
LABEL_34:
  WindowsDeleteString(newString);
  return (unsigned int)v7;
}
