/*
 * XREFs of ??_ECMouseSensor@@UEAAPEAXI@Z @ 0x1C0007600
 * Callers:
 *     CMouseSensor_Destroy @ 0x1C0005FB0 (CMouseSensor_Destroy.c)
 * Callees:
 *     ??1CBaseInput@@UEAA@XZ @ 0x1C00076AC (--1CBaseInput@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

CMouseSensor *__fastcall CMouseSensor::`vector deleting destructor'(CMouseSensor *this, char a2)
{
  *(_QWORD *)this = &CMouseSensor::`vftable';
  CBaseInput::~CBaseInput(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
