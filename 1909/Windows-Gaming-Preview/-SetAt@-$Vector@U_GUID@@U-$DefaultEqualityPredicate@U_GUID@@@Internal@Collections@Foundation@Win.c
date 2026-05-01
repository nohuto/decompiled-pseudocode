/*
 * XREFs of ?SetAt@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIU_GUID@@@Z @ 0x18002D110
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000D030 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000D0EC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     __security_check_cookie @ 0x180042850 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180043B2A (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800443BF (memmove_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // r14
  RTL_SRWLOCK *v5; // rsi
  int v8; // edi
  __int64 v9; // rcx
  _OWORD *v10; // r15
  _BYTE v12[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v13[16]; // [rsp+38h] [rbp-40h] BYREF

  v3 = (_DWORD *)(a1 + 104);
  v4 = a2;
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
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 72) )
  {
    v8 = -2147483637;
LABEL_9:
    RoOriginateError((unsigned int)v8, 0LL);
    goto LABEL_11;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v12);
  v8 = 0;
  v10 = (_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v4);
  if ( !v10 )
  {
    *(_DWORD *)_o__errno(v9) = 22;
    invalid_parameter_noinfo();
    v8 = -2147418113;
    goto LABEL_9;
  }
  memmove_0(v13, (const void *)(*(_QWORD *)(a1 + 88) + 16 * v4), 0x10uLL);
  *v10 = *a3;
  ++*(_DWORD *)(a1 + 120);
LABEL_11:
  if ( v3 )
  {
    if ( *v3 == 1 )
      LODWORD(v5->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v5);
  }
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v8;
}
