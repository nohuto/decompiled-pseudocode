/*
 * XREFs of xxxKeyEventEx @ 0x1C01861D0
 * Callers:
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00960E0 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C0098E00 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C0180594 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C018087C (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01816A0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0181820 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0181A50 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0181C40 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0181EB0 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0181FD0 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     xxxKeyEvent @ 0x1C0186180 (xxxKeyEvent.c)
 *     xxxProcessKeyEvent @ 0x1C01865B0 (xxxProcessKeyEvent.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C0186914 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C01869AC (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0023D60 (HMAssignmentLock.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003FF50 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C0040810 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     ApiSetEditionKeyEventLLHook @ 0x1C009051C (ApiSetEditionKeyEventLLHook.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C0091EF8 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     GetKeyEventInputSource @ 0x1C00923B0 (GetKeyEventInputSource.c)
 *     ApiSetEditionUpdateSASModifiers @ 0x1C00935FC (ApiSetEditionUpdateSASModifiers.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C0121F40 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C017CDC0 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C017CFB0 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0184EA8 (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01853EC (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 */

void __fastcall xxxKeyEventEx(
        unsigned __int16 a1,
        __int16 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        __int16 *a6,
        unsigned int a7,
        int a8,
        __int64 a9,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a10)
{
  int v10; // r14d
  struct tagTHREADINFO *v13; // rax
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r14d
  int v18; // r10d
  unsigned int v19; // ecx
  const char *v20; // rax
  const char *v21; // rax
  __int64 v22; // r10
  LPCGUID v23; // r9
  int v24; // ecx
  char v25; // al
  __int64 KeyboardProcessor; // rax
  __int64 v27; // r14
  int v28; // [rsp+50h] [rbp-B0h]
  unsigned int v30; // [rsp+64h] [rbp-9Ch]
  int v31; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+6Ch] [rbp-94h]
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v34[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v35; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v36; // [rsp+88h] [rbp-78h] BYREF
  int v37; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v38; // [rsp+98h] [rbp-68h]
  struct tagTHREADINFO *v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  void *v41; // [rsp+B0h] [rbp-50h]
  struct _KEYBOARD_VIRTUAL_DEVICE_INFO *v42; // [rsp+B8h] [rbp-48h]
  void *v43; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-30h]
  __int128 v45; // [rsp+E0h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+120h] [rbp+20h] BYREF
  int *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  void **v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  unsigned int *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  unsigned int *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  int *v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]

  v10 = 0;
  *(_QWORD *)v34 = 0LL;
  v41 = a5;
  v42 = a10;
  v13 = gptiCurrent;
  v39 = gptiCurrent;
  v40 = a4;
  if ( a6 )
    v14 = (unsigned __int16)*a6;
  else
    v14 = 0xFFFF;
  v32 = v14;
  v33 = -1LL;
  if ( gpAsyncKeyEventMonitor )
  {
    CAsyncKeyEventMonitor::OnKeyEvent((CAsyncKeyEventMonitor *)0xFFFFFFFFLL);
    v13 = v39;
  }
  if ( a7 )
  {
    if ( a9 )
    {
      v10 = *(_DWORD *)(a9 + 8);
      v15 = *(_QWORD *)a9;
    }
    else
    {
      v16 = *((_QWORD *)v13 + 52);
      v17 = *(_DWORD *)(v16 + 12);
      v15 = *(_QWORD *)(v16 + 872);
      v10 = v17 >> 31;
    }
    v33 = v15;
  }
  GetKeyEventInputSource(a7, (unsigned __int16)v14, a9, v34);
  _InterlockedOr((volatile signed __int32 *)gpsi, 0x40u);
  v36 = a7;
  v35 = a3;
  v18 = 4;
  v38 = (unsigned __int16)(((a1 & 0x8000) != 0) + 256);
  v19 = v38;
  v30 = v38;
  v37 = a8;
  v43 = v41;
  if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x4000uLL) )
    {
      v20 = InputTraceLogging::DeviceTypeToString(v34[0]);
      TlgCreateSz(&pDesc, v20);
      v21 = InputTraceLogging::OriginIdToString(v34[1]);
      TlgCreateSz(&v48, v21);
      v50 = v22;
      v49 = &v31;
      v24 = (int)v23;
      v52 = 8LL;
      v51 = &v43;
      v54 = v22;
      v53 = &v35;
      LOBYTE(v24) = (a1 & 0x8000) == 0;
      v31 = v24;
      v55 = &v36;
      v57 = &v37;
      v56 = v22;
      v58 = v22;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E7934, 0LL, v23, 9u, &pData);
      v18 = 4;
    }
    v19 = (unsigned __int16)(((a1 & 0x8000) != 0) + 256);
  }
  if ( (byte_1C02142C4 & 0x10) != 0 && ((unsigned __int8)byte_1C02142C4 & (unsigned __int8)v18) == 0 )
    v30 = v18 + v19;
  LOWORD(v31) = a1 & 0x100;
  v25 = CKeyboardProcessor::HandleLeftRightVKs(a1);
  ApiSetEditionUpdateSASModifiers(a7, v25, a2, a1 & 0x8000);
  if ( a8 )
    goto LABEL_28;
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
  if ( !KeyboardProcessor || !*(_DWORD *)(KeyboardProcessor + 20) )
  {
    v28 = v10;
    v27 = v40;
    if ( (unsigned int)ApiSetEditionKeyEventLLHook(
                         (__int64)v39,
                         v31,
                         v38,
                         v30,
                         a1,
                         a2,
                         a1 & 0x8000,
                         a7,
                         a3,
                         v40,
                         v28,
                         (__int64)&v33) == 1 )
    {
      InputTraceLogging::Keyboard::DropInput();
      return;
    }
    goto LABEL_29;
  }
  if ( !a6 )
  {
LABEL_28:
    v27 = v40;
LABEL_29:
    xxxUpdateGlobalsAndSendKeyEvent(
      a1,
      a2,
      a3,
      v27,
      (__int64)v41,
      (__int64)a6,
      v32,
      a7,
      a8,
      a9,
      (__int64 *)v34,
      (__int64)v42);
    return;
  }
  if ( !*((_QWORD *)v39 + 54) )
  {
    if ( gspklGlobalActive )
    {
      *(_QWORD *)&v44 = (char *)v39 + 432;
      *((_QWORD *)&v44 + 1) = gspklGlobalActive;
      v45 = v44;
      HMAssignmentLock((__int64 **)&v45);
    }
  }
  CKeyboardProcessor::ForwardInputToKeyboardOverrider(a7 != 0, a2, a1, *a6, v41, a3, a6[2], v42);
}
