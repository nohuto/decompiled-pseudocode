/*
 * XREFs of xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003FF50
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0115520 (NtMITSynthesizeKeyboardInput.c)
 *     xxxKeyEventEx @ 0x1C01861D0 (xxxKeyEventEx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     UpdateAsyncKeyState @ 0x1C00403C0 (UpdateAsyncKeyState.c)
 *     ApiSetEditionDoHotKeys @ 0x1C0040650 (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C0040728 (ApiSetEditionHandleAltTabCancel.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C0040810 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C0040834 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ApiSetEditionHandleRawInput @ 0x1C0041038 (ApiSetEditionHandleRawInput.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C0041144 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     UpdateKeyLights @ 0x1C0067950 (UpdateKeyLights.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C0093AB0 (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionHandleAltTab @ 0x1C009F904 (ApiSetEditionHandleAltTab.c)
 *     ApiSetEditionIsSAS @ 0x1C00B31CC (ApiSetEditionIsSAS.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C017CDC0 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C0184F38 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 *     PtiKbdFromQ @ 0x1C0186158 (PtiKbdFromQ.c)
 */

char __fastcall xxxUpdateGlobalsAndSendKeyEvent(
        __int16 a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        unsigned int a8,
        int a9,
        __int64 a10,
        __int64 *a11,
        __int64 a12)
{
  unsigned int v13; // r14d
  __int64 v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int8 v18; // si
  int v19; // r8d
  __int64 v20; // r9
  struct tagTHREADINFO *v21; // r10
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r15d
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int IsGpqForegroundAccessibleExplicit; // eax
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int16 v34; // di
  __int64 v35; // r13
  __int64 v36; // rax
  unsigned __int16 v38; // [rsp+80h] [rbp-79h]
  unsigned int v41; // [rsp+88h] [rbp-71h]
  int v43; // [rsp+98h] [rbp-61h]
  int v44; // [rsp+9Ch] [rbp-5Dh] BYREF
  __int64 v45; // [rsp+A0h] [rbp-59h] BYREF
  struct tagTHREADINFO *v46; // [rsp+A8h] [rbp-51h]
  __int64 v47; // [rsp+B0h] [rbp-49h]
  __int64 v48; // [rsp+B8h] [rbp-41h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-39h]
  __int64 v50; // [rsp+C8h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-29h] BYREF

  v47 = a5;
  v49 = a6;
  v50 = a12;
  v13 = a1 & 0x8000;
  v38 = a1 & 0x100;
  v46 = gptiCurrent;
  v44 = 0;
  v43 = (unsigned __int16)((v13 != 0) + 256);
  if ( a11 )
    v14 = *a11;
  else
    v14 = 0LL;
  v15 = 0;
  v48 = v14;
  v41 = 0;
  v45 = -1LL;
  if ( a8 )
  {
    if ( a10 )
    {
      v15 = *(_DWORD *)(a10 + 8);
      v17 = *(_QWORD *)a10;
    }
    else
    {
      v16 = *((_QWORD *)gptiCurrent + 52);
      v17 = *(_QWORD *)(v16 + 872);
      v15 = *(_DWORD *)(v16 + 12) >> 31;
    }
    v41 = v15;
  }
  else
  {
    v17 = v45;
  }
  v18 = CKeyboardProcessor::HandleLeftRightVKs(a1);
  v22 = 4LL;
  if ( (byte_1C02142C4 & 0x10) != 0 && (byte_1C02142C4 & 4) == 0 )
    v43 = v19 + 4;
  v23 = gptiBlockInput;
  if ( gptiBlockInput && (struct tagTHREADINFO *)gptiBlockInput != v21 )
  {
    LOBYTE(v22) = a1;
    if ( !(unsigned int)ApiSetEditionIsSAS(v22, &v45) )
    {
      v31 = 2LL;
LABEL_60:
      LOBYTE(v27) = InputTraceLogging::Keyboard::DropInput(v31);
      return v27;
    }
    v21 = v46;
    v23 = 0LL;
    gptiBlockInput = 0LL;
  }
  if ( v18 != (_BYTE)a1 )
  {
    LOBYTE(v20) = a1 ^ 1;
    if ( (!v13
       || ((unsigned __int8)(1 << (2 * (v20 & 3))) & *((_BYTE *)&gafAsyncKeyState
                                                     + ((unsigned __int64)(unsigned __int8)v20 >> 2))) == 0)
      && (!v23 || (struct tagTHREADINFO *)v23 == v21) )
    {
      UpdateAsyncKeyState(gpqForeground, v18, v13, v20);
    }
  }
  UpdateAsyncKeyState(gpqForeground, (unsigned __int8)a1, v13, v20);
  if ( gfEnableHexNumpad )
  {
    if ( gpqForeground )
    {
      v36 = ((__int64 (*)(void))PtiKbdFromQ)();
      if ( !(unsigned int)HasHidTable(v36)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 416) + 824LL) + 100LL) & 0x20) == 0 )
      {
        LowLevelHexNumpad(a2, v18, v13, v38);
      }
    }
  }
  if ( !v13
    && (v18 == 20 || (unsigned __int8)(v18 + 112) <= 1u || v18 == 21 && (ApiSetEditionGetActiveHKL() & 0x3FF) == 0x11) )
  {
    UpdateKeyLights(a8);
    xxxWindowEvent(2147483654LL, 0LL, v18);
  }
  if ( gptiForeground )
    v24 = *((_DWORD *)gptiForeground + 219);
  else
    v24 = 0;
  if ( (unsigned int)ApiSetEditionHandleAltTabCancel(v17, v15, (_DWORD)v46, v13, v18, a8, v24) )
  {
    v31 = 4LL;
    goto LABEL_60;
  }
  LOBYTE(v25) = a1;
  LOBYTE(v26) = v18;
  v27 = ApiSetEditionDoHotKeys(v26, v25, v13, v24, (__int64)&v48, (__int64)&v44);
  if ( !v27 )
  {
    IsGpqForegroundAccessibleExplicit = ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, v46, v17, v15);
    v31 = 0LL;
    if ( IsGpqForegroundAccessibleExplicit )
    {
      if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0 )
        goto LABEL_21;
      if ( (a1 & 0x1000) == 0 || (v32 = 0LL, !a8) )
        v32 = v49;
      LOBYTE(v30) = a1;
      LOBYTE(v29) = v18;
      v33 = ApiSetEditionHandleRawInput(a3, a9, v29, v30, v43, v32, a2, a1, v13, v47);
      LODWORD(v31) = 0;
      if ( v33 )
      {
        v31 = 5LL;
      }
      else
      {
LABEL_21:
        if ( !v44 )
        {
          if ( (BYTE4(gafAsyncKeyState) & 0x10) == 0 || (BYTE4(gafAsyncKeyState) & 4) != 0 || v18 == 23 )
          {
            v34 = (v13 != 0) + 256;
            if ( v18 == 18 )
            {
              v34 = (v13 != 0) + 256;
              if ( v13 )
              {
                if ( dword_1C02156D4 )
                  v34 = (v13 != 0) + 260;
                LOBYTE(v31) = 18;
                v35 = a4;
                ApiSetEditionHandleAltTab(v31, a2, v38, a3, a4, (__int64)&v48, v47, v34);
                goto LABEL_25;
              }
              gppiLockSFW = 0LL;
            }
          }
          else
          {
            v34 = (v13 != 0) + 260;
            v38 |= 0x2000u;
            if ( v18 == 18 )
            {
              v35 = a4;
              dword_1C02156D4 = 1;
              if ( !v13 )
                gppiLockSFW = 0LL;
              goto LABEL_25;
            }
            dword_1C02156D4 = 0;
          }
          v35 = a4;
LABEL_25:
          LOBYTE(v27) = ApiSetEditionHandleAndPostKeyEvent(
                          a8,
                          v17,
                          v41,
                          v13,
                          v18,
                          v24,
                          a2,
                          a1,
                          v38,
                          a7,
                          (__int64)&v48,
                          a3,
                          v47,
                          v35,
                          v34,
                          v50);
          return v27;
        }
        v31 = 6LL;
      }
    }
    goto LABEL_60;
  }
  if ( dword_1C020FB50 > 4u )
  {
    LOBYTE(v27) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x4000uLL);
    if ( (_BYTE)v27 )
      LOBYTE(v27) = TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E790E, 0LL, 0LL, 2u, &pData);
  }
  return v27;
}
