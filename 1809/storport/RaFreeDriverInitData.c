/*
 * XREFs of RaFreeDriverInitData @ 0x1C003C3B4
 * Callers:
 *     RaDeleteDriver @ 0x1C00744A8 (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaFreeDriverInitData(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x49486152u);
}
