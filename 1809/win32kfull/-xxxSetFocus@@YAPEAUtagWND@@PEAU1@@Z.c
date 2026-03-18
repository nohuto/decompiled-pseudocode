/*
 * XREFs of ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CE0A8
 * Callers:
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C001BAC0 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     NtUserSetFocus @ 0x1C00CDFF0 (NtUserSetFocus.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00CECE8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C02261E8 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C000A108 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C007219C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00723DC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00CE3B4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00D82B0 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

struct tagWND *__fastcall xxxSetFocus(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
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
  __int64 v17; // r8
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *i; // rsi
  const struct tagWND *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-38h] BYREF
  struct tagWND *v34; // [rsp+28h] [rbp-30h]
  __int64 v35; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( !a1 )
  {
    if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0 )
    {
      v26 = 0LL;
      v27 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
      if ( v27 )
        v26 = *v27;
      if ( (unsigned int)xxxCallHook(9, 0LL, v26, 5) )
        return 0LL;
    }
    v24 = *(unsigned __int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
    if ( v24 )
      v4 = *v24;
    anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, 0LL);
LABEL_25:
    LOBYTE(v19) = 1;
    return (struct tagWND *)HMValidateHandleNoSecure(v4, v19);
  }
  v6 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v6 + 432) != *(_QWORD *)(gptiCurrent + 432LL)
    && !(unsigned int)CoreWindowProp::IsHostThreadOf(gptiCurrent, a1) )
  {
    if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v35) )
    {
      for ( i = *(_QWORD **)(v35 + 32); i; i = (_QWORD *)*i )
      {
        v31 = (const struct tagWND *)i[1];
        if ( v31 && (unsigned int)CoreWindowProp::IsComponent(v31) && gptiCurrent == *(_QWORD *)(i[1] + 16LL) )
          goto LABEL_3;
      }
    }
    v25 = 5LL;
LABEL_39:
    UserSetLastError(v25, a2, a3, a4);
    return 0LL;
  }
LABEL_3:
  v7 = a1;
  do
  {
    v8 = *(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL);
    if ( (v8 & 0x20) != 0 || (v8 & 8) != 0 )
    {
      v25 = 87LL;
      goto LABEL_39;
    }
    LOBYTE(v6) = v8 & 0xC0;
    if ( (_BYTE)v6 != 64 )
      break;
    v7 = (struct tagWND *)*((_QWORD *)v7 + 10);
  }
  while ( v7 );
  v33 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v33;
  v34 = v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
  v9 = *(_QWORD *)(gptiCurrent + 432LL);
  v10 = *(_QWORD *)(v9 + 112);
  if ( a1 == (struct tagWND *)v10 )
  {
LABEL_16:
    v14 = *(_QWORD *)(v9 + 112);
    if ( v14 )
      v15 = *(_QWORD *)(v14 + 16);
    else
      v15 = gptiCurrent;
    v16 = *(_QWORD *)(v15 + 440);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 40);
      if ( gLCIDSentToShell != v17 )
      {
        v18 = *(__int64 **)(gptiCurrent + 464LL);
        a2 = *v18;
        if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*v18 + 16)) & 0x800) != 0 )
        {
          gLCIDSentToShell = v17;
          xxxCallHook(8, 0LL, v17, 10);
        }
      }
    }
    if ( v10 )
      v4 = *(_QWORD *)v10;
    ThreadUnlock1(v6, a2);
    goto LABEL_25;
  }
  v11 = *(_QWORD *)(gptiCurrent + 464LL);
  v12 = (unsigned int)(*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*(_QWORD *)v11 + 16LL));
  if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(*(_QWORD *)v11 + 16LL)) & 0x40) == 0 )
    goto LABEL_12;
  v21 = 0LL;
  if ( v10 )
    v21 = *(_QWORD *)v10;
  if ( !(unsigned int)xxxCallHook(9, *(_QWORD *)a1, v21, 5) )
  {
LABEL_12:
    v13 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( v7 != *(struct tagWND **)(v13 + 120) )
    {
      if ( v13 != gpqForeground && (unsigned __int8)anonymous_namespace_::FAllowForegroundActivate(v7) )
      {
        if ( (*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0x10) == 0 )
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) |= 0x100u;
        if ( !(unsigned int)xxxSetForegroundWindow2(v7, gptiCurrent, 0x48u) )
          goto LABEL_49;
      }
      if ( v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)
        && !anonymous_namespace_::xxxLocalActivateWindow(v7, 0, 0) )
      {
LABEL_49:
        v32 = 87LL;
        goto LABEL_50;
      }
    }
    v10 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
    ThreadUnlock1(v13, v12);
    v33 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v33;
    v34 = (struct tagWND *)v10;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, a1);
    v9 = *(_QWORD *)(gptiCurrent + 432LL);
    goto LABEL_16;
  }
  v32 = 5LL;
LABEL_50:
  UserSetLastError(v32, v12, v22, v23);
  ThreadUnlock1(v29, v28);
  return 0LL;
}
