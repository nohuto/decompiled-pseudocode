/*
 * XREFs of xxxSetFocus @ 0x1C005E8B0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     NtUserSetFocus @ 0x1C005E810 (NtUserSetFocus.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C005F53C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     xxxCheckFocus @ 0x1C0071E7C (xxxCheckFocus.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01FD714 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00354BC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C005EBC0 (xxxSendFocusMessages.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C006D4A8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C0100970 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxSetFocus(struct tagWND *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 v6; // rcx
  struct tagWND *v7; // rsi
  char v8; // cl
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 *v25; // rcx
  unsigned __int64 *v26; // rcx
  __int64 v27; // rcx
  _QWORD *i; // rsi
  const struct tagWND *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-38h] BYREF
  struct tagWND *v32; // [rsp+28h] [rbp-30h]
  __int64 v33; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a2;
  if ( a1 )
  {
    v6 = *((_QWORD *)a1 + 2);
    if ( *(_QWORD *)(v6 + 424) != *(_QWORD *)(gptiCurrent + 424LL) && !CoreWindowProp::IsHostThreadOf(gptiCurrent, a1) )
    {
      if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v33) )
      {
        for ( i = *(_QWORD **)(v33 + 32); i; i = (_QWORD *)*i )
        {
          v29 = (const struct tagWND *)i[1];
          if ( v29 && (unsigned int)CoreWindowProp::IsComponent(v29) && gptiCurrent == *(_QWORD *)(i[1] + 16LL) )
            goto LABEL_3;
        }
      }
      v27 = 5LL;
LABEL_43:
      UserSetLastError(v27, a2);
      return 0LL;
    }
LABEL_3:
    v7 = a1;
    do
    {
      v8 = *(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL);
      if ( (v8 & 0x20) != 0 || (v8 & 8) != 0 )
      {
        v27 = 87LL;
        goto LABEL_43;
      }
      LOBYTE(v6) = v8 & 0xC0;
      if ( (_BYTE)v6 != 64 )
        break;
      v7 = (struct tagWND *)*((_QWORD *)v7 + 10);
    }
    while ( v7 );
    v31 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v31;
    v32 = v7;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    v9 = *(_QWORD *)(gptiCurrent + 424LL);
    v10 = *(_QWORD *)(v9 + 112);
    if ( a1 != (struct tagWND *)v10 )
    {
      v11 = *(_QWORD *)(gptiCurrent + 456LL);
      v12 = (unsigned int)(*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(*(_QWORD *)v11 + 16LL));
      if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(*(_QWORD *)v11 + 16LL)) & 0x40) != 0 )
      {
        v20 = 0LL;
        if ( v10 )
          v20 = *(_QWORD *)v10;
        if ( (unsigned int)xxxCallHook(9, *(_QWORD *)a1, v20, 5) )
        {
          v30 = 5LL;
LABEL_34:
          UserSetLastError(v30, v12);
          ThreadUnlock1(v22, v21, v23);
          return 0LL;
        }
      }
      v13 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( v7 != *(struct tagWND **)(v13 + 120) )
      {
        if ( v13 != gpqForeground && FAllowForegroundActivate((struct tagQ *)v13, v7) )
        {
          if ( (*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0x10) == 0 )
            *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) |= 0x100u;
          if ( !(unsigned int)xxxSetForegroundWindow2(v7, gptiCurrent, 8u, v4) )
            goto LABEL_33;
        }
        if ( v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL)
          && !(unsigned int)xxxActivateThisWindow(v7, 0, 0, v4) )
        {
LABEL_33:
          v30 = 87LL;
          goto LABEL_34;
        }
      }
      v10 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL);
      ThreadUnlock1(v13, v12, a3);
      v31 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v31;
      v32 = (struct tagWND *)v10;
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      xxxSendFocusMessages(gptiCurrent, a1, v4);
      v9 = *(_QWORD *)(gptiCurrent + 424LL);
    }
    v14 = *(_QWORD *)(v9 + 112);
    if ( v14 )
      v15 = *(_QWORD *)(v14 + 16);
    else
      v15 = gptiCurrent;
    v16 = *(_QWORD *)(v15 + 432);
    if ( v16 )
    {
      v16 = *(_QWORD *)(v16 + 40);
      if ( gLCIDSentToShell != v16 )
      {
        v17 = *(__int64 **)(gptiCurrent + 456LL);
        a2 = *v17;
        if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(*v17 + 16)) & 0x800) != 0 )
        {
          gLCIDSentToShell = v16;
          xxxCallHook(8, 0LL, v16, 10);
        }
      }
    }
    if ( v10 )
      v3 = *(_QWORD *)v10;
    ThreadUnlock1(v6, a2, v16);
LABEL_25:
    LOBYTE(v18) = 1;
    return HMValidateHandleNoSecure(v3, v18);
  }
  if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) == 0 )
    goto LABEL_39;
  v24 = 0LL;
  v25 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL);
  if ( v25 )
    v24 = *v25;
  if ( !(unsigned int)xxxCallHook(9, 0LL, v24, 5) )
  {
LABEL_39:
    v26 = *(unsigned __int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL);
    if ( v26 )
      v3 = *v26;
    xxxSendFocusMessages(gptiCurrent, 0LL, v4);
    goto LABEL_25;
  }
  return 0LL;
}
