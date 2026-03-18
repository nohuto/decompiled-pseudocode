/*
 * XREFs of ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01326E0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C003AF40 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C012FB18 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     NtUserSetFocus @ 0x1C0132610 (NtUserSetFocus.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C023E050 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C000B1B0 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C001A3CC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0027DC4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C0117CDC (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0132A44 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C0135164 (_anonymous_namespace_--FAllowForegroundActivate.c)
 */

struct tagWND *__fastcall xxxSetFocus(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rcx
  struct tagWND *v7; // rsi
  char v8; // cl
  __int64 v9; // rax
  struct tagWND *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // rcx
  _QWORD *i; // rsi
  const struct tagWND *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // [rsp+30h] [rbp-38h] BYREF
  struct tagWND *v34; // [rsp+38h] [rbp-30h]
  __int64 v35; // [rsp+40h] [rbp-28h]
  __int64 v36; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( a1 )
  {
    v6 = *((_QWORD *)a1 + 2);
    if ( *(_QWORD *)(v6 + 424) != *(_QWORD *)(gptiCurrent + 424LL)
      && !(unsigned int)CoreWindowProp::IsHostThreadOf(gptiCurrent, a1) )
    {
      if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v36) )
      {
        for ( i = *(_QWORD **)(v36 + 32); i; i = (_QWORD *)*i )
        {
          v31 = (const struct tagWND *)i[1];
          if ( v31 && (unsigned int)CoreWindowProp::IsComponent(v31) && gptiCurrent == *(_QWORD *)(i[1] + 16LL) )
            goto LABEL_3;
        }
      }
      v27 = 5LL;
LABEL_42:
      UserSetLastError(v27, a2, a3, a4);
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
        goto LABEL_42;
      }
      LOBYTE(v6) = v8 & 0xC0;
      if ( (_BYTE)v6 != 64 )
        break;
      v7 = (struct tagWND *)*((_QWORD *)v7 + 13);
    }
    while ( v7 );
    v33 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v33;
    v34 = v7;
    if ( v7 )
      HMLockObject(v7);
    v9 = *(_QWORD *)(gptiCurrent + 424LL);
    v10 = *(struct tagWND **)(v9 + 120);
    if ( a1 != v10 )
    {
      v11 = *(_QWORD *)(gptiCurrent + 456LL);
      v12 = (unsigned int)(*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(*(_QWORD *)v11 + 16LL));
      if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(*(_QWORD *)v11 + 16LL)) & 0x40) != 0 )
      {
        v21 = 0LL;
        if ( v10 )
          v21 = *(_QWORD *)v10;
        if ( (unsigned int)xxxCallHook(9, *(_QWORD *)a1, v21, 5) )
        {
          v32 = 5LL;
LABEL_36:
          UserSetLastError(v32, v12, a3, v22);
          ThreadUnlock1(v24, v23, v25);
          return 0LL;
        }
      }
      v13 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( v7 == *(struct tagWND **)(v13 + 128) )
      {
LABEL_13:
        v10 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
        ThreadUnlock1(v13, v12, a3);
        v33 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v33;
        v34 = v10;
        if ( v10 )
          HMLockObject(v10);
        anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, a1);
        v9 = *(_QWORD *)(gptiCurrent + 424LL);
        goto LABEL_16;
      }
      if ( v13 == gpqForeground )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_(v13, v12, 2, 44, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
        }
LABEL_33:
        if ( v7 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL)
          || anonymous_namespace_::xxxLocalActivateWindow(v7, 0, 0) )
        {
          goto LABEL_13;
        }
      }
      else
      {
        if ( !(unsigned __int8)anonymous_namespace_::FAllowForegroundActivate(v7) )
          goto LABEL_33;
        if ( (*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0x10) == 0 )
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) |= 0x100u;
        if ( xxxForceForegroundWindowNoRestoreFocus((__int64)v7, 8) )
          goto LABEL_33;
      }
      v32 = 87LL;
      goto LABEL_36;
    }
LABEL_16:
    v14 = *(_QWORD *)(v9 + 120);
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
      v4 = *(_QWORD *)v10;
    ThreadUnlock1(v6, a2, v16);
LABEL_25:
    LOBYTE(v18) = 1;
    return (struct tagWND *)HMValidateHandleNoSecure(v4, v18, v19);
  }
  if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) == 0 )
    goto LABEL_38;
  v28 = 0LL;
  v29 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
  if ( v29 )
    v28 = *v29;
  if ( !(unsigned int)xxxCallHook(9, 0LL, v28, 5) )
  {
LABEL_38:
    v26 = *(unsigned __int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
    if ( v26 )
      v4 = *v26;
    anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, 0LL);
    goto LABEL_25;
  }
  return 0LL;
}
