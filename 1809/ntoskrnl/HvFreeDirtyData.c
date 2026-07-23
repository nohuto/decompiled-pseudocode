/*
 * XREFs of HvFreeDirtyData @ 0x1405B0F14
 * Callers:
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x1407FBE68 (HvFoldBackDirtyData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall HvFreeDirtyData(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 1688);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_DWORD *)(a1 + 1680) = 0;
    *(_QWORD *)(a1 + 1688) = 0LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 1704), 0);
    *(_QWORD *)(a1 + 1704) = 0LL;
    *(_DWORD *)(a1 + 1712) = 0;
  }
}
