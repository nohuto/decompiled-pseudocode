/*
 * XREFs of ?GetGrabbedItems@CDragVisualAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1803DF980
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetSafeArray@AccessibilityHelpers@@YAJPEAUIRawElementProviderSimple@@PEAPEAUtagSAFEARRAY@@@Z @ 0x1803CCAD8 (-GetSafeArray@AccessibilityHelpers@@YAJPEAUIRawElementProviderSimple@@PEAPEAUtagSAFEARRAY@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803DF4D4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawEleme_ea_1803DF4D4.c)
 */

__int64 __fastcall CDragVisualAcc::GetGrabbedItems(CDragVisualAcc *this, struct tagSAFEARRAY **a2)
{
  _DWORD *v3; // rcx
  AccessibilityHelpers *v4; // r8
  _DWORD *v5; // r9
  _DWORD *v6; // rcx
  AccessibilityHelpers *v7; // r8
  int CanCastTo; // ebx
  _DWORD *v9; // r9
  struct tagSAFEARRAY **v10; // r8
  AccessibilityHelpers *v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v12 = 0LL;
  if ( InlineIsEqualGUID(&GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v12 = v4;
    (*(void (__fastcall **)(AccessibilityHelpers *))(*(_QWORD *)v4 + 8LL))(v4);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v3, v5) || InlineIsEqualGUID(v6, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87) )
    {
      v12 = v7;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::CanCastTo(
                    (__int64)v7 + 8,
                    v9);
      if ( CanCastTo < 0 )
        goto LABEL_9;
      v7 = v12;
    }
    (*(void (__fastcall **)(AccessibilityHelpers *))(*(_QWORD *)v7 + 8LL))(v7);
  }
LABEL_9:
  if ( CanCastTo >= 0 )
    CanCastTo = AccessibilityHelpers::GetSafeArray(v12, (struct IRawElementProviderSimple *)a2, v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return (unsigned int)CanCastTo;
}
