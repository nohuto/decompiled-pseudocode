/*
 * XREFs of ?v_OnWindowDestroyed@LegacyViewWrapper@@EEAAXXZ @ 0x180292BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180298948 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 */

void __fastcall LegacyViewWrapper::v_OnWindowDestroyed(LegacyViewWrapper *this)
{
  __int64 v2; // rdx

  if ( *((_DWORD *)this + 142) == 1 )
    ViewWrapperBase::NavigateInternal(this, 0LL);
  v2 = *((_QWORD *)this + 24);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 504LL) + 168LL))(
      *(_QWORD *)(*((_QWORD *)this + 21) + 504LL),
      v2,
      *((unsigned int *)this + 68));
}
