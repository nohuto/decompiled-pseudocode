/*
 * XREFs of GetShipAssertBuffer @ 0x1800DF044
 * Callers:
 *     ShipAssert @ 0x1800DF1C0 (ShipAssert.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1800A0960 (ZwDelayExecution.c)
 *     SetAssertBufferPtrinPeb @ 0x1800DF148 (SetAssertBufferPtrinPeb.c)
 */

__int64 GetShipAssertBuffer()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int i; // edi

  v0 = _InterlockedCompareExchange64(&qword_1801667B8, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      for ( i = 0; i < 5; ++i )
      {
        ZwDelayExecution();
        v1 = qword_1801667B8;
        if ( qword_1801667B8 != 255 )
          break;
      }
      if ( i == 5 )
      {
        v1 = 238LL;
        _InterlockedCompareExchange64(&qword_1801667B8, 238LL, 255LL);
      }
    }
  }
  else if ( (int)ZwAllocateVirtualMemory() >= 0 && (int)SetAssertBufferPtrinPeb(0LL) >= 0 )
  {
    _InterlockedExchange64(&qword_1801667B8, 0LL);
    return 0LL;
  }
  return v1;
}
