/*
 * XREFs of ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CGXPAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x10007860
 * Callers:
 *     ?CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SGJU_WNF_STATE_NAME@@KPAU_WNF_TYPE_ID@@PAXPBXK@Z @ 0x10007800 (-CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SGJU_WNF_STATE_NAME@@KPAU_WNF_TYPE_.c)
 * Callees:
 *     Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_c8fac60120d0355ff66629c823b43c3a___ @ 0x100078A0 (Microsoft--WRL--EventSource_Windows--Foundation--IEventHandler_IInspectable____Microsoft--WRL--I.c)
 */

void __stdcall Windows::System::CMemoryManager::OnCommitLevelChangeRoutine(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *a1)
{
  int v1; // [esp+0h] [ebp-8h] BYREF
  int v2; // [esp+4h] [ebp-4h] BYREF

  v1 = 0;
  v2 = 0;
  if ( *((_DWORD *)a1 + 1) <= *(_DWORD *)a1 )
    Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_c8fac60120d0355ff66629c823b43c3a___(
      &v1,
      &v2);
  else
    Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_c8fac60120d0355ff66629c823b43c3a___(
      &v2,
      &v1);
}
