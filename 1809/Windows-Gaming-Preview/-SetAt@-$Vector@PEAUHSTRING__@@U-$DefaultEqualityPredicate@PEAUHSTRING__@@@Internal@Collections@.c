/*
 * XREFs of ?SetAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUHSTRING__@@@Z @ 0x180013660
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000D0CC (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000D188 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     _invalid_parameter_noinfo @ 0x18004362A (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x180043EBF (memmove_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        HSTRING a3)
{
  __int64 v3; // r15
  HSTRING v5; // rdi
  HRESULT v6; // esi
  _DWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  HSTRING *v11; // r12
  HSTRING v13; // [rsp+70h] [rbp+18h] BYREF
  HSTRING newString; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2;
  v5 = 0LL;
  v6 = WindowsDuplicateString(a3, &newString);
  if ( v6 < 0 )
  {
    newString = 0LL;
    goto LABEL_17;
  }
  v7 = (_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !*v7 )
      *v7 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 72) )
  {
    v6 = -2147483637;
LABEL_11:
    RoOriginateError((unsigned int)v6, 0LL);
    goto LABEL_13;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v13);
  v10 = *(_QWORD *)(a1 + 88);
  v6 = 0;
  v11 = (HSTRING *)(v10 + 8 * v3);
  if ( !v11 )
  {
    *(_DWORD *)_o__errno(v9, v8) = 22;
    invalid_parameter_noinfo();
    v6 = -2147418113;
    goto LABEL_11;
  }
  memmove_0(&v13, (const void *)(v10 + 8 * v3), 8uLL);
  *v11 = newString;
  newString = 0LL;
  ++*(_DWORD *)(a1 + 120);
  WindowsDeleteString(0LL);
  v5 = v13;
LABEL_13:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      *v7 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
LABEL_17:
  WindowsDeleteString(newString);
  newString = 0LL;
  WindowsDeleteString(v5);
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v6;
}
