/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x1405C561C
 * Callers:
 *     EtwpAccessCheckFromState @ 0x1405C5520 (EtwpAccessCheckFromState.c)
 *     EtwpCheckGuidAccess @ 0x1406651FC (EtwpCheckGuidAccess.c)
 *     EtwpAllocGuidEntry @ 0x140666C54 (EtwpAllocGuidEntry.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x14077F2B0 (EtwpUpdateTrace.c)
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
