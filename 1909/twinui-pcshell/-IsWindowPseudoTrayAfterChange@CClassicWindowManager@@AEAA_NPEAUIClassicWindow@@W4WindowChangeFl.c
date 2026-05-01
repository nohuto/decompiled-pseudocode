/*
 * XREFs of ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180085804
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180051700 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180149CD8 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 * Callees:
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18008052C (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180080570 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CClassicWindowManager::IsWindowPseudoTrayAfterChange(__int64 a1, __int64 a2, char a3)
{
  HWND v6; // rax
  CApplicationManagerUtility *v7; // rax
  HWND v8; // rdx
  CApplicationManagerUtility *v9; // rax
  HWND v10; // rdx
  HWND v11; // rax
  HWND Window; // rdi
  HWND v13; // rax
  HWND v14; // rax
  HWND v15; // rbp
  char v16; // si
  HWND v17; // rbx
  HWND v18; // rdx

  if ( (!(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2) || (a3 & 8) != 0)
    && (a3 & 4) == 0
    && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2) || (a3 & 1) != 0)
    && (a3 & 2) == 0 )
  {
    v6 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
    if ( IsWindowVisible(v6) )
    {
      v7 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
      if ( CApplicationManagerUtility::IsTrayWindowStyleCheck(v7, v8) )
      {
        v9 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
        if ( !CApplicationManagerUtility::IsForcedAppWindow(v9, v10) )
        {
          v11 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
          Window = GetWindow(v11, 4u);
          if ( Window )
          {
            v13 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
            if ( IsWindowEnabled(v13) )
            {
              v14 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
              if ( IsWindowVisible(v14) )
              {
                if ( !IsWindowVisible(Window) || !IsWindowEnabled(Window) )
                {
                  v15 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
                  v16 = 1;
                  while ( 1 )
                  {
                    v17 = GetWindow(Window, 4u);
                    if ( IsWindowVisible(Window) )
                    {
                      if ( CApplicationManagerUtility::IsTrayWindowStyleCheck((CApplicationManagerUtility *)Window, v18)
                        && (!v17
                         || CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)Window, v18)) )
                      {
                        break;
                      }
                    }
                    if ( CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)Window, v18) )
                      v16 = 0;
                    if ( v16
                      && (GetWindowLongPtrW(Window, -20) & 0x80u) != 0LL
                      && ((GetWindowLongPtrW(v15, -20) & 0x10000) == 0 || v17) )
                    {
                      break;
                    }
                    v15 = Window;
                    Window = v17;
                    if ( !v17 )
                      return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
