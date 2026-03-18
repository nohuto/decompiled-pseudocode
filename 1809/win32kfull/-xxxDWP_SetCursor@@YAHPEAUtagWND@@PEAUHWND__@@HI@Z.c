/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0069EDC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006A180 (IsShellWndManagementBehaviorEnabled.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C006B3D8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxGetSysMenu @ 0x1C00A60E8 (xxxGetSysMenu.c)
 *     _GetMenuState @ 0x1C00BC924 (_GetMenuState.c)
 *     xxxActiveWindowTracking @ 0x1C01CF6C8 (xxxActiveWindowTracking.c)
 *     xxxActivateEnabledPopup @ 0x1C02281EC (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C02282F8 (xxxFlashEnabledPopup.c)
 */

__int64 __fastcall xxxDWP_SetCursor(struct tagWND *a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 DesktopWindow; // rax
  __int64 v10; // rdx
  ULONG_PTR v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct tagCURSOR *v17; // rcx
  int v19; // esi
  struct tagCURSOR *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 SysMenu; // rax
  int MenuState; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  char v29; // cl
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int v34; // edi
  bool v35; // zf
  int v36; // esi
  int v37; // esi
  int v38; // esi
  __int64 v39; // rbx
  _QWORD v40[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v41[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( !a4 )
    goto LABEL_4;
  if ( (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 8LL) )
  {
    v29 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL);
    if ( (v29 & 3) != 0 )
    {
      v30 = a3 - 10;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( !v31 )
          goto LABEL_41;
        v32 = v31 - 2;
        if ( !v32 )
          goto LABEL_42;
        v33 = v32 - 1;
        if ( !v33 )
        {
LABEL_41:
          v35 = (v29 & 1) == 0;
          goto LABEL_43;
        }
        v34 = v33 - 2;
        if ( v34 )
        {
          if ( v34 != 1 )
            goto LABEL_18;
          goto LABEL_41;
        }
      }
LABEL_42:
      v35 = (v29 & 2) == 0;
LABEL_43:
      if ( !v35 )
        goto LABEL_27;
      goto LABEL_18;
    }
  }
  if ( a3 < 10 )
  {
LABEL_4:
    DesktopWindow = GetDesktopWindow((__int64)a1);
    v11 = 0LL;
    if ( v10 != DesktopWindow )
      v11 = v10;
    if ( v11 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
      v41[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v41;
      v41[1] = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v13 = xxxSendMessage(v11);
      ThreadUnlock1(v15, v14);
      if ( v13 )
        return 1LL;
    }
    if ( !a4 )
      goto LABEL_18;
    LOBYTE(v10) = 1;
    v16 = HMValidateHandleNoSecure(a2, v10);
    if ( v16 )
    {
      if ( a3 == -2 )
      {
        v19 = a4 - 512;
        if ( !v19 )
        {
          if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            xxxActiveWindowTracking(a1, 32LL);
          goto LABEL_18;
        }
        v36 = v19 - 1;
        if ( v36 )
        {
          v37 = v36 - 3;
          if ( v37 )
          {
            v38 = v37 - 3;
            if ( v38 )
            {
              if ( v38 != 4 )
                goto LABEL_18;
            }
          }
        }
        else
        {
          v39 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
          xxxActivateEnabledPopup(a1);
          if ( v39 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
            goto LABEL_18;
        }
        xxxFlashEnabledPopup(a1);
        goto LABEL_18;
      }
      if ( a3 != 1 )
      {
LABEL_18:
        v17 = (struct tagCURSOR *)gasyscur[1];
        goto LABEL_13;
      }
      v17 = *(struct tagCURSOR **)(*(_QWORD *)(v16 + 112) + 88LL);
      if ( v17 )
LABEL_13:
        zzzSetCursor(v17);
    }
    return 0LL;
  }
  if ( a3 <= 11 )
  {
LABEL_27:
    v20 = (struct tagCURSOR *)gasyscur[484];
    goto LABEL_28;
  }
  if ( a3 != 12 )
  {
    if ( a3 == 13 )
    {
LABEL_46:
      v20 = (struct tagCURSOR *)gasyscur[346];
      goto LABEL_28;
    }
    if ( a3 == 14 )
    {
LABEL_45:
      v20 = (struct tagCURSOR *)gasyscur[415];
      goto LABEL_28;
    }
    if ( a3 != 15 )
    {
      if ( a3 != 16 )
      {
        if ( a3 != 17 )
          goto LABEL_4;
        goto LABEL_46;
      }
      goto LABEL_45;
    }
  }
  v20 = *(struct tagCURSOR **)(gasyscur[0] + 4424LL);
LABEL_28:
  LOBYTE(v8) = 1;
  v21 = HMValidateHandleNoSecure(a2, v8);
  v23 = v21;
  if ( !v21 )
    return 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(v21 + 40) + 30LL) & 8) != 0 )
  {
    v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
    v40[0] = *(_QWORD *)(v24 + 416);
    *(_QWORD *)(v24 + 416) = v40;
    v40[1] = v23;
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
    SysMenu = xxxGetSysMenu((struct tagWND *)v23);
    MenuState = GetMenuState(SysMenu, 61440LL);
    ThreadUnlock1(v28, v27);
    if ( MenuState != -1 && (MenuState & 3) != 0 )
      goto LABEL_18;
  }
  zzzSetCursor(v20);
  return 1LL;
}
