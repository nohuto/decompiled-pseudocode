/*
 * XREFs of xxxDoHotKeyStuff @ 0x1C00DFB30
 * Callers:
 *     EditionDoHotKeys @ 0x1C00DFAE0 (EditionDoHotKeys.c)
 * Callees:
 *     DoExplorerHangDetection @ 0x1C00073C0 (DoExplorerHangDetection.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0029C40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _SetMagnificationInputTransform @ 0x1C00C981C (_SetMagnificationInputTransform.c)
 *     HasRawInputForegroundTarget @ 0x1C00D1CA4 (HasRawInputForegroundTarget.c)
 *     _PostThreadMessageEx @ 0x1C00D4A14 (_PostThreadMessageEx.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     IsUninterceptable @ 0x1C00DFAAC (IsUninterceptable.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00DFFF8 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     IsHotKey @ 0x1C00E0094 (IsHotKey.c)
 *     IsSAS @ 0x1C00E01D4 (IsSAS.c)
 *     zzzCancelJournalling @ 0x1C012B2A4 (zzzCancelJournalling.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C015C07C (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1C01BB1F4 (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C01BB52C (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     ?DeviceHasAQuickLaunchPen@@YAHXZ @ 0x1C01D60A4 (-DeviceHasAQuickLaunchPen@@YAHXZ.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01D63A4 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01D653C (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     xxxActivateDebugger @ 0x1C022C218 (xxxActivateDebugger.c)
 */

__int64 __fastcall xxxDoHotKeyStuff(struct tagHOTKEY *a1, int a2, int a3, DWORD *a4)
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
  __int16 v19; // r14
  __int64 v20; // rsi
  int v21; // r15d
  void (__fastcall *v22)(_QWORD, _QWORD); // r13
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // r9
  DWORD *v26; // rdi
  struct tagTHREADINFO *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r9
  __int16 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  bool v34; // zf
  bool v35; // zf
  __int64 v36; // rdx
  LARGE_INTEGER *v37; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *i; // rax
  int v42; // [rsp+28h] [rbp-B0h]
  _BYTE v43[8]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v44[3]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v45[3]; // [rsp+60h] [rbp-78h] BYREF
  __int128 v46[6]; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v47; // [rsp+E0h] [rbp+8h]

  v4 = (unsigned int)a1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v43);
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
    if ( qword_1C03171E0 )
      qword_1C03171E0 = 0LL;
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
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v43);
  if ( v4 == 174 )
  {
    if ( a2 )
    {
LABEL_83:
      gbVolumeDownPressed = 0;
      goto LABEL_13;
    }
    if ( !gbVolumeUpPressed )
    {
      gbVolumeDownPressed = 1;
      goto LABEL_13;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_80:
    gbVolumeUpPressed = 0;
    goto LABEL_13;
  }
  if ( v4 != 175 )
    goto LABEL_13;
  if ( a2 )
    goto LABEL_80;
  if ( gbVolumeDownPressed )
  {
    xxxHandleVolumeUpDownCombo();
    goto LABEL_83;
  }
  gbVolumeUpPressed = 1;
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
    v42);
  if ( !v12 )
    return 0LL;
  v17 = *(_WORD *)(v12 + 26);
  if ( v17 < 0 && !v11 && a4 && a4[1] != 4 )
    return 0LL;
  if ( (v17 & 0x8800) == 0
    && (unsigned int)HasRawInputForegroundTarget(v45)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v45[1] + 424LL) + 832LL) + 100LL) & 0x200) != 0 )
  {
    return 0LL;
  }
  v18 = *(_DWORD *)(v12 + 32);
  if ( v18 == -7 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 168LL);
    if ( v20 )
    {
      gfsModOnlyCandidate = 0;
      goto LABEL_67;
    }
  }
  else if ( (unsigned int)(v18 + 6) <= 1 )
  {
    if ( !a2 )
      return (unsigned int)xxxActivateDebugger(*(unsigned __int16 *)(v12 + 24));
    return v8;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 32LL) & 1) != 0
    && *(PVOID *)(*(_QWORD *)v12 + 456LL) != grpdeskLogon
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
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 216LL) )
    {
      memset(v46, 0, 0x24uLL);
      LODWORD(v46[2]) = 3;
      SetMagnificationInputTransform(v46, v31, v32, v33);
    }
    CancelCapturedMipOverride();
  }
  if ( a3 )
  {
    switch ( v4 )
    {
      case 9u:
        v35 = (a3 & 1) == 0;
        break;
      case 0xDu:
        v35 = (a3 & 8) == 0;
        break;
      case 0x1Bu:
        if ( (a3 & 2) != 0 && (gfsModifiers & 3) == 1 )
          return 0LL;
        if ( (a3 & 0x40) == 0 )
          goto LABEL_42;
        v34 = (gfsModifiers & 3) == 2;
        goto LABEL_122;
      case 0x20u:
        v35 = (a3 & 4) == 0;
        break;
      case 0x2Cu:
        v14 = gfsModifiers & 3;
        if ( (gfsModifiers & 3) == 0 && (a3 & 0x20) != 0 )
          return 0LL;
        if ( (a3 & 0x10) == 0 )
          goto LABEL_42;
        v34 = (_DWORD)v14 == 1;
LABEL_122:
        if ( v34 )
          return 0LL;
        goto LABEL_42;
      default:
        goto LABEL_42;
    }
    if ( v35 )
      goto LABEL_42;
    v34 = (gfsModifiers & 3) == 1;
    goto LABEL_122;
  }
LABEL_42:
  if ( gfsModifiers == 2 && v4 == 27 && !a2 )
  {
    if ( ghwndSwitch )
    {
      LOBYTE(v14) = 1;
      v37 = (LARGE_INTEGER *)HMValidateHandleNoSecure(ghwndSwitch, v14);
      if ( v37 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36);
        v44[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v44;
        v44[1] = v37;
        _InterlockedIncrement((volatile signed __int32 *)&v37[1]);
        xxxSetForegroundWindow2(v37, 0LL, 0);
        ThreadUnlock1(v40, v39);
      }
    }
  }
  if ( (*(_WORD *)(v12 + 26) & 0x1000) == 0 )
  {
    if ( v4 - 129 <= 2 )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (unsigned int)&Feature_QuickLaunchInvocation__private_propertyCache,
        9100606,
        (unsigned int)&unk_1C02D9270,
        1);
      if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                            - RIMGetLastInvertedPenTime()) < 0xFA )
      {
        if ( (unsigned int)DeviceHasAQuickLaunchPen() )
        {
          TraceLoggingSuppressQuickLaunch();
          return 0LL;
        }
      }
    }
    v19 = *(_WORD *)(v12 + 26);
    v20 = *(_QWORD *)(v12 + 16);
    v21 = *(_DWORD *)(v12 + 32);
    v22 = *(void (__fastcall **)(_QWORD, _QWORD))(v12 + 8);
    v23 = *(_QWORD *)v12;
    if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x200) == 0
      && (v19 & 0x200) != 0
      && gpqForeground
      && *(_QWORD *)(gpqForeground + 120LL) )
    {
      for ( i = *(_QWORD **)(v12 + 48); i != (_QWORD *)(v12 + 48); i = (_QWORD *)*i )
      {
        if ( *(_QWORD *)(*(i - 3) + 432LL) == gpqForeground )
        {
          v22 = 0LL;
          v23 = *(i - 3);
          v20 = *(i - 2);
          v21 = *((_DWORD *)i - 1);
          v19 = *((_WORD *)i - 4);
          TraceLoggingYieldedHotkey(*(unsigned __int16 *)(v12 + 24), *(_DWORD *)(v12 + 28));
          break;
        }
      }
    }
    if ( (v19 & 0x100) != 0 )
      goto LABEL_58;
    if ( !v20 )
    {
      v28 = qword_1C03171E0;
      v29 = (unsigned __int16)gfsModifiers | ((unsigned __int16)v4 << 16);
      v30 = v19 & 0x4000;
      if ( v22 )
      {
        if ( !v30 || v29 != qword_1C03171E0 )
        {
          if ( qword_1C03171E0 != v29 )
            v28 = (unsigned __int16)gfsModifiers | ((unsigned __int16)v4 << 16);
          qword_1C03171E0 = v28;
          v22(v21, (unsigned __int16)gfsModifiers | ((unsigned __int16)v4 << 16));
        }
        goto LABEL_58;
      }
      if ( v30 && v29 == qword_1C03171E0 )
      {
        v26 = a4;
      }
      else
      {
        v26 = a4;
        if ( qword_1C03171E0 != v29 )
          v28 = (unsigned __int16)gfsModifiers | ((unsigned __int16)v4 << 16);
        qword_1C03171E0 = v28;
        PostThreadMessageEx(v23, 786LL, v21, v29, a4);
      }
      v27 = (struct tagTHREADINFO *)v23;
LABEL_57:
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v27, v26[1] == 1);
LABEL_58:
      if ( (gfsModifiers & 8) != 0 && v4 - 129 <= 2 )
        ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL);
      LOBYTE(v8) = v47 == 0;
      return v8;
    }
    if ( v20 == 1 )
    {
      if ( !gpqForeground )
        return 0LL;
      v20 = *(_QWORD *)(gpqForeground + 112LL);
    }
    if ( !v20 )
      goto LABEL_58;
    if ( v20 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 24) + 8LL) + 168LL) || v21 != 61744 )
    {
      v24 = qword_1C03171E0;
      v25 = (unsigned __int16)gfsModifiers | ((unsigned __int16)v4 << 16);
      if ( (v19 & 0x4000) != 0 && v25 == qword_1C03171E0 )
      {
        v26 = a4;
      }
      else
      {
        v26 = a4;
        if ( qword_1C03171E0 != v25 )
          v24 = (unsigned __int16)gfsModifiers | ((unsigned __int16)v4 << 16);
        qword_1C03171E0 = v24;
        _PostTransformableMessageExtended(v20, 786LL, v21, v25, (struct tagINPUT_MESSAGE_SOURCE *)a4, 1);
      }
      goto LABEL_56;
    }
LABEL_67:
    DoExplorerHangDetection(*(struct tagDESKTOP **)(v20 + 24));
    PostMessage((struct tagWND *)v20, 0x112u, 0xF130uLL, 0LL);
    v26 = a4;
    if ( qword_1C03171E0 )
      qword_1C03171E0 = 0LL;
LABEL_56:
    v27 = *(struct tagTHREADINFO **)(v20 + 16);
    goto LABEL_57;
  }
  return HandleIAMHotKey((const struct tagHOTKEY *const)v12);
}
