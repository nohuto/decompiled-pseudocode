/*
 * XREFs of xxxUpdateGlobalsAndSendKeyEvent @ 0x1C004A650
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0112BB0 (NtMITSynthesizeKeyboardInput.c)
 *     xxxKeyEventEx @ 0x1C0183FE0 (xxxKeyEventEx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ApiSetEditionHandleAltTab @ 0x1C00497E0 (ApiSetEditionHandleAltTab.c)
 *     UpdateAsyncKeyState @ 0x1C004AAC0 (UpdateAsyncKeyState.c)
 *     ApiSetEditionDoHotKeys @ 0x1C004AD50 (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C004AE28 (ApiSetEditionHandleAltTabCancel.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C004AF10 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C004AF34 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ApiSetEditionHandleRawInput @ 0x1C004B738 (ApiSetEditionHandleRawInput.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C004B844 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     UpdateKeyLights @ 0x1C00530E0 (UpdateKeyLights.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C00923C0 (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionIsSAS @ 0x1C00B029C (ApiSetEditionIsSAS.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C017ABD0 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C0182D48 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 *     PtiKbdFromQ @ 0x1C0183F68 (PtiKbdFromQ.c)
 */

char __fastcall xxxUpdateGlobalsAndSendKeyEvent(
        __int16 a1,
        __int16 a2,
        unsigned int a3,
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
  __int16 v33; // di
  __int64 v34; // r13
  __int64 v35; // rax
  __int16 v37; // [rsp+80h] [rbp-79h]
  unsigned int v40; // [rsp+88h] [rbp-71h]
  int v42; // [rsp+98h] [rbp-61h]
  int v43; // [rsp+9Ch] [rbp-5Dh] BYREF
  __int64 v44; // [rsp+A0h] [rbp-59h] BYREF
  struct tagTHREADINFO *v45; // [rsp+A8h] [rbp-51h]
  __int64 v46; // [rsp+B0h] [rbp-49h]
  __int64 v47; // [rsp+B8h] [rbp-41h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-39h]
  __int64 v49; // [rsp+C8h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-29h] BYREF

  v46 = a5;
  v48 = a6;
  v49 = a12;
  v13 = a1 & 0x8000;
  v37 = a1 & 0x100;
  v45 = gptiCurrent;
  v43 = 0;
  v42 = (unsigned __int16)((v13 != 0) + 256);
  if ( a11 )
    v14 = *a11;
  else
    v14 = 0LL;
  v15 = 0;
  v47 = v14;
  v40 = 0;
  v44 = -1LL;
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
    v40 = v15;
  }
  else
  {
    v17 = v44;
  }
  v18 = CKeyboardProcessor::HandleLeftRightVKs(a1);
  v22 = 4LL;
  if ( (byte_1C02112C4 & 0x10) != 0 && (byte_1C02112C4 & 4) == 0 )
    v42 = v19 + 4;
  v23 = gptiBlockInput;
  if ( gptiBlockInput && (struct tagTHREADINFO *)gptiBlockInput != v21 )
  {
    LOBYTE(v22) = a1;
    if ( !(unsigned int)ApiSetEditionIsSAS(v22, &v44) )
    {
      v31 = 2LL;
LABEL_60:
      LOBYTE(v27) = InputTraceLogging::Keyboard::DropInput(v31);
      return v27;
    }
    v21 = v45;
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
      v35 = ((__int64 (*)(void))PtiKbdFromQ)();
      if ( !(unsigned int)HasHidTable(v35)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 416) + 824LL) + 100LL) & 0x20) == 0 )
      {
        LowLevelHexNumpad(a2, v18, v13, v37);
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
  if ( (unsigned int)ApiSetEditionHandleAltTabCancel(v17, v15, (_DWORD)v45, v13, v18, a8, v24) )
  {
    v31 = 4LL;
    goto LABEL_60;
  }
  LOBYTE(v25) = a1;
  LOBYTE(v26) = v18;
  v27 = ApiSetEditionDoHotKeys(v26, v25, v13, v24, (__int64)&v47, (__int64)&v43);
  if ( !v27 )
  {
    IsGpqForegroundAccessibleExplicit = ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, v45, v17, v15);
    v31 = 0LL;
    if ( IsGpqForegroundAccessibleExplicit )
    {
      if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0 )
        goto LABEL_21;
      if ( (a1 & 0x1000) == 0 || (v32 = 0LL, !a8) )
        v32 = v48;
      LOBYTE(v30) = a1;
      LOBYTE(v29) = v18;
      if ( (unsigned int)ApiSetEditionHandleRawInput(a3, a9, v29, v30, v42, v32, a2, a1, v13, v46) )
      {
        v31 = 5LL;
      }
      else
      {
LABEL_21:
        if ( !v43 )
        {
          if ( (BYTE4(gafAsyncKeyState) & 0x10) == 0 || (BYTE4(gafAsyncKeyState) & 4) != 0 || v18 == 23 )
          {
            v33 = (v13 != 0) + 256;
            if ( v18 == 18 )
            {
              v33 = (v13 != 0) + 256;
              if ( v13 )
              {
                if ( dword_1C02126D4 )
                  v33 = (v13 != 0) + 260;
                v34 = a4;
                ApiSetEditionHandleAltTab(18, a2, v37, a3, a4, (__int64)&v47, v46, v33);
                goto LABEL_25;
              }
              gppiLockSFW = 0LL;
            }
          }
          else
          {
            v33 = (v13 != 0) + 260;
            v37 |= 0x2000u;
            if ( v18 == 18 )
            {
              v34 = a4;
              dword_1C02126D4 = 1;
              if ( !v13 )
                gppiLockSFW = 0LL;
              goto LABEL_25;
            }
            dword_1C02126D4 = 0;
          }
          v34 = a4;
LABEL_25:
          LOBYTE(v27) = ApiSetEditionHandleAndPostKeyEvent(
                          a8,
                          v17,
                          v40,
                          v13,
                          v18,
                          v24,
                          a2,
                          a1,
                          v37,
                          a7,
                          (__int64)&v47,
                          a3,
                          v46,
                          v34,
                          v33,
                          v49);
          return v27;
        }
        v31 = 6LL;
      }
    }
    goto LABEL_60;
  }
  if ( dword_1C020CB50 > 4u )
  {
    LOBYTE(v27) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x4000uLL);
    if ( (_BYTE)v27 )
      LOBYTE(v27) = TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E594E, 0LL, 0LL, 2u, &pData);
  }
  return v27;
}
