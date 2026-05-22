/*
 * XREFs of ??_EGazeHidDevice@@UEAAPEAXI@Z @ 0x180067C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x18006A12C (--1GazeHidDevice@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

GazeHidDevice *__fastcall GazeHidDevice::`vector deleting destructor'(GazeHidDevice *this, char a2)
{
  GazeHidDevice::~GazeHidDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
