/*
 * XREFs of xxxDoHotKeyStuff @ 0x1C010DF80
 * Callers:
 *     EditionDoHotKeys @ 0x1C010DF30 (EditionDoHotKeys.c)
 * Callees:
 *     DoExplorerHangDetection @ 0x1C000A230 (DoExplorerHangDetection.c)
 *     _PostThreadMessageEx @ 0x1C000F734 (_PostThreadMessageEx.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     HasRawInputForegroundTarget @ 0x1C001DDEC (HasRawInputForegroundTarget.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     zzzCancelJournalling @ 0x1C0081580 (zzzCancelJournalling.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00A4400 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     IsUninterceptable @ 0x1C010DEF4 (IsUninterceptable.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C010E4AC (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     IsHotKey @ 0x1C010E548 (IsHotKey.c)
 *     IsSAS @ 0x1C010E628 (IsSAS.c)
 *     ?TraceLoggingHotkey@@YAXIIHHK@Z @ 0x1C010E674 (-TraceLoggingHotkey@@YAXIIHHK@Z.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z @ 0x1C010E794 (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z.c)
 *     ?IsPenQuickLaunchHotKey@@YA_NII@Z @ 0x1C010E820 (-IsPenQuickLaunchHotKey@@YA_NII@Z.c)
 *     _SetMagnificationInputTransform @ 0x1C015ED40 (_SetMagnificationInputTransform.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1C01CEB80 (-TraceLoggingPenHotkey@@YAXII@Z.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C01CF984 (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01EB9CC (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01EBB68 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     xxxActivateDebugger @ 0x1C0244D9C (xxxActivateDebugger.c)
 */

__int64 __fastcall xxxDoHotKeyStuff(unsigned int a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // edi
  int v10; // r12d
  _WORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int16 v19; // r15
  int v20; // eax
  __int16 v21; // r15
  void (__fastcall *v22)(_QWORD, _QWORD); // r8
  __int64 v23; // rsi
  int v24; // r12d
  __int64 v25; // r13
  __int64 v26; // rax
  struct _LARGE_STRING *v27; // r9
  __int64 v28; // rdi
  struct tagTHREADINFO *v29; // rdx
  unsigned int v30; // edi
  __int64 v31; // rax
  __int64 v32; // r9
  __int16 v33; // r15
  bool v34; // zf
  bool v35; // zf
  __int64 v36; // rdx
  struct tagWND *v37; // rsi
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r8
  int v45; // r9d
  _QWORD *i; // rax
  int v47; // [rsp+30h] [rbp-51h]
  void (__fastcall *v48)(_QWORD, _QWORD); // [rsp+48h] [rbp-39h] BYREF
  __int64 v49; // [rsp+50h] [rbp-31h] BYREF
  struct tagWND *v50; // [rsp+58h] [rbp-29h]
  __int64 v51; // [rsp+60h] [rbp-21h]
  __int64 v52; // [rsp+68h] [rbp-19h] BYREF
  __int64 v53; // [rsp+70h] [rbp-11h]
  __int64 v54; // [rsp+78h] [rbp-9h]
  __int64 v55; // [rsp+80h] [rbp-1h] BYREF
  __int128 v56; // [rsp+88h] [rbp+7h]
  __int64 v57; // [rsp+98h] [rbp+17h]
  int v58; // [rsp+A0h] [rbp+1Fh]
  unsigned int v59; // [rsp+E8h] [rbp+67h]

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v48);
  v7 = 0;
  v59 = 0;
  v8 = 0;
  v9 = 0;
  switch ( a1 )
  {
    case 0x10u:
      v8 = 4;
      break;
    case 0x11u:
      v8 = 2;
      break;
    case 0x12u:
      v8 = 1;
      break;
    default:
      if ( a1 <= 0x5A || a1 > 0x5C )
        gfsModOnlyCandidate = 0;
      else
        v8 = 8;
      break;
  }
  if ( a2 )
  {
    gfsModifiers &= ~v8;
    if ( v8 )
    {
      v9 = gfsModOnlyCandidate;
      v59 = gfsModOnlyCandidate;
      gfsModOnlyCandidate = 0;
    }
    if ( qword_1C032C210 )
      qword_1C032C210 = 0LL;
  }
  else
  {
    v16 = v8 | gfsModifiers;
    gfsModifiers |= v8;
    if ( v8 )
      gfsModOnlyCandidate = v16;
  }
  LOBYTE(v6) = a1;
  v10 = IsSAS(v6, &gfsModifiers);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v48);
  if ( a1 == 174 )
  {
    if ( a2 )
    {
LABEL_93:
      gbVolumeDownPressed = 0;
      goto LABEL_13;
    }
    if ( !gbVolumeUpPressed )
    {
      gbVolumeDownPressed = 1;
      goto LABEL_13;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_90:
    gbVolumeUpPressed = 0;
    goto LABEL_13;
  }
  if ( a1 == 175 )
  {
    if ( !a2 )
    {
      if ( !gbVolumeDownPressed )
      {
        gbVolumeUpPressed = 1;
        goto LABEL_13;
      }
      xxxHandleVolumeUpDownCombo();
      goto LABEL_93;
    }
    goto LABEL_90;
  }
LABEL_13:
  if ( !v10 && (gfInNumpadHexInput & 1) != 0 )
    return 0LL;
  if ( v9 && a2 )
  {
    v11 = (_WORD *)IsHotKey(v9);
  }
  else
  {
    v11 = (_WORD *)IsHotKey(gfsModifiers);
    if ( !v11 || !v10 )
    {
      v12 = IsUninterceptable();
      if ( v12 )
        v11 = (_WORD *)v12;
    }
  }
  if ( v11 || !a2 && (gfsModifiers & 8) != 0 && (a1 - 19 <= 0x47 || a1 <= 0xF || a1 - 93 <= 0x22) )
  {
    v17 = 0;
    if ( v11 )
    {
      if ( *(_QWORD *)v11 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)v11 + 416LL);
        if ( v18 )
          v17 = *(_DWORD *)(v18 + 56);
      }
    }
    TraceLoggingHotkey(gfsModifiers, a1, v11 != 0LL, a2, v17);
    if ( v11 )
    {
      if ( gbLockScreenActive && !v10 && (v11[13] & 0x2000) == 0 )
        return 0LL;
    }
  }
  WindowArrangementSequence::TestSequence(
    (WindowArrangementSequence *)v11,
    (const struct tagHOTKEY *const)a1,
    v8,
    gfsModifiers,
    a2 == 0,
    v47);
  if ( !v11 )
    return 0LL;
  v19 = v11[13];
  if ( v19 < 0 && !v10 && a4 && *(_DWORD *)(a4 + 4) != 4 )
    return 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  if ( (v19 & 0x8800) == 0
    && (unsigned int)HasRawInputForegroundTarget(&v52)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 416) + 824LL) + 100LL) & 0x200) != 0 )
  {
    return 0LL;
  }
  v20 = *((_DWORD *)v11 + 8);
  if ( v20 == -7 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 168LL);
    if ( v23 )
    {
      gfsModOnlyCandidate = 0;
      goto LABEL_68;
    }
  }
  else if ( (unsigned int)(v20 + 6) <= 1 )
  {
    if ( !a2 )
      return (unsigned int)xxxActivateDebugger((unsigned __int16)v11[12]);
    return v7;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 32LL) & 1) != 0
    && *(PVOID *)(*(_QWORD *)v11 + 448LL) != grpdeskLogon
    && !*((_QWORD *)v11 + 1)
    && gbLockScreenActive
    && (v19 & 0x2000) == 0
    || !v59 && a2 )
  {
    return 0LL;
  }
  if ( v10 || a1 == 27 && gfsModifiers == 2 )
  {
    zzzCancelJournalling();
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 216LL) )
    {
      v55 = 0LL;
      v57 = 0LL;
      v56 = 0LL;
      v58 = 3;
      SetMagnificationInputTransform(&v55);
    }
    CancelCapturedMipOverride();
  }
  if ( !a3 )
    goto LABEL_52;
  switch ( a1 )
  {
    case 9u:
      v35 = (a3 & 1) == 0;
      goto LABEL_130;
    case 0xDu:
      v35 = (a3 & 8) == 0;
      goto LABEL_130;
    case 0x1Bu:
      if ( (a3 & 2) != 0 && (gfsModifiers & 3) == 1 )
        return 0LL;
      if ( (a3 & 0x40) == 0 )
        break;
      v34 = (gfsModifiers & 3) == 2;
      goto LABEL_132;
    case 0x20u:
      v35 = (a3 & 4) == 0;
LABEL_130:
      if ( v35 )
        break;
      v34 = (gfsModifiers & 3) == 1;
      goto LABEL_132;
    case 0x2Cu:
      v13 = gfsModifiers & 3;
      if ( (gfsModifiers & 3) == 0 && (a3 & 0x20) != 0 )
        return 0LL;
      if ( (a3 & 0x10) != 0 )
      {
        v34 = (_DWORD)v13 == 1;
LABEL_132:
        if ( v34 )
          return 0LL;
      }
      break;
  }
LABEL_52:
  if ( gfsModifiers == 2 && a1 == 27 && !a2 )
  {
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    if ( ghwndSwitch )
    {
      LOBYTE(v13) = 1;
      v37 = (struct tagWND *)HMValidateHandleNoSecure(ghwndSwitch, v13, a3, v14);
      if ( v37 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v38, v39);
        v49 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v49;
        v50 = v37;
        HMLockObject(v37);
        xxxSetForegroundWindow2(v37, 0LL, 0);
        ThreadUnlock1(v42, v41, v43);
      }
    }
  }
  if ( (v11[13] & 0x1000) == 0 )
  {
    if ( !IsPenQuickLaunchAndShouldBeDisabled(gfsModifiers, a1) )
    {
      v21 = v11[13];
      v22 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v11 + 1);
      v23 = *((_QWORD *)v11 + 2);
      v24 = *((_DWORD *)v11 + 8);
      v25 = *(_QWORD *)v11;
      v48 = v22;
      if ( (v21 & 0x200) != 0 )
      {
        if ( gpqForeground
          && *(_QWORD *)(gpqForeground + 128LL)
          && (!IsPenQuickLaunchHotKey(gfsModifiers, a1) || (v45 & HIDWORD(gpdwCPUserPreferencesMask)) == 0) )
        {
          for ( i = (_QWORD *)*((_QWORD *)v11 + 6); i != (_QWORD *)(v11 + 24); i = (_QWORD *)*i )
          {
            if ( *(_QWORD *)(*(i - 3) + 424LL) == v44 )
            {
              v25 = *(i - 3);
              v23 = *(i - 2);
              v24 = *((_DWORD *)i - 1);
              v21 = *((_WORD *)i - 4);
              TraceLoggingYieldedHotkey((unsigned __int16)v11[12], *((_DWORD *)v11 + 7));
              v22 = 0LL;
              goto LABEL_56;
            }
          }
        }
        v22 = v48;
      }
LABEL_56:
      if ( (v21 & 0x100) != 0 )
        goto LABEL_72;
      if ( !v23 )
      {
        v31 = qword_1C032C210;
        v32 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
        v33 = v21 & 0x4000;
        if ( v22 )
        {
          if ( !v33 || v32 != qword_1C032C210 )
          {
            if ( qword_1C032C210 != v32 )
              v31 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
            qword_1C032C210 = v31;
            v22(v24, (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16));
          }
          goto LABEL_72;
        }
        if ( v33 && v32 == qword_1C032C210 )
        {
          v28 = a4;
        }
        else
        {
          v28 = a4;
          if ( qword_1C032C210 != v32 )
            v31 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
          qword_1C032C210 = v31;
          PostThreadMessageEx(v25, 0x312u, v24, v32, a4);
        }
        v29 = (struct tagTHREADINFO *)v25;
        goto LABEL_71;
      }
      if ( v23 != 1 )
      {
LABEL_59:
        if ( !v23 )
        {
LABEL_72:
          v30 = gfsModifiers;
          if ( (gfsModifiers & 8) != 0 && a1 - 129 <= 2 )
          {
            ZwUpdateWnfStateData(
              &WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL,
              0LL,
              0LL,
              0LL,
              *(_QWORD *)&gSessionId,
              0,
              0);
            TraceLoggingPenHotkey(v30, a1);
          }
          LOBYTE(v7) = v59 == 0;
          return v7;
        }
        if ( v23 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 24) + 8LL) + 168LL) || v24 != 61744 )
        {
          v26 = qword_1C032C210;
          v27 = (struct _LARGE_STRING *)((unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16));
          if ( (v21 & 0x4000) != 0 && v27 == (struct _LARGE_STRING *)qword_1C032C210 )
          {
            v28 = a4;
          }
          else
          {
            v28 = a4;
            if ( (struct _LARGE_STRING *)qword_1C032C210 != v27 )
              v26 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
            qword_1C032C210 = v26;
            _PostTransformableMessageExtended(v23, 786LL, v24, v27, (struct tagINPUT_MESSAGE_SOURCE *)a4, 1);
          }
          goto LABEL_70;
        }
LABEL_68:
        DoExplorerHangDetection(*(struct tagDESKTOP **)(v23 + 24));
        PostMessage(v23, 274, 61744, 0);
        v28 = a4;
        if ( qword_1C032C210 )
          qword_1C032C210 = 0LL;
LABEL_70:
        v29 = *(struct tagTHREADINFO **)(v23 + 16);
LABEL_71:
        CInputGlobals::SetPtiLastWoken(gpInputGlobals, v29, *(_DWORD *)(v28 + 4) == 1);
        goto LABEL_72;
      }
      if ( gpqForeground )
      {
        v23 = *(_QWORD *)(gpqForeground + 120LL);
        goto LABEL_59;
      }
    }
    return 0LL;
  }
  return HandleIAMHotKey((const struct tagHOTKEY *const)v11);
}
