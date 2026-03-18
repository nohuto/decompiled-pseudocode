/*
 * XREFs of ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C020E3A8
 * Callers:
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAXW4_POOL_TYPE@@_KIPEAI@Z @ 0x1C020E308 (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 *     Win32UAFMAllocPoolWithPriorityImpl @ 0x1C020EC20 (Win32UAFMAllocPoolWithPriorityImpl.c)
 *     Win32UAFMAllocPoolWithQuotaImpl @ 0x1C020ECA0 (Win32UAFMAllocPoolWithQuotaImpl.c)
 *     Win32UAFMAllocateFromPagedLookasideListImpl @ 0x1C020ED20 (Win32UAFMAllocateFromPagedLookasideListImpl.c)
 * Callees:
 *     <none>
 */

ULONG NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie()
{
  unsigned __int64 v0; // rax
  ULONG result; // eax
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  v0 = __rdtsc();
  Seed = v0;
  result = RtlRandomEx(&Seed);
  if ( !result )
    return 1;
  return result;
}
