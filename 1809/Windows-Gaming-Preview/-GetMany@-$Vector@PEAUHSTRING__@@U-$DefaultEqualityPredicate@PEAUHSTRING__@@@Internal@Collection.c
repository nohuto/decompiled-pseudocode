/*
 * XREFs of ?GetMany@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x1800138F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042DE0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18004355E (memset_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        HSTRING *a4,
        _DWORD *a5)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  HSTRING *v7; // r15
  int *v9; // r12
  HRESULT v10; // esi
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int i; // ebp
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rbx
  void *v19; // [rsp+20h] [rbp-48h]
  unsigned int v20; // [rsp+70h] [rbp+8h]
  unsigned int v21; // [rsp+78h] [rbp+10h]

  v21 = a2;
  v5 = 0LL;
  v6 = a3;
  v7 = a4;
  v20 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  v19 = 0LL;
  v9 = (int *)(a1 + 112);
  *a5 = 0;
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( *v9 >= 0 )
      ++*v9;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  v10 = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v19 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v19 )
    {
      v10 = -2147024882;
LABEL_10:
      RoOriginateError((unsigned int)v10, 0LL);
LABEL_23:
      i = 0;
      goto LABEL_24;
    }
  }
  v11 = *(_DWORD *)(a1 + 72);
  v12 = v21;
  v20 = v11;
  if ( v21 > v11 )
  {
    v10 = -2147483637;
    goto LABEL_10;
  }
  if ( !*(_DWORD *)(a1 + 80) )
  {
    if ( (_DWORD)v6 )
    {
      do
      {
        v15 = v5 + v12;
        if ( v15 >= v11 )
          break;
        v10 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 88) + 8LL * v15), &v7[v5]);
        if ( v10 < 0 )
          break;
        v11 = v20;
        v5 = (unsigned int)(v5 + 1);
        v12 = v21;
      }
      while ( (unsigned int)v5 < (unsigned int)v6 );
    }
    goto LABEL_23;
  }
  for ( i = 0; i < (unsigned int)v6; v12 = v21 )
  {
    v14 = i + v12;
    if ( v14 >= v11 )
      break;
    v10 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 88) + 8LL * v14), &v7[i]);
    if ( v10 < 0 )
      break;
    v11 = v20;
    ++i;
  }
LABEL_24:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      --*v9;
    else
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( v10 < 0 )
  {
    if ( (_DWORD)v5 )
    {
      v17 = (unsigned int)v5;
      do
      {
        WindowsDeleteString(*v7);
        *v7++ = 0LL;
        --v17;
      }
      while ( v17 );
    }
  }
  else
  {
    if ( i )
    {
      v16 = 0;
      if ( (_DWORD)v6 )
      {
        a2 = v20;
        do
        {
          if ( v16 + v21 >= v20 )
            break;
          v10 = 0;
          LODWORD(v5) = v5 + 1;
          ++v16;
        }
        while ( v16 < (unsigned int)v6 );
      }
    }
    *a5 = v5;
  }
  operator delete(v19, a2);
  return (unsigned int)v10;
}
