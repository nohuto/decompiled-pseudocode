/*
 * XREFs of ??0CBaseInput@@IEAA@K@Z @ 0x1C0007640
 * Callers:
 *     CKeyboardSensor_CreateInstance @ 0x1C0005B40 (CKeyboardSensor_CreateInstance.c)
 *     CMouseSensor_CreateInstance @ 0x1C0005DF0 (CMouseSensor_CreateInstance.c)
 *     ??0CHidInput@@IEAA@XZ @ 0x1C0006160 (--0CHidInput@@IEAA@XZ.c)
 * Callees:
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1C0007730 (--0CRIMBase@@IEAA@K@Z.c)
 */

CBaseInput *__fastcall CBaseInput::CBaseInput(CBaseInput *this, unsigned int a2)
{
  CBaseInput *result; // rax

  CRIMBase::CRIMBase(this, a2);
  *(_QWORD *)this = &CBaseInput::`vftable';
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_BYTE *)this + 1072) = 0;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 139) = 0LL;
  result = this;
  *((_QWORD *)this + 137) = 0LL;
  *((_QWORD *)this + 138) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  return result;
}
