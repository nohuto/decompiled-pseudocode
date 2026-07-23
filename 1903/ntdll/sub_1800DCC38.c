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

PVOID sub_1800DCC38()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int i; // edi
  PVOID BaseAddress; // [rsp+50h] [rbp+20h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+28h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+60h] [rbp+30h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  v0 = _InterlockedCompareExchange64(&qword_180166838, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      DelayInterval.QuadPart = -1000000LL;
      for ( i = 0; i < 5; ++i )
      {
        ZwDelayExecution(0, &DelayInterval);
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
  else
  {
    RegionSize = 0x2000LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0
      && RegionSize >= 0x2000
      && (int)sub_1800DCD38(BaseAddress) >= 0 )
    {
      _InterlockedExchange64(&qword_180166838, (__int64)BaseAddress);
      return BaseAddress;
    }
  }
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  return (PVOID)v1;
}
