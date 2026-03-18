/*
 * XREFs of CcChargeDirtyPages @ 0x14007A114
 * Callers:
 *     CcSetDirtyPinnedData @ 0x140079B20 (CcSetDirtyPinnedData.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14016F620 (CcAddDirtyPagesToExternalCache.c)
 * Callees:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14007A204 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     CcScheduleLazyWriteScan @ 0x14012013C (CcScheduleLazyWriteScan.c)
 */

__int64 __fastcall CcChargeDirtyPages(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rsi
  __int64 Partition; // rbx
  signed __int64 v9; // rdx

  v4 = a4;
  if ( a1 )
    Partition = CcGetPartition(a1);
  else
    Partition = *((_QWORD *)PspSystemPartition + 1);
  v9 = v4;
  *(_QWORD *)(Partition + 600) += v4;
  if ( a2 )
    *(_DWORD *)(a2 + 8) += v4;
  if ( a3 )
    *(_DWORD *)(a3 + 32) += v4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 112) += v4;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 504) + 32LL), v4);
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 240) + 24LL), v4);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) == -1LL )
        *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    }
  }
  if ( *(_BYTE *)(Partition + 900) && *(_QWORD *)(Partition + 600) >= 0x2000uLL )
  {
    LOBYTE(v9) = 1;
    CcScheduleLazyWriteScan(Partition, v9, 0LL);
  }
  if ( *(_BYTE *)(Partition + 140) )
  {
    CcScheduleLazyWriteScan(Partition, 0LL, 0LL);
    *(_BYTE *)(Partition + 140) = 0;
  }
  return CcAdjustWriteBehindThreadPoolIfNeeded(Partition, 0LL);
}
