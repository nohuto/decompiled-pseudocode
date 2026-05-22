/*
 * XREFs of ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows@@PEA_N@Z @ 0x180038DB8
 * Callers:
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z @ 0x180033C10 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAPEAW4GamepadButtons@Input@Gaming@Windows@@QEAW42345@AEBW42345@@Z @ 0x18000F68C (--$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@-$vector@W4GamepadButtons@Inpu.c)
 *     ?LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z @ 0x1800385C4 (-LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x1800386AC (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewMenuChordedKeyHandler::ChordedKeyStateMachine(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        _BYTE *a5)
{
  _BYTE *v5; // rdi
  int v7; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  char *v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  char *v29; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a5;
  *(_WORD *)(a1 + 72) = 0;
  v7 = *(_DWORD *)(a1 + 16);
  *v5 = 0;
  v10 = v7 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        if ( a2 )
        {
          if ( a3 )
          {
            v22 = *(_QWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 16) = 4;
            *v5 = 1;
            v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v22 + 80LL))(v22, 5000000LL, 0LL);
            if ( v23 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x130,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuch"
                         "ordedkeyhandler.cpp",
                (const char *)(unsigned int)v23);
              __debugbreak();
            }
            goto LABEL_56;
          }
          ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(3);
        }
        *v5 = 0;
        goto LABEL_37;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( !v15 )
          {
            *v5 = 1;
            if ( a2 )
            {
              if ( a3 )
                goto LABEL_56;
            }
            else if ( !a3 )
            {
              goto LABEL_37;
            }
            *(_DWORD *)(a1 + 16) = 7;
            goto LABEL_56;
          }
          if ( v15 != 1 )
          {
            v16 = *(_QWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 16) = 1;
            *v5 = 0;
            v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 96LL))(v16);
            if ( v17 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x190,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuch"
                         "ordedkeyhandler.cpp",
                (const char *)(unsigned int)v17);
              __debugbreak();
            }
            goto LABEL_56;
          }
          *v5 = 1;
          if ( a2 || a3 )
            goto LABEL_56;
LABEL_37:
          *(_DWORD *)(a1 + 16) = 1;
          goto LABEL_56;
        }
        if ( a3 && a2 )
        {
          ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(5);
          *v5 = 0;
        }
        else
        {
          *v5 = 1;
        }
        v18 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 1;
        *(_WORD *)(a1 + 72) = 1;
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 96LL))(v18);
        if ( v19 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x178,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v19);
          __debugbreak();
        }
      }
      else
      {
        if ( a3 )
        {
          if ( a2 )
            ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(4);
          *v5 = 0;
        }
        else
        {
          *v5 = 1;
        }
        v20 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 1;
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 96LL))(v20);
        if ( v21 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x164,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v21);
          __debugbreak();
        }
      }
    }
    else if ( a2 )
    {
      v24 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 5;
      *v5 = 1;
      v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v24 + 80LL))(v24, 5000000LL, 0LL);
      if ( v25 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x140,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
          (const char *)(unsigned int)v25);
        __debugbreak();
      }
    }
    else if ( a3 )
    {
      ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(2);
      *v5 = 0;
      *(_DWORD *)(a1 + 16) = 1;
      *(_WORD *)(a1 + 72) = 1;
    }
    else
    {
      *v5 = 1;
      v26 = *(char **)(a1 + 56);
      LODWORD(a5) = a4;
      if ( *(char **)(a1 + 64) == v26 )
      {
        std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
          (_QWORD *)(a1 + 48),
          v26,
          &a5);
      }
      else
      {
        *(_DWORD *)v26 = a4;
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
      v27 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 4;
      *v5 = 1;
      v28 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v27 + 80LL))(v27, 5000000LL, 0LL);
      if ( v28 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x117,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
          (const char *)(unsigned int)v28);
        JUMPOUT(0x180039135LL);
      }
    }
    else
    {
      *v5 = 0;
      *(_DWORD *)(a1 + 16) = 3;
    }
  }
  else if ( a3 )
  {
    *(_DWORD *)(a1 + 16) = 2;
    v29 = *(char **)(a1 + 56);
    *v5 = 1;
    LODWORD(a5) = a4;
    if ( *(char **)(a1 + 64) == v29 )
    {
      std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
        (_QWORD *)(a1 + 48),
        v29,
        &a5);
    }
    else
    {
      *(_DWORD *)v29 = a4;
      *(_QWORD *)(a1 + 56) += 4LL;
    }
  }
LABEL_56:
  ControllerProcessorTelemetry::LogGamepadTaskSwitcherState(*(_DWORD *)(a1 + 16), a2, a3);
  return 0LL;
}
