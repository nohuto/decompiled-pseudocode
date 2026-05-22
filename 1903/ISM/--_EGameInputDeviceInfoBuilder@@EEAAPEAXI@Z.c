/*
 * XREFs of ??_EGameInputDeviceInfoBuilder@@EEAAPEAXI@Z @ 0x1800D3B20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GameInputDeviceInfoBuilder@@EEAA@XZ @ 0x1800D3AD8 (--1GameInputDeviceInfoBuilder@@EEAA@XZ.c)
 */

GameInputDeviceInfoBuilder *__fastcall GameInputDeviceInfoBuilder::`vector deleting destructor'(
        GameInputDeviceInfoBuilder *this,
        char a2)
{
  GameInputDeviceInfoBuilder::~GameInputDeviceInfoBuilder(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x178);
  return this;
}
