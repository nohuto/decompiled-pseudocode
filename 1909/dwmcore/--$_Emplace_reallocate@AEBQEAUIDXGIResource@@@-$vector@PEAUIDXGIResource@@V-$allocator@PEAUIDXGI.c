/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAUIDXGIResource@@@?$vector@PEAUIDXGIResource@@V?$allocator@PEAUIDXGIResource@@@std@@@std@@QEAAPEAPEAUIDXGIResource@@QEAPEAU2@AEBQEAU2@@Z @ 0x1800EA9B0
 * Callers:
 *     ?push_back@?$vector@PEAUIDXGIResource@@V?$allocator@PEAUIDXGIResource@@@std@@@std@@QEAAXAEBQEAUIDXGIResource@@@Z @ 0x1800EB4A0 (-push_back@-$vector@PEAUIDXGIResource@@V-$allocator@PEAUIDXGIResource@@@std@@@std@@QEAAXAEBQEAUI.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x18001C0CC (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@CAXXZ @ 0x1800EB23C (-_Xlength@-$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V-$allocator.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 */

__int64 __fastcall std::vector<IDXGIResource *>::_Emplace_reallocate<IDXGIResource * const &>(
        __int64 *a1,
        const void *a2,
        _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  char *v13; // r14
  char *v14; // rcx
  __int64 v15; // r8
  const void *v16; // rdx
  size_t v17; // r8

  v4 = ((__int64)a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Xlength();
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v6 + 1;
  }
  else
  {
    v11 = v6 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  *(_QWORD *)&v13[8 * v4] = *a3;
  v14 = v13;
  v15 = a1[1];
  v16 = (const void *)*a1;
  if ( a2 == (const void *)v15 )
  {
    v17 = v15 - (_QWORD)v16;
  }
  else
  {
    memmove_0(v13, v16, (size_t)a2 - *a1);
    v17 = a1[1] - (_QWORD)a2;
    v14 = &v13[8 * v4 + 8];
    v16 = a2;
  }
  memmove_0(v14, v16, v17);
  std::vector<CVectorShape *>::_Change_array(a1, (__int64)v13, v8, v11);
  return *a1 + 8 * v4;
}
