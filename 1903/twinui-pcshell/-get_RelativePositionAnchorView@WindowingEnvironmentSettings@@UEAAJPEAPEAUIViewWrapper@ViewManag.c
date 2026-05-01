/*
 * XREFs of ?get_RelativePositionAnchorView@WindowingEnvironmentSettings@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180282AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowingEnvironmentSettings::get_RelativePositionAnchorView(
        WindowingEnvironmentSettings *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rcx

  *a2 = 0LL;
  if ( !*((_BYTE *)this + 92) )
    return 2147943568LL;
  v3 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((_QWORD *)this + 13);
  if ( v3 )
  {
    *a2 = v3;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return 0LL;
}
