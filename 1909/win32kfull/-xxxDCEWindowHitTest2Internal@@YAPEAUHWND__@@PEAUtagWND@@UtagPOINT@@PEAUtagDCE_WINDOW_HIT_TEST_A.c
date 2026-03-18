/*
 * XREFs of ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0069C40
 * Callers:
 *     xxxDCEWindowHitTestIndirect @ 0x1C00699E0 (xxxDCEWindowHitTestIndirect.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C02052F0 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C000B7B0 (IsMessageOnlyWindow.c)
 *     DwmSyncHitTestQuery @ 0x1C000E2A0 (DwmSyncHitTestQuery.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0021730 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C00699E0 (xxxDCEWindowHitTestIndirect.c)
 *     IsWindowHolographicForHitTest @ 0x1C006A1D0 (IsWindowHolographicForHitTest.c)
 *     GetWindowCloakState @ 0x1C006A29C (GetWindowCloakState.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A350 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     DCELayerHitTest @ 0x1C008AD78 (DCELayerHitTest.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     DCEHitTestWindow @ 0x1C01E62DC (DCEHitTestWindow.c)
 *     SizeBoxHwnd @ 0x1C025937C (SizeBoxHwnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HWND __fastcall xxxDCEWindowHitTest2Internal(
        __int64 BugCheckParameter2,
        struct tagPOINT a2,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a3)
{
  int v3; // r13d
  __int64 v6; // rsi
  struct tagPOINT v7; // rbx
  int v8; // r12d
  __int64 Prop; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  signed int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  _DWORD *v21; // rax
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 *ThreadWin32Thread; // rax
  HWND v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  void *v34; // rbx
  __int64 v35; // rcx
  int *v36; // rax
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  _DWORD v39[3]; // [rsp+54h] [rbp-25h] BYREF
  __int64 v40; // [rsp+60h] [rbp-19h] BYREF
  __int64 v41; // [rsp+68h] [rbp-11h] BYREF
  __int64 v42; // [rsp+70h] [rbp-9h]
  __int64 v43; // [rsp+78h] [rbp-1h] BYREF
  __int64 v44; // [rsp+80h] [rbp+7h]
  __int64 v45; // [rsp+88h] [rbp+Fh]

  *(struct tagPOINT *)&v39[1] = a2;
  v43 = 0LL;
  v3 = -2;
  v44 = 0LL;
  v45 = 0LL;
  v39[0] = 0;
  v6 = BugCheckParameter2;
  v7 = a2;
  v42 = *((_QWORD *)a3 + 2);
  LODWORD(v40) = -2;
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
    v11 = RealGetProp(*(_QWORD *)(v6 + 144), CoreWindowProp::s_atom, 1LL);
    if ( v11 )
    {
      if ( *(_DWORD *)(v11 + 20) )
      {
LABEL_16:
        v8 = 1;
        goto LABEL_17;
      }
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 235LL) & 1) == 0
    && (!CWindowProp::GetProp<CInputQueueProp>(v6, &v41) || (*(_DWORD *)(v41 + 44) & 2) == 0) )
  {
LABEL_17:
    if ( (*((_DWORD *)a3 + 8) & 8) == 0 )
      return 0LL;
    LOBYTE(v12) = IsMessageOnlyWindow(v6);
    if ( v12 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v8 = 0;
LABEL_19:
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0x10) == 0 )
    return 0LL;
LABEL_20:
  if ( (unsigned int)GetWindowCloakState(v6) )
  {
    if ( ((*(_BYTE *)(*(_QWORD *)(v6 + 40) + 235LL) & 1) == 0
       || (v13 = RealGetProp(*(_QWORD *)(v6 + 144), CoreWindowProp::s_atom, 1LL)) == 0
       || !*(_DWORD *)(v13 + 20))
      && !(unsigned int)IsWindowHolographicForHitTest(v6) )
    {
      return 0LL;
    }
  }
  if ( v8 )
    goto LABEL_30;
  v14 = *(_QWORD *)(v6 + 216);
  if ( v14 && (*((_DWORD *)a3 + 8) & 4) == 0 )
  {
    v15 = *((_QWORD *)a3 + 5);
    *(_QWORD *)&v39[1] = **((_QWORD **)a3 + 7);
    if ( (unsigned int)DCEHitTestWindow(*(_QWORD *)(v6 + 40) + 88LL, v14, &v39[1], v15) )
    {
      v7 = *(struct tagPOINT *)&v39[1];
LABEL_30:
      v16 = v39[2];
      goto LABEL_31;
    }
    return 0LL;
  }
  v21 = *(_DWORD **)(v6 + 40);
  if ( v7.x < v21[22] )
    return 0LL;
  if ( v7.x >= v21[24] )
    return 0LL;
  v16 = v39[2];
  if ( v39[2] < v21[23] || v39[2] >= v21[25] )
    return 0LL;
LABEL_31:
  v17 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 168LL);
  if ( v17 && !(unsigned int)GrePtInRegion(v17, (unsigned int)v7.x, (unsigned int)v16) )
    return 0LL;
  v18 = *(_QWORD *)(v6 + 40);
  if ( (*(_BYTE *)(v18 + 26) & 8) != 0
    && (*(_DWORD *)(v18 + 232) & 0x20) == 0
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))DCELayerHitTest)(v6, v7) )
  {
    return 0LL;
  }
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v6)
    && (*((_DWORD *)a3 + 8) & 1) != 0 )
  {
    if ( !v8 && (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0xC0) == 0x40 )
      return 0LL;
    v20 = 1LL;
  }
  else
  {
    v20 = v39[0];
  }
  if ( *(_QWORD *)(v6 + 216) )
  {
    *((_DWORD *)a3 + 12) = 1;
    *((_QWORD *)a3 + 2) = LOWORD(v7.x) | ((unsigned __int16)v16 << 16);
  }
  if ( !(_DWORD)v20 )
  {
    if ( v8 )
      goto LABEL_77;
    v23 = *(_QWORD *)(v6 + 40);
    if ( (*(_BYTE *)(v23 + 31) & 0x20) != 0
      || v7.x < *(_DWORD *)(v23 + 104)
      || v7.x >= *(_DWORD *)(v23 + 112)
      || v16 < *(_DWORD *)(v23 + 108)
      || v16 >= *(_DWORD *)(v23 + 116) )
    {
      LODWORD(v28) = 1;
    }
    else
    {
      v24 = *(_QWORD *)(v6 + 112);
      v25 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v20, v19) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v25 = *ThreadWin32Thread;
      }
      v43 = *(_QWORD *)(v25 + 408);
      *(_QWORD *)(v25 + 408) = &v43;
      v44 = v24;
      if ( v24 )
        HMLockObject(v24);
      v28 = xxxDCEWindowHitTestIndirect(*(_QWORD *)(v6 + 112), *(struct tagPOINT *)&v39[1], (__int64)a3);
      ThreadUnlock1(v30, v29, v31);
      if ( v28 )
        return v28;
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
        || !(_DWORD)v28 )
      {
        goto LABEL_74;
      }
      if ( gdwInAtomicOperation )
      {
        v32 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      v34 = (void *)ReferenceDwmApiPort(v32, gdwInAtomicOperation, v33);
      v39[0] = 1;
      UserSessionSwitchLeaveCrit(v35);
      DwmSyncHitTestQuery(
        v34,
        *(_QWORD *)v6,
        *(_DWORD *)a3,
        *(_QWORD *)&a2,
        *((_QWORD *)a3 + 1),
        *((_QWORD *)a3 + 2),
        -2,
        &v40,
        v39);
      EnterCrit(0LL, 1LL);
      if ( v39[0] )
      {
        v3 = v40;
      }
      else
      {
LABEL_74:
        _InterlockedIncrement(&glSendMessage);
        v3 = xxxSendTransformableMessageTimeout(
               (__int64 *)v6,
               0x84u,
               0LL,
               (struct _LARGE_STRING *)(LOWORD(v39[1]) | (LOWORD(v39[2]) << 16)),
               0,
               0,
               0LL,
               1u,
               0);
      }
      if ( v3 == -1 )
      {
        *((_QWORD *)a3 + 2) = v42;
        *((_DWORD *)a3 + 12) = 0;
        return 0LL;
      }
    }
  }
  v36 = (int *)*((_QWORD *)a3 + 3);
  if ( v36 )
  {
    *v36 = v3;
    *((_DWORD *)a3 + 9) = 1;
  }
  v37 = *(unsigned __int8 **)(v6 + 40);
  if ( v3 == (((v37[25] ^ (unsigned int)(unsigned __int8)~v37[26]) >> 6) & 1) + 16 && (v37[30] & 4) == 0 )
  {
    v38 = SizeBoxHwnd(v6);
    if ( v38 )
      v6 = v38;
  }
  return *(HWND *)v6;
}
