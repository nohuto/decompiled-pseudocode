/*
 * XREFs of SddlpFreeUuidString @ 0x1408E3FD0
 * Callers:
 *     LocalConvertAclToString @ 0x1405B28CC (LocalConvertAclToString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFreeUuidString(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
