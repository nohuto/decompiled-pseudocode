/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x18010D2DC
 * Callers:
 *     RtlpHpHeapProtect @ 0x18010C7A4 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A0740 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A0CE0 (ZwProtectVirtualMemory.c)
 */

__int64 RtlpHpLargeAllocationProtect()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
