/*
 * XREFs of EtwpAllocatePmcData @ 0x1408F7570
 * Callers:
 *     EtwpUpdatePmcCounters @ 0x1408F8A60 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1408F8B94 (EtwpUpdatePmcEvents.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400048C0 (KeQueryMaximumProcessorCountEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocatePmcData(__int64 a1)
{
  SIZE_T v2; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rbx
  PVOID v6; // rax

  v2 = 8 * KeQueryMaximumProcessorCountEx(0xFFFFu) + 24;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x58777445u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v2);
  v6 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)EtwpMaxPmcCounter, 0x58777445u);
  *v4 = v6;
  if ( !v6 )
  {
    ExFreePoolWithTag(v4, 0);
    return 3221225495LL;
  }
  *(_QWORD *)(a1 + 1000) = v4;
  return 0LL;
}
