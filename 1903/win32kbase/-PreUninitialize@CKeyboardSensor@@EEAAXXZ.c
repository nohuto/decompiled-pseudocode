/*
 * XREFs of ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C00BAAC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall CKeyboardSensor::PreUninitialize(CKeyboardSensor *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 152);
  if ( v2 )
  {
    *v2 = &CBaseProcessor::`vftable';
    Win32FreePool((__int64)v2);
  }
  *((_QWORD *)this + 152) = 0LL;
}
