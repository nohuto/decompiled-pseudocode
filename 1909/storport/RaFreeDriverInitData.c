/*
 * XREFs of RaFreeDriverInitData @ 0x1C0039614
 * Callers:
 *     RaDeleteDriver @ 0x1C007482C (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaFreeDriverInitData(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x49486152u);
}
