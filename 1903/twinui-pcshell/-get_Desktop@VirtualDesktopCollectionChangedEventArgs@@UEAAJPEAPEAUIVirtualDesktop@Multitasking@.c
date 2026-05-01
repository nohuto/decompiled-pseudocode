/*
 * XREFs of ?get_Desktop@VirtualDesktopCollectionChangedEventArgs@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180338B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall VirtualDesktopCollectionChangedEventArgs::get_Desktop(
        VirtualDesktopCollectionChangedEventArgs *this,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **a2)
{
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **v2; // rbx

  v2 = (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **)((char *)this + 72);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 9);
  *a2 = *v2;
  return 0LL;
}
