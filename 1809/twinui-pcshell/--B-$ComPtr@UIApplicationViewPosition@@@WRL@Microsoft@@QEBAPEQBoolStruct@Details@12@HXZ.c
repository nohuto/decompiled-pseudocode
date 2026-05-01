/*
 * XREFs of ??B?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x18009A9DC
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z @ 0x180055B10 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IApplicationViewPosition>::operator int Microsoft::WRL::Details::BoolStruct::*(
        _QWORD *a1)
{
  return (unsigned int)(*a1 != 0LL) - 1;
}
