/*
 * XREFs of ?_Tidy@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@IEAAXXZ @ 0x180122C80
 * Callers:
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x18011F340 (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 *     ??1CWorkFifo@@QEAA@XZ @ 0x18011F494 (--1CWorkFifo@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = *(std::_Ref_count_base **)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (v2 + a1[3] - 1LL))) + 8LL);
    if ( v3 )
    {
      std::_Ref_count_base::_Decref(v3);
      v2 = a1[4];
    }
    a1[4] = v2 - 1;
    if ( v2 == 1 )
      a1[3] = 0LL;
  }
  v4 = a1[2];
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(a1[1] + 8 * v4);
    if ( v5 )
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x10);
  }
  v6 = (void *)a1[1];
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(8LL * a1[2]));
  a1[2] = 0LL;
  a1[1] = 0LL;
}
