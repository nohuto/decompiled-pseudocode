/*
 * XREFs of ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C00B3A10
 * Callers:
 *     CMouseSensor_Destroy @ 0x1C00B3A50 (CMouseSensor_Destroy.c)
 *     CKeyboardSensor_Destroy @ 0x1C00B3A80 (CKeyboardSensor_Destroy.c)
 *     CHidInput_Destroy @ 0x1C00B3AB0 (CHidInput_Destroy.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C00B3970 (--1CRIMBase@@UEAA@XZ.c)
 */

CHidInput *__fastcall CHidInput::`scalar deleting destructor'(CHidInput *this, char a2)
{
  *(_QWORD *)this = &CBaseInput::`vftable';
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
