/*
 * XREFs of ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x1C0053D5C
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0053ED0 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00571A0 (-Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C005873C (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 */

__int64 __fastcall FxPoolAddHeaderSize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 AllocationSize,
        unsigned __int64 *NewSize)
{
  __int64 v3; // r11
  unsigned __int64 v4; // r9
  unsigned int _a1; // ebx
  unsigned __int64 v7; // rdi
  unsigned __int16 v8; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax

  v3 = -1LL;
  v4 = -1LL;
  if ( AllocationSize + 16 >= AllocationSize )
    v4 = AllocationSize + 16;
  _a1 = AllocationSize + 16 < AllocationSize ? 0xC0000095 : 0;
  v7 = v4;
  if ( AllocationSize + 16 < AllocationSize )
  {
    v8 = 10;
LABEL_5:
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, v8, WPP_FxPoolInlines_hpp_Traceguids, _a1);
    return _a1;
  }
  if ( FxDriverGlobals->FxPoolTrackingOn )
  {
    v10 = v4 + 64;
    v11 = v4;
    if ( v4 + 64 >= v4 )
      v3 = v4 + 64;
    v4 = v3;
    _a1 = v10 < v11 ? 0xC0000095 : 0;
    if ( v10 < v7 )
    {
      v8 = 11;
      goto LABEL_5;
    }
  }
  *NewSize = v4;
  return 0LL;
}
