/*
 * XREFs of ??$_Emplace_reallocate@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAPEAVHString@Wrappers@WRL@Microsoft@@QEAV2345@$$QEAV2345@@Z @ 0x1800D6E08
 * Callers:
 *     ?EnumerateDevices@SpatialInteractionDevices@@YAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800D7D40 (-EnumerateDevices@SpatialInteractionDevices@@YAJU_GUID@@PEAV-$vector@VHString@Wrappers@WRL@Micro.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXQEAVHString@Wrappers@WRL@Microsoft@@_K1@Z @ 0x1800D90AC (-_Change_array@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Micr.c)
 */

unsigned __int64 __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::_Emplace_reallocate<Microsoft::WRL::Wrappers::HString>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  char *v4; // rbx
  signed __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  size_t v12; // rcx
  char *v13; // r10
  unsigned __int64 v14; // r14
  char *v15; // rdx
  char *v16; // rcx
  signed __int64 v17; // r8
  signed __int64 v18; // rdx
  char *v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 result; // rax
  void *v22; // [rsp+20h] [rbp-38h]
  char *v23; // [rsp+60h] [rbp+8h]
  __int64 v24; // [rsp+78h] [rbp+20h]

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
  v24 = (__int64)&v13[v14 + 8];
  try
  {
    *(_QWORD *)&v13[v14] = *a3;
    *a3 = 0LL;
    v23 = &v13[v14];
    v15 = a1[1];
    v16 = *a1;
    if ( v4 == v15 )
    {
      if ( v16 != v15 )
      {
        v17 = v13 - v16;
        do
        {
          *(_QWORD *)&v16[v17] = *(_QWORD *)v16;
          *(_QWORD *)v16 = 0LL;
          v16 += 8;
        }
        while ( v16 != v15 );
      }
    }
    else
    {
      if ( v16 != v4 )
      {
        v18 = v13 - v16;
        do
        {
          *(_QWORD *)&v16[v18] = *(_QWORD *)v16;
          *(_QWORD *)v16 = 0LL;
          v16 += 8;
        }
        while ( v16 != v4 );
        v15 = a1[1];
      }
      v23 = v13;
      if ( v4 != v15 )
      {
        v19 = &v13[v14 - (_QWORD)v4];
        do
        {
          *(_QWORD *)&v4[(_QWORD)v19 + 8] = *(_QWORD *)v4;
          *(_QWORD *)v4 = 0LL;
          v4 += 8;
        }
        while ( v4 != v15 );
      }
    }
    std::vector<Microsoft::WRL::Wrappers::HString>::_Change_array(a1, v13, v8, v11, v13, -2LL);
    result = (unsigned __int64)&(*a1)[v14];
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::Wrappers::HString>::_Destroy(v20, v23, v24);
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  return result;
}
