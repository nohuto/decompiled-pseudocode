/*
 * XREFs of ?HostNavigationLevelChanged@ViewWrapperBase@@UEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180242430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewWrapperBase::HostNavigationLevelChanged(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 288) = a2;
  ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)(a1 - 8));
}
