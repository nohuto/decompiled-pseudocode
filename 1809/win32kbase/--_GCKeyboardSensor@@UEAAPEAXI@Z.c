/*
 * XREFs of ??_GCKeyboardSensor@@UEAAPEAXI@Z @ 0x1C00075C0
 * Callers:
 *     CKeyboardSensor_Destroy @ 0x1C0005F10 (CKeyboardSensor_Destroy.c)
 * Callees:
 *     ??1CBaseInput@@UEAA@XZ @ 0x1C00076AC (--1CBaseInput@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

CKeyboardSensor *__fastcall CKeyboardSensor::`scalar deleting destructor'(CKeyboardSensor *this, char a2)
{
  *(_QWORD *)this = &CKeyboardSensor::`vftable';
  CBaseInput::~CBaseInput(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
