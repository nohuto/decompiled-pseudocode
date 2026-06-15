/*
 * XREFs of ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x140055E00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x140043C80 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z @ 0x1400546F4 (-AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400556C4 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Stop(CCrossProcessControl *this)
{
  unsigned __int8 v2; // r8
  int v3; // ebx
  CCrossProcessBaseEndpoint *v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8

  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v4 = (CCrossProcessBaseEndpoint *)*((_QWORD *)this + 1);
    v5 = *(_DWORD *)(*((_QWORD *)v4 + 8) + 164LL);
    if ( CCrossProcessBaseEndpoint::IsValidFlags(v4, v5, v2) )
    {
      if ( (v5 & 1) != 0 )
      {
        v3 = 0;
        _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 164LL), 0xFFFFFFFC);
        AERTUnlockZoneHeap(
          *(void **)(*((_QWORD *)this + 1) + 136LL),
          (void *)(unsigned int)_InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 160LL), 1));
        AEWMILOG_CONTROL(v6, this, v7, 7u);
      }
      else
      {
        v3 = -2005139433;
      }
    }
    else
    {
      v3 = -2005139387;
    }
  }
  else
  {
    v3 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x20u,
        (__int64)&WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids,
        v3);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessControl::Stop", 0x69Fu, v3);
  }
  return (unsigned int)v3;
}
