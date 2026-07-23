/*
 * XREFs of PspIoRateEntryIoControlReference @ 0x140105B9C
 * Callers:
 *     PsIoRateControlReference @ 0x140105ADC (PsIoRateControlReference.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1402EA66C (PspJobIoRateVolumeEntryReference.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 */

unsigned __int64 __fastcall PspIoRateEntryIoControlReference(struct _EX_RUNDOWN_REF *a1)
{
  BOOLEAN v2; // al
  __int64 v3; // rdx

  v2 = ExAcquireRundownProtection_0(a1 + 4);
  v3 = 0LL;
  if ( v2 )
    return a1[5].Count;
  return v3;
}
