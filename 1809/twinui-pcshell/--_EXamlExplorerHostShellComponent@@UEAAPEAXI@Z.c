/*
 * XREFs of ??_EXamlExplorerHostShellComponent@@UEAAPEAXI@Z @ 0x180259E2C
 * Callers:
 *     ??_EXamlExplorerHostShellComponent@@WDA@EAAPEAXI@Z @ 0x1800A3510 (--_EXamlExplorerHostShellComponent@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlExplorerHostShellComponent@@UEAA@XZ @ 0x180259A8C (--1XamlExplorerHostShellComponent@@UEAA@XZ.c)
 */

XamlExplorerHostShellComponent *__fastcall XamlExplorerHostShellComponent::`vector deleting destructor'(
        XamlExplorerHostShellComponent *this,
        char a2)
{
  XamlExplorerHostShellComponent::~XamlExplorerHostShellComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF8);
  return this;
}
