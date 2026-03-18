/*
 * XREFs of ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1C01D365C
 * Callers:
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAXW4_POOL_TYPE@@_KIPEAI@Z @ 0x1C01D3674 (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 *     Win32UAFMAllocPagedLookasideListImpl @ 0x1C01D3DC0 (Win32UAFMAllocPagedLookasideListImpl.c)
 *     Win32UAFMAllocPoolWithPriorityImpl @ 0x1C01D3E60 (Win32UAFMAllocPoolWithPriorityImpl.c)
 *     Win32UAFMAllocPoolWithQuotaImpl @ 0x1C01D3EE0 (Win32UAFMAllocPoolWithQuotaImpl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFEEuLL )
    return 0LL;
  else
    return a1 + 16;
}
