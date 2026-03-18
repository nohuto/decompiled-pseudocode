/*
 * XREFs of ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C0006530
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseProcessor@@QEAA@XZ @ 0x1C000660C (--1CBaseProcessor@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall CKeyboardSensor::PreUninitialize(CKeyboardSensor *this)
{
  _QWORD *v1; // rbx
  CBaseProcessor *v3; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 140);
  if ( v1 )
  {
    v3 = (CBaseProcessor *)*((_QWORD *)this + 140);
    *v1 = &CBaseProcessor::`vftable';
    CBaseProcessor::~CBaseProcessor(v3);
    Win32FreePool(v1);
  }
  *((_QWORD *)this + 140) = 0LL;
}
