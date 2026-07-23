/*
 * XREFs of ExpSaBinaryArrayRemove @ 0x14031F764
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167EA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14031F7AC (ExpSaPageGroupDescriptorFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaBinaryArrayRemove(__int64 a1, unsigned int a2)
{
  __int64 v2; // r10
  int v3; // ecx
  _QWORD *v4; // r9

  v2 = a1;
  _BitScanReverse((unsigned int *)&a1, a2);
  v4 = *(_QWORD **)(v2 + 8LL * (unsigned int)(v3 - 2));
  v4[(a2 ^ (unsigned __int64)(unsigned int)(1 << v3)) + 1] = 0LL;
  if ( (*v4)-- == 1LL )
  {
    *(_QWORD *)(v2 + 8LL * (unsigned int)(a1 - 2)) = 0LL;
    ExFreePoolWithTag(v4, 0);
  }
}
