/*
 * XREFs of ??_EDeviceRemovedWorkItem@@UEAAPEAXI@Z @ 0x180145710
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

DeviceRemovedWorkItem *__fastcall DeviceRemovedWorkItem::`vector deleting destructor'(
        DeviceRemovedWorkItem *this,
        char a2)
{
  *(_QWORD *)this = &WorkItemBase::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
