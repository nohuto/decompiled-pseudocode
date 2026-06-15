/*
 * XREFs of ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x14003908C
 * Callers:
 *     ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x140036C10 (-RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConst.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040E8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z @ 0x140035B44 (-SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioDeviceGraph::UpdateLoopbackConstrictionLevel(CAudioDeviceGraph *this, unsigned int a2)
{
  int v4; // ebx
  int v5; // r14d
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // rcx
  CPipeInstance **Next; // rax
  CPipeInstance **v9; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v12; // [rsp+30h] [rbp-10h]
  _QWORD *v13; // [rsp+70h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+80h] [rbp+40h]

  v4 = 0;
  v5 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v14 = v6;
  if ( !*((_DWORD *)this + 64) )
  {
    v4 = -2005139437;
LABEL_17:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Au,
        (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids,
        v4);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::UpdateLoopbackConstrictionLevel", 0x5B7u, v4);
    goto LABEL_22;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v13 = (_QWORD *)*((_QWORD *)this + 21);
  if ( !v13 )
    goto LABEL_13;
  do
  {
    Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v7, &v13);
    v4 = CPipeInstance::SetLoopbackConstriction(*Next, a2);
    if ( v4 >= 0 )
      v5 = 1;
  }
  while ( v13 );
  if ( v4 < 0 )
  {
    if ( v5 )
    {
      v13 = (_QWORD *)*((_QWORD *)this + 21);
      while ( v13 )
      {
        v9 = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v7, &v13);
        CPipeInstance::SetLoopbackConstriction(*v9, *((unsigned int *)this + 28));
      }
    }
    if ( v12 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
LABEL_13:
    if ( v12 )
      LeaveCriticalSection(lpCriticalSection);
    *((_DWORD *)this + 28) = a2;
  }
  if ( v4 < 0 )
    goto LABEL_17;
LABEL_22:
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v4;
}
