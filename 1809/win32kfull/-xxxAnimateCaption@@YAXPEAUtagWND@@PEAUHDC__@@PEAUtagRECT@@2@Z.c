/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0223BD4
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1C022426C (xxxDrawAnimatedRects.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     GetWindowBorders @ 0x1C00A8414 (GetWindowBorders.c)
 *     _WindowFromDC @ 0x1C00FF34C (_WindowFromDC.c)
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C0223AF8 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 */

void __fastcall xxxAnimateCaption(struct tagWND *a1, HDC a2, struct tagRECT *a3, struct tagRECT *a4)
{
  struct tagWND *v6; // r12
  unsigned int DpiForSystem; // eax
  __int64 v8; // r8
  LONG v9; // ebx
  __int64 v10; // r8
  HDC CompatibleDC; // rdi
  LONG top; // ebp
  LONG left; // r14d
  int v14; // r13d
  int v15; // esi
  int WindowBorders; // r15d
  unsigned int v17; // eax
  __int64 v18; // r8
  int DpiDependentMetric; // eax
  int v20; // edx
  unsigned int v21; // edx
  HDC v22; // rcx
  __int64 v23; // rdx
  __int64 ThreadWin32Thread; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r15
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // r13d
  __int64 i; // rax
  int v36; // r8d
  unsigned int v37; // ecx
  unsigned __int16 v38; // cx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  LONG v45; // [rsp+60h] [rbp-C8h]
  int v46; // [rsp+60h] [rbp-C8h]
  LONG v47; // [rsp+64h] [rbp-C4h]
  int v48; // [rsp+64h] [rbp-C4h]
  int v49; // [rsp+68h] [rbp-C0h]
  LONG v50; // [rsp+6Ch] [rbp-BCh]
  int v51; // [rsp+70h] [rbp-B8h]
  int v53; // [rsp+80h] [rbp-A8h]
  int BugCheckParameter2a; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v57; // [rsp+90h] [rbp-98h]
  __int64 v58; // [rsp+98h] [rbp-90h]
  HSURF CompatibleBitmapInternal; // [rsp+A0h] [rbp-88h]
  _QWORD v60[3]; // [rsp+A8h] [rbp-80h] BYREF
  struct tagRECT v61; // [rsp+C0h] [rbp-68h] BYREF

  *(_QWORD *)&v61.left = a4;
  v6 = WindowFromDC(a2);
  if ( v6 )
  {
    DpiForSystem = GetDpiForSystem();
    v9 = GetDpiDependentMetric(2LL, DpiForSystem, v8) - 1;
    if ( !gProtocolType && (*(_DWORD *)(gpsi + 2236LL) & 2) == 0 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(ghdcMem, gpsi, v10);
      if ( CompatibleDC )
      {
        top = a3->top;
        left = a3->left;
        v14 = a4->right - a4->left;
        v15 = a3->right - a3->left;
        v45 = a4->left;
        v47 = a4->top;
        WindowBorders = GetWindowBorders(
                          *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL),
                          *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL));
        v17 = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(2LL, v17, v18);
        v20 = 2 * WindowBorders;
        if ( a3->bottom - top > DpiDependentMetric )
        {
          left += WindowBorders;
          top += WindowBorders;
          v15 -= v20;
        }
        if ( *(_DWORD *)(*(_QWORD *)&v61.left + 12LL) - v47 > DpiDependentMetric )
        {
          v45 += WindowBorders;
          v47 += WindowBorders;
          v14 -= v20;
        }
        v51 = left;
        v21 = v14;
        v50 = top;
        if ( v15 > v14 )
          v21 = v15;
        v49 = v15;
        v61.left = 0;
        v61.top = v9;
        v22 = *(HDC *)(gpDispInfo + 56LL);
        v61.right = v21;
        v61.bottom = 2 * v9;
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(v22, v21, 2 * v9, 0, 0LL, 0LL);
        v58 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23);
        v60[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v60;
        v60[1] = v6;
        _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
        if ( gbDisableAlpha || (v25 = 45, ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010) )
          v25 = 13;
        xxxDrawCaptionTemp((__int64 *)a1, CompatibleDC, &v61, 0LL, 0LL, 0LL, v25);
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        EnterRenderBlock();
        UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
        EnterSharedCrit(0LL, 1LL);
        EnterSharedRenderCrit();
        v30 = SaveScreen(v6, 0, 0LL, left, top, v15, v9);
        if ( v30
          || (v31 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v15, v9, a2, left, top, 13369376, 0, 0), v33 = 0LL, v31) )
        {
          v46 = v45 - left;
          v48 = v47 - top;
          v34 = v14 - v15;
          v57 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          NtGdiBitBltInternal(a2, left, top, v15, v9, CompatibleDC, 0, v9, 13369376, 0, 0);
          for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
          {
            v38 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v57;
            if ( v38 > 0xFAu )
              break;
            v36 = v38;
            v37 = (int)((unsigned __int64)(274877907LL * (v46 * v38 + 125)) >> 32) >> 4;
            BugCheckParameter2a = left + (v37 >> 31) + v37;
            v61.left = top + (v48 * v36 + 125) / 250;
            v53 = v15 + (v34 * v36 + 125) / 250;
            UserSleep(1LL);
            if ( v30 )
              SaveScreen(v6, 1u, v30, v51, v50, v49, v9);
            else
              NtGdiBitBltInternal(a2, v51, v50, v49, v9, CompatibleDC, 0, 0, 13369376, 0, 0);
            v51 = BugCheckParameter2a;
            v50 = v61.left;
            v49 = v53;
            if ( v30 )
              v30 = SaveScreen(v6, 0, 0LL, BugCheckParameter2a, v61.left, v53, v9);
            else
              NtGdiBitBltInternal(CompatibleDC, 0, 0, v53, v9, a2, BugCheckParameter2a, v61.left, 13369376, 0, 0);
            NtGdiBitBltInternal(a2, BugCheckParameter2a, v61.left, v53, v9, CompatibleDC, 0, v9, 13369376, 0, 0);
          }
          if ( v30 )
            SaveScreen(v6, 1u, v30, v51, v50, v49, v9);
          else
            NtGdiBitBltInternal(a2, v51, v50, v49, v9, CompatibleDC, 0, 0, 13369376, 0, 0);
        }
        LeaveRenderBlock(v32, v33);
        LeaveRenderCrit();
        UserSessionSwitchLeaveCrit(v40, v39, v41, v42);
        EnterCrit(0LL, 1LL);
        ThreadUnlock1(v44, v43);
        GreSelectBitmap(CompatibleDC, v58);
        GreDeleteObject(CompatibleBitmapInternal);
        GreDeleteDC(CompatibleDC);
      }
    }
  }
}
