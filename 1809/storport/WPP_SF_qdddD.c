/*
 * XREFs of WPP_SF_qdddD @ 0x1C003BF58
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0018A2C (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdddD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, unsigned int **))pfnWppTraceMessage)(
           a1,
           43LL,
           &stru_1C0055A88.EnableBitMask);
}
