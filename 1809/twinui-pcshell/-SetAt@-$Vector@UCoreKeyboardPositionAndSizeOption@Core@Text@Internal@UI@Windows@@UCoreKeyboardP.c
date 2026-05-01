/*
 * XREFs of ?SetAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1802CF220
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180053DCC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180053DE8 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1801218CC (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x180122E64 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 v5; // rbp
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  RTL_SRWLOCK *v11; // rcx
  _BYTE v13[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v14; // [rsp+34h] [rbp-A4h] BYREF
  __int64 v15; // [rsp+38h] [rbp-A0h]
  RTL_SRWLOCK *v16; // [rsp+40h] [rbp-98h] BYREF
  __int128 v17; // [rsp+48h] [rbp-90h]
  __int128 v18; // [rsp+58h] [rbp-80h]
  __int128 v19; // [rsp+68h] [rbp-70h]
  _BYTE Destination[56]; // [rsp+78h] [rbp-60h] BYREF

  v3 = *a3;
  v14 = 0;
  v5 = a2;
  v17 = v3;
  v18 = a3[1];
  v19 = a3[2];
  v15 = *((_QWORD *)a3 + 6);
  XWinRT::SerializingLockPolicy::Write(&v16, (RTL_SRWLOCK *)(a1 + 72), &v14);
  v6 = v14;
  if ( v14 >= 0 )
  {
    if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v13);
      v7 = 56 * v5;
      v6 = 0;
      if ( memmove_s(Destination, 0x38uLL, (const void *const)(56 * v5 + *(_QWORD *)(a1 + 56)), 0x38uLL) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 56);
        v9 = v18;
        *(_OWORD *)(v8 + 56 * v5) = v17;
        v10 = v19;
        *(_OWORD *)(v8 + v7 + 16) = v9;
        *(_OWORD *)(v8 + v7 + 32) = v10;
        *(_QWORD *)(v8 + v7 + 48) = v15;
        ++*(_DWORD *)(a1 + 88);
      }
    }
  }
  if ( v16 )
  {
    v11 = v16 + 1;
    if ( LODWORD(v16->Ptr) == 1 )
      LODWORD(v11->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v11);
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
