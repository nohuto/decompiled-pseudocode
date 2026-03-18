/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0021D64
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 * Callees:
 *     _GetMenuState @ 0x1C000B0C4 (_GetMenuState.c)
 *     zzzSetCursor @ 0x1C001574C (zzzSetCursor.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D3C (IsShellWndManagementBehaviorEnabled.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxGetSysMenu @ 0x1C00C2390 (xxxGetSysMenu.c)
 *     xxxActivateEnabledPopup @ 0x1C0100CD4 (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C0133950 (xxxFlashEnabledPopup.c)
 *     xxxActiveWindowTracking @ 0x1C01AC4AC (xxxActiveWindowTracking.c)
 */

__int64 __fastcall xxxDWP_SetCursor(struct tagWND *a1, HWND a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 DesktopWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  __int64 v24; // rbx
  char v25; // cl
  int v26; // edi
  int v27; // edi
  int v28; // edi
  int v29; // edi
  int v30; // edi
  bool v31; // zf
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 SysMenu; // rax
  int MenuState; // edi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // [rsp+20h] [rbp-38h] BYREF
  __int64 v42; // [rsp+28h] [rbp-30h]
  int v43; // [rsp+30h] [rbp-28h]
  _QWORD v44[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( !a4 )
    goto LABEL_4;
  if ( (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 8) )
  {
    v25 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL);
    if ( (v25 & 3) != 0 )
    {
      v26 = a3 - 10;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( !v27 )
          goto LABEL_42;
        v28 = v27 - 2;
        if ( !v28 )
          goto LABEL_43;
        v29 = v28 - 1;
        if ( !v29 )
        {
LABEL_42:
          v31 = (v25 & 1) == 0;
          goto LABEL_44;
        }
        v30 = v29 - 2;
        if ( v30 )
        {
          if ( v30 != 1 )
            goto LABEL_18;
          goto LABEL_42;
        }
      }
LABEL_43:
      v31 = (v25 & 2) == 0;
LABEL_44:
      if ( !v31 )
        goto LABEL_45;
      goto LABEL_18;
    }
  }
  if ( a3 < 10 )
  {
LABEL_4:
    DesktopWindow = GetDesktopWindow(a1);
    v11 = 0LL;
    if ( v10 != DesktopWindow )
      v11 = v10;
    if ( v11 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v44[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v44;
      v44[1] = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v13 = xxxSendMessage(v11, 32LL, a2, (unsigned __int16)a3 | ((unsigned __int16)a4 << 16), v41, v42, v43);
      ThreadUnlock1(v15, v14, v16);
      if ( v13 )
        return 1LL;
    }
    if ( !a4 )
      goto LABEL_18;
    LOBYTE(v10) = 1;
    v17 = HMValidateHandleNoSecure(a2, v10);
    if ( v17 )
    {
      if ( a3 == -2 )
      {
        v20 = a4 - 512;
        if ( !v20 )
        {
          if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            xxxActiveWindowTracking(a1, 32LL);
          goto LABEL_18;
        }
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 3;
          if ( v22 )
          {
            v23 = v22 - 3;
            if ( v23 )
            {
              if ( v23 != 4 )
                goto LABEL_18;
            }
          }
        }
        else
        {
          v24 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
          xxxActivateEnabledPopup(a1);
          if ( v24 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) )
            goto LABEL_18;
        }
        xxxFlashEnabledPopup(a1);
        goto LABEL_18;
      }
      if ( a3 != 1 )
      {
LABEL_18:
        v18 = gasyscur[1];
        goto LABEL_13;
      }
      v18 = *(_QWORD *)(*(_QWORD *)(v17 + 112) + 88LL);
      if ( v18 )
LABEL_13:
        zzzSetCursor(v18);
    }
    return 0LL;
  }
  if ( a3 <= 11 )
  {
LABEL_45:
    v32 = gasyscur[15];
    goto LABEL_46;
  }
  if ( a3 != 12 )
  {
    if ( a3 == 13 )
    {
LABEL_52:
      v32 = gasyscur[11];
      goto LABEL_46;
    }
    if ( a3 == 14 )
    {
LABEL_51:
      v32 = gasyscur[13];
      goto LABEL_46;
    }
    if ( a3 != 15 )
    {
      if ( a3 != 16 )
      {
        if ( a3 != 17 )
          goto LABEL_4;
        goto LABEL_52;
      }
      goto LABEL_51;
    }
  }
  v32 = gasyscur[17];
LABEL_46:
  LOBYTE(v8) = 1;
  v33 = HMValidateHandleNoSecure(a2, v8);
  v34 = v33;
  if ( !v33 )
    return 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(v33 + 40) + 30LL) & 8) != 0 )
  {
    v35 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v41 = *(_QWORD *)(v35 + 408);
    *(_QWORD *)(v35 + 408) = &v41;
    v42 = v34;
    _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
    SysMenu = xxxGetSysMenu((struct tagWND *)v34);
    MenuState = GetMenuState(SysMenu, 61440LL);
    ThreadUnlock1(v39, v38, v40);
    if ( MenuState != -1 && (MenuState & 3) != 0 )
      goto LABEL_18;
  }
  zzzSetCursor(v32);
  return 1LL;
}
