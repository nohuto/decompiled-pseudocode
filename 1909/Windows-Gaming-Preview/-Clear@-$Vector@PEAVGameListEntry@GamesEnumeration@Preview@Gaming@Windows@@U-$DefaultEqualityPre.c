/*
 * XREFs of ?Clear@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18000BE50
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000D030 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000D0EC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000E3E4 (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::Clear(
        __int64 a1)
{
  _DWORD *v2; // rbx
  unsigned int v3; // edi
  RTL_SRWLOCK *v4; // rsi
  __int64 v5; // r14
  char *v6; // r15
  char *v7; // rbx
  __int64 v8; // rsi
  unsigned __int8 v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_DWORD *)(a1 + 104);
  v3 = 0;
  v4 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v4->Ptr) )
      LODWORD(v4->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v10, *(unsigned __int8 *)(a1 + 125), a1 + 128);
  v5 = *(unsigned int *)(a1 + 72);
  v6 = *(char **)(a1 + 88);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  ++*(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( v2 )
  {
    if ( *v2 == 1 )
      LODWORD(v4->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v4);
  }
  if ( v6 )
  {
    if ( (_DWORD)v5 )
    {
      v7 = v6;
      v8 = v5;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(v7);
        v7 += 16;
        --v8;
      }
      while ( v8 );
    }
    free(v6);
  }
  if ( (_DWORD)v5 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent(
                           v10,
                           *(unsigned __int8 *)(a1 + 124),
                           a1,
                           0LL,
                           0);
  return v3;
}
