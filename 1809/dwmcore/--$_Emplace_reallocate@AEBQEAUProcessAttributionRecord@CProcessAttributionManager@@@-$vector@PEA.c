/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x1800E4360
 * Callers:
 *     ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x180060EFC (-CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ.c)
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x18006D32C (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x18009600C (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x18001B608 (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Emplace_reallocate<CProcessAttributionManager::ProcessAttributionRecord * const &>(
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
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = ((__int64)a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v6 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
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
