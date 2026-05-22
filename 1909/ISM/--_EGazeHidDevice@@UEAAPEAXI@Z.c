/*
 * XREFs of ??_EGazeHidDevice@@UEAAPEAXI@Z @ 0x1800A4900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800A63AC (--1GazeHidDevice@@UEAA@XZ.c)
 */

GazeHidDevice *__fastcall GazeHidDevice::`vector deleting destructor'(GazeHidDevice *this, char a2)
{
  GazeHidDevice::~GazeHidDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
