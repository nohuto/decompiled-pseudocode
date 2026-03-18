/*
 * XREFs of ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C00B5810
 * Callers:
 *     CHidInput_Destroy @ 0x1C00B5780 (CHidInput_Destroy.c)
 *     CKeyboardSensor_Destroy @ 0x1C00B57B0 (CKeyboardSensor_Destroy.c)
 *     CMouseSensor_Destroy @ 0x1C00B57E0 (CMouseSensor_Destroy.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C00B5850 (--1CRIMBase@@UEAA@XZ.c)
 */

CHidInput *__fastcall CHidInput::`scalar deleting destructor'(CHidInput *this, char a2)
{
  *(_QWORD *)this = &CBaseInput::`vftable';
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
