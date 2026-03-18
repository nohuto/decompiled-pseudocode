/*
 * XREFs of xxxDoHotKeyStuff @ 0x1C00E8300
 * Callers:
 *     EditionDoHotKeys @ 0x1C00E82B0 (EditionDoHotKeys.c)
 * Callees:
 *     DoExplorerHangDetection @ 0x1C000A220 (DoExplorerHangDetection.c)
 *     _PostThreadMessageEx @ 0x1C000E634 (_PostThreadMessageEx.c)
 *     HasRawInputForegroundTarget @ 0x1C001DC7C (HasRawInputForegroundTarget.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00451E0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsUninterceptable @ 0x1C00E8274 (IsUninterceptable.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00E882C (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     IsHotKey @ 0x1C00E88C8 (IsHotKey.c)
 *     IsSAS @ 0x1C00E89A8 (IsSAS.c)
 *     ?TraceLoggingHotkey@@YAXIIHHK@Z @ 0x1C00E89F4 (-TraceLoggingHotkey@@YAXIIHHK@Z.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z @ 0x1C00E8B14 (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z.c)
 *     ?IsPenQuickLaunchHotKey@@YA_NII@Z @ 0x1C00E8BA0 (-IsPenQuickLaunchHotKey@@YA_NII@Z.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzCancelJournalling @ 0x1C0139E10 (zzzCancelJournalling.c)
 *     _SetMagnificationInputTransform @ 0x1C015FE60 (_SetMagnificationInputTransform.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1C01CE9F0 (-TraceLoggingPenHotkey@@YAXII@Z.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C01CF7F4 (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01EB84C (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01EB9E8 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     xxxActivateDebugger @ 0x1C024465C (xxxActivateDebugger.c)
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
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int16 v18; // r15
  int v19; // eax
  __int16 v20; // r15
  void (__fastcall *v21)(_QWORD, _QWORD); // r8
  __int64 v22; // rsi
  int v23; // r12d
  __int64 v24; // r13
  __int64 v25; // rax
  struct _LARGE_STRING *v26; // r9
  __int64 v27; // rdi
  struct tagTHREADINFO *v28; // rdx
  unsigned int v29; // edi
  __int64 v30; // rax
  __int64 v31; // r9
  __int16 v32; // r15
  bool v33; // zf
  bool v34; // zf
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r8
  int v43; // r9d
  _QWORD *i; // rax
  int v45; // [rsp+30h] [rbp-51h]
  void (__fastcall *v46)(_QWORD, _QWORD); // [rsp+48h] [rbp-39h] BYREF
  __int64 v47; // [rsp+50h] [rbp-31h] BYREF
  __int64 v48; // [rsp+58h] [rbp-29h]
  __int64 v49; // [rsp+60h] [rbp-21h]
  __int64 v50; // [rsp+68h] [rbp-19h] BYREF
  __int64 v51; // [rsp+70h] [rbp-11h]
  __int64 v52; // [rsp+78h] [rbp-9h]
  __int64 v53; // [rsp+80h] [rbp-1h] BYREF
  __int128 v54; // [rsp+88h] [rbp+7h]
  __int64 v55; // [rsp+98h] [rbp+17h]
  int v56; // [rsp+A0h] [rbp+1Fh]
  unsigned int v57; // [rsp+E8h] [rbp+67h]

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v46);
  v7 = 0;
  v57 = 0;
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
      v57 = gfsModOnlyCandidate;
      gfsModOnlyCandidate = 0;
    }
    if ( qword_1C032A208 )
      qword_1C032A208 = 0LL;
  }
  else
  {
    v15 = v8 | gfsModifiers;
    gfsModifiers |= v8;
    if ( v8 )
      gfsModOnlyCandidate = v15;
  }
  LOBYTE(v6) = a1;
  v10 = IsSAS(v6, &gfsModifiers);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v46);
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
    v16 = 0;
    if ( v11 )
    {
      if ( *(_QWORD *)v11 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)v11 + 416LL);
        if ( v17 )
          v16 = *(_DWORD *)(v17 + 56);
      }
    }
    TraceLoggingHotkey(gfsModifiers, a1, v11 != 0LL, a2, v16);
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
    v45);
  if ( !v11 )
    return 0LL;
  v18 = v11[13];
  if ( v18 < 0 && !v10 && a4 && *(_DWORD *)(a4 + 4) != 4 )
    return 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( (v18 & 0x8800) == 0
    && (unsigned int)HasRawInputForegroundTarget(&v50)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 416) + 824LL) + 100LL) & 0x200) != 0 )
  {
    return 0LL;
  }
  v19 = *((_DWORD *)v11 + 8);
  if ( v19 == -7 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 168LL);
    if ( v22 )
    {
      gfsModOnlyCandidate = 0;
      goto LABEL_68;
    }
  }
  else if ( (unsigned int)(v19 + 6) <= 1 )
  {
    if ( !a2 )
      return (unsigned int)xxxActivateDebugger((unsigned __int16)v11[12]);
    return v7;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 32LL) & 1) != 0
    && *(PVOID *)(*(_QWORD *)v11 + 448LL) != grpdeskLogon
    && !*((_QWORD *)v11 + 1)
    && gbLockScreenActive
    && (v18 & 0x2000) == 0
    || !v57 && a2 )
  {
    return 0LL;
  }
  if ( v10 || a1 == 27 && gfsModifiers == 2 )
  {
    zzzCancelJournalling();
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 216LL) )
    {
      v53 = 0LL;
      v55 = 0LL;
      v54 = 0LL;
      v56 = 3;
      SetMagnificationInputTransform(&v53);
    }
    CancelCapturedMipOverride();
  }
  if ( !a3 )
    goto LABEL_52;
  switch ( a1 )
  {
    case 9u:
      v34 = (a3 & 1) == 0;
      goto LABEL_130;
    case 0xDu:
      v34 = (a3 & 8) == 0;
      goto LABEL_130;
    case 0x1Bu:
      if ( (a3 & 2) != 0 && (gfsModifiers & 3) == 1 )
        return 0LL;
      if ( (a3 & 0x40) == 0 )
        break;
      v33 = (gfsModifiers & 3) == 2;
      goto LABEL_132;
    case 0x20u:
      v34 = (a3 & 4) == 0;
LABEL_130:
      if ( v34 )
        break;
      v33 = (gfsModifiers & 3) == 1;
      goto LABEL_132;
    case 0x2Cu:
      v13 = gfsModifiers & 3;
      if ( (gfsModifiers & 3) == 0 && (a3 & 0x20) != 0 )
        return 0LL;
      if ( (a3 & 0x10) != 0 )
      {
        v33 = (_DWORD)v13 == 1;
LABEL_132:
        if ( v33 )
          return 0LL;
      }
      break;
  }
LABEL_52:
  if ( gfsModifiers == 2 && a1 == 27 && !a2 )
  {
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    if ( ghwndSwitch )
    {
      LOBYTE(v13) = 1;
      v36 = HMValidateHandleNoSecure(ghwndSwitch, v13, a3);
      if ( v36 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v37);
        v47 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v47;
        v48 = v36;
        HMLockObject(v36);
        xxxSetForegroundWindow2(v36, 0LL, 0LL);
        ThreadUnlock1(v40, v39, v41);
      }
    }
  }
  if ( (v11[13] & 0x1000) == 0 )
  {
    if ( !IsPenQuickLaunchAndShouldBeDisabled(gfsModifiers, a1) )
    {
      v20 = v11[13];
      v21 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v11 + 1);
      v22 = *((_QWORD *)v11 + 2);
      v23 = *((_DWORD *)v11 + 8);
      v24 = *(_QWORD *)v11;
      v46 = v21;
      if ( (v20 & 0x200) != 0 )
      {
        if ( gpqForeground
          && *(_QWORD *)(gpqForeground + 128LL)
          && (!IsPenQuickLaunchHotKey(gfsModifiers, a1) || (v43 & HIDWORD(gpdwCPUserPreferencesMask)) == 0) )
        {
          for ( i = (_QWORD *)*((_QWORD *)v11 + 6); i != (_QWORD *)(v11 + 24); i = (_QWORD *)*i )
          {
            if ( *(_QWORD *)(*(i - 3) + 424LL) == v42 )
            {
              v24 = *(i - 3);
              v22 = *(i - 2);
              v23 = *((_DWORD *)i - 1);
              v20 = *((_WORD *)i - 4);
              TraceLoggingYieldedHotkey((unsigned __int16)v11[12], *((_DWORD *)v11 + 7));
              v21 = 0LL;
              goto LABEL_56;
            }
          }
        }
        v21 = v46;
      }
LABEL_56:
      if ( (v20 & 0x100) != 0 )
        goto LABEL_72;
      if ( !v22 )
      {
        v30 = qword_1C032A208;
        v31 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
        v32 = v20 & 0x4000;
        if ( v21 )
        {
          if ( !v32 || v31 != qword_1C032A208 )
          {
            if ( qword_1C032A208 != v31 )
              v30 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
            qword_1C032A208 = v30;
            v21(v23, (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16));
          }
          goto LABEL_72;
        }
        if ( v32 && v31 == qword_1C032A208 )
        {
          v27 = a4;
        }
        else
        {
          v27 = a4;
          if ( qword_1C032A208 != v31 )
            v30 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
          qword_1C032A208 = v30;
          PostThreadMessageEx(v24, 0x312u, v23, v31, a4);
        }
        v28 = (struct tagTHREADINFO *)v24;
        goto LABEL_71;
      }
      if ( v22 != 1 )
      {
LABEL_59:
        if ( !v22 )
        {
LABEL_72:
          v29 = gfsModifiers;
          if ( (gfsModifiers & 8) != 0 && a1 - 129 <= 2 )
          {
            ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL);
            TraceLoggingPenHotkey(v29, a1);
          }
          LOBYTE(v7) = v57 == 0;
          return v7;
        }
        if ( v22 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 24) + 8LL) + 168LL) || v23 != 61744 )
        {
          v25 = qword_1C032A208;
          v26 = (struct _LARGE_STRING *)((unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16));
          if ( (v20 & 0x4000) != 0 && v26 == (struct _LARGE_STRING *)qword_1C032A208 )
          {
            v27 = a4;
          }
          else
          {
            v27 = a4;
            if ( (struct _LARGE_STRING *)qword_1C032A208 != v26 )
              v25 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
            qword_1C032A208 = v25;
            _PostTransformableMessageExtended(v22, 786LL, v23, v26, (struct tagINPUT_MESSAGE_SOURCE *)a4, 1);
          }
          goto LABEL_70;
        }
LABEL_68:
        DoExplorerHangDetection(*(struct tagDESKTOP **)(v22 + 24));
        PostMessage(v22, 274LL, 61744LL);
        v27 = a4;
        if ( qword_1C032A208 )
          qword_1C032A208 = 0LL;
LABEL_70:
        v28 = *(struct tagTHREADINFO **)(v22 + 16);
LABEL_71:
        CInputGlobals::SetPtiLastWoken(gpInputGlobals, v28, *(_DWORD *)(v27 + 4) == 1);
        goto LABEL_72;
      }
      if ( gpqForeground )
      {
        v22 = *(_QWORD *)(gpqForeground + 120LL);
        goto LABEL_59;
      }
    }
    return 0LL;
  }
  return HandleIAMHotKey((const struct tagHOTKEY *const)v11);
}
