/*
 * XREFs of xxxDoHotKeyStuff @ 0x1C00E9CA0
 * Callers:
 *     EditionDoHotKeys @ 0x1C00E9C50 (EditionDoHotKeys.c)
 * Callees:
 *     DoExplorerHangDetection @ 0x1C0007538 (DoExplorerHangDetection.c)
 *     _SetMagnificationInputTransform @ 0x1C0009E1C (_SetMagnificationInputTransform.c)
 *     zzzCancelJournalling @ 0x1C000BD40 (zzzCancelJournalling.c)
 *     _PostThreadMessageEx @ 0x1C001B65C (_PostThreadMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0041530 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C005F920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     IsUninterceptable @ 0x1C00E9C20 (IsUninterceptable.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00EA104 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     IsHotKey @ 0x1C00EA190 (IsHotKey.c)
 *     IsSAS @ 0x1C00EA2B0 (IsSAS.c)
 *     HasRawInputForegroundTarget @ 0x1C00EA554 (HasRawInputForegroundTarget.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1C019A008 (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C019A320 (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     ?DeviceHasAQuickLaunchPen@@YAHXZ @ 0x1C01B3874 (-DeviceHasAQuickLaunchPen@@YAHXZ.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01B3B48 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01B3CD8 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     xxxActivateDebugger @ 0x1C020334C (xxxActivateDebugger.c)
 */

__int64 __fastcall xxxDoHotKeyStuff(struct tagHOTKEY *a1, int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // esi
  unsigned int v10; // edi
  int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v16; // eax
  __int16 v17; // r14
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rdi
  struct tagTHREADINFO *v21; // rdx
  __int16 v22; // r14
  int v23; // r15d
  void (__fastcall *v24)(_QWORD, _QWORD); // r13
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // r9
  bool v28; // zf
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *i; // rax
  __int64 v37; // rax
  __int64 v38; // r9
  __int16 v39; // r14
  int v40; // [rsp+20h] [rbp-B8h]
  int v41; // [rsp+28h] [rbp-B0h]
  _BYTE v42[8]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v43[3]; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v44[8]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v45; // [rsp+68h] [rbp-70h]
  __int128 v46[6]; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v47; // [rsp+E0h] [rbp+8h]

  v4 = (unsigned int)a1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v42);
  v8 = 0;
  v47 = 0;
  v9 = 0;
  v10 = 0;
  switch ( v4 )
  {
    case 0x10u:
      v9 = 4;
      break;
    case 0x11u:
      v9 = 2;
      break;
    case 0x12u:
      v9 = 1;
      break;
    default:
      if ( v4 <= 0x5A || v4 > 0x5C )
        gfsModOnlyCandidate = 0;
      else
        v9 = 8;
      break;
  }
  if ( a2 )
  {
    gfsModifiers &= ~v9;
    if ( v9 )
    {
      v10 = gfsModOnlyCandidate;
      v47 = gfsModOnlyCandidate;
      gfsModOnlyCandidate = 0;
    }
    if ( qword_1C0326B38 )
      qword_1C0326B38 = 0LL;
  }
  else
  {
    v16 = v9 | gfsModifiers;
    gfsModifiers |= v9;
    if ( v9 )
      gfsModOnlyCandidate = v16;
  }
  LOBYTE(v7) = v4;
  v11 = IsSAS(v7, &gfsModifiers);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v42);
  if ( v4 == 174 )
  {
    if ( a2 )
    {
LABEL_78:
      gbVolumeDownPressed = 0;
      goto LABEL_13;
    }
    if ( !gbVolumeUpPressed )
    {
      gbVolumeDownPressed = 1;
      goto LABEL_13;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_75:
    gbVolumeUpPressed = 0;
    goto LABEL_13;
  }
  if ( v4 == 175 )
  {
    if ( !a2 )
    {
      if ( !gbVolumeDownPressed )
      {
        gbVolumeUpPressed = 1;
        goto LABEL_13;
      }
      xxxHandleVolumeUpDownCombo();
      goto LABEL_78;
    }
    goto LABEL_75;
  }
LABEL_13:
  if ( !v11 && (gfInNumpadHexInput & 1) != 0 )
    return 0LL;
  if ( v10 && a2 )
  {
    v12 = IsHotKey(v10);
  }
  else
  {
    v12 = IsHotKey(gfsModifiers);
    if ( !v12 || !v11 )
    {
      v13 = IsUninterceptable();
      if ( v13 )
        v12 = v13;
    }
  }
  if ( v12 && gbLockScreenActive && !v11 && (*(_WORD *)(v12 + 26) & 0x2000) == 0 )
    return 0LL;
  WindowArrangementSequence::TestSequence(
    (WindowArrangementSequence *)v12,
    (const struct tagHOTKEY *const)v4,
    v9,
    gfsModifiers,
    a2 == 0,
    v41);
  if ( !v12 )
    return 0LL;
  v17 = *(_WORD *)(v12 + 26);
  if ( v17 < 0 && !v11 && a4 && *(_DWORD *)(a4 + 4) != 4 )
    return 0LL;
  if ( (v17 & 0x8800) == 0
    && (unsigned int)HasRawInputForegroundTarget(v44)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 416) + 824LL) + 100LL) & 0x200) != 0 )
  {
    return 0LL;
  }
  v18 = *(_DWORD *)(v12 + 32);
  if ( v18 == -7 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 168LL);
    if ( v19 )
    {
      gfsModOnlyCandidate = 0;
      goto LABEL_37;
    }
  }
  else if ( (unsigned int)(v18 + 6) <= 1 )
  {
    if ( !a2 )
      return (unsigned int)xxxActivateDebugger(*(unsigned __int16 *)(v12 + 24));
    return v8;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 32LL) & 1) != 0
    && *(PVOID *)(*(_QWORD *)v12 + 448LL) != grpdeskLogon
    && !*(_QWORD *)(v12 + 8)
    && gbLockScreenActive
    && (v17 & 0x2000) == 0
    || !v47 && a2 )
  {
    return 0LL;
  }
  if ( v11 || v4 == 27 && gfsModifiers == 2 )
  {
    zzzCancelJournalling();
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 216LL) )
    {
      memset(v46, 0, 0x24uLL);
      LODWORD(v46[2]) = 3;
      SetMagnificationInputTransform(v46);
    }
    CancelCapturedMipOverride();
  }
  if ( !a3 )
    goto LABEL_55;
  switch ( v4 )
  {
    case 9u:
      v29 = (a3 & 1) == 0;
      goto LABEL_115;
    case 0xDu:
      v29 = (a3 & 8) == 0;
      goto LABEL_115;
    case 0x1Bu:
      if ( (a3 & 2) != 0 && (gfsModifiers & 3) == 1 )
        return 0LL;
      if ( (a3 & 0x40) == 0 )
        break;
      v28 = (gfsModifiers & 3) == 2;
      goto LABEL_117;
    case 0x20u:
      v29 = (a3 & 4) == 0;
LABEL_115:
      if ( v29 )
        break;
      v28 = (gfsModifiers & 3) == 1;
      goto LABEL_117;
    case 0x2Cu:
      v14 = gfsModifiers & 3;
      if ( (gfsModifiers & 3) == 0 && (a3 & 0x20) != 0 )
        return 0LL;
      if ( (a3 & 0x10) != 0 )
      {
        v28 = (_DWORD)v14 == 1;
LABEL_117:
        if ( v28 )
          return 0LL;
      }
      break;
  }
LABEL_55:
  if ( gfsModifiers == 2 && v4 == 27 && !a2 )
  {
    if ( ghwndSwitch )
    {
      LOBYTE(v14) = 1;
      v31 = HMValidateHandleNoSecure(ghwndSwitch, v14);
      if ( v31 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30);
        v43[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v43;
        v43[1] = v31;
        _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
        xxxSetForegroundWindow2((struct tagWND *)v31, 0LL, 0, 0);
        ThreadUnlock1(v34, v33, v35);
      }
    }
  }
  if ( (*(_WORD *)(v12 + 26) & 0x1000) == 0 )
  {
    if ( v4 - 129 > 2
      || (wil_details_FeaturePropertyCache_ReportUsageToService(
            (__int64)&Feature_QuickLaunchInvocation__private_propertyCache,
            9100606LL,
            (const struct FEATURE_LOGGED_TRAITS *)&unk_1C02E5D30,
            1,
            v40),
          (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                           - RIMGetLastInvertedPenTime()) >= 0xFA)
      || !(unsigned int)DeviceHasAQuickLaunchPen() )
    {
      v22 = *(_WORD *)(v12 + 26);
      v19 = *(_QWORD *)(v12 + 16);
      v23 = *(_DWORD *)(v12 + 32);
      v24 = *(void (__fastcall **)(_QWORD, _QWORD))(v12 + 8);
      v25 = *(_QWORD *)v12;
      if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x200) == 0
        && (v22 & 0x200) != 0
        && gpqForeground
        && *(_QWORD *)(gpqForeground + 120LL) )
      {
        for ( i = *(_QWORD **)(v12 + 48); i != (_QWORD *)(v12 + 48); i = (_QWORD *)*i )
        {
          if ( *(_QWORD *)(*(i - 3) + 424LL) == gpqForeground )
          {
            v24 = 0LL;
            v25 = *(i - 3);
            v19 = *(i - 2);
            v23 = *((_DWORD *)i - 1);
            v22 = *((_WORD *)i - 4);
            TraceLoggingYieldedHotkey(*(unsigned __int16 *)(v12 + 24), *(_DWORD *)(v12 + 28));
            break;
          }
        }
      }
      if ( (v22 & 0x100) != 0 )
        goto LABEL_41;
      if ( !v19 )
      {
        v37 = qword_1C0326B38;
        v38 = (unsigned __int16)gfsModifiers | ((unsigned __int16)v4 << 16);
        v39 = v22 & 0x4000;
        if ( v24 )
        {
          if ( !v39 || v38 != qword_1C0326B38 )
          {
            if ( qword_1C0326B38 != v38 )
              v37 = (unsigned __int16)gfsModifiers | ((unsigned __int16)v4 << 16);
            qword_1C0326B38 = v37;
            v24(v23, (unsigned __int16)gfsModifiers | ((unsigned __int16)v4 << 16));
          }
          goto LABEL_41;
        }
        if ( v39 && v38 == qword_1C0326B38 )
        {
          v20 = a4;
        }
        else
        {
          v20 = a4;
          if ( qword_1C0326B38 != v38 )
            v37 = (unsigned __int16)gfsModifiers | ((unsigned __int16)v4 << 16);
          qword_1C0326B38 = v37;
          PostThreadMessageEx(v25, 0x312u, v23, v38, a4);
        }
        v21 = (struct tagTHREADINFO *)v25;
        goto LABEL_40;
      }
      if ( v19 == 1 )
      {
        if ( !gpqForeground )
          return 0LL;
        v19 = *(_QWORD *)(gpqForeground + 112LL);
      }
      if ( !v19 )
        goto LABEL_41;
      if ( v19 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 24) + 8LL) + 168LL) || v23 != 61744 )
      {
        v26 = qword_1C0326B38;
        v27 = (unsigned __int16)gfsModifiers | ((unsigned __int16)v4 << 16);
        if ( (v22 & 0x4000) != 0 && v27 == qword_1C0326B38 )
        {
          v20 = a4;
        }
        else
        {
          v20 = a4;
          if ( qword_1C0326B38 != v27 )
            v26 = (unsigned __int16)gfsModifiers | ((unsigned __int16)v4 << 16);
          qword_1C0326B38 = v26;
          _PostTransformableMessageExtended(v19, 786LL, v23, v27, (struct tagINPUT_MESSAGE_SOURCE *)a4, 1);
        }
        goto LABEL_39;
      }
LABEL_37:
      DoExplorerHangDetection(*(struct tagDESKTOP **)(v19 + 24));
      PostMessage((struct tagWND *)v19, 0x112u, 0xF130uLL, 0LL);
      v20 = a4;
      if ( qword_1C0326B38 )
        qword_1C0326B38 = 0LL;
LABEL_39:
      v21 = *(struct tagTHREADINFO **)(v19 + 16);
LABEL_40:
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v21, *(_DWORD *)(v20 + 4) == 1);
LABEL_41:
      if ( (gfsModifiers & 8) != 0 && v4 - 129 <= 2 )
        ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL, 0LL, gSessionId, 0, 0);
      LOBYTE(v8) = v47 == 0;
      return v8;
    }
    TraceLoggingSuppressQuickLaunch();
    return 0LL;
  }
  return HandleIAMHotKey((const struct tagHOTKEY *const)v12);
}
