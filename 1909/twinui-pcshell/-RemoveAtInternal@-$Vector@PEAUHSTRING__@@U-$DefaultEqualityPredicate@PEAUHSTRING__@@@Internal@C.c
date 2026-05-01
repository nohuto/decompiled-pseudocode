/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x1800B2FC0
 * Callers:
 *     ?RemoveAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x1800B2FA0 (-RemoveAt@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collectio.c)
 *     ?RemoveAtEnd@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1800B2FB0 (-RemoveAtEnd@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collec.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180059320 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18005933C (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1800B0E90 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 *     ?ResizeStorage@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1800B3440 (-ResizeStorage@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Coll.c)
 *     memmove_s @ 0x1800B41AC (memmove_s.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18013A954 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  int v6; // esi
  unsigned int v7; // eax
  HSTRING v8; // rbx
  int v9; // ecx
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+60h] [rbp+8h] BYREF
  HSTRING v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0;
  v15 = 0LL;
  XWinRT::SerializingLockPolicy::Write(v13, a1 + 104, &v14);
  v6 = v14;
  if ( v14 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 72);
    if ( a3 )
      a2 = v7 - 1;
    if ( a2 >= v7 )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v14);
      v6 = 0;
      v8 = *(HSTRING *)(*(_QWORD *)(a1 + 88) + 8LL * a2);
      ExperienceManagerUtils::CopyableHString::~CopyableHString(&v15);
      v9 = *(_DWORD *)(a1 + 72);
      v15 = v8;
      if ( a2 < v9 - 1
        && memmove_s(
             (void *const)(*(_QWORD *)(a1 + 88) + 8LL * a2),
             8LL * (v9 - a2 - 1),
             (const void *const)(*(_QWORD *)(a1 + 88) + 8LL * (a2 + 1)),
             8LL * (v9 - a2 - 1)) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        v10 = *(_DWORD *)(a1 + 76);
        ++*(_DWORD *)(a1 + 120);
        if ( --*(_DWORD *)(a1 + 72) < v10 / 3 )
        {
          v11 = 1;
          if ( v10 - 1 >= v10 - v10 / 3 )
            v11 = v10 / 3;
          v6 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::ResizeStorage(
                 a1,
                 v10 - v11);
        }
      }
    }
  }
  if ( v13[0] )
  {
    if ( *(_DWORD *)v13[0] == 1 )
      *(_DWORD *)(v13[0] + 8LL) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v13[0] + 8LL));
  }
  ExperienceManagerUtils::CopyableHString::~CopyableHString(&v15);
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
