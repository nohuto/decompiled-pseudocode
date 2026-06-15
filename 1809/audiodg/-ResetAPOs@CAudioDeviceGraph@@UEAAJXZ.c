/*
 * XREFs of ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x14001A590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004644 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x140005EB0 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::ResetAPOs(CAudioDeviceGraph *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  CPipeInstance **Next; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 64) )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 21);
    while ( v8 )
    {
      Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v3, &v8);
      CPipeInstance::ResetAPOs(*Next);
    }
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 20));
  }
  else
  {
    v2 = -2005139437;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        39LL,
        &WPP_c996c122903733bc288a845a1996e411_Traceguids,
        2289827859LL);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::ResetAPOs", 0x4A1u, -2005139437);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
