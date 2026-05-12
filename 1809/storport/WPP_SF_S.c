/*
 * XREFs of WPP_SF_S @ 0x1C004B784
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00149DC (RaUnitScsiGetDumpPointersIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_S(__int64 a1, __int64 a2, __int64 a3, const struct _MCGEN_TRACE_CONTEXT *a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *((_WORD *)&a4->RegistrationHandle + v5) );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10LL;
  }
  if ( !a4 )
    a4 = &Context;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const struct _MCGEN_TRACE_CONTEXT *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
           36LL,
           a4,
           v6,
           0LL);
}
