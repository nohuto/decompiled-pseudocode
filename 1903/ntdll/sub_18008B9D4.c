/*
 * XREFs of sub_18008B9D4 @ 0x18008B9D4
 * Callers:
 *     sub_18000FB00 @ 0x18000FB00 (sub_18000FB00.c)
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x18000F520 (RtlSidDominatesForTrust.c)
 */

BOOLEAN __fastcall sub_18008B9D4(void *a1, void *a2, __int64 a3, NTSTATUS *a4)
{
  BOOLEAN result; // al
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  DominatesTrust = 0;
  if ( !a1 || (*a4 = RtlSidDominatesForTrust(a1, a2, &DominatesTrust), (result = DominatesTrust) == 0) )
    *a4 = -1073741790;
  return result;
}
