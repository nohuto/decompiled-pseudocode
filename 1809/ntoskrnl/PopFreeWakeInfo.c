/*
 * XREFs of PopFreeWakeInfo @ 0x14086C9B0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopUnlinkWakeSources @ 0x14086CC18 (PopUnlinkWakeSources.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources(P);
  ExFreePoolWithTag(P, 0x206D654Du);
}
