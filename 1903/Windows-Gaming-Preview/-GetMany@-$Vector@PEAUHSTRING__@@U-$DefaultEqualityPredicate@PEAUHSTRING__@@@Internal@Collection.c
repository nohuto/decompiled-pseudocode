/*
 * XREFs of ?GetMany@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x1800135E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042DE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180043170 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800438DE (memset_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        HSTRING *a4,
        _DWORD *a5)
{
  __int64 v5; // rsi
  HSTRING *v7; // r14
  __int64 v8; // rdx
  unsigned __int64 v9; // r15
  _DWORD *v10; // rbx
  RTL_SRWLOCK *v11; // r13
  HRESULT v12; // edi
  unsigned int v13; // ebp
  unsigned int v14; // eax
  unsigned int v15; // r15d
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rbx
  void *v21; // [rsp+28h] [rbp-40h]

  v5 = 0LL;
  v7 = a4;
  v8 = a1;
  v9 = a3;
  if ( a3 )
  {
    memset_0(a4, 0, 8LL * a3);
    v8 = a1;
  }
  v10 = (_DWORD *)(v8 + 104);
  v21 = 0LL;
  v11 = (RTL_SRWLOCK *)(v8 + 112);
  *a5 = 0;
  if ( *(_DWORD *)(v8 + 104) == 1 )
  {
    if ( SLODWORD(v11->Ptr) >= 0 )
      ++LODWORD(v11->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(v8 + 112));
    v8 = a1;
  }
  v12 = 0;
  if ( *(_DWORD *)(v8 + 80) )
  {
    v21 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v21 )
    {
      v12 = -2147024882;
      RoOriginateError(2147942414LL, 0LL);
      v13 = 0;
LABEL_23:
      v15 = 0;
      goto LABEL_24;
    }
    v8 = a1;
  }
  v13 = *(_DWORD *)(v8 + 72);
  v14 = a2;
  if ( a2 > v13 )
  {
    v12 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
    goto LABEL_23;
  }
  if ( !a3 )
    goto LABEL_23;
  if ( !*(_DWORD *)(v8 + 80) )
  {
    do
    {
      v17 = v5 + v14;
      if ( v17 >= v13 )
        break;
      v12 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(v8 + 88) + 8LL * v17), &v7[v5]);
      if ( v12 < 0 )
        break;
      v8 = a1;
      v5 = (unsigned int)(v5 + 1);
      v14 = a2;
    }
    while ( (unsigned int)v5 < a3 );
    goto LABEL_23;
  }
  v15 = 0;
  do
  {
    v16 = v15 + v14;
    if ( v16 >= v13 )
      break;
    v12 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(v8 + 88) + 8LL * v16), &v7[v15]);
    if ( v12 < 0 )
      break;
    v8 = a1;
    ++v15;
    v14 = a2;
  }
  while ( v15 < a3 );
LABEL_24:
  if ( v10 )
  {
    if ( *v10 == 1 )
      --LODWORD(v11->Ptr);
    else
      ReleaseSRWLockShared(v11);
  }
  if ( v12 < 0 )
  {
    if ( (_DWORD)v5 )
    {
      v19 = (unsigned int)v5;
      do
      {
        WindowsDeleteString(*v7);
        *v7++ = 0LL;
        --v19;
      }
      while ( v19 );
    }
  }
  else
  {
    if ( v15 )
    {
      v18 = 0;
      if ( a3 )
      {
        v8 = a2;
        do
        {
          if ( v18 + a2 >= v13 )
            break;
          v12 = 0;
          LODWORD(v5) = v5 + 1;
          ++v18;
        }
        while ( v18 < a3 );
      }
    }
    *a5 = v5;
  }
  operator delete(v21, (const struct std::nothrow_t *)v8);
  return (unsigned int)v12;
}
