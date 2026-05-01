/*
 * XREFs of ?InsertAtInternal@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIU_GUID@@_N@Z @ 0x18002F4D0
 * Callers:
 *     ?InsertAt@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIU_GUID@@@Z @ 0x18002D240 (-InsertAt@-$Vector@U_GUID@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@.c)
 *     ?Append@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@@Z @ 0x18002D280 (-Append@-$Vector@U_GUID@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Wi.c)
 *     ?GetAllGameConfigStoreIds@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x18003793C (-GetAllGameConfigStoreIds@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@Q.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000D030 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000D0EC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18000ECCC (-ResizeStorage@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqu.c)
 *     _invalid_parameter_noinfo @ 0x180043B2A (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800443BF (memmove_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        char a4)
{
  _DWORD *v4; // rbx
  RTL_SRWLOCK *v5; // r14
  unsigned int v10; // eax
  int v11; // esi
  unsigned int v12; // r8d
  int v13; // edx
  unsigned int v14; // eax
  void *v15; // rcx
  const void *v16; // rdx
  size_t v17; // r8
  char v19; // [rsp+70h] [rbp+18h] BYREF

  v4 = (_DWORD *)(a1 + 104);
  v5 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v5->Ptr) )
      LODWORD(v5->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  v10 = *(_DWORD *)(a1 + 72);
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 72);
  if ( a2 > v10 )
  {
    v11 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
    goto LABEL_26;
  }
  if ( v10 >= 0x7FFFFFFF )
  {
    v11 = -2147024882;
    goto LABEL_26;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v19);
  v11 = 0;
  v12 = *(_DWORD *)(a1 + 76);
  if ( *(_DWORD *)(a1 + 72) + 1 <= v12 )
    goto LABEL_15;
  v13 = v12 >> 1;
  if ( v12 + 1 > (v12 >> 1) + v12 )
    v13 = 1;
  v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
          a1,
          v12 + v13);
  if ( v11 >= 0 )
  {
LABEL_15:
    v14 = *(_DWORD *)(a1 + 72);
    if ( a2 < v14 )
    {
      v15 = (void *)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1));
      v16 = (const void *)(*(_QWORD *)(a1 + 88) + 16LL * a2);
      v17 = 16LL * (v14 - a2);
      if ( v17 )
      {
        if ( !v15 || !v16 )
        {
          *(_DWORD *)_o__errno(v15) = 22;
LABEL_22:
          invalid_parameter_noinfo();
          v11 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          goto LABEL_24;
        }
        if ( 16 * (unsigned __int64)(*(_DWORD *)(a1 + 76) - a2 - 1) < v17 )
        {
          *(_DWORD *)_o__errno(v15) = 34;
          goto LABEL_22;
        }
        memmove_0(v15, v16, v17);
      }
    }
LABEL_24:
    if ( v11 >= 0 )
    {
      *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16LL * a2) = *a3;
      ++*(_DWORD *)(a1 + 72);
      ++*(_DWORD *)(a1 + 120);
    }
  }
LABEL_26:
  if ( v4 )
  {
    if ( *v4 == 1 )
      LODWORD(v5->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v5);
  }
  if ( v11 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v11;
}
