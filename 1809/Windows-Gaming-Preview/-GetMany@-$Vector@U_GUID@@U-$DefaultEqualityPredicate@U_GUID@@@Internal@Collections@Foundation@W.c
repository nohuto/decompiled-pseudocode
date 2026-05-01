/*
 * XREFs of ?GetMany@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAU_GUID@@PEAI@Z @ 0x18002D330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042DE0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18004355E (memset_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::GetMany(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _OWORD *a4,
        unsigned int *a5)
{
  unsigned int v5; // r13d
  unsigned __int64 v6; // rbp
  _OWORD *v7; // r12
  int *v9; // r15
  int v10; // edi
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // ecx
  void *v16; // [rsp+20h] [rbp-48h]
  unsigned int v17; // [rsp+78h] [rbp+10h]
  unsigned int v18; // [rsp+80h] [rbp+18h]

  v17 = a2;
  v5 = 0;
  v6 = a3;
  v18 = 0;
  v7 = a4;
  if ( a3 )
    memset_0(a4, 0, 16LL * a3);
  v16 = 0LL;
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
  if ( !*(_DWORD *)(a1 + 80) || (v16 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v11 = *(_DWORD *)(a1 + 72);
    if ( v17 <= v11 )
    {
      if ( *(_DWORD *)(a1 + 80) )
      {
        if ( (_DWORD)v6 )
        {
          a2 = v17;
          do
          {
            if ( (unsigned int)a2 >= v11 )
              break;
            v12 = (unsigned int)a2;
            a2 = (unsigned int)(a2 + 1);
            *v7++ = *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v12);
            ++v18;
          }
          while ( v18 < (unsigned int)v6 );
        }
      }
      else if ( (_DWORD)v6 )
      {
        a2 = v17;
        do
        {
          v10 = 0;
          if ( (unsigned int)a2 >= v11 )
            break;
          ++v5;
          v13 = (unsigned int)a2;
          a2 = (unsigned int)(a2 + 1);
          *v7++ = *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v13);
        }
        while ( v5 < (unsigned int)v6 );
      }
    }
    else
    {
      v10 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
  }
  else
  {
    v10 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
    v11 = 0;
  }
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      --*v9;
    else
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( v10 >= 0 )
  {
    if ( v18 )
    {
      v14 = 0;
      if ( (_DWORD)v6 )
      {
        a2 = v17;
        do
        {
          if ( v14 + v17 >= v11 )
            break;
          v10 = 0;
          ++v5;
          ++v14;
        }
        while ( v14 < (unsigned int)v6 );
      }
    }
    *a5 = v5;
  }
  operator delete(v16, a2);
  return (unsigned int)v10;
}
