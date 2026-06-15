/*
 * XREFs of ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x140055930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z @ 0x1400546F4 (-AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z.c)
 *     ?DrainAndResetQueue@CCrossProcessBaseEndpoint@@IEAAXXZ @ 0x140054880 (-DrainAndResetQueue@CCrossProcessBaseEndpoint@@IEAAXXZ.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400556C4 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Reset(CCrossProcessControl *this)
{
  int v2; // ebx
  unsigned __int8 v3; // r8
  CCrossProcessBaseEndpoint *v4; // rax
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // r8

  v2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v4 = (CCrossProcessBaseEndpoint *)*((_QWORD *)this + 1);
    v5 = *(_DWORD *)(*((_QWORD *)v4 + 8) + 164LL);
    if ( CCrossProcessBaseEndpoint::IsValidFlags(v4, v5, v3) )
    {
      if ( (v5 & 1) != 0 )
      {
        v2 = -2005139434;
      }
      else
      {
        WaitForSingleObject(*(HANDLE *)(*((_QWORD *)this + 1) + 144LL), 0x3E8u);
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 24LL), 0LL);
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 16LL), 0LL);
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 152LL), 0LL);
        *(_QWORD *)(*((_QWORD *)this + 1) + 184LL) = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 1) + 192LL) = 0LL;
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 160LL), 1);
        CCrossProcessBaseEndpoint::DrainAndResetQueue(*((CCrossProcessBaseEndpoint **)this + 1));
        AEWMILOG_CONTROL(v6, this, v7, 8u);
      }
    }
    else
    {
      v2 = -2005139387;
    }
  }
  else
  {
    v2 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Eu,
        (__int64)&WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids,
        v2);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessControl::Reset", 0x627u, v2);
  }
  return (unsigned int)v2;
}
