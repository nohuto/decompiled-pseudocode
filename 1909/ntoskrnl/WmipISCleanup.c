/*
 * XREFs of WmipISCleanup @ 0x14073CF90
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall WmipISCleanup(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 88);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
}
