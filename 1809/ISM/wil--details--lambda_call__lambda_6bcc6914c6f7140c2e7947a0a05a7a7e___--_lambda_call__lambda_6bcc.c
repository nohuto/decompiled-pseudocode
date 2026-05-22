/*
 * XREFs of wil::details::lambda_call__lambda_6bcc6914c6f7140c2e7947a0a05a7a7e___::_lambda_call__lambda_6bcc6914c6f7140c2e7947a0a05a7a7e___ @ 0x1801286F4
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureDynamicNodeForDevice_::_1_::dtor$0 @ 0x180136921 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--Ensure_ea_180136921.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?EnsureDynamicNodeForDeviceFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z @ 0x1801225C4 (-EnsureDynamicNodeForDeviceFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_6bcc6914c6f7140c2e7947a0a05a7a7e___::_lambda_call__lambda_6bcc6914c6f7140c2e7947a0a05a7a7e___(
        __int64 a1)
{
  int *v1; // rbx
  __int64 v2; // rdi
  _DWORD *v3; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v4; // rcx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = *(int **)a1;
    if ( **(int **)a1 < 0 )
    {
      v2 = *(_QWORD *)(a1 + 8);
      v3 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
      if ( v3 )
      {
        if ( *v3 )
        {
          SpatialInteractionDevices::SpatialInteractionTrace::Instance();
          SpatialInteractionDevices::SpatialInteractionTrace::EnsureDynamicNodeForDeviceFailed_(
            v4,
            *v1,
            *(_DWORD *)(v2 + 8));
        }
      }
    }
  }
}
