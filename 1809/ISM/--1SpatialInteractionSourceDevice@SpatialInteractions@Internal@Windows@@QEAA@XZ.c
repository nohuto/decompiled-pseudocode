/*
 * XREFs of ??1SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800BAFAC
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SpatialInteractionSourceController_::_1_::dtor$1 @ 0x18013682C (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--Spatia_ea_18013682C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::~SpatialInteractionSourceDevice(
        HSTRING *this)
{
  HSTRING v2; // rcx

  WindowsDeleteString(this[12]);
  this[12] = 0LL;
  v2 = this[11];
  if ( v2 )
  {
    this[11] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v2 + 16LL))(v2);
  }
  WindowsDeleteString(this[5]);
  this[5] = 0LL;
}
