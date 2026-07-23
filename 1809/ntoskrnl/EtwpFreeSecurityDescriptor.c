/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x1405C6658
 * Callers:
 *     EtwpAllocGuidEntry @ 0x1405C1C8C (EtwpAllocGuidEntry.c)
 *     EtwpAccessCheckFromState @ 0x1405C658C (EtwpAccessCheckFromState.c)
 *     EtwpCheckGuidAccess @ 0x140657EC4 (EtwpCheckGuidAccess.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140726D7C (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
