/*
 * XREFs of ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0013B80
 * Callers:
 *     NtUserSetFocus @ 0x1C0013AB0 (NtUserSetFocus.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00167A8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C009A170 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C023E670 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 * Callees:
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C001152C (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00117A8 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0013EE4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C008AB44 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C008BADC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C013DDBC (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 */

struct tagWND *__fastcall xxxSetFocus(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  struct tagWND *v6; // rsi
  char v7; // cl
  __int64 v8; // rax
  struct tagWND *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // rcx
  _QWORD *i; // rsi
  const struct tagWND *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+30h] [rbp-38h] BYREF
  struct tagWND *v31; // [rsp+38h] [rbp-30h]
  __int64 v32; // [rsp+40h] [rbp-28h]
  __int64 v33; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( a1 )
  {
    v5 = *((_QWORD *)a1 + 2);
    if ( *(_QWORD *)(v5 + 424) != *(_QWORD *)(gptiCurrent + 424LL) && !CoreWindowProp::IsHostThreadOf(gptiCurrent, a1) )
    {
      if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v33) )
      {
        for ( i = *(_QWORD **)(v33 + 32); i; i = (_QWORD *)*i )
        {
          v28 = (const struct tagWND *)i[1];
          if ( v28 && (unsigned int)CoreWindowProp::IsComponent(v28) && gptiCurrent == *(_QWORD *)(i[1] + 16LL) )
            goto LABEL_3;
        }
      }
      v24 = 5LL;
LABEL_42:
      UserSetLastError(v24);
      return 0LL;
    }
LABEL_3:
    v6 = a1;
    do
    {
      v7 = *(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL);
      if ( (v7 & 0x20) != 0 || (v7 & 8) != 0 )
      {
        v24 = 87LL;
        goto LABEL_42;
      }
      LOBYTE(v5) = v7 & 0xC0;
      if ( (_BYTE)v5 != 64 )
        break;
      v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
    }
    while ( v6 );
    v30 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v30;
    v31 = v6;
    if ( v6 )
      HMLockObject(v6);
    v8 = *(_QWORD *)(gptiCurrent + 424LL);
    v9 = *(struct tagWND **)(v8 + 120);
    if ( a1 != v9 )
    {
      v10 = *(_QWORD *)(gptiCurrent + 456LL);
      v11 = (unsigned int)(*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(*(_QWORD *)v10 + 16LL));
      if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(*(_QWORD *)v10 + 16LL)) & 0x40) != 0 )
      {
        v19 = 0LL;
        if ( v9 )
          v19 = *(_QWORD *)v9;
        if ( (unsigned int)xxxCallHook(9, *(_QWORD *)a1, v19, 5) )
        {
          v29 = 5LL;
LABEL_36:
          UserSetLastError(v29);
          ThreadUnlock1(v21, v20, v22);
          return 0LL;
        }
      }
      v12 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( v6 == *(struct tagWND **)(v12 + 128) )
      {
LABEL_13:
        v9 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
        ThreadUnlock1(v12, v11, a3);
        v30 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v30;
        v31 = v9;
        if ( v9 )
          HMLockObject(v9);
        anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, a1);
        v8 = *(_QWORD *)(gptiCurrent + 424LL);
        goto LABEL_16;
      }
      if ( v12 == gpqForeground )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_(v12, v11, 2, 44, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
        }
LABEL_33:
        if ( v6 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL)
          || (unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow(v6) )
        {
          goto LABEL_13;
        }
      }
      else
      {
        if ( !anonymous_namespace_::FAllowForegroundActivate((__int64)v6) )
          goto LABEL_33;
        if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) == 0 )
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) |= 0x100u;
        if ( xxxForceForegroundWindowNoRestoreFocus((__int64)v6, 8) )
          goto LABEL_33;
      }
      v29 = 87LL;
      goto LABEL_36;
    }
LABEL_16:
    v13 = *(_QWORD *)(v8 + 120);
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 16);
    else
      v14 = gptiCurrent;
    v15 = *(_QWORD *)(v14 + 432);
    if ( v15 )
    {
      v15 = *(_QWORD *)(v15 + 40);
      if ( gLCIDSentToShell != v15 )
      {
        v16 = *(__int64 **)(gptiCurrent + 456LL);
        a2 = *v16;
        if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(*v16 + 16)) & 0x800) != 0 )
        {
          gLCIDSentToShell = v15;
          xxxCallHook(8, 0LL, v15, 10);
        }
      }
    }
    if ( v9 )
      v3 = *(_QWORD *)v9;
    ThreadUnlock1(v5, a2, v15);
LABEL_25:
    LOBYTE(v17) = 1;
    return (struct tagWND *)HMValidateHandleNoSecure(v3, v17);
  }
  if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) == 0 )
    goto LABEL_38;
  v25 = 0LL;
  v26 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
  if ( v26 )
    v25 = *v26;
  if ( !(unsigned int)xxxCallHook(9, 0LL, v25, 5) )
  {
LABEL_38:
    v23 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
    if ( v23 )
      v3 = *v23;
    anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, 0LL);
    goto LABEL_25;
  }
  return 0LL;
}
