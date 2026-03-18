/*
 * XREFs of ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C002B790
 * Callers:
 *     xxxDCEWindowHitTestIndirect @ 0x1C002B5A0 (xxxDCEWindowHitTestIndirect.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01EF1DC (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C0009DE0 (IsMessageOnlyWindow.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C002B5A0 (xxxDCEWindowHitTestIndirect.c)
 *     IsWindowHolographicForHitTest @ 0x1C002BD40 (IsWindowHolographicForHitTest.c)
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C002E5D4 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     DCELayerHitTest @ 0x1C00A2B0C (DCELayerHitTest.c)
 *     DwmSyncHitTestQuery @ 0x1C00B95F4 (DwmSyncHitTestQuery.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     DCEHitTestWindow @ 0x1C01D183C (DCEHitTestWindow.c)
 *     GetWindowFrameRect @ 0x1C01EFBAC (GetWindowFrameRect.c)
 *     SizeBoxHwnd @ 0x1C0240DA0 (SizeBoxHwnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HWND __fastcall xxxDCEWindowHitTest2Internal(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a3)
{
  __int64 v3; // rax
  int v4; // r13d
  int v5; // r12d
  struct tagWND *v7; // rsi
  struct tagPOINT v8; // rbx
  __int64 Prop; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r15d
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  LONG y; // ebp
  __int64 v18; // rcx
  __int64 v20; // rcx
  _DWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rbp
  struct _KTHREAD *CurrentThread; // r15
  __int64 *ThreadWin32Thread; // rax
  HWND v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 DesktopWindow; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  void *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  int *v41; // rax
  unsigned __int8 *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // [rsp+50h] [rbp-88h] BYREF
  struct tagPOINT v45; // [rsp+58h] [rbp-80h] BYREF
  __int64 v46; // [rsp+60h] [rbp-78h] BYREF
  __int64 v47; // [rsp+68h] [rbp-70h]
  _QWORD v48[3]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v49[16]; // [rsp+88h] [rbp-50h] BYREF

  v3 = *((_QWORD *)a3 + 2);
  v4 = 0;
  v45 = a2;
  v5 = -2;
  LODWORD(v46) = -2;
  LODWORD(v44) = 1;
  v47 = v3;
  v7 = a1;
  v8 = a2;
  if ( !a1 )
    return 0LL;
  Prop = RealGetProp(*((_QWORD *)a1 + 15), CInputQueueProp::s_atom, 1LL);
  if ( Prop )
  {
    if ( !*(_DWORD *)(Prop + 24) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    if ( (*(_BYTE *)(*((_QWORD *)v7 + 5) + 235LL) & 1) == 0 )
      goto LABEL_10;
    v11 = RealGetProp(*((_QWORD *)v7 + 15), CoreWindowProp::s_atom, 1LL);
    if ( v11 )
    {
      if ( *(_DWORD *)(v11 + 20) )
        goto LABEL_10;
    }
  }
  if ( (unsigned int)IsWindowHolographicForHitTest(v7) )
  {
LABEL_10:
    v12 = 1;
    if ( (*((_DWORD *)a3 + 8) & 8) == 0 )
      return 0LL;
    LOBYTE(v13) = IsMessageOnlyWindow((__int64)v7);
    if ( v13 )
      goto LABEL_13;
  }
  else
  {
    v12 = 0;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0x10) == 0 )
    return 0LL;
LABEL_13:
  if ( (unsigned int)GetWindowCloakState(v7) )
  {
    if ( ((*(_BYTE *)(*((_QWORD *)v7 + 5) + 235LL) & 1) == 0
       || (v14 = RealGetProp(*((_QWORD *)v7 + 15), CoreWindowProp::s_atom, 1LL)) == 0
       || !*(_DWORD *)(v14 + 20))
      && !(unsigned int)IsWindowHolographicForHitTest(v7) )
    {
      return 0LL;
    }
  }
  if ( v12 )
    goto LABEL_23;
  if ( *((_QWORD *)v7 + 25) && (*((_DWORD *)a3 + 8) & 4) == 0 )
  {
    GetWindowFrameRect(v7, v49);
    v15 = *((_QWORD *)a3 + 5);
    v16 = *((_QWORD *)v7 + 25);
    v45 = (struct tagPOINT)**((_QWORD **)a3 + 7);
    if ( (unsigned int)DCEHitTestWindow(v49, v16, &v45, v15) )
    {
      v8 = v45;
LABEL_23:
      y = v45.y;
      goto LABEL_24;
    }
    return 0LL;
  }
  v20 = *((_QWORD *)v7 + 19);
  if ( v20 )
  {
    y = v45.y;
    if ( !(unsigned int)GrePtInRegion(v20, (unsigned int)v8.x, (unsigned int)v45.y) )
      return 0LL;
  }
  else
  {
    v21 = (_DWORD *)*((_QWORD *)v7 + 5);
    if ( v8.x < v21[22] )
      return 0LL;
    if ( v8.x >= v21[24] )
      return 0LL;
    y = v45.y;
    if ( v45.y < v21[23] || v45.y >= v21[25] )
      return 0LL;
  }
LABEL_24:
  v18 = *(_QWORD *)(*((_QWORD *)v7 + 5) + 168LL);
  if ( v18 )
  {
    if ( !(unsigned int)GrePtInRegion(v18, (unsigned int)v8.x, (unsigned int)y) )
      return 0LL;
  }
  else
  {
    v22 = *((_QWORD *)v7 + 19);
    if ( v22 && !(unsigned int)GrePtInRegion(v22, (unsigned int)v8.x, (unsigned int)y) )
      return 0LL;
  }
  v23 = *((_QWORD *)v7 + 5);
  if ( (*(_BYTE *)(v23 + 26) & 8) != 0
    && (*(_DWORD *)(v23 + 232) & 0x20) == 0
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))DCELayerHitTest)(v7, v8) )
  {
    return 0LL;
  }
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v7) && (*((_DWORD *)a3 + 8) & 1) != 0 )
  {
    if ( !v12 && (*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0xC0) == 0x40 )
      return 0LL;
    v4 = 1;
  }
  if ( *((_QWORD *)v7 + 25) )
  {
    *((_DWORD *)a3 + 12) = 1;
    *((_QWORD *)a3 + 2) = LOWORD(v8.x) | ((unsigned __int16)y << 16);
  }
  if ( !v4 )
  {
    if ( v12 )
      goto LABEL_76;
    v25 = *((_QWORD *)v7 + 5);
    if ( (*(_BYTE *)(v25 + 31) & 0x20) != 0
      || v8.x < *(_DWORD *)(v25 + 104)
      || v8.x >= *(_DWORD *)(v25 + 112)
      || y < *(_DWORD *)(v25 + 108)
      || y >= *(_DWORD *)(v25 + 116) )
    {
      LODWORD(v30) = v44;
    }
    else
    {
      v26 = *((_QWORD *)v7 + 11);
      v27 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v25, v24) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v27 = *ThreadWin32Thread;
      }
      v48[0] = *(_QWORD *)(v27 + 416);
      *(_QWORD *)(v27 + 416) = v48;
      v48[1] = v26;
      if ( v26 )
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
      v30 = xxxDCEWindowHitTestIndirect(*((struct tagWND **)v7 + 11), v45, (__int64)a3);
      ThreadUnlock1(v32, v31);
      if ( v30 )
        return v30;
    }
    if ( *((_QWORD *)v7 + 2) != gptiCurrent )
    {
LABEL_76:
      v5 = 1;
    }
    else
    {
      if ( !*((_QWORD *)v7 + 10) )
        goto LABEL_73;
      DesktopWindow = GetDesktopWindow(v7);
      if ( v34 != DesktopWindow
        || !(unsigned int)IsWindowDesktopComposed(v7)
        || (*(_BYTE *)(*((_QWORD *)v7 + 5) + 26LL) & 8) == 0
        || !(_DWORD)v30 )
      {
        goto LABEL_73;
      }
      if ( gdwInAtomicOperation )
      {
        v35 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      v36 = (void *)ReferenceDwmApiPort(v35, gdwInAtomicOperation);
      LODWORD(v44) = 1;
      UserSessionSwitchLeaveCrit(v38, v37, v39, v40);
      DwmSyncHitTestQuery(v36, *((_QWORD *)a3 + 1), *((_QWORD *)a3 + 2), -2, (__int64)&v46, (__int64)&v44);
      EnterCrit(0LL, 1LL);
      if ( (_DWORD)v44 )
      {
        v5 = v46;
      }
      else
      {
LABEL_73:
        _InterlockedIncrement(&glSendMessage);
        v5 = xxxSendTransformableMessageTimeout((ULONG_PTR)v7, 0, 0, 0LL, 1, 0);
      }
      if ( v5 == -1 )
      {
        *((_QWORD *)a3 + 2) = v47;
        *((_DWORD *)a3 + 12) = 0;
        return 0LL;
      }
    }
  }
  v41 = (int *)*((_QWORD *)a3 + 3);
  if ( v41 )
  {
    *v41 = v5;
    *((_DWORD *)a3 + 9) = 1;
  }
  v42 = (unsigned __int8 *)*((_QWORD *)v7 + 5);
  if ( v5 == (((v42[25] ^ (unsigned int)(unsigned __int8)~v42[26]) >> 6) & 1) + 16 && (v42[30] & 4) == 0 )
  {
    v43 = SizeBoxHwnd(v7);
    if ( v43 )
      v7 = (struct tagWND *)v43;
  }
  return *(HWND *)v7;
}
