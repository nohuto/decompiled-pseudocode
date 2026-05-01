/*
 * XREFs of ??_EWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x18022D580
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAA@XZ @ 0x18022C7F8 (--1Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *__fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::`vector deleting destructor'(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        char a2)
{
  Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::~Win32BackedViewHostItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x368);
  return this;
}
