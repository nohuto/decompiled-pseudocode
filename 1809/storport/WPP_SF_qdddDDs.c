/*
 * XREFs of WPP_SF_qdddDDs @ 0x1C003BFDC
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0018A2C (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdddDDs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        __int64 a10)
{
  __int64 v10; // rdx

  if ( a10 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(a10 + v10) );
  }
  return ((__int64 (__fastcall *)(__int64, __int64, unsigned int **))pfnWppTraceMessage)(
           a1,
           43LL,
           &stru_1C0055A88.EnableBitMask);
}
