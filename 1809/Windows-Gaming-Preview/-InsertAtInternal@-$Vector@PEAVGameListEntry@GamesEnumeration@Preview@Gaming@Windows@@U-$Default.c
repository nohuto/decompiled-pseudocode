/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@_N@Z @ 0x18000D49C
 * Callers:
 *     ?GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@5@@Z @ 0x180009878 (-GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU-$IVectorView@.c)
 *     ?InsertAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x18000BEB0 (-InsertAt@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEquality.c)
 *     ?Append@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x18000BED0 (-Append@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqualityPr.c)
 *     _lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator() @ 0x18001C878 (_lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator().c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000D0CC (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000D188 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000E480 (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000E50C (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@X.c)
 *     ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18000F15C (-ResizeStorage@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqu.c)
 *     _invalid_parameter_noinfo @ 0x18004362A (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x180043EBF (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // esi
  _DWORD *v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // r8d
  int v12; // edx
  unsigned int v13; // eax
  size_t v14; // r8
  void *v15; // rcx
  char v17[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-28h] BYREF

  v18 = -2LL;
  *(_QWORD *)&v19 = 0LL;
  BYTE8(v19) = 0;
  v7 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(&v19, a3);
  if ( v7 < 0 )
  {
    *(_QWORD *)&v19 = 0LL;
    BYTE8(v19) = 0;
    goto LABEL_35;
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
      goto LABEL_29;
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v17);
    v7 = 0;
    v11 = *(_DWORD *)(a1 + 76);
    if ( *(_DWORD *)(a1 + 72) + 1 > v11 )
    {
      v12 = v11 >> 1;
      if ( v11 + 1 > (v11 >> 1) + v11 )
        v12 = 1;
      v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
             a1,
             v11 + v12);
      if ( v7 < 0 )
        goto LABEL_29;
    }
    v13 = *(_DWORD *)(a1 + 72);
    if ( a2 < v13 )
    {
      v14 = 16LL * (v13 - a2);
      v15 = (void *)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1));
      if ( v14 )
      {
        if ( v15 && *(_QWORD *)(a1 + 88) + 16LL * a2 )
        {
          if ( 16 * (unsigned __int64)(*(_DWORD *)(a1 + 76) - a2 - 1) >= v14 )
          {
            memmove_0(v15, (const void *)(*(_QWORD *)(a1 + 88) + 16LL * a2), v14);
            goto LABEL_26;
          }
          *(_DWORD *)_o__errno(v15, v10) = 34;
        }
        else
        {
          *(_DWORD *)_o__errno(v15, v10) = 22;
        }
        invalid_parameter_noinfo();
        v7 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
    }
LABEL_26:
    if ( v7 >= 0 )
    {
      *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16LL * a2) = v19;
      *(_QWORD *)&v19 = 0LL;
      BYTE8(v19) = 0;
      ++*(_DWORD *)(a1 + 72);
      ++*(_DWORD *)(a1 + 120);
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * a2), 8)) )
        ++*(_DWORD *)(a1 + 80);
    }
    goto LABEL_29;
  }
  v7 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
LABEL_29:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      *v8 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  if ( v7 >= 0 )
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
LABEL_35:
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v19);
  return (unsigned int)v7;
}
