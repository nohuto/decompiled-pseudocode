/*
 * XREFs of ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180076064
 * Callers:
 *     ?v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ @ 0x18005F2A0 (-v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ.c)
 *     ?v_OnWindowCreated@WindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x180076000 (-v_OnWindowCreated@WindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?v_OnWindowCreated@UAPViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x18023D650 (-v_OnWindowCreated@UAPViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?v_SetDesiredPosition_OnBeforePositionWindow@UAPViewWrapper@@EEAAX_N0@Z @ 0x18023D890 (-v_SetDesiredPosition_OnBeforePositionWindow@UAPViewWrapper@@EEAAX_N0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8cb864d560eabf2ff9644d5f66b5c768___ @ 0x18024E1CC (Windows--Internal--ComTaskPool--QueueTask__lambda_8cb864d560eabf2ff9644d5f66b5c768___.c)
 */

void __fastcall PushWindowTransparencyModeToWindow(HWND a1, int a2, int a3)
{
  void *v3; // rdi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND v10; // [rsp+48h] [rbp+20h] BYREF

  v3 = (void *)a2;
  if ( a2 != (unsigned int)GetPropW(a1, L"MaterialProperties.WindowTransparencyMode") )
  {
    SetPropW(a1, L"MaterialProperties.WindowTransparencyMode", v3);
    if ( (unsigned int)(a3 - 4) <= 1
      && (int)CoreIsWindowServiceSupported(a1, &GUID_592e523e_f578_42d3_9b29_307fc423ae43) >= 0 )
    {
      v10 = a1;
      v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_8cb864d560eabf2ff9644d5f66b5c768___(v6, &v10);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x20,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.cpp",
          (const char *)(unsigned int)v7,
          v8);
    }
  }
}
