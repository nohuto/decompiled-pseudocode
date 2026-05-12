/*
 * XREFs of WPP_SF_qdddD @ 0x1C0037E28
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0014024 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdddD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_09b64121c92431e1d769322adfcd0464_Traceguids);
}
