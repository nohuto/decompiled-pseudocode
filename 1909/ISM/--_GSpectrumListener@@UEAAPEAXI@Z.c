/*
 * XREFs of ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x1800956B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpectrumListener@@UEAA@XZ @ 0x1800955D8 (--1SpectrumListener@@UEAA@XZ.c)
 */

SpectrumListener *__fastcall SpectrumListener::`scalar deleting destructor'(SpectrumListener *this, char a2)
{
  SpectrumListener::~SpectrumListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
