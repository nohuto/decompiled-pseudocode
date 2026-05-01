/*
 * XREFs of ?Attach@?$ComPtr@VCPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAXPEAVCPlaceModeButtonAcc@@@Z @ 0x1803DF324
 * Callers:
 *     ??$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEAUtagRECT@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaceModeButtonAcc@@@12@$$QEAPEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAPEAUtagRECT@@@Z @ 0x1803DED7C (--$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV-$NativeString@V-$CoTaskMemPolicy@G@In.c)
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x1803E0060 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIInvokeProvider@@UIPlaceModeButtonAcc@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18038A010 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_18038A010.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CPlaceModeButtonAcc>::Attach(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::Release(v4);
  *a1 = a2;
  return result;
}
