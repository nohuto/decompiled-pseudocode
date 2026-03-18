/*
 * XREFs of MiDeleteColorAnchors @ 0x14085D174
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14085C900 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteColorAnchors(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}
