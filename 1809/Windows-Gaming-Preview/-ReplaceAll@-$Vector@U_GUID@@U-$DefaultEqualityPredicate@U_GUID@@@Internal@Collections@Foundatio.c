/*
 * XREFs of ?ReplaceAll@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAU_GUID@@@Z @ 0x18002D4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000D0CC (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000D188 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _OWORD *v3; // rsi
  unsigned int v5; // ebp
  unsigned int v9; // r15d
  _OWORD *v10; // rax
  __int64 v11; // r14
  __int64 v12; // rcx
  RTL_SRWLOCK *v13; // rcx
  void *v14; // rbp
  RTL_SRWLOCK *v15; // rcx
  char v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0;
  if ( a2 )
  {
    v3 = malloc(16LL * a2);
    if ( !v3 )
      return 2147942414LL;
    v5 = a2;
  }
  v9 = 0;
  if ( v5 )
  {
    v10 = v3;
    v9 = v5;
    v11 = a3 - (_QWORD)v3;
    v12 = v5;
    do
    {
      *v10 = *(_OWORD *)((char *)v10 + v11);
      ++v10;
      --v12;
    }
    while ( v12 );
  }
  v13 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v13->Ptr) )
      LODWORD(v13->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v13);
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
  *(_DWORD *)(a1 + 72) = v9;
  *(_DWORD *)(a1 + 76) = v5;
  *(_DWORD *)(a1 + 80) = 0;
  v14 = *(void **)(a1 + 88);
  *(_QWORD *)(a1 + 88) = v3;
  ++*(_DWORD *)(a1 + 120);
  if ( a1 != -104 )
  {
    v15 = (RTL_SRWLOCK *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
      LODWORD(v15->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v15);
  }
  if ( v14 )
    free(v14);
  return Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
}
