/*
 * XREFs of ?Remove@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18002C9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000D030 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000D0EC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000E3E4 (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x18002F284 (-Lookup@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$.c)
 *     ?FreeNode@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEAAJPEAVCNode@12@@Z @ 0x180033DB4 (-FreeNode@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800432FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Remove(
        __int64 a1,
        __int64 a2)
{
  int v3; // esi
  HSTRING v4; // rdi
  _DWORD *v5; // rbx
  RTL_SRWLOCK *v6; // r15
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  void *v9; // rcx
  HSTRING *v10; // rbx
  __int128 v11; // xmm6
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 i; // rax
  _DWORD *v17; // [rsp+30h] [rbp-40h]
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  char v19; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+48h] BYREF
  HSTRING *v21; // [rsp+C8h] [rbp+58h] BYREF

  v20 = a2;
  if ( !*(_BYTE *)(a1 + 184) )
  {
    v3 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
    return (unsigned int)v3;
  }
  v4 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  BYTE8(v18) = 0;
  v5 = (_DWORD *)(a1 + 160);
  v17 = (_DWORD *)(a1 + 160);
  v6 = (RTL_SRWLOCK *)(a1 + 168);
  if ( *(_DWORD *)(a1 + 160) == 1 )
  {
    if ( !LODWORD(v6->Ptr) )
      LODWORD(v6->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 168));
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v19);
  v21 = 0LL;
  v3 = XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Lookup(
         a1 + 72,
         &v20,
         &v21);
  if ( v3 >= 0 )
  {
    if ( !v21 )
    {
      v3 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v3 >= 0 )
    {
      if ( **(int **)(a1 + 176) > 1 )
      {
        v7 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
        v8 = v7;
        if ( v7 )
          *v7 = 1;
        else
          v8 = 0LL;
        if ( !v8 )
        {
          v3 = -2147024882;
          v4 = 0LL;
LABEL_27:
          v5 = v17;
          goto LABEL_28;
        }
        v9 = *(void **)(a1 + 176);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF) == 1 )
          operator delete(v9, (const struct std::nothrow_t *)4);
        *(_QWORD *)(a1 + 176) = v8;
      }
      v10 = v21;
      v4 = *v21;
      WindowsDeleteString(0LL);
      v11 = *(_OWORD *)(v10 + 1);
      XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>((__int64)&v18);
      v18 = v11;
      v12 = (unsigned int)(*((_DWORD *)v10 + 8) % *(_DWORD *)(a1 + 96));
      v13 = *(_QWORD *)(a1 + 80);
      v14 = *(_QWORD *)(v13 + 8 * v12);
      if ( v10 == (HSTRING *)v14 )
      {
        *(_QWORD *)(v13 + 8 * v12) = v10[3];
      }
      else
      {
        for ( i = *(_QWORD *)(v14 + 24); (HSTRING *)i != v10; i = *(_QWORD *)(i + 24) )
          v14 = i;
        *(_QWORD *)(v14 + 24) = v10[3];
      }
      XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::FreeNode(
        a1 + 72,
        v10);
      v3 = 0;
      goto LABEL_27;
    }
  }
LABEL_28:
  if ( v5 )
  {
    if ( *v5 == 1 )
      LODWORD(v6->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v6);
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>((__int64)&v18);
  WindowsDeleteString(v4);
  if ( v3 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v3;
}
