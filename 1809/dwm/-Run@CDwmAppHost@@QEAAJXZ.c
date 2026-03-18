/*
 * XREFs of ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001B00
 * Callers:
 *     WinMain @ 0x140001890 (WinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001690 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001BB0 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001C60 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     memset_0 @ 0x140003C76 (memset_0.c)
 */

__int64 __fastcall CDwmAppHost::Run(CDwmAppHost *this)
{
  CDwmAppHost *v1; // rcx
  int started; // eax
  CDwmAppHost *v3; // rcx
  int v4; // ebx
  int v5; // eax
  tagMSG Msg; // [rsp+30h] [rbp-38h] BYREF

  memset_0(&Msg, 0, sizeof(Msg));
  started = CDwmAppHost::StartComposition(v1);
  v4 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x7Cu);
  }
  else
  {
    v5 = CDwmAppHost::LpcSyncFlush(v3);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x84u);
    }
    else
    {
      while ( GetMessageW(&Msg, 0LL, 0, 0) )
      {
        TranslateMessage(&Msg);
        DispatchMessageW(&Msg);
      }
      if ( hWnd )
      {
        DestroyWindow(hWnd);
        hWnd = 0LL;
      }
    }
  }
  if ( v4 < 0 )
    return (unsigned int)v4;
  else
    return uExitCode;
}
