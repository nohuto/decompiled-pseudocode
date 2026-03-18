/*
 * XREFs of xxxKeyEvent @ 0x1C0055EB0
 * Callers:
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C0065420 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C00654C0 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C0129924 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C012A2D4 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012B320 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012B480 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012B6A0 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012B880 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012BAE0 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012BBF0 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     xxxProcessKeyEvent @ 0x1C0130400 (xxxProcessKeyEvent.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C01306F0 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C013076C (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     UpdateAsyncKeyState @ 0x1C0056390 (UpdateAsyncKeyState.c)
 *     ApiSetEditionDoHotKeys @ 0x1C00564D8 (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C005658C (ApiSetEditionHandleAltTabCancel.c)
 *     ApiSetEditionKeyEventLLHook @ 0x1C005664C (ApiSetEditionKeyEventLLHook.c)
 *     GetKeyEventInputSource @ 0x1C0056750 (GetKeyEventInputSource.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C0056804 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ApiSetEditionHandleRawInput @ 0x1C0056F28 (ApiSetEditionHandleRawInput.c)
 *     ApiSetEditionIsGpqForegroundInaccessibleExplicit @ 0x1C0057010 (ApiSetEditionIsGpqForegroundInaccessibleExplicit.c)
 *     ApiSetEditionHandleAltTab @ 0x1C00584EC (ApiSetEditionHandleAltTab.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C00668D4 (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionIsSAS @ 0x1C00734D8 (ApiSetEditionIsSAS.c)
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C00BF774 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C012EFDC (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 *     UpdateKeyLights @ 0x1C01302C0 (UpdateKeyLights.c)
 */

__int64 __fastcall xxxKeyEvent(
        CAsyncKeyEventMonitor *a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  struct tagTHREADINFO *v9; // r15
  unsigned int v10; // ebx
  unsigned __int16 v11; // r14
  int v12; // edi
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int8 v17; // di
  PDEVICE_OBJECT v18; // rcx
  void *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r9
  PDEVICE_OBJECT v22; // rcx
  __int64 result; // rax
  __int64 v24; // r8
  int v25; // r12d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  int v31; // ecx
  __int16 v32; // bx
  __int16 v33; // ax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int16 ActiveHKL; // ax
  int v39; // [rsp+88h] [rbp-31h]
  unsigned int v40; // [rsp+8Ch] [rbp-2Dh]
  int v41; // [rsp+90h] [rbp-29h] BYREF
  int v42; // [rsp+94h] [rbp-25h]
  _BYTE v43[8]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v45[80]; // [rsp+A8h] [rbp-11h] BYREF
  unsigned __int16 v46; // [rsp+108h] [rbp+4Fh]

  v9 = gptiCurrent;
  v10 = 0;
  v40 = 0;
  v11 = (unsigned __int16)a1;
  v41 = 0;
  if ( a6 )
    v12 = *a6;
  else
    v12 = 0xFFFF;
  v42 = v12;
  v44 = -1LL;
  if ( gpAsyncKeyEventMonitor )
    CAsyncKeyEventMonitor::OnKeyEvent(a1);
  if ( a7 )
  {
    if ( a9 )
    {
      v10 = *(_DWORD *)(a9 + 8);
      v15 = *(_QWORD *)a9;
    }
    else
    {
      v13 = *((_QWORD *)v9 + 52);
      v14 = *(_DWORD *)(v13 + 12);
      v15 = *(_QWORD *)(v13 + 872);
      v10 = v14 >> 31;
    }
    v40 = v10;
    v44 = v15;
  }
  GetKeyEventInputSource(a7, (unsigned __int16)v12, a9, v45);
  v16 = 4LL;
  *(_DWORD *)gpsi |= 0x40u;
  v39 = (unsigned __int16)(((v11 & 0x8000) != 0) + 256);
  if ( (byte_1C01A09C4 & 0x10) != 0 && (byte_1C01A09C4 & 4) == 0 )
    v39 = (unsigned __int16)(((v11 & 0x8000) != 0) + 256) + 4;
  v46 = v11 & 0x100;
  if ( (unsigned __int8)(v11 + 96) <= 5u )
    v17 = ((unsigned __int8)v11 - 160) / 2 + 16;
  else
    v17 = v11;
  v18 = WPP_GLOBAL_Control;
  v19 = &WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x120u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsEditionUpdateSASModifiersSupported(v18, v19, v16) >= 0 )
  {
    LOBYTE(v20) = v17;
    EditionUpdateSASModifiers(a7, v20, a2, v11 & 0x8000);
  }
  v22 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x121u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( a8
    || (result = ApiSetEditionKeyEventLLHook(
                   (_DWORD)v9,
                   v46,
                   (unsigned __int16)(((v11 & 0x8000) != 0) + 256),
                   v39,
                   v11,
                   a2,
                   v11 & 0x8000,
                   a7,
                   a3,
                   a4,
                   v10,
                   (__int64)&v44),
        (_DWORD)result != 1) )
  {
    v24 = gptiBlockInput;
    if ( gptiBlockInput && (struct tagTHREADINFO *)gptiBlockInput != v9 )
    {
      LOBYTE(v22) = v11;
      result = ApiSetEditionIsSAS(v22, v43);
      if ( !(_DWORD)result )
        return result;
      v24 = 0LL;
      gptiBlockInput = 0LL;
    }
    if ( v17 != (_BYTE)v11 )
    {
      LOBYTE(v21) = v11 ^ 1;
      if ( ((v11 & 0x8000) == 0
         || ((unsigned __int8)(1 << (2 * (v21 & 3))) & *((_BYTE *)&gafAsyncKeyState
                                                       + ((unsigned __int64)(unsigned __int8)v21 >> 2))) == 0)
        && (!v24 || (struct tagTHREADINFO *)v24 == v9) )
      {
        UpdateAsyncKeyState(gpqForeground, v17, v11 & 0x8000, v21);
      }
    }
    UpdateAsyncKeyState(gpqForeground, (unsigned __int8)v11, v11 & 0x8000, v21);
    if ( gfEnableHexNumpad && gpqForeground )
    {
      v34 = *(_QWORD *)(gpqForeground + 120);
      v35 = v34 ? *(_QWORD *)(v34 + 16) : *(_QWORD *)(gpqForeground + 96);
      if ( !(unsigned int)HasHidTable(v35)
        || ((v36 = *(_QWORD *)(gpqForeground + 120)) == 0
          ? (v37 = *(_QWORD *)(gpqForeground + 96))
          : (v37 = *(_QWORD *)(v36 + 16)),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 416) + 824LL) + 100LL) & 0x20) == 0) )
      {
        LowLevelHexNumpad(a2, v17, v11 & 0x8000, v46);
      }
    }
    if ( (v11 & 0x8000) == 0 )
    {
      if ( v17 == 20
        || (unsigned __int8)(v17 + 112) <= 1u
        || v17 == 21 && (ActiveHKL = ApiSetEditionGetActiveHKL(), (ActiveHKL & 0x3FF) == 0x11) )
      {
        UpdateKeyLights(a7);
        xxxWindowEvent(2147483654LL, 0LL, v17);
      }
    }
    if ( gptiForeground )
      v25 = *((_DWORD *)gptiForeground + 217);
    else
      v25 = 0;
    result = ApiSetEditionHandleAltTabCancel(v44, v10, (_DWORD)v9, v11 & 0x8000, v17, a7, v25);
    if ( !(_DWORD)result )
    {
      LOBYTE(v26) = v11;
      LOBYTE(v27) = v17;
      result = ApiSetEditionDoHotKeys(v27, v26, v11 & 0x8000, v25, (__int64)v45, (__int64)&v41);
      if ( !(_DWORD)result )
      {
        result = ApiSetEditionIsGpqForegroundInaccessibleExplicit(a7, v9, v44, v10);
        if ( !(_DWORD)result )
        {
          result = *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
          if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0 )
            goto LABEL_33;
          if ( (v11 & 0x1000) == 0 || (v30 = 0LL, !a7) )
            v30 = (__int64)a6;
          LOBYTE(v29) = v11;
          LOBYTE(v28) = v17;
          result = ApiSetEditionHandleRawInput(a3, a8, v28, v29, v39, v30, a2, v11, v11 & 0x8000, a5);
          if ( !(_DWORD)result )
          {
LABEL_33:
            if ( !v41 )
            {
              v31 = 4;
              if ( (BYTE4(gafAsyncKeyState) & 0x10) == 0 || (BYTE4(gafAsyncKeyState) & 4) != 0 || v17 == 23 )
              {
                v32 = ((v11 & 0x8000) != 0) + 256;
                if ( v17 == 18 )
                {
                  v32 = ((v11 & 0x8000) != 0) + 256;
                  if ( (v11 & 0x8000) != 0 )
                  {
                    if ( dword_1C01A0CE8 )
                      v32 = ((v11 & 0x8000) != 0) + 260;
                    LOBYTE(v31) = 18;
                    ApiSetEditionHandleAltTab(v31, a2, v46, a3, a4, (__int64)v45, a5, v32);
                  }
                  else
                  {
                    gppiLockSFW = 0LL;
                  }
                }
                v33 = v11 & 0x100;
              }
              else
              {
                v32 = ((v11 & 0x8000) != 0) + 260;
                v33 = v46 | 0x2000;
                if ( v17 == 18 )
                {
                  dword_1C01A0CE8 = 1;
                  if ( (v11 & 0x8000) == 0 )
                    gppiLockSFW = 0LL;
                }
                else
                {
                  dword_1C01A0CE8 = 0;
                }
              }
              return ApiSetEditionHandleAndPostKeyEvent(
                       a7,
                       v44,
                       v40,
                       v11 & 0x8000,
                       v17,
                       v25,
                       a2,
                       v11,
                       v33,
                       v42,
                       (__int64)v45,
                       a3,
                       a5,
                       a4,
                       v32);
            }
          }
        }
      }
    }
  }
  return result;
}
