/*
 * XREFs of ??$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@QEAU234@$$QEAU234@@Z @ 0x18011EDAC
 * Callers:
 *     ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180121368 (-RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009E8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAXQEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@_K1@Z @ 0x1800FDE90 (-_Change_array@-$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V-$alloc.c)
 */

__int64 __fastcall std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Emplace_reallocate<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
        char **a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  char *v13; // rax
  unsigned __int64 v14; // r9
  char *v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  signed __int64 v18; // r9
  __int64 v19; // r11
  unsigned __int64 v20; // r8
  signed __int64 v21; // r9
  char *v22; // rdx
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // rsi

  v6 = (__int64)(a2 - (_QWORD)*a1) >> 3;
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
  *(_QWORD *)&v13[8 * v6] = *a3;
  v14 = (unsigned __int64)a1[1];
  v15 = *a1;
  v16 = 0LL;
  if ( a2 == v14 )
  {
    v17 = (v14 - (unsigned __int64)v15 + 7) >> 3;
    if ( (unsigned __int64)v15 > v14 )
      v17 = 0LL;
    if ( v17 )
    {
      v18 = v13 - v15;
      do
      {
        *(_QWORD *)&v15[v18] = *(_QWORD *)v15;
        v15 += 8;
        ++v16;
      }
      while ( v16 != v17 );
    }
  }
  else
  {
    v19 = 0LL;
    v20 = (a2 - (unsigned __int64)v15 + 7) >> 3;
    if ( (unsigned __int64)v15 > a2 )
      v20 = 0LL;
    if ( v20 )
    {
      v21 = v13 - v15;
      do
      {
        *(_QWORD *)&v15[v21] = *(_QWORD *)v15;
        v15 += 8;
        ++v19;
      }
      while ( v19 != v20 );
      v14 = (unsigned __int64)a1[1];
    }
    v22 = &v13[8 * v6 + 8];
    v23 = (v14 - a2 + 7) >> 3;
    if ( a2 > v14 )
      v23 = 0LL;
    if ( v23 )
    {
      v24 = a2 - (_QWORD)v22;
      do
      {
        *(_QWORD *)v22 = *(_QWORD *)&v22[v24];
        v22 += 8;
        ++v16;
      }
      while ( v16 != v23 );
    }
  }
  std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Change_array(
    (__int64)a1,
    (__int64)v13,
    v8,
    v11);
  return (__int64)&(*a1)[8 * v6];
}
