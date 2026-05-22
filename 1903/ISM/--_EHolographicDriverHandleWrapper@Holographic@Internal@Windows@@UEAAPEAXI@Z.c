/*
 * XREFs of ??_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180152C40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x180151BC8 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 */

HSTRING *__fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::`vector deleting destructor'(
        HSTRING *this,
        char a2)
{
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::~HolographicDriverHandleWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
