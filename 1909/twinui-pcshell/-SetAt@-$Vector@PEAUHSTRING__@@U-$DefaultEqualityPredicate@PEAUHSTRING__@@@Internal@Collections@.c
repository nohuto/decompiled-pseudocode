/*
 * XREFs of ?SetAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUHSTRING__@@@Z @ 0x1800B3730
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180059320 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18005933C (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     ??$?0PEAUHSTRING__@@@?$AutoValue@PEAUHSTRING__@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUHSTRING__@@PEAJ@Z @ 0x1800AE49C (--$-0PEAUHSTRING__@@@-$AutoValue@PEAUHSTRING__@@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Interna.c)
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1800B0E90 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 *     memmove_s @ 0x1800B41AC (memmove_s.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18013A954 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        HSTRING a3)
{
  __int64 v4; // rsi
  int v5; // ebx
  RTL_SRWLOCK *v6; // rcx
  HSTRING newString; // [rsp+30h] [rbp-20h] BYREF
  HSTRING v9; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp-10h] BYREF
  HSTRING v11; // [rsp+80h] [rbp+30h] BYREF
  HSTRING Destination; // [rsp+88h] [rbp+38h] BYREF

  v11 = a3;
  LODWORD(Destination) = 0;
  v9 = 0LL;
  v4 = a2;
  XWinRT::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>(
    &newString,
    &v11,
    (HRESULT *)&Destination);
  v5 = (int)Destination;
  if ( (int)Destination >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v10, a1 + 104, &Destination);
    v5 = (int)Destination;
    if ( (int)Destination >= 0 )
    {
      if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 72) )
      {
        v5 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v5 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&Destination);
        v5 = 0;
        if ( memmove_s(&Destination, 8uLL, (const void *const)(*(_QWORD *)(a1 + 88) + 8 * v4), 8uLL) )
        {
          v5 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v4) = newString;
          newString = 0LL;
          ++*(_DWORD *)(a1 + 120);
          ExperienceManagerUtils::CopyableHString::~CopyableHString(&v9);
          v9 = Destination;
        }
      }
    }
    if ( v10 )
    {
      v6 = v10 + 1;
      if ( LODWORD(v10->Ptr) == 1 )
        LODWORD(v6->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v6);
    }
  }
  ExperienceManagerUtils::CopyableHString::~CopyableHString(&newString);
  ExperienceManagerUtils::CopyableHString::~CopyableHString(&v9);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v5;
}
