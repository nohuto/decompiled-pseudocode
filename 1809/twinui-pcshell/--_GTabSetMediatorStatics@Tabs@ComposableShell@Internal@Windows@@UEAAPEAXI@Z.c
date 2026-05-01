/*
 * XREFs of ??_GTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z @ 0x1801A8090
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics *__fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics::`scalar deleting destructor'(
        Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics *this,
        char a2)
{
  *((_DWORD *)this + 17) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
