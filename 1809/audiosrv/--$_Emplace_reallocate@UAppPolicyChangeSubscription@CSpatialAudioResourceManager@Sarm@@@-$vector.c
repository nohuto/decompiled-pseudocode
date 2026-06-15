/*
 * XREFs of ??$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@QEAU234@$$QEAU234@@Z @ 0x180112920
 * Callers:
 *     ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180066C70 (-RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001D500 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAXQEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@_K1@Z @ 0x1800F2020 (-_Change_array@-$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V-$alloc.c)
 */

__int64 __fastcall std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Emplace_reallocate<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
        unsigned __int64 *a1,
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
  _QWORD *v13; // r10
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // r11
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rsi

  v6 = (__int64)(a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
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
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v13[v6] = *a3;
  v14 = a1[1];
  v15 = *a1;
  v16 = v13;
  v17 = 0LL;
  if ( a2 == v14 )
  {
    v18 = (v14 - v15 + 7) >> 3;
    if ( v15 > v14 )
      v18 = 0LL;
    if ( v18 )
    {
      v19 = v15 - (_QWORD)v13;
      do
      {
        *v16 = *(_QWORD *)((char *)v16 + v19);
        ++v16;
        ++v17;
      }
      while ( v17 != v18 );
    }
  }
  else
  {
    v20 = 0LL;
    v21 = (a2 - v15 + 7) >> 3;
    if ( v15 > a2 )
      v21 = 0LL;
    if ( v21 )
    {
      v22 = v15 - (_QWORD)v13;
      do
      {
        *v16 = *(_QWORD *)((char *)v16 + v22);
        ++v16;
        ++v20;
      }
      while ( v20 != v21 );
      v14 = a1[1];
    }
    v23 = &v13[v6 + 1];
    v24 = (v14 - a2 + 7) >> 3;
    if ( a2 > v14 )
      v24 = 0LL;
    if ( v24 )
    {
      v25 = a2 - (_QWORD)v23;
      do
      {
        *v23 = *(_QWORD *)((char *)v23 + v25);
        ++v23;
        ++v17;
      }
      while ( v17 != v24 );
    }
  }
  std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Change_array(
    (__int64)a1,
    (__int64)v13,
    v8,
    v11);
  return *a1 + 8 * v6;
}
