/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x1405C5B1C
 * Callers:
 *     EtwpAccessCheckFromState @ 0x1405C5A20 (EtwpAccessCheckFromState.c)
 *     EtwpCheckGuidAccess @ 0x140692610 (EtwpCheckGuidAccess.c)
 *     EtwpAllocGuidEntry @ 0x140694070 (EtwpAllocGuidEntry.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140781CD0 (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeSecurityDescriptor(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( v2 != (void *)EtwpDefaultTraceSecurityDescriptor && v2 != (void *)WmipDefaultAccessSd )
      ExFreePoolWithTag(v2, 0);
    *a1 = 0LL;
  }
}
