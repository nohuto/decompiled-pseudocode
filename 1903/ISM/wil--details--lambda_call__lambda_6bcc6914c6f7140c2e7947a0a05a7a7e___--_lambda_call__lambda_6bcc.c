/*
 * XREFs of wil::details::lambda_call__lambda_6bcc6914c6f7140c2e7947a0a05a7a7e___::_lambda_call__lambda_6bcc6914c6f7140c2e7947a0a05a7a7e___ @ 0x180163174
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureDynamicNodeForDevice_::_1_::dtor$0 @ 0x180165609 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--EnsureDynamicNodeFo.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8690 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?EnsureDynamicNodeForDeviceFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z @ 0x18016561C (-EnsureDynamicNodeForDeviceFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_6bcc6914c6f7140c2e7947a0a05a7a7e___::_lambda_call__lambda_6bcc6914c6f7140c2e7947a0a05a7a7e___(
        __int64 a1)
{
  int *v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v4; // rcx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = *(int **)a1;
    if ( **(int **)a1 < 0 )
    {
      v2 = *(_QWORD *)(a1 + 8);
      if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(a1) )
      {
        wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
          v3,
          (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
        SpatialInteractionDevices::SpatialInteractionTrace::EnsureDynamicNodeForDeviceFailed_(
          v4,
          *v1,
          *(_DWORD *)(v2 + 8));
      }
    }
  }
}
