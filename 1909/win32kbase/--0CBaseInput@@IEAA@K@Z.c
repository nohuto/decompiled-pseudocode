/*
 * XREFs of ??0CBaseInput@@IEAA@K@Z @ 0x1C00A9B14
 * Callers:
 *     CHidInput_CreateInstance @ 0x1C00A99C0 (CHidInput_CreateInstance.c)
 *     CKeyboardSensor_CreateInstance @ 0x1C00A9A30 (CKeyboardSensor_CreateInstance.c)
 *     CMouseSensor_CreateInstance @ 0x1C00A9AB0 (CMouseSensor_CreateInstance.c)
 * Callees:
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1C00A9B60 (--0CRIMBase@@IEAA@K@Z.c)
 */

CBaseInput *__fastcall CBaseInput::CBaseInput(CBaseInput *this, unsigned int a2)
{
  CRIMBase::CRIMBase(this, a2);
  *(_QWORD *)this = &CBaseInput::`vftable';
  *((_QWORD *)this + 147) = 0LL;
  *((_QWORD *)this + 148) = 0LL;
  *((_DWORD *)this + 298) = 0;
  *((_QWORD *)this + 150) = 0LL;
  *((_QWORD *)this + 151) = 0LL;
  return this;
}
