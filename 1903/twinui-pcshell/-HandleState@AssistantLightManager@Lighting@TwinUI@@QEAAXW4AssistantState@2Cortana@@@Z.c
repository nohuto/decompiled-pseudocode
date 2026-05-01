/*
 * XREFs of ?HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z @ 0x1804006D4
 * Callers:
 *     ?ShellAssistantStateChangeWNFCallback@AssistantLightWNFListener@Lighting@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1803FF420 (-ShellAssistantStateChangeWNFCallback@AssistantLightWNFListener@Lighting@TwinUI@@CAJU_WNF_STATE_.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180104D80 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1801D3A24 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x1801E3FB0 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1803141D0 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightManager::HandleState(__int64 a1, int a2)
{
  void *v4; // rdx
  void *v5; // rdx
  wil *v6; // rcx
  wil::details *v7; // rcx
  wil::details *Thread; // rax
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 1;
  if ( SystemParametersInfoW(0x1042u, 0, &v9, 0) && v9 )
  {
    wil::details::SetEvent(*(wil::details **)(a1 + 64), v4);
    v6 = *(wil **)(a1 + 56);
    if ( v6 )
      wil::handle_wait(v6, (void *)0xFFFFFFFFLL);
    v7 = *(wil::details **)(a1 + 64);
    *(_DWORD *)(a1 + 104) = a2;
    wil::details::ResetEvent(v7, v5);
    Thread = (wil::details *)CreateThread(
                               0LL,
                               0LL,
                               (LPTHREAD_START_ROUTINE)lambda_b1f3f535d4f0ba887956551c7aafec2d_::_lambda_invoker_cdecl_,
                               (LPVOID)a1,
                               0,
                               0LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)(a1 + 56),
      Thread);
  }
}
