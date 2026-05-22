/*
 * XREFs of wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::_ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___ @ 0x18012865C
 * Callers:
 *     ?SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJGEG@Z @ 0x180127A50 (-SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEA.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsFeedback_::_1_::dtor$1 @ 0x180136957 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--SetHap_ea_180136957.c)
 * Callees:
 *     ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800AE148 (-Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SetHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKGEG@Z @ 0x18012320C (-SetHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKGEG@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::_ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___(
        __int64 a1)
{
  _WORD *v1; // rdi
  char *v2; // rsi
  _WORD *v3; // r14
  __int64 v4; // rbx
  int *v5; // r15
  _DWORD *v6; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v7; // rcx

  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_BYTE *)(a1 + 40) = 0;
    v1 = *(_WORD **)(a1 + 32);
    v2 = *(char **)(a1 + 24);
    v3 = *(_WORD **)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(int **)a1;
    v6 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance() + 1);
    if ( v6 )
    {
      if ( *v6 )
      {
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance();
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::SetHapticsFeedback_(
          v7,
          *v5,
          *(_DWORD *)(v4 + 8),
          *(_DWORD *)(v4 + 12),
          *v3,
          *v2,
          *v1);
      }
    }
  }
}
