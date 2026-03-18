/*
 * XREFs of ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C00B3B90
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C00B3AE0 (--1CMouseProcessor@@QEAA@XZ.c)
 */

void __fastcall CMouseSensor::PreUninitialize(CMouseSensor *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx

  v3 = *((_QWORD *)this + 152);
  if ( v3 )
  {
    CMouseProcessor::~CMouseProcessor(*((CMouseProcessor **)this + 152), a2, a3);
    Win32FreePool(v3);
  }
  *((_QWORD *)this + 152) = 0LL;
}
