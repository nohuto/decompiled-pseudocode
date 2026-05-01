/*
 * XREFs of ?IndexOf@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAIPEAE@Z @ 0x18002CF60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800432F0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::IndexOf(
        __int64 a1,
        __int64 i,
        unsigned int *a3,
        _BYTE *a4)
{
  _DWORD *v4; // rbx
  _OWORD *v5; // rbp
  unsigned int v6; // r15d
  RTL_SRWLOCK *v7; // r14
  unsigned __int64 v11; // r8
  int v12; // edi
  __int64 v13; // r9
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int128 v21; // [rsp+20h] [rbp-38h]
  __int128 v22; // [rsp+20h] [rbp-38h]
  __int128 *v23; // [rsp+68h] [rbp+10h]

  v23 = (__int128 *)i;
  *a3 = 0;
  v4 = (_DWORD *)(a1 + 104);
  v5 = 0LL;
  *a4 = 0;
  v6 = 0;
  v7 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v7->Ptr) >= 0 )
      ++LODWORD(v7->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
    i = (__int64)v23;
  }
  v11 = *(unsigned int *)(a1 + 72);
  v12 = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v16 = 16 * v11;
    if ( !is_mul_ok(v11, 0x10uLL) )
      v16 = -1LL;
    v5 = operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 72); v5[v17] = *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v17) )
      {
        ++v6;
        v17 = (unsigned int)i;
        i = (unsigned int)(i + 1);
      }
    }
    else
    {
      v12 = -2147024882;
    }
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 88);
    v14 = 0;
    v21 = *(_OWORD *)i;
    if ( (_DWORD)v11 )
    {
      while ( 1 )
      {
        i = 16LL * v14;
        v15 = v21 - *(_QWORD *)(i + v13);
        if ( (_QWORD)v21 == *(_QWORD *)(i + v13) )
          v15 = *((_QWORD *)&v21 + 1) - *(_QWORD *)(i + v13 + 8);
        if ( !v15 )
          break;
        if ( ++v14 >= (unsigned int)v11 )
          goto LABEL_19;
      }
      *a4 = 1;
      *a3 = v14;
    }
  }
LABEL_19:
  if ( v4 )
  {
    if ( *v4 == 1 )
      --LODWORD(v7->Ptr);
    else
      ReleaseSRWLockShared(v7);
  }
  if ( v12 >= 0 && v6 )
  {
    v18 = 0;
    v22 = *v23;
    while ( 1 )
    {
      i = 16LL * v18;
      v19 = v22 - *(_QWORD *)((char *)v5 + i);
      if ( (_QWORD)v22 == *(_QWORD *)((char *)v5 + i) )
        v19 = *((_QWORD *)&v22 + 1) - *(_QWORD *)((char *)v5 + i + 8);
      if ( !v19 )
        break;
      if ( ++v18 >= v6 )
        goto LABEL_32;
    }
    *a4 = 1;
    *a3 = v18;
LABEL_32:
    v12 = 0;
  }
  operator delete(v5, (const struct std::nothrow_t *)i);
  return (unsigned int)v12;
}
