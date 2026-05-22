/*
 * XREFs of ??$HandStateIgnored@U_GUID@@AEA_JII@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEA_J$$QEAI2@Z @ 0x1800F2988
 * Callers:
 *     ?Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800F5E90 (-Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatial.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800E2AF0 (-IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800E70A4 (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 *     ?HandStateIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_JHH@Z @ 0x1800F4D44 (-HandStateIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_JH.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::HandStateIgnored<_GUID,__int64 &,unsigned int,unsigned int>(
        struct _GUID *a1,
        __int64 *a2,
        int *a3,
        _DWORD *a4)
{
  __int64 v8; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v9; // rcx
  struct _GUID v10; // [rsp+30h] [rbp-18h] BYREF

  if ( SpatialInteractionDevices::SpatialInteractionTraceContinuous::IsEnabled((__int64)a1) )
  {
    v10 = *a1;
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
      v8,
      (void (__cdecl *)())lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTraceContinuous::HandStateIgnored_(v9, &v10, *a2, *a3, *a4);
  }
}
