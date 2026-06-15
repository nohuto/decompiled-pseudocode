/*
 * XREFs of ?GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z @ 0x1800B5470
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x1800B5944 (WPP_SF_qd.c)
 */

__int64 __fastcall CMeterControlBase::GetMeteringChannelCount(CMeterControlBase *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax

  v2 = 0;
  if ( a2 )
  {
    v3 = *((_DWORD *)this + 6);
    *a2 = v3;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_a149032b93413976049dd9474e14fad1_Traceguids, this, v3);
    }
  }
  else
  {
    v2 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CMeterControlBase::GetMeteringChannelCount", 222, -2147467261);
  }
  return v2;
}
