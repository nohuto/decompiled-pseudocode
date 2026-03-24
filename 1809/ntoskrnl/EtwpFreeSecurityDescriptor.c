/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x1405C5658
 * Callers:
 *     EtwpAllocGuidEntry @ 0x1405C0C8C (EtwpAllocGuidEntry.c)
 *     EtwpAccessCheckFromState @ 0x1405C558C (EtwpAccessCheckFromState.c)
 *     EtwpCheckGuidAccess @ 0x140656D04 (EtwpCheckGuidAccess.c)
 *     EtwpStartLogger @ 0x1406591A0 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140725ADC (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
