/*
 * XREFs of xxxKeyEvent @ 0x1C0035210
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C0034E70 (xxxProcessKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00832C0 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C0087500 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C014E124 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C014E400 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014E890 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014E9F0 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014EC10 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014EDF0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014F050 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014F160 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C01529F0 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C0152A6C (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     UpdateAsyncKeyState @ 0x1C00356C0 (UpdateAsyncKeyState.c)
 *     ApiSetEditionDoHotKeys @ 0x1C0035820 (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C00358E0 (ApiSetEditionHandleAltTabCancel.c)
 *     ApiSetEditionKeyEventLLHook @ 0x1C00359AC (ApiSetEditionKeyEventLLHook.c)
 *     ApiSetEditionUpdateSASModifiers @ 0x1C0035AB8 (ApiSetEditionUpdateSASModifiers.c)
 *     GetKeyEventInputSource @ 0x1C0035B60 (GetKeyEventInputSource.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C0036308 (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C003637C (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ApiSetEditionHandleRawInput @ 0x1C0036B58 (ApiSetEditionHandleRawInput.c)
 *     ApiSetEditionIsGpqForegroundInaccessibleExplicit @ 0x1C0036C4C (ApiSetEditionIsGpqForegroundInaccessibleExplicit.c)
 *     ApiSetEditionHandleAltTab @ 0x1C008CB38 (ApiSetEditionHandleAltTab.c)
 *     UpdateKeyLights @ 0x1C008F490 (UpdateKeyLights.c)
 *     ApiSetEditionIsSAS @ 0x1C00A24D0 (ApiSetEditionIsSAS.c)
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C00F5C04 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C0151B2C (-LowLevelHexNumpad@@YAXGEHG@Z.c)
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
  unsigned int v9; // ebx
  unsigned __int16 v10; // r14
  struct tagTHREADINFO *v11; // r15
  int v12; // edi
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int8 v17; // di
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 result; // rax
  __int64 v21; // r8
  int v22; // r12d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  int v28; // ecx
  __int16 v29; // bx
  __int16 v30; // ax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int16 ActiveHKL; // ax
  int v36; // [rsp+88h] [rbp-31h]
  unsigned int v37; // [rsp+8Ch] [rbp-2Dh]
  int v38; // [rsp+90h] [rbp-29h] BYREF
  int v39; // [rsp+94h] [rbp-25h]
  _BYTE v40[8]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v42[80]; // [rsp+A8h] [rbp-11h] BYREF
  unsigned __int16 v43; // [rsp+108h] [rbp+4Fh]

  v38 = 0;
  v9 = 0;
  v10 = (unsigned __int16)a1;
  v11 = gptiCurrent;
  v37 = 0;
  if ( a6 )
    v12 = *a6;
  else
    v12 = 0xFFFF;
  v39 = v12;
  v41 = -1LL;
  if ( gpAsyncKeyEventMonitor )
    CAsyncKeyEventMonitor::OnKeyEvent(a1);
  if ( a7 )
  {
    if ( a9 )
    {
      v9 = *(_DWORD *)(a9 + 8);
      v15 = *(_QWORD *)a9;
    }
    else
    {
      v13 = *((_QWORD *)v11 + 53);
      v14 = *(_DWORD *)(v13 + 12);
      v15 = *(_QWORD *)(v13 + 880);
      v9 = v14 >> 31;
    }
    v37 = v9;
    v41 = v15;
  }
  GetKeyEventInputSource(a7, (unsigned __int16)v12, a9, v42);
  v16 = 256LL;
  *(_DWORD *)gpsi |= 0x40u;
  v36 = (unsigned __int16)(((v10 & 0x8000) != 0) + 256);
  if ( (byte_1C01CC614 & 0x10) != 0 && (byte_1C01CC614 & 4) == 0 )
    v36 = (unsigned __int16)(((v10 & 0x8000) != 0) + 256) + 4;
  v43 = v10 & 0x100;
  if ( (unsigned __int8)(v10 + 96) <= 5u )
  {
    v16 = (unsigned int)(((unsigned __int8)v10 - 160) >> 31);
    LODWORD(v16) = ((unsigned __int8)v10 - 160) % 2;
    v17 = ((unsigned __int8)v10 - 160) / 2 + 16;
  }
  else
  {
    v17 = v10;
  }
  LOBYTE(v16) = v17;
  ApiSetEditionUpdateSASModifiers(a7, v16, a2, v10 & 0x8000);
  if ( a8
    || (result = ApiSetEditionKeyEventLLHook(
                   (_DWORD)v11,
                   v43,
                   (unsigned __int16)(((v10 & 0x8000) != 0) + 256),
                   v36,
                   v10,
                   a2,
                   v10 & 0x8000,
                   a7,
                   a3,
                   a4,
                   v9,
                   (__int64)&v41),
        (_DWORD)result != 1) )
  {
    v21 = gptiBlockInput;
    if ( gptiBlockInput && (struct tagTHREADINFO *)gptiBlockInput != v11 )
    {
      LOBYTE(v18) = v10;
      result = ApiSetEditionIsSAS(v18, v40);
      if ( !(_DWORD)result )
        return result;
      v21 = 0LL;
      gptiBlockInput = 0LL;
    }
    if ( v17 != (_BYTE)v10 )
    {
      LOBYTE(v19) = v10 ^ 1;
      if ( ((v10 & 0x8000) == 0
         || ((unsigned __int8)(1 << (2 * (v19 & 3))) & *((_BYTE *)&gafAsyncKeyState
                                                       + ((unsigned __int64)(unsigned __int8)v19 >> 2))) == 0)
        && (!v21 || (struct tagTHREADINFO *)v21 == v11) )
      {
        UpdateAsyncKeyState(gpqForeground, v17, v10 & 0x8000, v19);
      }
    }
    UpdateAsyncKeyState(gpqForeground, (unsigned __int8)v10, v10 & 0x8000, v19);
    if ( gfEnableHexNumpad && gpqForeground )
    {
      v31 = *(_QWORD *)(gpqForeground + 120);
      v32 = v31 ? *(_QWORD *)(v31 + 16) : *(_QWORD *)(gpqForeground + 96);
      if ( !(unsigned int)HasHidTable(v32)
        || ((v33 = *(_QWORD *)(gpqForeground + 120)) == 0
          ? (v34 = *(_QWORD *)(gpqForeground + 96))
          : (v34 = *(_QWORD *)(v33 + 16)),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 424) + 832LL) + 100LL) & 0x20) == 0) )
      {
        LowLevelHexNumpad(a2, v17, v10 & 0x8000, v43);
      }
    }
    if ( (v10 & 0x8000) == 0 )
    {
      if ( v17 == 20
        || (unsigned __int8)(v17 + 112) <= 1u
        || v17 == 21 && (ActiveHKL = ApiSetEditionGetActiveHKL(), (ActiveHKL & 0x3FF) == 0x11) )
      {
        UpdateKeyLights(a7);
        xxxWindowEvent(2147483654LL, 0LL, v17, 0LL, 0);
      }
    }
    if ( gptiForeground )
      v22 = *((_DWORD *)gptiForeground + 219);
    else
      v22 = 0;
    result = ApiSetEditionHandleAltTabCancel(v41, v9, (_DWORD)v11, v10 & 0x8000, v17, a7, v22);
    if ( !(_DWORD)result )
    {
      LOBYTE(v23) = v10;
      LOBYTE(v24) = v17;
      result = ApiSetEditionDoHotKeys(v24, v23, v10 & 0x8000, v22, (__int64)v42, (__int64)&v38);
      if ( !(_DWORD)result )
      {
        result = ApiSetEditionIsGpqForegroundInaccessibleExplicit(a7, v11, v41, v9);
        if ( !(_DWORD)result )
        {
          result = *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
          if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0 )
            goto LABEL_27;
          if ( (v10 & 0x1000) == 0 || (v27 = 0LL, !a7) )
            v27 = (__int64)a6;
          LOBYTE(v26) = v10;
          LOBYTE(v25) = v17;
          result = ApiSetEditionHandleRawInput(a3, a8, v25, v26, v36, v27, a2, v10, v10 & 0x8000, a5);
          if ( !(_DWORD)result )
          {
LABEL_27:
            if ( !v38 )
            {
              v28 = 4;
              if ( (BYTE4(gafAsyncKeyState) & 0x10) == 0 || (BYTE4(gafAsyncKeyState) & 4) != 0 || v17 == 23 )
              {
                v29 = ((v10 & 0x8000) != 0) + 256;
                if ( v17 == 18 )
                {
                  v29 = ((v10 & 0x8000) != 0) + 256;
                  if ( (v10 & 0x8000) != 0 )
                  {
                    if ( dword_1C01CE12C )
                      v29 = ((v10 & 0x8000) != 0) + 260;
                    LOBYTE(v28) = 18;
                    ApiSetEditionHandleAltTab(v28, a2, v43, a3, a4, (__int64)v42, a5, v29);
                  }
                  else
                  {
                    gppiLockSFW = 0LL;
                  }
                }
                v30 = v10 & 0x100;
              }
              else
              {
                v29 = ((v10 & 0x8000) != 0) + 260;
                v30 = v43 | 0x2000;
                if ( v17 == 18 )
                {
                  dword_1C01CE12C = 1;
                  if ( (v10 & 0x8000) == 0 )
                    gppiLockSFW = 0LL;
                }
                else
                {
                  dword_1C01CE12C = 0;
                }
              }
              return ApiSetEditionHandleAndPostKeyEvent(
                       a7,
                       v41,
                       v37,
                       v10 & 0x8000,
                       v17,
                       v22,
                       a2,
                       v10,
                       v30,
                       v39,
                       (__int64)v42,
                       a3,
                       a5,
                       a4,
                       v29);
            }
          }
        }
      }
    }
  }
  return result;
}
