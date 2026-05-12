/*
 * XREFs of WPP_SF_S @ 0x1C0048FEC
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017624 (RaUnitScsiGetDumpPointersIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_S(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *p_Logger)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( p_Logger )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *((_WORD *)p_Logger + v5) );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10LL;
  }
  if ( !p_Logger )
    p_Logger = &Context.Logger;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, unsigned __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_a32982da72aa344f3768c69018313f42_Traceguids,
           33LL,
           p_Logger,
           v6,
           0LL);
}
