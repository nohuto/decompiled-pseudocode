/*
 * XREFs of ?RemoveAtInternal@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18002F600
 * Callers:
 *     ?RemoveAt@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18002D210 (-RemoveAt@-$Vector@U_GUID@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@.c)
 *     ?RemoveAtEnd@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18002D250 (-RemoveAtEnd@-$Vector@U_GUID@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundati.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000CFF0 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000D0AC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18000EC9C (-ResizeStorage@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqu.c)
 *     _invalid_parameter_noinfo @ 0x1800439AA (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18004423F (memmove_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  _DWORD *v3; // rbx
  RTL_SRWLOCK *v4; // r14
  unsigned int v8; // eax
  int v9; // esi
  __int64 v10; // rcx
  void *v11; // rax
  const void *v12; // rdx
  size_t v13; // r8
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // edx
  char v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_DWORD *)(a1 + 104);
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
  v8 = *(_DWORD *)(a1 + 72);
  if ( a3 )
    a2 = v8 - 1;
  if ( a2 >= v8 )
  {
    v9 = -2147483637;
LABEL_14:
    RoOriginateError((unsigned int)v9, 0LL);
    goto LABEL_20;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v18);
  v10 = *(unsigned int *)(a1 + 72);
  v9 = 0;
  if ( a2 < (int)v10 - 1 )
  {
    v11 = (void *)(*(_QWORD *)(a1 + 88) + 16LL * a2);
    v12 = (const void *)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1));
    v13 = 16LL * ((unsigned int)v10 - a2 - 1);
    if ( v13 )
    {
      if ( !v11 || !v12 )
      {
        *(_DWORD *)_o__errno(v10) = 22;
        invalid_parameter_noinfo();
        v9 = -2147418113;
        goto LABEL_14;
      }
      memmove_0(v11, v12, v13);
      LODWORD(v10) = *(_DWORD *)(a1 + 72);
    }
  }
  ++*(_DWORD *)(a1 + 120);
  v14 = *(_DWORD *)(a1 + 76);
  v15 = v10 - 1;
  *(_DWORD *)(a1 + 72) = v15;
  v16 = v14 / 3;
  if ( v15 < v14 / 3 )
  {
    if ( v14 - 1 < v14 - v16 )
      v16 = 1;
    v9 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
           a1,
           v14 - v16);
  }
LABEL_20:
  if ( v3 )
  {
    if ( *v3 == 1 )
      LODWORD(v4->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v4);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v9;
}
