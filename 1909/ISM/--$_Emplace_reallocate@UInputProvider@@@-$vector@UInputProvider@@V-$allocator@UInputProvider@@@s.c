/*
 * XREFs of ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x1800197BC
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18001952C (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800525DC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(char **a1, char *a2, _OWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  size_t v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // r12
  _QWORD *v14; // r9
  _QWORD *v15; // rcx
  char *v16; // r8
  char *v17; // rdx
  _QWORD *v18; // rcx
  signed __int64 v19; // rdx
  _QWORD *v20; // r9
  char *v21; // rbx
  char *v22; // r14
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  signed __int64 v26; // rdx
  _QWORD *v27; // r8
  __int64 v28; // rbx
  _QWORD *v29; // rdx
  unsigned __int64 v30; // [rsp+80h] [rbp+8h] BYREF
  void *v31; // [rsp+88h] [rbp+10h] BYREF
  __int64 v32; // [rsp+98h] [rbp+20h]

  v6 = (a2 - *a1) / 24;
  v7 = (a1[1] - *a1) / 24;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 24;
  if ( v9 > 0xAAAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v10 = v8;
  }
  else
  {
    v10 = (v9 >> 1) + v9;
    if ( v10 < v8 )
      v10 = v8;
  }
  v31 = (void *)v10;
  v32 = 24 * v10;
  v11 = 24 * v10;
  if ( v10 > 0xAAAAAAAAAAAAAAALL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v13 = 24 * v6;
  v14 = &v12[3 * v6];
  *(_OWORD *)v14 = *a3;
  v15 = a3 + 1;
  v14[2] = 0LL;
  if ( v14 + 2 != (_QWORD *)(a3 + 1) )
  {
    v14[2] = *v15;
    *v15 = 0LL;
  }
  v30 = (unsigned __int64)&v12[3 * v6];
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    if ( v17 != v16 )
    {
      v18 = v12 + 2;
      v19 = v17 - (char *)v12;
      do
      {
        *((_OWORD *)v18 - 1) = *(_OWORD *)((char *)v18 + v19 - 16);
        *v18 = 0LL;
        v20 = (_QWORD *)((char *)v18 + v19);
        if ( v18 != (_QWORD *)((char *)v18 + v19) )
        {
          *v18 = *v20;
          *v20 = 0LL;
        }
        v18 += 3;
      }
      while ( (char *)v18 + v19 - 16 != v16 );
    }
  }
  else
  {
    try
    {
      if ( v17 != a2 )
      {
        v15 = v12 + 2;
        v26 = v17 - (char *)v12;
        do
        {
          *((_OWORD *)v15 - 1) = *(_OWORD *)((char *)v15 + v26 - 16);
          *v15 = 0LL;
          v27 = (_QWORD *)((char *)v15 + v26);
          if ( v15 != (_QWORD *)((char *)v15 + v26) )
          {
            *v15 = *v27;
            *v27 = 0LL;
          }
          v15 += 3;
        }
        while ( (char *)v15 + v26 - 16 != a2 );
        v16 = a1[1];
      }
      v30 = (unsigned __int64)v12;
      if ( a2 != v16 )
      {
        v15 = v14 + 5;
        v28 = &a2[-v13] - (char *)v12;
        do
        {
          *((_OWORD *)v15 - 1) = *(_OWORD *)((char *)v15 + v28 - 40);
          *v15 = 0LL;
          v29 = (_QWORD *)((char *)v15 + v28 - 24);
          if ( v15 != v29 )
          {
            *v15 = *v29;
            *v29 = 0LL;
          }
          v15 += 3;
        }
        while ( (char *)v15 + v28 - 40 != v16 );
      }
    }
    catch ( ... )
    {
      std::vector<InputProvider>::_Destroy(v15, v30, v14 + 3);
      std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(24LL * (_QWORD)v31));
      throw;
    }
  }
  v21 = *a1;
  if ( *a1 )
  {
    v22 = a1[1];
    if ( v21 != v22 )
    {
      do
      {
        v23 = *((_QWORD *)v21 + 2);
        if ( v23 )
        {
          *((_QWORD *)v21 + 2) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
        v21 += 24;
      }
      while ( v21 != v22 );
      v21 = *a1;
    }
    v24 = 24 * ((a1[2] - v21) / 24);
    v30 = v24;
    v31 = v21;
    if ( v24 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v31, &v30);
      v24 = v30;
      v21 = (char *)v31;
    }
    operator delete(v21, (const struct std::nothrow_t *)v24);
  }
  *a1 = (char *)v12;
  a1[1] = (char *)&v12[3 * v8];
  a1[2] = (char *)&v12[(unsigned __int64)v32 / 8];
  return (__int64)&(*a1)[v13];
}
