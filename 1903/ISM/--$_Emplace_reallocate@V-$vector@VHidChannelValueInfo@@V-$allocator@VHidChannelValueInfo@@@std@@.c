/*
 * XREFs of ??$_Emplace_reallocate@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@QEAAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800B1B18
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800B36B4 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range1@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@0AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@U?$integral_constant@_N$0A@@0@@Z @ 0x1800B1840 (--$_Destroy_range1@V-$allocator@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInf.c)
 *     ?_Change_array@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@AEAAXQEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@2@_K1@Z @ 0x1800B5C48 (-_Change_array@-$vector@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@.c)
 */

__int64 __fastcall std::vector<std::vector<HidChannelValueInfo>>::_Emplace_reallocate<std::vector<HidChannelValueInfo>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // r13
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // r9
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 result; // rax
  _QWORD *v26; // [rsp+20h] [rbp-48h]
  void *v27; // [rsp+20h] [rbp-48h]
  _QWORD *v28; // [rsp+70h] [rbp+8h]
  _QWORD *v29; // [rsp+88h] [rbp+20h]

  v6 = ((__int64)a2 - *a1) / 24;
  v7 = (a1[1] - *a1) / 24LL;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 24LL;
  v10 = v9 >> 1;
  if ( v9 <= 0xAAAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 24 * v11;
  if ( v11 > 0xAAAAAAAAAAAAAAALL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v26 = v13;
  v15 = 3 * v6;
  v16 = &v13[v15];
  v17 = v16 + 3;
  v29 = v16 + 3;
  try
  {
    *v16 = 0LL;
    v16[1] = 0LL;
    v16[2] = 0LL;
    *v16 = *a3;
    v16[1] = a3[1];
    v16[2] = a3[2];
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[2] = 0LL;
    v28 = &v13[v15];
    v18 = (_QWORD *)a1[1];
    if ( a2 == v18 )
    {
      if ( (_QWORD *)*a1 != v18 )
      {
        v19 = v13 + 2;
        v20 = *a1 - (_QWORD)v13;
        do
        {
          *(v19 - 2) = 0LL;
          *(v19 - 1) = 0LL;
          *v19 = 0LL;
          *(v19 - 2) = *(_QWORD *)((char *)v19 + v20 - 16);
          *(v19 - 1) = *(_QWORD *)((char *)v19 + v20 - 8);
          *v19 = *(_QWORD *)((char *)v19 + v20);
          *(_QWORD *)((char *)v19 + v20 - 16) = 0LL;
          *(_QWORD *)((char *)v19 + v20 - 8) = 0LL;
          *(_QWORD *)((char *)v19 + v20) = 0LL;
          v19 += 3;
        }
        while ( (_QWORD *)((char *)v19 + v20 - 16) != v18 );
      }
    }
    else
    {
      if ( (_QWORD *)*a1 != a2 )
      {
        v21 = v13 + 2;
        v22 = *a1 - (_QWORD)v13;
        do
        {
          *(v21 - 2) = 0LL;
          *(v21 - 1) = 0LL;
          *v21 = 0LL;
          *(v21 - 2) = *(_QWORD *)((char *)v21 + v22 - 16);
          *(v21 - 1) = *(_QWORD *)((char *)v21 + v22 - 8);
          *v21 = *(_QWORD *)((char *)v21 + v22);
          *(_QWORD *)((char *)v21 + v22 - 16) = 0LL;
          *(_QWORD *)((char *)v21 + v22 - 8) = 0LL;
          *(_QWORD *)((char *)v21 + v22) = 0LL;
          v21 += 3;
        }
        while ( (_QWORD *)((char *)v21 + v22 - 16) != a2 );
        v18 = (_QWORD *)a1[1];
      }
      v28 = v13;
      if ( a2 != v18 )
      {
        v23 = a2 + 2;
        do
        {
          *v17 = 0LL;
          v17[1] = 0LL;
          v17[2] = 0LL;
          *v17 = *(v23 - 2);
          v17[1] = *(v23 - 1);
          v17[2] = *v23;
          *(v23 - 2) = 0LL;
          *(v23 - 1) = 0LL;
          *v23 = 0LL;
          v17 += 3;
          v23 += 3;
        }
        while ( v23 - 2 != v18 );
      }
      std::_Destroy_range1<std::allocator<std::vector<HidChannelValueInfo>>>((__int64)v17, (__int64)v17);
    }
    std::vector<std::vector<HidChannelValueInfo>>::_Change_array(a1, v14, v8, v11, v26, -2LL);
    result = *a1 + 8 * v15;
  }
  catch ( ... )
  {
    std::vector<std::vector<HidChannelValueInfo>>::_Destroy(v24, v28, v29);
    std::_Deallocate<16,0>(v27, (const struct std::nothrow_t *)(24 * v11));
    throw;
  }
  return result;
}
