/*
 * XREFs of ??1GameInputDeviceInfoBuilder@@EEAA@XZ @ 0x1800D3898
 * Callers:
 *     ??_EGameInputDeviceInfoBuilder@@EEAAPEAXI@Z @ 0x1800D38E0 (--_EGameInputDeviceInfoBuilder@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall GameInputDeviceInfoBuilder::~GameInputDeviceInfoBuilder(GameInputDeviceInfoBuilder *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &GameInputDeviceInfoBuilder::`vftable';
  v2 = (void *)*((_QWORD *)this + 45);
  if ( v2 )
    operator delete(v2, (const struct std::nothrow_t *)0x38);
  *(_QWORD *)this = &UnknownBase<IGameInputDeviceInfoBuilder>::`vftable';
}
