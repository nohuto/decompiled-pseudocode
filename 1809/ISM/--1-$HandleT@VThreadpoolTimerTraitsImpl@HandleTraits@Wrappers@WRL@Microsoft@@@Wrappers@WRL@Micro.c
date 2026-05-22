/*
 * XREFs of ??1?$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180128DF0
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SpatialInteractionSourceController_::_1_::dtor$12 @ 0x18013687C (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--Spatia_ea_18013687C.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::~HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>(
        _QWORD *a1)
{
  struct _TP_TIMER *v1; // rdi

  v1 = (struct _TP_TIMER *)a1[1];
  *a1 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::`vftable';
  if ( v1 )
  {
    SetThreadpoolTimer(v1, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v1, 1);
    CloseThreadpoolTimer(v1);
    a1[1] = 0LL;
  }
}
