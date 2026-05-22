/*
 * XREFs of ??$_Emplace_reallocate@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAPEAUTraceSessionProviderConfig@@QEAU2@AEAY0CH@$$CBG$$QEAH22@Z @ 0x18009B084
 * Callers:
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAAEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH11@Z @ 0x18009B778 (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$construct@UTraceSessionProviderConfig@@AEAY0CH@$$CBGHHH@?$_Default_allocator_traits@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@SAXAEAV?$allocator@UTraceSessionProviderConfig@@@1@QEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH33@Z @ 0x18009B62C (--$construct@UTraceSessionProviderConfig@@AEAY0CH@$$CBGHHH@-$_Default_allocator_traits@V-$alloca.c)
 *     ?_Change_array@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@AEAAXQEAUTraceSessionProviderConfig@@_K1@Z @ 0x18009FFE8 (-_Change_array@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@.c)
 */

__int64 __fastcall std::vector<TraceSessionProviderConfig>::_Emplace_reallocate<unsigned short const (&)[39],int,int,int>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v8; // r12
  __int64 v9; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  size_t v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  __int64 v17; // r12
  _QWORD *v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rax
  char *v21; // rdx
  char *v22; // rcx
  char *v23; // rax
  __int64 result; // rax
  void *v25; // [rsp+88h] [rbp+10h]

  v6 = a2;
  v8 = (a2 - *a1) / 40;
  v9 = (a1[1] - *a1) / 40;
  if ( v9 == 0x666666666666666LL )
    std::_Xlength_error("vector<T> too long");
  v10 = v9 + 1;
  v11 = (a1[2] - *a1) / 40;
  v12 = v11 >> 1;
  if ( v11 <= 0x666666666666666LL - (v11 >> 1) )
  {
    v13 = v12 + v11;
    if ( v12 + v11 < v10 )
      v13 = v10;
  }
  else
  {
    v13 = v10;
  }
  v14 = 40 * v13;
  if ( v13 > 0x666666666666666LL )
    v14 = -1LL;
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v14);
  v16 = v15;
  v25 = v15;
  try
  {
    v17 = 5 * v8;
    v18 = &v15[v17];
    std::_Default_allocator_traits<std::allocator<TraceSessionProviderConfig>>::construct<TraceSessionProviderConfig,unsigned short const (&)[39],int,int,int>(
      a5,
      v18,
      a3,
      a4,
      a5,
      a6,
      -2LL);
    v19 = a1[1];
    v20 = *a1;
    if ( v6 == v19 )
    {
      if ( v20 != v19 )
      {
        v21 = (char *)v16 - v20;
        do
        {
          *(_OWORD *)&v21[v20] = *(_OWORD *)v20;
          *(_OWORD *)&v21[v20 + 16] = *(_OWORD *)(v20 + 16);
          *(_QWORD *)&v21[v20 + 32] = *(_QWORD *)(v20 + 32);
          v20 += 40LL;
        }
        while ( v20 != v19 );
      }
    }
    else
    {
      if ( v20 != v6 )
      {
        v22 = (char *)v16 - v20;
        do
        {
          *(_OWORD *)&v22[v20] = *(_OWORD *)v20;
          *(_OWORD *)&v22[v20 + 16] = *(_OWORD *)(v20 + 16);
          *(_QWORD *)&v22[v20 + 32] = *(_QWORD *)(v20 + 32);
          v20 += 40LL;
        }
        while ( v20 != v6 );
        v19 = a1[1];
      }
      if ( v6 != v19 )
      {
        v23 = (char *)v18 - v6 + 40;
        do
        {
          *(_OWORD *)&v23[v6] = *(_OWORD *)v6;
          *(_OWORD *)&v23[v6 + 16] = *(_OWORD *)(v6 + 16);
          *(_QWORD *)&v23[v6 + 32] = *(_QWORD *)(v6 + 32);
          v6 += 40LL;
        }
        while ( v6 != v19 );
      }
    }
    std::vector<TraceSessionProviderConfig>::_Change_array(a1, v16, v10, v13);
    result = *a1 + 8 * v17;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v25, (const struct std::nothrow_t *)(40 * v13));
    throw;
  }
  return result;
}
