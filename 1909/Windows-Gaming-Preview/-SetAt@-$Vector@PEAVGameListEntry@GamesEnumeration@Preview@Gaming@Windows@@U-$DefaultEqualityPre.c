/*
 * XREFs of ?SetAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x18000BC40
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000D030 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000D0EC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000E3E4 (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000E470 (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@X.c)
 *     _invalid_parameter_noinfo @ 0x180043B2A (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800443BF (memmove_0.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r12
  int v5; // esi
  _DWORD *v6; // r14
  __int64 v7; // rcx
  _OWORD *v8; // r13
  __int128 v10; // [rsp+40h] [rbp-30h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF
  __int128 v12; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int8 v13; // [rsp+B8h] [rbp+48h] BYREF

  v3 = a2;
  *(_QWORD *)&v12 = 0LL;
  BYTE8(v12) = 0;
  *(_QWORD *)&v10 = 0LL;
  BYTE8(v10) = 0;
  v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(&v10, a3);
  if ( v5 < 0 )
  {
    *(_QWORD *)&v10 = 0LL;
    BYTE8(v10) = 0;
    goto LABEL_20;
  }
  v6 = (_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !*v6 )
      *v6 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 72) )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v13, *(unsigned __int8 *)(a1 + 125), a1 + 128);
    v5 = 0;
    *(_QWORD *)&v11 = 0LL;
    BYTE8(v11) = 0;
    v8 = (_OWORD *)(16 * v3 + *(_QWORD *)(a1 + 88));
    if ( v8 )
    {
      memmove_0(&v11, v8, 0x10uLL);
      *v8 = v10;
      *(_QWORD *)&v10 = 0LL;
      BYTE8(v10) = 0;
      ++*(_DWORD *)(a1 + 120);
      XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v12);
      v12 = v11;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 88) + 16 * v3), 8)) )
        ++*(_DWORD *)(a1 + 80);
      if ( BYTE8(v11) )
        --*(_DWORD *)(a1 + 80);
      goto LABEL_16;
    }
    *(_DWORD *)_o__errno(v7) = 22;
    invalid_parameter_noinfo();
    v5 = -2147418113;
  }
  else
  {
    v5 = -2147483637;
  }
  RoOriginateError((unsigned int)v5, 0LL);
LABEL_16:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      *v6 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
LABEL_20:
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v10);
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v12);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent(
                           v13,
                           *(unsigned __int8 *)(a1 + 124),
                           a1,
                           3LL,
                           v3);
  return (unsigned int)v5;
}
