/*
 * XREFs of ??_EPTPEngineTraceProducer@@UEAAPEAXI@Z @ 0x1C01980C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ??1PTPEngineTraceProducer@@UEAA@XZ @ 0x1C0198070 (--1PTPEngineTraceProducer@@UEAA@XZ.c)
 */

PTPEngineTraceProducer *__fastcall PTPEngineTraceProducer::`vector deleting destructor'(
        PTPEngineTraceProducer *this,
        char a2)
{
  PTPEngineTraceProducer::~PTPEngineTraceProducer(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
