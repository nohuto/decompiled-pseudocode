/*
 * XREFs of ??1?$unique_ptr@VHolographicDeviceSnapshot@Holographic@Internal@Windows@@U?$default_delete@VHolographicDeviceSnapshot@Holographic@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x18002B644
 * Callers:
 *     ??__Fs_spDeviceSnapshot@?1??Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ@YAXXZ @ 0x18003E180 (--__Fs_spDeviceSnapshot@-1--Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAA.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800D7DE4 (--1HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ.c)
 */

void std::unique_ptr<Windows::Internal::Holographic::HolographicDeviceSnapshot>::~unique_ptr<Windows::Internal::Holographic::HolographicDeviceSnapshot>()
{
  Windows::Internal::Holographic::HolographicDeviceSnapshot *v0; // rbx

  v0 = `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot;
  if ( `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot )
  {
    Windows::Internal::Holographic::HolographicDeviceSnapshot::~HolographicDeviceSnapshot(`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot);
    operator delete(v0, (const struct std::nothrow_t *)0x80);
  }
}
