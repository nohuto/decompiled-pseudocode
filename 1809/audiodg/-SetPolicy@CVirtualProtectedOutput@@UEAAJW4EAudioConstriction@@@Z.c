/*
 * XREFs of ?SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z @ 0x14003BFC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CVirtualProtectedOutput::SetPolicy(CVirtualProtectedOutput *this, unsigned int a2)
{
  int v4; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD, CVirtualProtectedOutput *, _QWORD))(**((_QWORD **)this + 1) + 48LL))(
         *((_QWORD *)this + 1),
         this,
         a2);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_6aaeadc0d6c13bd136ce8c586a8020b6_Traceguids, v4);
    }
    AudDGTraceLoggingErrorHelper("CVirtualProtectedOutput::SetPolicy", 0x15Eu, v4);
  }
  else
  {
    *((_DWORD *)this + 5) = a2;
  }
  return (unsigned int)v4;
}
