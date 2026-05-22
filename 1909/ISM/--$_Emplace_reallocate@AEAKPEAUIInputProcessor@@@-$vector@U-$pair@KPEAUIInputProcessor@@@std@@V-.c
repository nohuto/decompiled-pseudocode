/*
 * XREFs of ??$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAK$$QEAPEAUIInputProcessor@@@Z @ 0x180014900
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180012790 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180014A1C (-_Calculate_growth@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInput.c)
 */

unsigned __int64 __fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor *>(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  char *v6; // rdi
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r15
  size_t v11; // rcx
  unsigned __int64 v12; // r9
  char *v13; // rsi
  unsigned __int64 v14; // r14
  char *v15; // rcx
  char *v16; // rax
  signed __int64 v17; // rdx
  signed __int64 v19; // rcx
  signed __int64 v20; // rax
  unsigned __int64 v21; // [rsp+68h] [rbp+10h]

  v6 = a2;
  v8 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v9 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  if ( v9 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v10 = v9 + 1;
  v21 = std::vector<std::pair<unsigned long,IInputProcessor *>>::_Calculate_growth(a1, v10);
  v11 = 16 * v21;
  if ( v21 > v12 )
    v11 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v14 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  *(_DWORD *)&v13[v14] = *a3;
  *(_QWORD *)&v13[v14 + 8] = *a4;
  v15 = *(char **)(a1 + 8);
  v16 = *(char **)a1;
  if ( v6 == v15 )
  {
    if ( v16 != v15 )
    {
      v17 = v13 - v16;
      do
      {
        *(_OWORD *)&v16[v17] = *(_OWORD *)v16;
        v16 += 16;
      }
      while ( v16 != v15 );
    }
  }
  else
  {
    try
    {
      if ( v16 != v6 )
      {
        v19 = v13 - v16;
        do
        {
          *(_OWORD *)&v16[v19] = *(_OWORD *)v16;
          v16 += 16;
        }
        while ( v16 != v6 );
        v15 = *(char **)(a1 + 8);
      }
      if ( v6 != v15 )
      {
        v20 = &v13[v14 + 16] - v6;
        do
        {
          *(_OWORD *)&v6[v20] = *(_OWORD *)v6;
          v6 += 16;
        }
        while ( v6 != v15 );
      }
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(16 * v21));
      throw;
    }
  }
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
  *(_QWORD *)a1 = v13;
  *(_QWORD *)(a1 + 8) = &v13[16 * v10];
  *(_QWORD *)(a1 + 16) = &v13[16 * v21];
  return v14 + *(_QWORD *)a1;
}
