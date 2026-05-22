/*
 * XREFs of ?OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800360C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x18002E4B0 (-GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ.c)
 *     ?OnInput@SystemButtonEventControllerManager@@QEAAXPEBULegacyInputInfo@@@Z @ 0x180030298 (-OnInput@SystemButtonEventControllerManager@@QEAAXPEBULegacyInputInfo@@@Z.c)
 *     ?ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z @ 0x180035F14 (-ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z.c)
 */

__int64 __fastcall SystemButtonProcessor::OnInput(
        SystemButtonProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  struct InputInfo *v5; // rbx
  int v6; // edi
  SystemButtonEventController **SystemButtonEventControllerManager; // rax

  *(_DWORD *)a4 = 0;
  v5 = a2;
  if ( *(char *)a2 < 0 )
  {
    v6 = *((_DWORD *)a2 + 16);
    if ( (unsigned int)(v6 - 237) <= 2 )
    {
      SystemButtonEventControllerManager = (SystemButtonEventController **)ISMStatics::GetSystemButtonEventControllerManager();
      if ( *SystemButtonEventControllerManager )
      {
        SystemButtonEventControllerManager::OnInput(SystemButtonEventControllerManager, v5);
        *(_DWORD *)a4 = 3;
      }
    }
    LOBYTE(a2) = *((_BYTE *)v5 + 68);
    InputETW::SystemButtonProcessor::ButtonEvent(v6, (unsigned __int64)a2);
  }
  return 0LL;
}
