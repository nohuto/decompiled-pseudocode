/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C01FB318
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1C01FB950 (xxxDrawAnimatedRects.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GetWindowBorders @ 0x1C00C3220 (GetWindowBorders.c)
 *     _WindowFromDC @ 0x1C00E50F0 (_WindowFromDC.c)
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C01FB23C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 */

void __fastcall xxxAnimateCaption(struct tagWND *a1, HDC a2, struct tagRECT *a3, struct tagRECT *a4)
{
  struct tagWND *v6; // r12
  unsigned int DpiForSystem; // eax
  unsigned int v8; // ebx
  HDC CompatibleDC; // rdi
  LONG top; // ebp
  LONG left; // r14d
  int v12; // r13d
  int v13; // esi
  int WindowBorders; // r15d
  unsigned int v15; // eax
  int DpiDependentMetric; // eax
  int v17; // edx
  unsigned int v18; // edx
  HDC v19; // rcx
  __int64 v20; // rdx
  __int64 ThreadWin32Thread; // rax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // r13d
  __int64 i; // rax
  int v33; // r8d
  unsigned int v34; // ecx
  unsigned __int16 v35; // cx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  LONG v43; // [rsp+60h] [rbp-C8h]
  int v44; // [rsp+60h] [rbp-C8h]
  LONG v45; // [rsp+64h] [rbp-C4h]
  int v46; // [rsp+64h] [rbp-C4h]
  int v47; // [rsp+68h] [rbp-C0h]
  LONG v48; // [rsp+6Ch] [rbp-BCh]
  int v49; // [rsp+70h] [rbp-B8h]
  int v51; // [rsp+80h] [rbp-A8h]
  int BugCheckParameter2a; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v55; // [rsp+90h] [rbp-98h]
  __int64 v56; // [rsp+98h] [rbp-90h]
  __int64 CompatibleBitmapInternal; // [rsp+A0h] [rbp-88h]
  _QWORD v58[3]; // [rsp+A8h] [rbp-80h] BYREF
  RECT v59; // [rsp+C0h] [rbp-68h] BYREF

  *(_QWORD *)&v59.left = a4;
  v6 = WindowFromDC(a2);
  if ( v6 )
  {
    DpiForSystem = GetDpiForSystem();
    v8 = GetDpiDependentMetric(2LL, DpiForSystem) - 1;
    if ( !gProtocolType && (*(_DWORD *)(gpsi + 2236LL) & 2) == 0 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(ghdcMem);
      if ( CompatibleDC )
      {
        top = a3->top;
        left = a3->left;
        v12 = a4->right - a4->left;
        v13 = a3->right - a3->left;
        v43 = a4->left;
        v45 = a4->top;
        WindowBorders = GetWindowBorders(
                          *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL),
                          *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL));
        v15 = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(2LL, v15);
        v17 = 2 * WindowBorders;
        if ( a3->bottom - top > DpiDependentMetric )
        {
          left += WindowBorders;
          top += WindowBorders;
          v13 -= v17;
        }
        if ( *(_DWORD *)(*(_QWORD *)&v59.left + 12LL) - v45 > DpiDependentMetric )
        {
          v43 += WindowBorders;
          v45 += WindowBorders;
          v12 -= v17;
        }
        v49 = left;
        v18 = v12;
        v48 = top;
        if ( v13 > v12 )
          v18 = v13;
        v47 = v13;
        v59.left = 0;
        v59.top = v8;
        v19 = *(HDC *)(gpDispInfo + 56LL);
        v59.right = v18;
        v59.bottom = 2 * v8;
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(v19, v18, 2 * v8, 0, 0LL, 0LL);
        v56 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
        v58[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v58;
        v58[1] = v6;
        _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
        if ( gbDisableAlpha || (v22 = 45, ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010) )
          v22 = 13;
        xxxDrawCaptionTemp((__int64 *)a1, CompatibleDC, &v59, 0LL, 0LL, 0LL, v22);
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        EnterRenderBlock();
        UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
        EnterSharedCrit(0LL, 1LL);
        EnterSharedRenderCrit();
        v27 = SaveScreen(v6, 0, 0LL, left, top, v13, v8);
        if ( v27
          || (v28 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v13, v8, a2, left, top, 13369376, 0, 0), v30 = 0LL, v28) )
        {
          v44 = v43 - left;
          v46 = v45 - top;
          v31 = v12 - v13;
          v55 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          NtGdiBitBltInternal(a2, left, top, v13, v8, CompatibleDC, 0, v8, 13369376, 0, 0);
          for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
          {
            v35 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v55;
            if ( v35 > 0xFAu )
              break;
            v33 = v35;
            v34 = (int)((unsigned __int64)(274877907LL * (v44 * v35 + 125)) >> 32) >> 4;
            BugCheckParameter2a = left + (v34 >> 31) + v34;
            v59.left = top + (v46 * v33 + 125) / 250;
            v51 = v13 + (v31 * v33 + 125) / 250;
            UserSleep(1LL);
            if ( v27 )
              SaveScreen(v6, 1u, v27, v49, v48, v47, v8);
            else
              NtGdiBitBltInternal(a2, v49, v48, v47, v8, CompatibleDC, 0, 0, 13369376, 0, 0);
            v49 = BugCheckParameter2a;
            v48 = v59.left;
            v47 = v51;
            if ( v27 )
              v27 = SaveScreen(v6, 0, 0LL, BugCheckParameter2a, v59.left, v51, v8);
            else
              NtGdiBitBltInternal(CompatibleDC, 0, 0, v51, v8, a2, BugCheckParameter2a, v59.left, 13369376, 0, 0);
            NtGdiBitBltInternal(a2, BugCheckParameter2a, v59.left, v51, v8, CompatibleDC, 0, v8, 13369376, 0, 0);
          }
          if ( v27 )
            SaveScreen(v6, 1u, v27, v49, v48, v47, v8);
          else
            NtGdiBitBltInternal(a2, v49, v48, v47, v8, CompatibleDC, 0, 0, 13369376, 0, 0);
        }
        LeaveRenderBlock(v29, v30);
        LeaveRenderCrit();
        UserSessionSwitchLeaveCrit(v37, v36, v38, v39);
        EnterCrit(0LL, 1LL);
        ThreadUnlock1(v41, v40, v42);
        GreSelectBitmap(CompatibleDC, v56);
        GreDeleteObject(CompatibleBitmapInternal);
        GreDeleteDC(CompatibleDC);
      }
    }
  }
}
