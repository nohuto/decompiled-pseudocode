/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C002E54C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 * Callees:
 *     _GetMenuState @ 0x1C000C488 (_GetMenuState.c)
 *     xxxGetSysMenu @ 0x1C000C4CC (xxxGetSysMenu.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C002E7CC (IsShellWndManagementBehaviorEnabled.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002E7F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     xxxActivateEnabledPopup @ 0x1C01594FC (xxxActivateEnabledPopup.c)
 *     xxxActiveWindowTracking @ 0x1C01E4334 (xxxActiveWindowTracking.c)
 *     xxxFlashEnabledPopup @ 0x1C02406B0 (xxxFlashEnabledPopup.c)
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
  struct tagCURSOR *v18; // rcx
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
  struct tagCURSOR *v32; // rbx
  __int64 v33; // rax
  struct tagWND *v34; // rdi
  __int64 v35; // rax
  __int64 SysMenu; // rax
  int MenuState; // edi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // [rsp+20h] [rbp-30h] BYREF
  struct tagWND *v42; // [rsp+28h] [rbp-28h]
  __int64 v43; // [rsp+30h] [rbp-20h]
  __int64 v44; // [rsp+38h] [rbp-18h] BYREF
  __int64 v45; // [rsp+40h] [rbp-10h]
  __int64 v46; // [rsp+48h] [rbp-8h]

  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( !a4 )
    goto LABEL_4;
  if ( (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 8LL) )
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
      v44 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v44;
      v45 = v11;
      HMLockObject(v11);
      v13 = xxxSendMessage(v11, 32LL, a2, (unsigned __int16)a3 | ((unsigned __int16)a4 << 16));
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
            xxxActiveWindowTracking(a1, 32LL, 4294967294LL);
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
          v24 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
          xxxActivateEnabledPopup(a1);
          if ( v24 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) )
            goto LABEL_18;
        }
        xxxFlashEnabledPopup(a1);
LABEL_18:
        v18 = (struct tagCURSOR *)gasyscur[1];
        goto LABEL_13;
      }
      if ( a3 != 1 )
        goto LABEL_18;
      v18 = *(struct tagCURSOR **)(*(_QWORD *)(v17 + 136) + 88LL);
      if ( v18 )
LABEL_13:
        zzzSetCursor(v18);
    }
    return 0LL;
  }
  if ( a3 <= 11 )
  {
LABEL_45:
    v32 = (struct tagCURSOR *)gasyscur[484];
    goto LABEL_46;
  }
  if ( a3 != 12 )
  {
    if ( a3 == 13 )
    {
LABEL_52:
      v32 = (struct tagCURSOR *)gasyscur[346];
      goto LABEL_46;
    }
    if ( a3 == 14 )
    {
LABEL_51:
      v32 = (struct tagCURSOR *)gasyscur[415];
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
  v32 = *(struct tagCURSOR **)(gasyscur[0] + 4424LL);
LABEL_46:
  LOBYTE(v8) = 1;
  v33 = HMValidateHandleNoSecure(a2, v8);
  v34 = (struct tagWND *)v33;
  if ( !v33 )
    return 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(v33 + 40) + 30LL) & 8) != 0 )
  {
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v35 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v41 = *(_QWORD *)(v35 + 408);
    *(_QWORD *)(v35 + 408) = &v41;
    v42 = v34;
    HMLockObject(v34);
    SysMenu = xxxGetSysMenu(v34, 1);
    MenuState = GetMenuState(SysMenu, 61440LL);
    ThreadUnlock1(v39, v38, v40);
    if ( MenuState != -1 && (MenuState & 3) != 0 )
      goto LABEL_18;
  }
  zzzSetCursor(v32);
  return 1LL;
}
