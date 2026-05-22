/*
 * XREFs of ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows@@PEA_N@Z @ 0x18007973C
 * Callers:
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z @ 0x180075E24 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAPEAW4GamepadButtons@Input@Gaming@Windows@@QEAW42345@AEBW42345@@Z @ 0x18007947C (--$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@-$vector@W4GamepadButtons@Inpu.c)
 *     ?LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z @ 0x180079D24 (-LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x180079E04 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 */

__int64 __fastcall ViewMenuChordedKeyHandler::ChordedKeyStateMachine(__int64 a1, bool a2, bool a3, int a4, char *a5)
{
  char *v6; // rdi
  int v8; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // eax
  char v18; // al
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  _BYTE *v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  _BYTE *v30; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_WORD *)(a1 + 72) = 0;
  v6 = a5;
  v8 = *(_DWORD *)(a1 + 16);
  *a5 = 0;
  v10 = v8 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( !v15 )
            {
              *v6 = 1;
              if ( a2 )
              {
                if ( a3 )
                  goto LABEL_54;
              }
              else if ( !a3 )
              {
                goto LABEL_35;
              }
              *(_DWORD *)(a1 + 16) = 7;
              goto LABEL_54;
            }
            if ( v15 != 1 )
            {
              v16 = *(_QWORD *)(a1 + 24);
              *(_DWORD *)(a1 + 16) = 1;
              v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 96LL))(v16);
              if ( v17 < 0 )
              {
                wil::details::in1diag3::FailFast_Hr(
                  retaddr,
                  400LL,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenu"
                           "chordedkeyhandler.cpp",
                  (const char *)(unsigned int)v17);
                __debugbreak();
              }
              goto LABEL_54;
            }
            *v6 = 1;
            if ( a2 || a3 )
              goto LABEL_54;
LABEL_35:
            *(_DWORD *)(a1 + 16) = 1;
            goto LABEL_54;
          }
          if ( a3 && a2 )
          {
            ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(5u);
            v18 = 0;
          }
          else
          {
            v18 = 1;
          }
          *v6 = v18;
          v19 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 16) = 1;
          *(_WORD *)(a1 + 72) = 1;
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 96LL))(v19);
          if ( v20 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              376LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchor"
                       "dedkeyhandler.cpp",
              (const char *)(unsigned int)v20);
            __debugbreak();
          }
        }
        else
        {
          if ( a3 )
          {
            if ( a2 )
            {
              ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(4u);
              *v6 = 0;
            }
          }
          else
          {
            *v6 = 1;
          }
          v21 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 16) = 1;
          v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 96LL))(v21);
          if ( v22 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              356LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchor"
                       "dedkeyhandler.cpp",
              (const char *)(unsigned int)v22);
            __debugbreak();
          }
        }
      }
      else
      {
        if ( !a2 )
          goto LABEL_35;
        if ( !a3 )
        {
          ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(3u);
          *v6 = 0;
          goto LABEL_35;
        }
        v23 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 4;
        *v6 = 1;
        v24 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 80LL))(v23, 5000000LL, 0LL);
        if ( v24 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            304LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v24);
          __debugbreak();
        }
      }
    }
    else if ( a2 )
    {
      v25 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 5;
      *v6 = 1;
      v26 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v25 + 80LL))(v25, 5000000LL, 0LL);
      if ( v26 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          320LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
          (const char *)(unsigned int)v26);
        __debugbreak();
      }
    }
    else if ( a3 )
    {
      ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(2u);
      *v6 = 0;
      *(_DWORD *)(a1 + 16) = 1;
      *(_WORD *)(a1 + 72) = 1;
    }
    else
    {
      *v6 = 1;
      v27 = *(_BYTE **)(a1 + 56);
      LODWORD(a5) = a4;
      if ( *(_BYTE **)(a1 + 64) == v27 )
      {
        std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
          (void **)(a1 + 48),
          v27,
          (unsigned int *)&a5);
      }
      else
      {
        *(_DWORD *)v27 = a4;
        *(_QWORD *)(a1 + 56) += 4LL;
      }
      *(_DWORD *)(a1 + 16) = 1;
      *(_WORD *)(a1 + 72) = 257;
    }
  }
  else if ( a2 )
  {
    if ( a3 )
    {
      v28 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 4;
      *v6 = 1;
      v29 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v28 + 80LL))(v28, 5000000LL, 0LL);
      if ( v29 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          279LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
          (const char *)(unsigned int)v29);
        __debugbreak();
      }
    }
    else
    {
      *(_DWORD *)(a1 + 16) = 3;
    }
  }
  else if ( a3 )
  {
    *(_DWORD *)(a1 + 16) = 2;
    v30 = *(_BYTE **)(a1 + 56);
    *v6 = 1;
    LODWORD(a5) = a4;
    if ( *(_BYTE **)(a1 + 64) == v30 )
    {
      std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
        (void **)(a1 + 48),
        v30,
        (unsigned int *)&a5);
    }
    else
    {
      *(_DWORD *)v30 = a4;
      *(_QWORD *)(a1 + 56) += 4LL;
    }
  }
LABEL_54:
  ControllerProcessorTelemetry::LogGamepadTaskSwitcherState(*(_DWORD *)(a1 + 16), a2, a3);
  return 0LL;
}
