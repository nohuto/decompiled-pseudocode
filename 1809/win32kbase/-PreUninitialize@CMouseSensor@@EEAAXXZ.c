/*
 * XREFs of ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0005DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C0005E54 (--1CMouseProcessor@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall CMouseSensor::PreUninitialize(CMouseSensor *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 140);
  if ( v1 )
  {
    CMouseProcessor::~CMouseProcessor(*((CMouseProcessor **)this + 140));
    Win32FreePool(v1);
  }
  *((_QWORD *)this + 140) = 0LL;
}
