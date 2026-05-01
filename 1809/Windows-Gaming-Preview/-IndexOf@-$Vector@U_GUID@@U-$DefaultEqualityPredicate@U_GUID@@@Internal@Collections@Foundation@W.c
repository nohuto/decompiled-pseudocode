/*
 * XREFs of ?IndexOf@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAIPEAE@Z @ 0x18002CEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042DE0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::IndexOf(
        __int64 a1,
        unsigned __int64 i,
        unsigned int *a3,
        _BYTE *a4)
{
  _DWORD *v4; // rbx
  _OWORD *v5; // rbp
  unsigned int v6; // r15d
  RTL_SRWLOCK *v7; // r14
  int v11; // edi
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // r9
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
    i = (unsigned __int64)v23;
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v16 = 16LL * *(unsigned int *)(a1 + 72);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 72), 0x10uLL) )
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
      v11 = -2147024882;
    }
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 72);
    v13 = 0;
    v14 = *(_QWORD *)(a1 + 88);
    v21 = *(_OWORD *)i;
    if ( v12 )
    {
      while ( 1 )
      {
        i = 16LL * v13;
        v15 = v21 - *(_QWORD *)(i + v14);
        if ( (_QWORD)v21 == *(_QWORD *)(i + v14) )
          v15 = *((_QWORD *)&v21 + 1) - *(_QWORD *)(i + v14 + 8);
        if ( !v15 )
          break;
        if ( ++v13 >= v12 )
          goto LABEL_19;
      }
      *a4 = 1;
      *a3 = v13;
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
  if ( v11 >= 0 && v6 )
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
    v11 = 0;
  }
  operator delete(v5, i);
  return (unsigned int)v11;
}
