/*
 * XREFs of MiUseSlabAllocator @ 0x1400DAED0
 * Callers:
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MiGetHardFaultPages @ 0x1400DD9C4 (MiGetHardFaultPages.c)
 *     MiFinalizeImageHeaderPage @ 0x14012F5E0 (MiFinalizeImageHeaderPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUseSlabAllocator(__int64 a1, _BYTE *a2, __int16 a3, _DWORD *a4)
{
  int v4; // eax
  __int64 result; // rax
  int v6; // ecx

  v4 = *(_DWORD *)(*(_QWORD *)a2 + 56LL);
  if ( (v4 & 0x20) == 0 || (v4 & 0x40000000) != 0 || (a3 & 0x400) == 0 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 4);
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 92LL) & 0xC0000) == 0 )
  {
    if ( (v6 & 0x10) != 0 && a4 )
    {
      result = 1LL;
      *a4 = 1;
      return result;
    }
    return 0LL;
  }
  if ( (v6 & 8) == 0 || (a2[34] & 2) != 0 && (a2[32] & 0xA) == 8 )
    return 0LL;
  if ( a4 )
    *a4 = 0;
  return 1LL;
}
