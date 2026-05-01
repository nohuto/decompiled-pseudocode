/*
 * XREFs of ?GetMany@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x1802CE5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800854A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18011EAC0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4,
        unsigned int *a5)
{
  void *v5; // r13
  _OWORD *v7; // rsi
  size_t v9; // rbx
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  unsigned __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // xmm1_8
  __int64 v18; // rcx
  __int64 v19; // rax
  RTL_SRWLOCK *v20; // rcx
  unsigned int i; // ecx
  RTL_SRWLOCK *v23; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+80h] [rbp+18h]

  v5 = 0LL;
  v25 = 0;
  v7 = a4;
  v24 = 0;
  v9 = a3;
  v11 = 0;
  v12 = 0;
  if ( a3 )
    memset_0(a4, 0, 56LL * a3);
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read(&v23, (RTL_SRWLOCK *)(a1 + 72), &v24);
  if ( !*(_DWORD *)(a1 + 48) || (v5 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v14 = v24;
  }
  else
  {
    v14 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v14 >= 0 )
  {
    v12 = *(_DWORD *)(a1 + 40);
    if ( a2 > v12 )
    {
      v14 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v14 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        if ( a3 )
        {
          v13 = a2;
          do
          {
            if ( (unsigned int)v13 >= v12 )
              break;
            v14 = 0;
            v15 = 56LL * (unsigned int)v13;
            v16 = *(_QWORD *)(a1 + 56);
            v13 = (unsigned int)(v13 + 1);
            *v7 = *(_OWORD *)(v15 + v16);
            v7[1] = *(_OWORD *)(v15 + v16 + 16);
            v7[2] = *(_OWORD *)(v15 + v16 + 32);
            v17 = *(_QWORD *)(v15 + v16 + 48);
            LODWORD(v16) = v25 + 1;
            *((_QWORD *)v7 + 6) = v17;
            v7 = (_OWORD *)((char *)v7 + 56);
            v25 = v16;
          }
          while ( (unsigned int)v16 < a3 );
        }
      }
      else if ( a3 )
      {
        v13 = a2;
        do
        {
          if ( (unsigned int)v13 >= v12 )
            break;
          v14 = 0;
          v18 = 56LL * (unsigned int)v13;
          v19 = *(_QWORD *)(a1 + 56);
          ++v11;
          v13 = (unsigned int)(v13 + 1);
          *v7 = *(_OWORD *)(v18 + v19);
          v7[1] = *(_OWORD *)(v18 + v19 + 16);
          v7[2] = *(_OWORD *)(v18 + v19 + 32);
          *((_QWORD *)v7 + 6) = *(_QWORD *)(v18 + v19 + 48);
          v7 = (_OWORD *)((char *)v7 + 56);
        }
        while ( v11 < a3 );
      }
    }
  }
  if ( v23 )
  {
    v20 = v23 + 1;
    if ( LODWORD(v23->Ptr) == 1 )
      --LODWORD(v20->Ptr);
    else
      ReleaseSRWLockShared(v20);
  }
  if ( v14 >= 0 )
  {
    if ( v25 )
    {
      for ( i = 0; i < a3; ++i )
      {
        if ( i + a2 >= v12 )
          break;
        v14 = 0;
        ++v11;
      }
    }
    *a5 = v11;
  }
  operator delete(v5, (const struct std::nothrow_t *)v13);
  return (unsigned int)v14;
}
