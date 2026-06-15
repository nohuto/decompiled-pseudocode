/*
 * XREFs of ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001C494
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180009DA8 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001BFE8 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001C620 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001EFC8 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     wil::details::lambda_call__lambda_0a3cd6d81db1b4cc0cf980e29d6a3805___::_lambda_call__lambda_0a3cd6d81db1b4cc0cf980e29d6a3805___ @ 0x180021834 (wil--details--lambda_call__lambda_0a3cd6d81db1b4cc0cf980e29d6a3805___--_lambda_call__lambda_0a3c.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180024050 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmUnregisterAppClosureNotification @ 0x1800246E0 (PbmUnregisterAppClosureNotification.c)
 * Callees:
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18001142C (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180015D58 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E234 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::Unregister(CApplicationManager *this, struct CProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  CApplication *v5; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( a2 && (unsigned int)CProcess::CanBeRemoved(a2) )
  {
    v5 = (CApplication *)*((_QWORD *)a2 + 32);
    if ( v5 )
      CApplication::DelinkProcess(v5, a2);
    CApplicationManager::RemoveProcess(this, a2);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
