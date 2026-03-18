/*
 * XREFs of ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0139FCC
 * Callers:
 *     xxxDCEWindowHitTest @ 0x1C00D62E0 (xxxDCEWindowHitTest.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C00D68D0 (xxxDCEWindowHitTestIndirect.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01CAE78 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C00351EC (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     IsWindowHolographicForHitTest @ 0x1C00352C0 (IsWindowHolographicForHitTest.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     DwmSyncHitTestQuery @ 0x1C0056D80 (DwmSyncHitTestQuery.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C00D68D0 (xxxDCEWindowHitTestIndirect.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00DAD58 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessage @ 0x1C00EE8A0 (xxxSendTransformableMessage.c)
 *     IsMessageOnlyWindow @ 0x1C00F1F50 (IsMessageOnlyWindow.c)
 *     DCELayerHitTest @ 0x1C00FD40C (DCELayerHitTest.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01AE940 (DCEHitTestWindow.c)
 *     GetWindowFrameRect @ 0x1C01CB7F8 (GetWindowFrameRect.c)
 *     SizeBoxHwnd @ 0x1C022AE24 (SizeBoxHwnd.c)
 */

HWND __fastcall xxxDCEWindowHitTest2Internal(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a3)
{
  int v3; // r13d
  __int64 v4; // rax
  struct tagWND *v7; // r14
  unsigned __int64 v8; // rbx
  int v10; // esi
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int y; // r12d
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 ThreadWin32Thread; // rax
  HWND v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  void *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  int *v36; // rax
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // [rsp+50h] [rbp-29h] BYREF
  struct tagPOINT v40; // [rsp+58h] [rbp-21h] BYREF
  int v41; // [rsp+60h] [rbp-19h]
  _DWORD v42[3]; // [rsp+64h] [rbp-15h] BYREF
  _QWORD v43[3]; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v44[16]; // [rsp+88h] [rbp+Fh] BYREF

  v41 = 0;
  v3 = -2;
  v4 = *((_QWORD *)a3 + 2);
  v40 = a2;
  v42[0] = -2;
  v7 = a1;
  LODWORD(v39) = 1;
  v8 = (unsigned __int64)a2;
  *(_QWORD *)&v42[1] = v4;
  if ( !a1 )
    return 0LL;
  v10 = IsCompositionInputWindowForHitTest(a1);
  if ( !v10 )
    goto LABEL_6;
  if ( (*((_DWORD *)a3 + 8) & 8) == 0 )
    return 0LL;
  LOBYTE(v11) = IsMessageOnlyWindow((__int64)v7);
  if ( !v11 )
  {
LABEL_6:
    if ( (*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0x10) == 0 )
      return 0LL;
  }
  if ( (unsigned int)GetWindowCloakState(v7)
    && !(unsigned int)CoreWindowProp::IsComponent(v7)
    && !(unsigned int)IsWindowHolographicForHitTest(v7) )
  {
    return 0LL;
  }
  if ( v10 )
    goto LABEL_19;
  if ( *((_QWORD *)v7 + 25) && (*((_DWORD *)a3 + 8) & 4) == 0 )
  {
    GetWindowFrameRect(v7, v44);
    v12 = *((_QWORD *)a3 + 5);
    v13 = *((_QWORD *)v7 + 25);
    v40 = (struct tagPOINT)**((_QWORD **)a3 + 7);
    if ( (unsigned int)DCEHitTestWindow(v44, v13, &v40, v12) )
    {
      v8 = (unsigned __int64)v40;
LABEL_19:
      y = v40.y;
      goto LABEL_20;
    }
    return 0LL;
  }
  v14 = *((_QWORD *)v7 + 19);
  if ( !v14 )
  {
    if ( PtInRect((_DWORD *)(*((_QWORD *)v7 + 5) + 88LL), v8) )
      goto LABEL_19;
    return 0LL;
  }
  y = v40.y;
  if ( !(unsigned int)GrePtInRegion(v14, (unsigned int)v8, (unsigned int)v40.y) )
    return 0LL;
LABEL_20:
  v16 = *(_QWORD *)(*((_QWORD *)v7 + 5) + 168LL);
  if ( (v16 || (v16 = *((_QWORD *)v7 + 19)) != 0) && !(unsigned int)GrePtInRegion(v16, (unsigned int)v8, y) )
    return 0LL;
  v17 = *((_QWORD *)v7 + 5);
  if ( (*(_BYTE *)(v17 + 26) & 8) != 0 && (*(_DWORD *)(v17 + 232) & 0x20) == 0 && !DCELayerHitTest((__int64)v7, v8) )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v7) && (*((_DWORD *)a3 + 8) & 1) != 0 )
  {
    if ( !v10 && (*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0xC0) == 0x40 )
      return 0LL;
    v19 = 1;
  }
  else
  {
    v19 = v41;
  }
  if ( *((_QWORD *)v7 + 25) )
  {
    v18 = (unsigned __int16)v8 | ((unsigned __int16)y << 16);
    *((_DWORD *)a3 + 12) = 1;
    *((_QWORD *)a3 + 2) = v18;
  }
  if ( !v19 )
  {
    if ( v10 )
      goto LABEL_57;
    v20 = *((_QWORD *)v7 + 5);
    if ( (*(_BYTE *)(v20 + 31) & 0x20) != 0 || !PtInRect((_DWORD *)(v20 + 104), v8) )
    {
      LODWORD(v24) = v39;
    }
    else
    {
      v22 = *((_QWORD *)v7 + 11);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
      v43[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v43;
      v43[1] = v22;
      if ( v22 )
        _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
      LOWORD(v8) = v40.x;
      v24 = xxxDCEWindowHitTestIndirect(*((struct tagWND **)v7 + 11), v40, (__int64)a3);
      ThreadUnlock1(v26, v25, v27);
      if ( v24 )
        return v24;
      LOWORD(y) = v40.y;
    }
    v18 = gptiCurrent;
    if ( *((_QWORD *)v7 + 2) != gptiCurrent )
    {
LABEL_57:
      v3 = 1;
    }
    else
    {
      if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)v7)
        || (*(_BYTE *)(*((_QWORD *)v7 + 5) + 26LL) & 8) == 0
        || !(_DWORD)v24 )
      {
        goto LABEL_54;
      }
      if ( gdwInAtomicOperation )
      {
        v28 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      v30 = (void *)ReferenceDwmApiPort(v28, gdwInAtomicOperation, v29);
      LODWORD(v39) = 1;
      UserSessionSwitchLeaveCrit(v32, v31, v33, v34);
      DwmSyncHitTestQuery(
        v30,
        *(_QWORD *)v7,
        *(_DWORD *)a3,
        *(_QWORD *)&a2,
        *((_QWORD *)a3 + 1),
        *((_QWORD *)a3 + 2),
        -2,
        v42,
        &v39);
      EnterCrit(0LL, 1LL);
      if ( (_DWORD)v39 )
        v3 = v42[0];
      else
LABEL_54:
        v3 = xxxSendTransformableMessage(
               (__int64 *)v7,
               0x84u,
               0LL,
               (unsigned __int16)v8 | ((unsigned __int16)y << 16),
               0);
      if ( v3 == -1 )
      {
        v35 = *(_QWORD *)&v42[1];
        *((_DWORD *)a3 + 12) = 0;
        *((_QWORD *)a3 + 2) = v35;
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
  v37 = (unsigned __int8 *)*((_QWORD *)v7 + 5);
  LOBYTE(v18) = ~v37[26];
  if ( v3 == (((v37[25] ^ (unsigned int)v18) >> 6) & 1) + 16 && (v37[30] & 4) == 0 )
  {
    v38 = SizeBoxHwnd(v7);
    if ( v38 )
      v7 = (struct tagWND *)v38;
  }
  return *(HWND *)v7;
}
