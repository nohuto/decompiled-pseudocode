/*
 * XREFs of VfFreeCapturedUnicodeString @ 0x14096412C
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall VfFreeCapturedUnicodeString(__int64 a1)
{
  if ( *(_WORD *)a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
}
