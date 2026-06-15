/*
 * XREFs of ??1CWorkFifo@@QEAA@XZ @ 0x18011F494
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$7 @ 0x18006CD61 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$7.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004DDDC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x1801225B0 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@IEAAXXZ @ 0x180122C80 (-_Tidy@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@CWo.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CWorkFifo::~CWorkFifo(void **this)
{
  void *v2; // rdx
  wil::details *v3; // rcx

  CWorkFifo::Shutdown((CWorkFifo *)this);
  v3 = (wil::details *)this[28];
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  _Mtx_destroy_in_situ((_Mtx_t)(this + 18));
  std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Tidy(this + 12);
  std::_Deallocate<16,0>(this[12], (const struct std::nothrow_t *)0x10);
  this[12] = 0LL;
}
