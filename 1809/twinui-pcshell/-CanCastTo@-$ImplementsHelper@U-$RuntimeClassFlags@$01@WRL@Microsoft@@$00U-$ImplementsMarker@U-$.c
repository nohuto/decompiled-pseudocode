/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIRawElementProviderSimple2@@UIRawElementProviderSimple@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIInvokeProvider@@UISelectionProvider@@UISelectionItemProvider@@UIScrollProvider@@UIScrollItemProvider@@@WRL@Microsoft@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGridProvider@@UIGridItemProvider@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180314B90
 * Callers:
 *     ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x180314A54 (-AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VAccessibleElementBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180315A30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180315A30.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFragmentRoot@@UIInvokeProvider@@UISelectionProvider@@UISelectionItemProvider@@UIScrollProvider@@UIScrollItemProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180314C48 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFra.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IRawElementProviderSimple2,IRawElementProviderSimple,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IInvokeProvider,ISelectionProvider,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IGridProvider,IGridItemProvider>>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  _DWORD *v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r10d

  if ( InlineIsEqualGUID(a2, &GUID_a0a839a9_8da1_4a82_806a_8e0d44e79f56)
    || InlineIsEqualGUID(v4, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c) )
  {
    *v5 = a1;
    return 0LL;
  }
  if ( InlineIsEqualGUID(v6, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87) )
    goto LABEL_4;
  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragmentRoot,IInvokeProvider,ISelectionProvider,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>::CanCastTo(
             v8 + 8,
             a2);
  if ( (_DWORD)result != -2147467262 )
    return result;
  if ( InlineIsEqualGUID(a2, &GUID_b17d6187_0907_464b_a168_0ef17a1572b1) )
  {
LABEL_4:
    *v7 = v8;
    return 0LL;
  }
  if ( InlineIsEqualGUID(v10, &GUID_d02541f1_fb81_4d64_ae32_f520f8a6dbd1) )
  {
    *v11 = v12 + 8;
    result = 0LL;
  }
  else
  {
    result = v13;
  }
  if ( (_DWORD)result == v13 )
    return v13;
  return result;
}
