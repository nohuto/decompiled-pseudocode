/*
 * XREFs of ?InsertAtInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@_N@Z @ 0x180053C40
 * Callers:
 *     ?Append@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x180053BF0 (-Append@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboard.c)
 *     ?InsertAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1802CEBB0 (-InsertAt@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboa.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180053DCC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180053DE8 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x180122E64 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        char a4)
{
  bool v4; // zf
  __int64 v5; // rbx
  __int128 v6; // xmm0
  __int128 v9; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // xmm3_8
  unsigned int v13; // eax
  int v14; // r15d
  unsigned int v15; // r8d
  int v16; // ebp
  __int64 v17; // rcx
  unsigned int v18; // ebp
  void *v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  char v24[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+38h] [rbp-60h]
  __int128 v26; // [rsp+40h] [rbp-58h]
  __int128 v27; // [rsp+50h] [rbp-48h]
  __int128 v28; // [rsp+60h] [rbp-38h]

  v4 = *(_DWORD *)(a1 + 72) == 1;
  v5 = a1 + 72;
  v6 = *a3;
  v9 = a3[1];
  v11 = a3[2];
  v12 = *((_QWORD *)a3 + 6);
  v26 = *a3;
  v27 = v9;
  v28 = v11;
  v25 = v12;
  if ( v4 )
  {
    if ( !*(_DWORD *)(a1 + 80) )
      *(_DWORD *)(a1 + 80) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
    v6 = v26;
    v9 = v27;
    v11 = v28;
    v12 = v25;
  }
  v13 = *(_DWORD *)(a1 + 40);
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 40);
  if ( a2 > v13 )
  {
    v14 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
    goto LABEL_19;
  }
  if ( v13 >= 0x7FFFFFFF )
  {
    v14 = -2147024882;
    goto LABEL_19;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(v24, *(unsigned __int8 *)(a1 + 93), a1 + 96);
  v14 = 0;
  v15 = *(_DWORD *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 40) + 1 > v15 )
  {
    v16 = 1;
    v17 = *(_QWORD *)(a1 + 56);
    if ( v15 + 1 <= (v15 >> 1) + v15 )
      v16 = v15 >> 1;
    v18 = v15 + v16;
    if ( v17 )
      v19 = (void *)_o_realloc(v17, 56LL * v18);
    else
      v19 = malloc(56LL * v18);
    if ( v19 )
    {
      *(_QWORD *)(a1 + 56) = v19;
      *(_DWORD *)(a1 + 44) = v18;
    }
    else
    {
      v14 = -2147024882;
    }
    if ( v14 < 0 )
      goto LABEL_19;
    v6 = v26;
    v9 = v27;
    v11 = v28;
    v12 = v25;
  }
  v20 = *(_DWORD *)(a1 + 40);
  if ( a2 >= v20 )
  {
LABEL_18:
    v21 = *(_QWORD *)(a1 + 56);
    v22 = 56LL * a2;
    *(_OWORD *)(v22 + v21) = v6;
    *(_OWORD *)(v22 + v21 + 16) = v9;
    *(_OWORD *)(v22 + v21 + 32) = v11;
    *(_QWORD *)(v22 + v21 + 48) = v12;
    ++*(_DWORD *)(a1 + 40);
    ++*(_DWORD *)(a1 + 88);
    goto LABEL_19;
  }
  if ( !memmove_s(
          (void *const)(*(_QWORD *)(a1 + 56) + 56LL * (a2 + 1)),
          56LL * (*(_DWORD *)(a1 + 44) - a2 - 1),
          (const void *const)(*(_QWORD *)(a1 + 56) + 56LL * a2),
          56LL * (v20 - a2)) )
  {
    v6 = v26;
    v9 = v27;
    v11 = v28;
    v12 = v25;
    goto LABEL_18;
  }
  v14 = -2147418113;
  RoOriginateError(2147549183LL, 0LL);
LABEL_19:
  if ( v5 )
  {
    if ( *(_DWORD *)v5 == 1 )
      *(_DWORD *)(v5 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v5 + 8));
  }
  if ( v14 < 0 )
    return (unsigned int)v14;
  else
    return Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent(
             (unsigned __int8)v24[0],
             *(unsigned __int8 *)(a1 + 92),
             a1,
             1LL,
             a2);
}
