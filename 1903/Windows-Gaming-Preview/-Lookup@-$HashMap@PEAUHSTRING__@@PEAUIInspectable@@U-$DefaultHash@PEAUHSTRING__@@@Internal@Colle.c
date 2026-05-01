/*
 * XREFs of ?Lookup@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z @ 0x18002C340
 * Callers:
 *     <none>
 * Callees:
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x18002F1F4 (-Lookup@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042DE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Lookup(
        __int64 a1,
        __int64 a2,
        unsigned int **a3)
{
  int v5; // edi
  unsigned int *v6; // rsi
  char v7; // r12
  _DWORD *v8; // rbx
  int *v9; // r14
  __m128i v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+90h] [rbp+8h] BYREF
  __int64 v13; // [rsp+98h] [rbp+10h] BYREF
  _DWORD *v14; // [rsp+A8h] [rbp+20h]

  v13 = a2;
  if ( *(_BYTE *)(a1 + 184) )
  {
    v5 = 0;
  }
  else
  {
    v5 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  v6 = 0LL;
  v7 = 0;
  if ( v5 < 0 )
    goto LABEL_30;
  v8 = (_DWORD *)(a1 + 160);
  v14 = (_DWORD *)(a1 + 160);
  v9 = (int *)(a1 + 168);
  if ( *(_DWORD *)(a1 + 160) == 1 )
  {
    if ( *v9 >= 0 )
      ++*v9;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 168));
  }
  v5 = XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Lookup(
         a1 + 72,
         &v13,
         &v12);
  if ( v5 >= 0 )
  {
    if ( v12 )
    {
      v11 = *(__m128i *)(v12 + 8);
      v7 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
      v6 = *(unsigned int **)(v12 + 8);
      if ( v7 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v11.m128i_i64[0]);
        v8 = v14;
      }
      else if ( v11.m128i_i64[0] )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11.m128i_i64[0] + 8LL))(v11.m128i_i64[0]);
      }
      v5 = 0;
    }
    else
    {
      v5 = -2147483637;
    }
  }
  if ( v8 )
  {
    if ( *v8 == 1 )
      --*v9;
    else
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 168));
  }
  if ( v5 < 0 )
    goto LABEL_30;
  v5 = 0;
  if ( v7 )
  {
    *a3 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, unsigned int **))(*(_QWORD *)qword_18005CD70 + 40LL))(
           qword_18005CD70,
           v6[1],
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a3);
    if ( v5 >= 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
    {
      if ( v6[1] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005CD70 + 32LL))(qword_18005CD70);
      operator delete(v6, (const struct std::nothrow_t *)8);
    }
  }
  else
  {
    *a3 = v6;
  }
  if ( v5 < 0 )
LABEL_30:
    *a3 = 0LL;
  return (unsigned int)v5;
}
