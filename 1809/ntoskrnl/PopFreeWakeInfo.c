/*
 * XREFs of PopFreeWakeInfo @ 0x14086B770
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PopUnlinkWakeSources @ 0x14086B9D8 (PopUnlinkWakeSources.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources(P);
  ExFreePoolWithTag(P, 0x206D654Du);
}
