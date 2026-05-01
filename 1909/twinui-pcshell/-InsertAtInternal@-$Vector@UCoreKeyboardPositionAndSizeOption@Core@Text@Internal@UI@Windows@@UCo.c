/*
 * XREFs of ?InsertAtInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@_N@Z @ 0x1800591B0
 * Callers:
 *     ?Append@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x180059160 (-Append@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboard.c)
 *     ?InsertAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x18034EC10 (-InsertAt@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboa.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180059320 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18005933C (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x1800B41AC (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // rbx
  unsigned int v9; // eax
  int v10; // r12d
  unsigned int v11; // r8d
  int v12; // ebp
  __int64 v13; // rcx
  unsigned int v14; // ebp
  void *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int64 v19; // rcx
  __int128 v20; // xmm0
  char v22[16]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a1 + 72;
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*(_DWORD *)(a1 + 80) )
      *(_DWORD *)(a1 + 80) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  v9 = *(_DWORD *)(a1 + 40);
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 40);
  if ( a2 > v9 )
  {
    v10 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else if ( v9 >= 0x7FFFFFFF )
  {
    v10 = -2147024882;
  }
  else
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(v22, *(unsigned __int8 *)(a1 + 93), a1 + 96);
    v10 = 0;
    v11 = *(_DWORD *)(a1 + 44);
    if ( *(_DWORD *)(a1 + 40) + 1 <= v11 )
      goto LABEL_16;
    v12 = 1;
    v13 = *(_QWORD *)(a1 + 56);
    if ( v11 + 1 <= (v11 >> 1) + v11 )
      v12 = v11 >> 1;
    v14 = v11 + v12;
    v15 = v13 ? (void *)_o_realloc(v13, 56LL * v14) : malloc(56LL * v14);
    if ( v15 )
    {
      *(_QWORD *)(a1 + 56) = v15;
      *(_DWORD *)(a1 + 44) = v14;
    }
    else
    {
      v10 = -2147024882;
    }
    if ( v10 >= 0 )
    {
LABEL_16:
      v16 = *(_DWORD *)(a1 + 40);
      if ( a2 < v16
        && memmove_s(
             (void *const)(*(_QWORD *)(a1 + 56) + 56LL * (a2 + 1)),
             56LL * (*(_DWORD *)(a1 + 44) - a2 - 1),
             (const void *const)(*(_QWORD *)(a1 + 56) + 56LL * a2),
             56LL * (v16 - a2)) )
      {
        v10 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        v17 = *(_QWORD *)(a1 + 56);
        v18 = *(_OWORD *)(a3 + 16);
        v19 = 56LL * a2;
        *(_OWORD *)(v19 + v17) = *(_OWORD *)a3;
        v20 = *(_OWORD *)(a3 + 32);
        *(_OWORD *)(v19 + v17 + 16) = v18;
        *(_QWORD *)&v18 = *(_QWORD *)(a3 + 48);
        *(_OWORD *)(v19 + v17 + 32) = v20;
        *(_QWORD *)(v19 + v17 + 48) = v18;
        ++*(_DWORD *)(a1 + 40);
        ++*(_DWORD *)(a1 + 88);
      }
    }
  }
  if ( v4 )
  {
    if ( *(_DWORD *)v4 == 1 )
      *(_DWORD *)(v4 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v4 + 8));
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  else
    return Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent(
             (unsigned __int8)v22[0],
             *(unsigned __int8 *)(a1 + 92),
             a1,
             1LL,
             a2);
}
