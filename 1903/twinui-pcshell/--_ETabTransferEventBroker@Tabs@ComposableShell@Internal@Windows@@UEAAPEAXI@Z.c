/*
 * XREFs of ??_ETabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z @ 0x18024B690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAA@XZ @ 0x18024B46C (--1TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *__fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::`vector deleting destructor'(
        Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *this,
        char a2)
{
  Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::~TabTransferEventBroker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
