/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180026574
 * Callers:
 *     ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x180005E50 (-RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSite.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800525DC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
        char **a1,
        char *a2,
        char *a3)
{
  char *v4; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rcx
  char *v13; // rsi
  __int64 v14; // r13
  char *v15; // rdx
  char *v16; // rdx
  char *v17; // rcx
  signed __int64 v18; // r9
  char *v19; // rbx
  char *v20; // r14
  __int64 v21; // rcx
  const struct std::nothrow_t *v22; // rdx
  signed __int64 v24; // r8
  char *v25; // r8
  _QWORD *v26; // [rsp+20h] [rbp-58h]
  unsigned __int64 v27; // [rsp+80h] [rbp+8h] BYREF
  void *v28; // [rsp+88h] [rbp+10h] BYREF
  __int64 v29; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v28 = (void *)v11;
  v12 = 8 * v11;
  v29 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 8 * v6;
  v15 = &v13[8 * v6];
  v26 = v15 + 8;
  *(_QWORD *)v15 = 0LL;
  if ( v15 != a3 )
  {
    *(_QWORD *)v15 = *(_QWORD *)a3;
    *(_QWORD *)a3 = 0LL;
  }
  v27 = (unsigned __int64)&v13[8 * v6];
  v16 = a1[1];
  v17 = *a1;
  if ( v4 == v16 )
  {
    if ( v17 != v16 )
    {
      v18 = v13 - v17;
      do
      {
        *(_QWORD *)&v17[v18] = 0LL;
        if ( &v17[v18] != v17 )
        {
          *(_QWORD *)&v17[v18] = *(_QWORD *)v17;
          *(_QWORD *)v17 = 0LL;
        }
        v17 += 8;
      }
      while ( v17 != v16 );
    }
  }
  else
  {
    try
    {
      if ( v17 != v4 )
      {
        v24 = v13 - v17;
        do
        {
          *(_QWORD *)&v17[v24] = 0LL;
          if ( &v17[v24] != v17 )
          {
            *(_QWORD *)&v17[v24] = *(_QWORD *)v17;
            *(_QWORD *)v17 = 0LL;
          }
          v17 += 8;
        }
        while ( v17 != v4 );
        v16 = a1[1];
      }
      v27 = (unsigned __int64)v13;
      if ( v4 != v16 )
      {
        v25 = &v13[v14 - (_QWORD)v4 + 8];
        do
        {
          v17 = &v4[(_QWORD)v25];
          *(_QWORD *)&v4[(_QWORD)v25] = 0LL;
          if ( &v4[(_QWORD)v25] != v4 )
          {
            *(_QWORD *)v17 = *(_QWORD *)v4;
            *(_QWORD *)v4 = 0LL;
          }
          v4 += 8;
        }
        while ( v4 != v16 );
      }
    }
    catch ( ... )
    {
      std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::_Destroy(v17, v27, v26);
      std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8LL * (_QWORD)v28));
      throw;
    }
  }
  v19 = *a1;
  if ( *a1 )
  {
    v20 = a1[1];
    if ( v19 != v20 )
    {
      do
      {
        v21 = *(_QWORD *)v19;
        if ( *(_QWORD *)v19 )
        {
          *(_QWORD *)v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
        }
        v19 += 8;
      }
      while ( v19 != v20 );
      v19 = *a1;
    }
    v22 = (const struct std::nothrow_t *)((a1[2] - v19) & 0xFFFFFFFFFFFFFFF8uLL);
    v27 = (unsigned __int64)v22;
    v28 = v19;
    if ( (unsigned __int64)v22 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v28, &v27);
      v22 = (const struct std::nothrow_t *)v27;
      v19 = (char *)v28;
    }
    operator delete(v19, v22);
  }
  *a1 = v13;
  a1[1] = &v13[8 * v8];
  a1[2] = &v13[v29];
  return (__int64)&(*a1)[v14];
}
