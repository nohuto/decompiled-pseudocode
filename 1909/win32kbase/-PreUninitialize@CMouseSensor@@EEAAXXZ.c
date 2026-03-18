/*
 * XREFs of ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C00B56B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C00B56F4 (--1CMouseProcessor@@QEAA@XZ.c)
 */

void __fastcall CMouseSensor::PreUninitialize(CMouseSensor *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 152);
  if ( v1 )
  {
    CMouseProcessor::~CMouseProcessor(*((CMouseProcessor **)this + 152));
    Win32FreePool(v1);
  }
  *((_QWORD *)this + 152) = 0LL;
}
