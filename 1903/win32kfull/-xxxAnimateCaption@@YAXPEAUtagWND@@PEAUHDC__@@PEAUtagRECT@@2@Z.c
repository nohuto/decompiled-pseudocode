/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023C0B4
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1C023C6E0 (xxxDrawAnimatedRects.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GetWindowBorders @ 0x1C00905B4 (GetWindowBorders.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     _WindowFromDC @ 0x1C010992C (_WindowFromDC.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023BFD8 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 */

void __fastcall xxxAnimateCaption(struct tagWND *a1, HDC a2, struct tagRECT *a3, struct tagRECT *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int DpiForSystem; // eax
  LONG v11; // ebx
  HDC CompatibleDC; // rdi
  LONG top; // r14d
  unsigned int left; // r15d
  int v15; // r13d
  int v16; // esi
  int WindowBorders; // r12d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // eax
  int DpiDependentMetric; // eax
  int v24; // edx
  unsigned int v25; // edx
  HDC v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 ThreadWin32Thread; // rax
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r12
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // r13d
  __int64 i; // rax
  int v39; // r8d
  unsigned int v40; // ecx
  unsigned __int16 v41; // cx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  LONG v46; // [rsp+60h] [rbp-79h]
  unsigned int v47; // [rsp+60h] [rbp-79h]
  LONG v48; // [rsp+64h] [rbp-75h]
  int v49; // [rsp+64h] [rbp-75h]
  int v50; // [rsp+68h] [rbp-71h]
  int v51; // [rsp+6Ch] [rbp-6Dh]
  unsigned int v52; // [rsp+70h] [rbp-69h]
  int v54; // [rsp+80h] [rbp-59h]
  unsigned int v56; // [rsp+88h] [rbp-51h]
  int v58; // [rsp+90h] [rbp-49h]
  struct tagWND *v59; // [rsp+98h] [rbp-41h]
  unsigned __int64 v61; // [rsp+A0h] [rbp-39h]
  __int64 CompatibleBitmapInternal; // [rsp+B0h] [rbp-29h]
  __int64 v63; // [rsp+B8h] [rbp-21h] BYREF
  struct tagWND *v64; // [rsp+C0h] [rbp-19h]
  __int64 v65; // [rsp+C8h] [rbp-11h]
  struct tagRECT v66; // [rsp+D0h] [rbp-9h] BYREF

  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  *(_QWORD *)&v66.right = 0LL;
  v59 = WindowFromDC(a2);
  if ( v59 )
  {
    DpiForSystem = GetDpiForSystem(v7, v6, v8, v9);
    v11 = GetDpiDependentMetric(2LL, DpiForSystem) - 1;
    if ( !gProtocolType && (*(_DWORD *)(gpsi + 2236LL) & 2) == 0 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(ghdcMem);
      if ( CompatibleDC )
      {
        top = a3->top;
        left = a3->left;
        v15 = a4->right - a4->left;
        v16 = a3->right - a3->left;
        v46 = a4->left;
        v48 = a4->top;
        WindowBorders = GetWindowBorders(
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL));
        v22 = GetDpiForSystem(v19, v18, v20, v21);
        DpiDependentMetric = GetDpiDependentMetric(2LL, v22);
        v24 = 2 * WindowBorders;
        if ( a3->bottom - top > DpiDependentMetric )
        {
          left += WindowBorders;
          top += WindowBorders;
          v16 -= v24;
        }
        if ( a4->bottom - v48 > DpiDependentMetric )
        {
          v46 += WindowBorders;
          v48 += WindowBorders;
          v15 -= v24;
        }
        v66.left = 0;
        v25 = v15;
        v52 = left;
        v51 = top;
        if ( v16 > v15 )
          v25 = v16;
        v50 = v16;
        v26 = *(HDC *)(gpDispInfo + 56LL);
        v66.top = v11;
        v66.right = v25;
        v66.bottom = 2 * v11;
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(v26, v25, 2 * v11, 0, 0LL, 0LL);
        GreSelectBitmap(CompatibleDC);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29);
        v63 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v63;
        v64 = v59;
        HMLockObject(v59);
        if ( gbDisableAlpha || (v31 = 45, ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010) )
          v31 = 13;
        xxxDrawCaptionTemp((ULONG_PTR)a1, CompatibleDC, &v66, 0LL, 0LL, 0LL, v31);
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        EnterRenderBlock();
        UserSessionSwitchLeaveCrit(v32);
        EnterSharedCrit(0LL, 1LL);
        EnterSharedRenderCrit();
        v33 = SaveScreen(v59, 0, 0LL, left, top, v16, v11);
        if ( v33
          || (v34 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v16, v11, a2, left, top, 13369376, 0, 0), v36 = 0LL, v34) )
        {
          v47 = v46 - left;
          v49 = v48 - top;
          v37 = v15 - v16;
          v61 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          NtGdiBitBltInternal(a2, left, top, v16, v11, CompatibleDC, 0, v11, 13369376, 0, 0);
          for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
          {
            v41 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v61;
            if ( v41 > 0xFAu )
              break;
            v39 = v41;
            v40 = (int)((unsigned __int64)(274877907LL * (int)(v47 * v41 + 125)) >> 32) >> 4;
            v56 = left + (v40 >> 31) + v40;
            v58 = top + (v49 * v39 + 125) / 250;
            v54 = v16 + (v37 * v39 + 125) / 250;
            UserSleep(1LL);
            if ( v33 )
              SaveScreen(v59, 1u, v33, v52, v51, v50, v11);
            else
              NtGdiBitBltInternal(a2, v52, v51, v50, v11, CompatibleDC, 0, 0, 13369376, 0, 0);
            v52 = v56;
            v51 = v58;
            v50 = v54;
            if ( v33 )
              v33 = SaveScreen(v59, 0, 0LL, v56, v58, v54, v11);
            else
              NtGdiBitBltInternal(CompatibleDC, 0, 0, v54, v11, a2, v56, v58, 13369376, 0, 0);
            NtGdiBitBltInternal(a2, v56, v58, v54, v11, CompatibleDC, 0, v11, 13369376, 0, 0);
          }
          if ( v33 )
            SaveScreen(v59, 1u, v33, v52, v51, v50, v11);
          else
            NtGdiBitBltInternal(a2, v52, v51, v50, v11, CompatibleDC, 0, 0, 13369376, 0, 0);
        }
        LeaveRenderBlock(v35, v36);
        LeaveRenderCrit();
        UserSessionSwitchLeaveCrit(v42);
        EnterCrit(0LL, 1LL);
        ThreadUnlock1(v44, v43, v45);
        GreSelectBitmap(CompatibleDC);
        GreDeleteObject(CompatibleBitmapInternal);
        GreDeleteDC(CompatibleDC);
      }
    }
  }
}
