/*
 * XREFs of sub_1800DCC38 @ 0x1800DCC38
 * Callers:
 *     ShipAssert @ 0x1800DCDB0 (ShipAssert.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x18009CD60 (ZwDelayExecution.c)
 *     sub_1800DCD38 @ 0x1800DCD38 (sub_1800DCD38.c)
 */

__int64 sub_1800DCC38()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int i; // edi

  v0 = _InterlockedCompareExchange64(&qword_180166838, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      for ( i = 0; i < 5; ++i )
      {
        ZwDelayExecution();
        v1 = qword_180166838;
        if ( qword_180166838 != 255 )
          break;
      }
      if ( i == 5 )
      {
        v1 = 238LL;
        _InterlockedCompareExchange64(&qword_180166838, 238LL, 255LL);
      }
    }
  }
  else if ( (int)ZwAllocateVirtualMemory() >= 0 && (int)sub_1800DCD38(0LL) >= 0 )
  {
    _InterlockedExchange64(&qword_180166838, 0LL);
    return 0LL;
  }
  return v1;
}
