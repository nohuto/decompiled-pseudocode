/*
 * XREFs of MiUseSlabAllocator @ 0x140065C90
 * Callers:
 *     MiGetHardFaultPages @ 0x140029BE0 (MiGetHardFaultPages.c)
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MiFinalizeImageHeaderPage @ 0x14012DDB0 (MiFinalizeImageHeaderPage.c)
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiUseSlabAllocator(__int64 a1, _BYTE *a2, __int16 a3)
{
  _BOOL8 result; // rax
  int v4; // ecx

  result = 0;
  if ( (*(_DWORD *)(a1 + 4) & 8) != 0 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)a2 + 56LL);
    if ( (v4 & 0x20) != 0
      && (*(_DWORD *)(*(_QWORD *)a2 + 92LL) & 0x180000) != 0
      && (v4 & 0x40000000) == 0
      && (a2[34] & 2) == 0
      && (a2[32] & 6) != 0
      && (a3 & 0x400) != 0 )
    {
      return 1;
    }
  }
  return result;
}
