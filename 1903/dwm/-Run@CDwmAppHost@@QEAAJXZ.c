/*
 * XREFs of ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001B50
 * Callers:
 *     WinMain @ 0x140001960 (WinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400017A0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x140001920 (-OnClose@CDwmAppHost@@AEAAXXZ.c)
 *     ?Start@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXP6AXXZH@Z @ 0x140001C40 (-Start@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXP6AXXZH@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001CC0 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001D70 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     memset_0 @ 0x1400040EC (memset_0.c)
 */

__int64 __fastcall CDwmAppHost::Run(CDwmAppHost *this)
{
  CDwmAppHost *v1; // rcx
  int started; // eax
  CDwmAppHost *v3; // rcx
  int v4; // ebx
  int v5; // eax
  void (*v6)(void); // rdx
  int v7; // r8d
  CDwmAppHost *v8; // rcx
  tagMSG Msg; // [rsp+30h] [rbp-38h] BYREF

  memset_0(&Msg, 0, sizeof(Msg));
  started = CDwmAppHost::StartComposition(v1);
  v4 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x87u);
  }
  else
  {
    v5 = CDwmAppHost::LpcSyncFlush(v3);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x8Fu);
    }
    else
    {
      BlackScreenDiagnostics::CLongPowerButtonHoldListener::Start(
        (BlackScreenDiagnostics::CLongPowerButtonHoldListener *)&byte_140010A20,
        v6,
        v7);
      while ( GetMessageW(&Msg, 0LL, 0, 0) )
      {
        TranslateMessage(&Msg);
        DispatchMessageW(&Msg);
      }
      if ( byte_140010A20 )
      {
        v8 = (CDwmAppHost *)qword_140010A28;
        byte_140010A20 = 0;
        if ( qword_140010A28 )
        {
          if ( (int)RtlUnsubscribeWnfStateChangeNotification() >= 0 )
            qword_140010A28 = 0LL;
        }
      }
      if ( hwnd )
        CDwmAppHost::OnClose(v8);
    }
  }
  if ( v4 < 0 )
    return (unsigned int)v4;
  else
    return uExitCode;
}
