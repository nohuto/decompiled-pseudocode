/*
 * XREFs of ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800B1764
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800B3564 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800B8AB0 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@AEAAXQEAVHidChannelValueInfo@@_K1@Z @ 0x1800B5BF0 (-_Change_array@-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  size_t v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rax
  char *v18; // rcx
  char *v19; // rcx
  char *v20; // rcx
  __int64 result; // rax
  void *v22; // [rsp+68h] [rbp+10h]

  v4 = a2;
  v6 = (a2 - *a1) / 72;
  v7 = (a1[1] - *a1) / 72;
  if ( v7 == 0x38E38E38E38E38ELL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 72;
  v10 = v9 >> 1;
  if ( v9 <= 0x38E38E38E38E38ELL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 72 * v11;
  if ( v11 > 0x38E38E38E38E38ELL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v22 = v13;
  try
  {
    v15 = 9 * v6;
    *(_OWORD *)&v13[v15] = *(_OWORD *)a3;
    *(_OWORD *)&v13[v15 + 2] = *(_OWORD *)(a3 + 16);
    *(_OWORD *)&v13[v15 + 4] = *(_OWORD *)(a3 + 32);
    *(_OWORD *)&v13[v15 + 6] = *(_OWORD *)(a3 + 48);
    v13[v15 + 8] = *(_QWORD *)(a3 + 64);
    v16 = a1[1];
    v17 = *a1;
    if ( v4 == v16 )
    {
      if ( v17 != v16 )
      {
        v18 = (char *)v14 - v17;
        do
        {
          *(_OWORD *)&v18[v17] = *(_OWORD *)v17;
          *(_OWORD *)&v18[v17 + 16] = *(_OWORD *)(v17 + 16);
          *(_OWORD *)&v18[v17 + 32] = *(_OWORD *)(v17 + 32);
          *(_OWORD *)&v18[v17 + 48] = *(_OWORD *)(v17 + 48);
          *(_QWORD *)&v18[v17 + 64] = *(_QWORD *)(v17 + 64);
          v17 += 72LL;
        }
        while ( v17 != v16 );
      }
    }
    else
    {
      if ( v17 != v4 )
      {
        v19 = (char *)v14 - v17;
        do
        {
          *(_OWORD *)&v19[v17] = *(_OWORD *)v17;
          *(_OWORD *)&v19[v17 + 16] = *(_OWORD *)(v17 + 16);
          *(_OWORD *)&v19[v17 + 32] = *(_OWORD *)(v17 + 32);
          *(_OWORD *)&v19[v17 + 48] = *(_OWORD *)(v17 + 48);
          *(_QWORD *)&v19[v17 + 64] = *(_QWORD *)(v17 + 64);
          v17 += 72LL;
        }
        while ( v17 != v4 );
        v16 = a1[1];
      }
      if ( v4 != v16 )
      {
        v20 = (char *)v14 + v15 * 8 - v4;
        do
        {
          *(_OWORD *)&v20[v4 + 72] = *(_OWORD *)v4;
          *(_OWORD *)&v20[v4 + 88] = *(_OWORD *)(v4 + 16);
          *(_OWORD *)&v20[v4 + 104] = *(_OWORD *)(v4 + 32);
          *(_OWORD *)&v20[v4 + 120] = *(_OWORD *)(v4 + 48);
          *(_QWORD *)&v20[v4 + 136] = *(_QWORD *)(v4 + 64);
          v4 += 72LL;
        }
        while ( v4 != v16 );
      }
    }
    std::vector<HidChannelValueInfo>::_Change_array(a1, v14, v8, v11, -2LL);
    result = v15 * 8 + *a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(72 * v11));
    throw;
  }
  return result;
}
