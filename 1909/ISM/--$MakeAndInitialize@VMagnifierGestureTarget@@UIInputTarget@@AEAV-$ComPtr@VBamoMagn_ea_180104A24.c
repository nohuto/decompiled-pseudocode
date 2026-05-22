/*
 * XREFs of ??$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@WRL@Microsoft@@AEAW4GestureType@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@012@AEAV?$ComPtr@VBamoMagnifierClientProxy@@@12@AEAW4GestureType@MagnifierGestureTarget@@@Z @ 0x180104A24
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180105420 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierGestureTarget,IInputTarget,Microsoft::WRL::ComPtr<BamoMagnifierClientProxy> &,enum MagnifierGestureTarget::GestureType &>(
        __int64 *a1,
        __int64 (__fastcall ****a2)(_QWORD),
        int *a3)
{
  __int64 v5; // rcx

  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return Microsoft::WRL::Details::MakeAndInitialize<MagnifierGestureTarget,IInputTarget,Microsoft::WRL::ComPtr<BamoMagnifierClientProxy> &,enum MagnifierGestureTarget::GestureType &>(
           a1,
           a2,
           a3);
}
