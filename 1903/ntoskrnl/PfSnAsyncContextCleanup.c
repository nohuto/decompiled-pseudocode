/*
 * XREFs of PfSnAsyncContextCleanup @ 0x14066A4F0
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14066A190 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnAsyncContextCleanup(_QWORD *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (struct _EX_RUNDOWN_REF *)a1[28];
  if ( v2 )
    ExReleaseRundownProtection_0(v2 + 45);
  v3 = (void *)a1[26];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (void *)a1[27];
  if ( v4 )
    ObfDereferenceObject(v4);
}
