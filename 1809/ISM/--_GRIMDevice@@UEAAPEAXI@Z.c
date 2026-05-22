/*
 * XREFs of ??_GRIMDevice@@UEAAPEAXI@Z @ 0x1800697A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RIMDevice@@UEAA@XZ @ 0x1800697DC (--1RIMDevice@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

RIMDevice *__fastcall RIMDevice::`scalar deleting destructor'(RIMDevice *this, char a2)
{
  RIMDevice::~RIMDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
