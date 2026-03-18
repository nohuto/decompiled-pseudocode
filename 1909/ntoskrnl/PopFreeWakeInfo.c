/*
 * XREFs of PopFreeWakeInfo @ 0x1408A72B0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopUnlinkWakeSources @ 0x1408A7518 (PopUnlinkWakeSources.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources(P);
  ExFreePoolWithTag(P, 0x206D654Du);
}
