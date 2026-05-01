/*
 * XREFs of ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x180375054
 * Callers:
 *     ?v_InitAccessibleObject@CSwitchItemElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180363B20 (-v_InitAccessibleObject@CSwitchItemElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PE.c)
 *     ?v_InitAccessibleObject@CMultitaskingViewElementBase@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180366730 (-v_InitAccessibleObject@CMultitaskingViewElementBase@@MEAAJPEAUIWeakReference@WeakReference@@AEB.c)
 *     ?v_InitAccessibleObject@CSwitchItemGrid@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18036A460 (-v_InitAccessibleObject@CSwitchItemGrid@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPE.c)
 *     ?v_InitAccessibleObject@CMultitaskingViewFrameElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18036DEA0 (-v_InitAccessibleObject@CMultitaskingViewFrameElement@@MEAAJPEAUIWeakReference@WeakReference@@AE.c)
 *     ?v_InitAccessibleObject@CGlyphButtonElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180374A70 (-v_InitAccessibleObject@CGlyphButtonElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@P.c)
 *     ?v_InitAccessibleObject@SwitchItemThumbnailElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180378320 (-v_InitAccessibleObject@SwitchItemThumbnailElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_.c)
 *     ?v_InitAccessibleObject@CScrollViewer@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18037DD20 (-v_InitAccessibleObject@CScrollViewer@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX.c)
 *     ?v_InitAccessibleObject@LightDismissElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18037E250 (-v_InitAccessibleObject@LightDismissElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@P.c)
 *     ?v_InitAccessibleObject@CVirtualDesktopContainerElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180382C80 (-v_InitAccessibleObject@CVirtualDesktopContainerElement@@MEAAJPEAUIWeakReference@WeakReference@@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ @ 0x180351878 (-InternalRelease@-$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAVAccessibleElement@@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Z @ 0x180374C94 (--$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4Accessible.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIRawElementProviderSimple2@@UIRawElementProviderSimple@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIInvokeProvider@@UISelectionProvider@@UISelectionItemProvider@@UIScrollProvider@@UIScrollItemProvider@@@WRL@Microsoft@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGridProvider@@UIGridItemProvider@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180375190 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@U-$.c)
 */

__int64 __fastcall AccessibleElement_CreateInstance(__int64 a1, int a2, int a3, _DWORD *a4, AccessibleElement *a5)
{
  AccessibleElement *v5; // rdi
  int v7; // eax
  int CanCastTo; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  BOOL IsEqualGUID; // eax
  AccessibleElement *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v15; // [rsp+40h] [rbp+20h] BYREF
  int v16; // [rsp+48h] [rbp+28h] BYREF
  int v17; // [rsp+50h] [rbp+30h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v5 = a5;
  a5 = 0LL;
  *(_QWORD *)v5 = 0LL;
  Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease((__int64 *)&a5);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<AccessibleElement,AccessibleElement,WeakReference::IWeakReference * &,enum AccessibleElementFlags &,long &>(
         &a5,
         &v15,
         &v16,
         &v17);
  CanCastTo = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 802LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)v9);
    goto LABEL_12;
  }
  *(_QWORD *)v5 = 0LL;
  IsEqualGUID = InlineIsEqualGUID(a4, &GUID_00000000_0000_0000_c000_000000000046);
  v12 = a5;
  if ( IsEqualGUID )
  {
    *(_QWORD *)v5 = a5;
    (*(void (__fastcall **)(AccessibleElement *))(*(_QWORD *)v12 + 8LL))(v12);
    CanCastTo = 0;
    goto LABEL_12;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IRawElementProviderSimple2,IRawElementProviderSimple,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IInvokeProvider,ISelectionProvider,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IGridProvider,IGridItemProvider>>::CanCastTo(
                a5,
                a4,
                v5);
  if ( CanCastTo == -2147467262 )
    CanCastTo = -2147467262;
  if ( CanCastTo < 0 )
  {
    v9 = (unsigned int)CanCastTo;
    v10 = 803LL;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
LABEL_12:
  Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease((__int64 *)&a5);
  return (unsigned int)CanCastTo;
}
