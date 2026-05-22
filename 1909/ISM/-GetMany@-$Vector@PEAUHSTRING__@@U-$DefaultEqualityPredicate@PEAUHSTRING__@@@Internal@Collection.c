/*
 * XREFs of ?GetMany@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x18011DCD0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CB58 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18011FAF8 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        HSTRING *a4,
        _DWORD *a5)
{
  size_t v5; // rbp
  __int64 v6; // rdi
  HSTRING *v7; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  const struct std::nothrow_t *v11; // rdx
  HRESULT v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  RTL_SRWLOCK *v16; // rcx
  unsigned int v17; // ecx
  RTL_SRWLOCK *v19; // [rsp+20h] [rbp-48h] BYREF
  void *v20; // [rsp+70h] [rbp+8h]
  HRESULT v22; // [rsp+80h] [rbp+18h] BYREF

  v5 = a3;
  v6 = 0LL;
  v7 = a4;
  v22 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  v20 = 0LL;
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read(&v19, a1 + 72, &v22);
  if ( !*(_DWORD *)(a1 + 48) || (v20 = operator new[](v5, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v12 = v22;
  }
  else
  {
    v12 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v12 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 40);
    v13 = a2;
    if ( a2 > v10 )
    {
      v12 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v13 = a2;
    }
    if ( v12 >= 0 && (_DWORD)v5 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        do
        {
          v14 = v9 + v13;
          if ( v14 >= v10 )
            break;
          v12 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 56) + 8LL * v14), &v7[v9]);
          if ( v12 < 0 )
            break;
          v13 = a2;
          ++v9;
        }
        while ( v9 < (unsigned int)v5 );
      }
      else
      {
        do
        {
          v15 = v6 + v13;
          if ( v15 >= v10 )
            break;
          v12 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 56) + 8LL * v15), &v7[v6]);
          if ( v12 < 0 )
            break;
          v13 = a2;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < (unsigned int)v5 );
      }
    }
  }
  if ( v19 )
  {
    v16 = v19 + 1;
    if ( LODWORD(v19->Ptr) == 1 )
      --LODWORD(v16->Ptr);
    else
      ReleaseSRWLockShared(v16);
  }
  if ( v12 < 0 )
  {
    if ( (_DWORD)v6 )
    {
      do
      {
        WindowsDeleteString(*v7);
        *v7++ = 0LL;
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    if ( v9 )
    {
      v17 = 0;
      if ( (_DWORD)v5 )
      {
        v11 = (const struct std::nothrow_t *)a2;
        do
        {
          if ( v17 + a2 >= v10 )
            break;
          v12 = 0;
          LODWORD(v6) = v6 + 1;
          ++v17;
        }
        while ( v17 < (unsigned int)v5 );
      }
    }
    *a5 = v6;
  }
  operator delete(v20, v11);
  return (unsigned int)v12;
}
