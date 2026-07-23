/*
 * XREFs of RtlWakeAddressAll @ 0x180006FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlWakeAddressAll(PVOID Address)
{
  char v1; // dl
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v2, 0);
  v1 = 1;
  sub_180006FCC(Address, v1);
}
