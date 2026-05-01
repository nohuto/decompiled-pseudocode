/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x18000C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000D030 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000D0EC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000E3E4 (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000E470 (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@X.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __m128i *v3; // rdi
  unsigned int v5; // r15d
  int v6; // r13d
  int v9; // ebx
  __int64 v10; // rsi
  __m128i *v11; // r14
  RTL_SRWLOCK *v12; // rcx
  unsigned int v13; // eax
  __m128i *v14; // rax
  RTL_SRWLOCK *v15; // rcx
  __m128i *v16; // r14
  unsigned __int8 v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    v3 = (__m128i *)malloc(16LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v5 = a2;
  }
  v10 = 0LL;
  if ( v5 )
  {
    v11 = v3;
    while ( 1 )
    {
      v9 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(
             &v3[(unsigned int)v10],
             *a3);
      if ( v9 < 0 )
        break;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*v11, 8)) )
        ++v6;
      v10 = (unsigned int)(v10 + 1);
      ++a3;
      ++v11;
      if ( (unsigned int)v10 >= v5 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v12 = (RTL_SRWLOCK *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
    {
      if ( !LODWORD(v12->Ptr) )
        LODWORD(v12->Ptr) = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive(v12);
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v18, *(unsigned __int8 *)(a1 + 125), a1 + 128);
    v13 = *(_DWORD *)(a1 + 72);
    v9 = 0;
    *(_DWORD *)(a1 + 72) = v10;
    v10 = v13;
    *(_DWORD *)(a1 + 76) = v5;
    *(_DWORD *)(a1 + 80) = v6;
    v14 = *(__m128i **)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v3;
    v3 = v14;
    ++*(_DWORD *)(a1 + 120);
    if ( a1 != -104 )
    {
      v15 = (RTL_SRWLOCK *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 104) == 1 )
        LODWORD(v15->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v15);
    }
  }
  if ( v3 )
  {
    if ( (_DWORD)v10 )
    {
      v16 = v3;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(v16++);
        --v10;
      }
      while ( v10 );
    }
    free(v3);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent(
                           v18,
                           *(unsigned __int8 *)(a1 + 124),
                           a1,
                           0LL,
                           0);
  return (unsigned int)v9;
}
