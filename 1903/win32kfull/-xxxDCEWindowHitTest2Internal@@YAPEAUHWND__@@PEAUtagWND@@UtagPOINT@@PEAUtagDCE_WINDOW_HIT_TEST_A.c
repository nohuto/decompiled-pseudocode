/*
 * XREFs of ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00C8570
 * Callers:
 *     xxxDCEWindowHitTestIndirect @ 0x1C00C8310 (xxxDCEWindowHitTestIndirect.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C02055A0 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C0010C20 (IsMessageOnlyWindow.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0019940 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     DCELayerHitTest @ 0x1C00463A8 (DCELayerHitTest.c)
 *     DwmSyncHitTestQuery @ 0x1C0083B48 (DwmSyncHitTestQuery.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C00C8310 (xxxDCEWindowHitTestIndirect.c)
 *     IsWindowHolographicForHitTest @ 0x1C00C8B00 (IsWindowHolographicForHitTest.c)
 *     GetWindowCloakState @ 0x1C00C8BCC (GetWindowCloakState.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C8C80 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     DCEHitTestWindow @ 0x1C01E645C (DCEHitTestWindow.c)
 *     SizeBoxHwnd @ 0x1C0259ABC (SizeBoxHwnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HWND __fastcall xxxDCEWindowHitTest2Internal(
        __int64 BugCheckParameter2,
        struct tagPOINT a2,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a3)
{
  int v3; // r13d
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  int v8; // r12d
  __int64 Prop; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  signed int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  _DWORD *v24; // rax
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v30; // r9
  __int64 *ThreadWin32Thread; // rax
  HWND v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  void *v38; // rbx
  __int64 v39; // rcx
  int *v40; // rax
  unsigned __int8 *v41; // rdx
  __int64 v42; // rax
  _DWORD v43[3]; // [rsp+54h] [rbp-25h] BYREF
  __int64 v44; // [rsp+60h] [rbp-19h] BYREF
  __int64 v45; // [rsp+68h] [rbp-11h] BYREF
  __int64 v46; // [rsp+70h] [rbp-9h]
  __int64 v47; // [rsp+78h] [rbp-1h] BYREF
  __int64 v48; // [rsp+80h] [rbp+7h]
  __int64 v49; // [rsp+88h] [rbp+Fh]

  *(struct tagPOINT *)&v43[1] = a2;
  v47 = 0LL;
  v3 = -2;
  v48 = 0LL;
  v49 = 0LL;
  v43[0] = 0;
  v6 = BugCheckParameter2;
  v7 = (unsigned __int64)a2;
  v46 = *((_QWORD *)a3 + 2);
  LODWORD(v44) = -2;
  if ( !BugCheckParameter2 )
    return 0LL;
  v8 = 0;
  Prop = RealGetProp(*(_QWORD *)(BugCheckParameter2 + 144), CInputQueueProp::s_atom, 1LL);
  if ( Prop )
  {
    if ( !*(_DWORD *)(Prop + 24) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    v8 = 1;
  }
  if ( (unsigned int)IsWindowHolographicForHitTest(v6) )
    goto LABEL_16;
  if ( !v8 )
    goto LABEL_19;
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 235LL) & 1) != 0 )
  {
    v13 = RealGetProp(*(_QWORD *)(v6 + 144), CoreWindowProp::s_atom, 1LL);
    if ( v13 )
    {
      if ( *(_DWORD *)(v13 + 20) )
      {
LABEL_16:
        v8 = 1;
        goto LABEL_17;
      }
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 235LL) & 1) == 0
    && (!CWindowProp::GetProp<CInputQueueProp>(v6, &v45) || (*(_DWORD *)(v45 + 44) & 2) == 0) )
  {
LABEL_17:
    if ( (*((_DWORD *)a3 + 8) & 8) == 0 )
      return 0LL;
    LOBYTE(v14) = IsMessageOnlyWindow(v6);
    if ( v14 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v8 = 0;
LABEL_19:
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0x10) == 0 )
    return 0LL;
LABEL_20:
  if ( (unsigned int)GetWindowCloakState(v6, v11, v12) )
  {
    if ( ((*(_BYTE *)(*(_QWORD *)(v6 + 40) + 235LL) & 1) == 0
       || (v15 = RealGetProp(*(_QWORD *)(v6 + 144), CoreWindowProp::s_atom, 1LL)) == 0
       || !*(_DWORD *)(v15 + 20))
      && !(unsigned int)IsWindowHolographicForHitTest(v6) )
    {
      return 0LL;
    }
  }
  if ( v8 )
    goto LABEL_30;
  v16 = *(_QWORD *)(v6 + 216);
  if ( v16 && (*((_DWORD *)a3 + 8) & 4) == 0 )
  {
    v17 = *((_QWORD *)a3 + 5);
    *(_QWORD *)&v43[1] = **((_QWORD **)a3 + 7);
    if ( (unsigned int)DCEHitTestWindow(*(_QWORD *)(v6 + 40) + 88LL, v16, &v43[1], v17) )
    {
      v7 = *(_QWORD *)&v43[1];
LABEL_30:
      v18 = v43[2];
      goto LABEL_31;
    }
    return 0LL;
  }
  v24 = *(_DWORD **)(v6 + 40);
  if ( (int)v7 < v24[22] )
    return 0LL;
  if ( (int)v7 >= v24[24] )
    return 0LL;
  v18 = v43[2];
  if ( v43[2] < v24[23] || v43[2] >= v24[25] )
    return 0LL;
LABEL_31:
  v19 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 168LL);
  if ( v19 && !(unsigned int)GrePtInRegion(v19, (unsigned int)v7, (unsigned int)v18) )
    return 0LL;
  v20 = *(_QWORD *)(v6 + 40);
  if ( (*(_BYTE *)(v20 + 26) & 8) != 0 && (*(_DWORD *)(v20 + 232) & 0x20) == 0 && !DCELayerHitTest(v6, v7) )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v6)
    && (*((_DWORD *)a3 + 8) & 1) != 0 )
  {
    if ( !v8 && (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0xC0) == 0x40 )
      return 0LL;
    v23 = 1LL;
  }
  else
  {
    v23 = v43[0];
  }
  if ( *(_QWORD *)(v6 + 216) )
  {
    *((_DWORD *)a3 + 12) = 1;
    *((_QWORD *)a3 + 2) = (unsigned __int16)v7 | ((unsigned __int16)v18 << 16);
  }
  if ( !(_DWORD)v23 )
  {
    if ( v8 )
      goto LABEL_77;
    v26 = *(_QWORD *)(v6 + 40);
    if ( (*(_BYTE *)(v26 + 31) & 0x20) != 0
      || (int)v7 < *(_DWORD *)(v26 + 104)
      || (int)v7 >= *(_DWORD *)(v26 + 112)
      || v18 < *(_DWORD *)(v26 + 108)
      || v18 >= *(_DWORD *)(v26 + 116) )
    {
      LODWORD(v32) = 1;
    }
    else
    {
      v27 = *(_QWORD *)(v6 + 112);
      v28 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v23, v21, v22) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v28 = *ThreadWin32Thread;
      }
      v47 = *(_QWORD *)(v28 + 408);
      *(_QWORD *)(v28 + 408) = &v47;
      v48 = v27;
      if ( v27 )
        HMLockObject(v27);
      v32 = xxxDCEWindowHitTestIndirect(*(_QWORD *)(v6 + 112), *(struct tagPOINT *)&v43[1], (__int64)a3, v30);
      ThreadUnlock1(v34, v33, v35);
      if ( v32 )
        return v32;
    }
    if ( *(_QWORD *)(v6 + 16) != gptiCurrent )
    {
LABEL_77:
      v3 = 1;
    }
    else
    {
      if ( !(unsigned int)IsTopLevelWindow(v6)
        || !(unsigned int)IsWindowDesktopComposed(v6)
        || (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 26LL) & 8) == 0
        || !(_DWORD)v32 )
      {
        goto LABEL_74;
      }
      if ( gdwInAtomicOperation )
      {
        v36 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      v38 = (void *)ReferenceDwmApiPort(v36, gdwInAtomicOperation, v37);
      v43[0] = 1;
      UserSessionSwitchLeaveCrit(v39);
      DwmSyncHitTestQuery(
        v38,
        *(_QWORD *)v6,
        *(_DWORD *)a3,
        *(_QWORD *)&a2,
        *((_QWORD *)a3 + 1),
        *((_QWORD *)a3 + 2),
        -2,
        &v44,
        v43);
      EnterCrit(0LL, 1LL);
      if ( v43[0] )
      {
        v3 = v44;
      }
      else
      {
LABEL_74:
        _InterlockedIncrement(&glSendMessage);
        v3 = xxxSendTransformableMessageTimeout(
               (__int64 *)v6,
               0x84u,
               0LL,
               (struct _LARGE_STRING *)(LOWORD(v43[1]) | (LOWORD(v43[2]) << 16)),
               0,
               0,
               0LL,
               1u,
               0);
      }
      if ( v3 == -1 )
      {
        *((_QWORD *)a3 + 2) = v46;
        *((_DWORD *)a3 + 12) = 0;
        return 0LL;
      }
    }
  }
  v40 = (int *)*((_QWORD *)a3 + 3);
  if ( v40 )
  {
    *v40 = v3;
    *((_DWORD *)a3 + 9) = 1;
  }
  v41 = *(unsigned __int8 **)(v6 + 40);
  if ( v3 == (((v41[25] ^ (unsigned int)(unsigned __int8)~v41[26]) >> 6) & 1) + 16 && (v41[30] & 4) == 0 )
  {
    v42 = SizeBoxHwnd(v6);
    if ( v42 )
      v6 = v42;
  }
  return *(HWND *)v6;
}
