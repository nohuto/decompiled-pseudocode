/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x18013A0E0
 * Callers:
 *     ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180016934 (-IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ.c)
 *     ?Append@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180137F40 (-Append@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections.c)
 *     ?InsertAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUHSTRING__@@@Z @ 0x18013A0D0 (-InsertAt@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collectio.c)
 * Callees:
 *     ??$?0PEAUHSTRING__@@@?$AutoValue@PEAUHSTRING__@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUHSTRING__@@PEAJ@Z @ 0x180135E24 (--$-0PEAUHSTRING__@@@-$AutoValue@PEAUHSTRING__@@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Interna.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180137018 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18013B4F8 (-RaiseEvent@-$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@.c)
 *     ?ResizeStorage@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18013BD84 (-ResizeStorage@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Coll.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18013C7DC (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s_0 @ 0x18013D2A0 (memmove_s_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        HSTRING a3,
        char a4)
{
  int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r9d
  int v10; // edx
  unsigned int v11; // eax
  RTL_SRWLOCK *v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-30h]
  char v15[4]; // [rsp+30h] [rbp-20h] BYREF
  HRESULT v16; // [rsp+34h] [rbp-1Ch] BYREF
  HSTRING string; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v18; // [rsp+40h] [rbp-10h] BYREF
  HSTRING v19; // [rsp+80h] [rbp+30h] BYREF

  v19 = a3;
  v16 = 0;
  XWinRT::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>(
    &string,
    &v19,
    &v16);
  v7 = v16;
  if ( v16 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v18, a1 + 104, &v16);
    v7 = v16;
    if ( v16 >= 0 )
    {
      v8 = *(_DWORD *)(a1 + 72);
      if ( a4 )
        a2 = *(_DWORD *)(a1 + 72);
      if ( a2 <= v8 )
      {
        if ( v8 >= 0x7FFFFFFF )
          v7 = -2147024882;
        if ( v7 >= 0 )
        {
          XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v15);
          v7 = 0;
          v9 = *(_DWORD *)(a1 + 76);
          if ( *(_DWORD *)(a1 + 72) + 1 <= v9 )
            goto LABEL_14;
          v10 = 1;
          if ( v9 + 1 <= (v9 >> 1) + v9 )
            v10 = v9 >> 1;
          v7 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::ResizeStorage(
                 a1,
                 v9 + v10);
          if ( v7 >= 0 )
          {
LABEL_14:
            v11 = *(_DWORD *)(a1 + 72);
            if ( a2 < v11
              && memmove_s_0(
                   (void *const)(*(_QWORD *)(a1 + 88) + 8LL * (a2 + 1)),
                   8LL * (*(_DWORD *)(a1 + 76) - a2 - 1),
                   (const void *const)(*(_QWORD *)(a1 + 88) + 8LL * a2),
                   8LL * (v11 - a2)) )
            {
              v7 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
            }
            if ( v7 >= 0 )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2) = string;
              string = 0LL;
              ++*(_DWORD *)(a1 + 72);
              ++*(_DWORD *)(a1 + 120);
            }
          }
        }
      }
      else
      {
        v7 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
    }
    if ( v18 )
    {
      v12 = v18 + 1;
      if ( LODWORD(v18->Ptr) == 1 )
        LODWORD(v12->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v12);
    }
    if ( v7 >= 0 )
    {
      v14 = a2;
      v7 = Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>::RaiseEvent(
             (unsigned __int8)v15[0],
             *(unsigned __int8 *)(a1 + 124),
             a1,
             1LL,
             v14);
    }
  }
  WindowsDeleteString(string);
  return (unsigned int)v7;
}
