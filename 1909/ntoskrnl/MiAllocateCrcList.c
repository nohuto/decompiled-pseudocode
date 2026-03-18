/*
 * XREFs of MiAllocateCrcList @ 0x1406F8350
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1406F5EB0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1400BADEC (MiGetAvailablePagesBelowPriority.c)
 *     MiGetPrivatePageCount @ 0x1401438EC (MiGetPrivatePageCount.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall MiAllocateCrcList(__int64 *a1, __int64 a2, SIZE_T *a3)
{
  _QWORD *v3; // rbp
  unsigned __int64 AvailablePagesBelowPriority; // rbx
  unsigned __int64 v6; // r8
  SIZE_T v7; // rbx
  PVOID result; // rax

  v3 = (_QWORD *)*a1;
  MiGetPrivatePageCount(*a1);
  if ( v3[1016] - 1024LL <= 0 || v3[1053] >= v3[1069] )
    return 0LL;
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v3, 2u);
  if ( v6 <= AvailablePagesBelowPriority )
    AvailablePagesBelowPriority = v6;
  v7 = AvailablePagesBelowPriority << 12;
  if ( v7 < 0x200000 )
    v7 = 0x200000LL;
  while ( 1 )
  {
    result = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6D75534Du);
    if ( result )
      break;
    v7 >>= 1;
    if ( v7 < 0x10000 )
      return result;
  }
  *a3 = v7;
  return result;
}
