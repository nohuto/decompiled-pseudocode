/*
 * XREFs of ??_EInkDevice@@UEAAPEAXI@Z @ 0x1C022CB70
 * Callers:
 *     ??_EInkDevice@@WCA@EAAPEAXI@Z @ 0x1C0163730 (--_EInkDevice@@WCA@EAAPEAXI@Z.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C022CBDC (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1C022D7E4 (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 * Callees:
 *     ??1InkDevice@@UEAA@XZ @ 0x1C0237D70 (--1InkDevice@@UEAA@XZ.c)
 */

InkDevice *__fastcall InkDevice::`vector deleting destructor'(InkDevice *this, char a2)
{
  InkDevice::~InkDevice(this);
  if ( (a2 & 1) != 0 && this )
    Win32FreePool(this);
  return this;
}
