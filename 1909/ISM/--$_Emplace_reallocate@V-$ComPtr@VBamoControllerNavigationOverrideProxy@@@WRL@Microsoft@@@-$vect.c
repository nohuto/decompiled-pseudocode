/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180071920
 * Callers:
 *     ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x1800739B0 (-RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@_K1@Z @ 0x180073E38 (-_Change_array@-$vector@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V-$all.c)
 */

unsigned __int64 __fastcall std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>(
        char **a1,
        char *a2,
        char *a3)
{
  char *v4; // rbx
  signed __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  size_t v12; // rcx
  char *v13; // rax
  unsigned __int64 v14; // r14
  char *v15; // rdx
  char *v16; // rdx
  char *v17; // rcx
  signed __int64 v18; // r9
  signed __int64 v19; // r8
  char *v20; // r9
  __int64 v21; // rcx
  unsigned __int64 result; // rax
  void *v23; // [rsp+20h] [rbp-38h]
  __int64 *v24; // [rsp+60h] [rbp+8h]
  __int64 *v25; // [rsp+78h] [rbp+20h]

  v4 = a2;
  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = &v13[v14];
  v25 = (__int64 *)&v13[v14 + 8];
  try
  {
    *(_QWORD *)v15 = 0LL;
    if ( v15 != a3 )
    {
      *(_QWORD *)v15 = *(_QWORD *)a3;
      *(_QWORD *)a3 = 0LL;
    }
    v24 = (__int64 *)&v13[v14];
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
      if ( v17 != v4 )
      {
        v19 = v13 - v17;
        do
        {
          *(_QWORD *)&v17[v19] = 0LL;
          if ( &v17[v19] != v17 )
          {
            *(_QWORD *)&v17[v19] = *(_QWORD *)v17;
            *(_QWORD *)v17 = 0LL;
          }
          v17 += 8;
        }
        while ( v17 != v4 );
        v16 = a1[1];
      }
      v24 = (__int64 *)v13;
      if ( v4 != v16 )
      {
        v20 = &v13[v14 - (_QWORD)v4 + 8];
        do
        {
          *(_QWORD *)&v20[(_QWORD)v4] = 0LL;
          if ( &v20[(_QWORD)v4] != v4 )
          {
            *(_QWORD *)&v20[(_QWORD)v4] = *(_QWORD *)v4;
            *(_QWORD *)v4 = 0LL;
          }
          v4 += 8;
        }
        while ( v4 != v16 );
      }
    }
    std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::_Change_array(
      a1,
      v13,
      v8,
      v11,
      v13,
      -2LL);
    result = (unsigned __int64)&(*a1)[v14];
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::_Destroy(v21, v24, v25);
    std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  return result;
}
