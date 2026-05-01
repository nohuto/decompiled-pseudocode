/*
 * XREFs of ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x180072644
 * Callers:
 *     ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x1800725A0 (-SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x1802ED060 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 *     ?put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x1804416F0 (-put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall IsAgile(struct IUnknown *a1)
{
  bool v1; // bl
  _QWORD *v2; // rcx
  _QWORD *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = !a1
    || ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _QWORD **))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90,
         &v4) >= 0;
  v2 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v2 + 16LL))(v2, *v2);
  }
  return v1;
}
