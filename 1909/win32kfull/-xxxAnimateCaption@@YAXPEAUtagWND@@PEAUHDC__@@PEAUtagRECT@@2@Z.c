/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023BA94
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1C023C0C0 (xxxDrawAnimatedRects.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 *     _WindowFromDC @ 0x1C00E3ECC (_WindowFromDC.c)
 *     GetWindowBorders @ 0x1C012DDEC (GetWindowBorders.c)
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023B9B8 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 */

void __fastcall xxxAnimateCaption(struct tagWND *a1, HDC a2, struct tagRECT *a3, struct tagRECT *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int DpiForSystem; // eax
  LONG v10; // ebx
  HDC CompatibleDC; // rdi
  __int64 v12; // r8
  LONG top; // r14d
  LONG left; // r15d
  int v15; // r13d
  int v16; // esi
  int WindowBorders; // r12d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  int DpiDependentMetric; // eax
  int v23; // edx
  unsigned int v24; // edx
  HDC v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 ThreadWin32Thread; // rax
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r12
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // r13d
  __int64 i; // rax
  int v37; // r8d
  unsigned int v38; // ecx
  unsigned __int16 v39; // cx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  LONG v44; // [rsp+60h] [rbp-79h]
  int v45; // [rsp+60h] [rbp-79h]
  LONG v46; // [rsp+64h] [rbp-75h]
  int v47; // [rsp+64h] [rbp-75h]
  int v48; // [rsp+68h] [rbp-71h]
  int v49; // [rsp+6Ch] [rbp-6Dh]
  int v50; // [rsp+70h] [rbp-69h]
  int v52; // [rsp+80h] [rbp-59h]
  int BugCheckParameter2a; // [rsp+88h] [rbp-51h]
  int v56; // [rsp+90h] [rbp-49h]
  struct tagWND *v57; // [rsp+98h] [rbp-41h]
  unsigned __int64 v59; // [rsp+A0h] [rbp-39h]
  __int64 v60; // [rsp+A8h] [rbp-31h]
  __int64 CompatibleBitmapInternal; // [rsp+B0h] [rbp-29h]
  __int64 v62; // [rsp+B8h] [rbp-21h] BYREF
  struct tagWND *v63; // [rsp+C0h] [rbp-19h]
  __int64 v64; // [rsp+C8h] [rbp-11h]
  struct tagRECT v65; // [rsp+D0h] [rbp-9h] BYREF

  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  *(_QWORD *)&v65.right = 0LL;
  v57 = WindowFromDC(a2);
  if ( v57 )
  {
    DpiForSystem = GetDpiForSystem(v7, v6, v8);
    v10 = GetDpiDependentMetric(2LL, DpiForSystem) - 1;
    if ( !gProtocolType && (*(_DWORD *)(gpsi + 2236LL) & 2) == 0 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(ghdcMem);
      if ( CompatibleDC )
      {
        top = a3->top;
        left = a3->left;
        v15 = a4->right - a4->left;
        v16 = a3->right - a3->left;
        v44 = a4->left;
        v46 = a4->top;
        WindowBorders = GetWindowBorders(
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL),
                          v12);
        v21 = GetDpiForSystem(v19, v18, v20);
        DpiDependentMetric = GetDpiDependentMetric(2LL, v21);
        v23 = 2 * WindowBorders;
        if ( a3->bottom - top > DpiDependentMetric )
        {
          left += WindowBorders;
          top += WindowBorders;
          v16 -= v23;
        }
        if ( a4->bottom - v46 > DpiDependentMetric )
        {
          v44 += WindowBorders;
          v46 += WindowBorders;
          v15 -= v23;
        }
        v65.left = 0;
        v24 = v15;
        v50 = left;
        v49 = top;
        if ( v16 > v15 )
          v24 = v16;
        v48 = v16;
        v25 = *(HDC *)(gpDispInfo + 56LL);
        v65.top = v10;
        v65.right = v24;
        v65.bottom = 2 * v10;
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(v25, v24, 2 * v10, 0, 0LL, 0LL);
        v60 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27);
        v62 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v62;
        v63 = v57;
        HMLockObject(v57);
        if ( gbDisableAlpha || (v29 = 45, ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010) )
          v29 = 13;
        xxxDrawCaptionTemp((__int64 *)a1, CompatibleDC, &v65, 0LL, 0LL, 0LL, v29);
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        EnterRenderBlock();
        UserSessionSwitchLeaveCrit(v30);
        EnterSharedCrit(0LL, 1LL);
        EnterSharedRenderCrit();
        v31 = SaveScreen(v57, 0, 0LL, left, top, v16, v10);
        if ( v31
          || (v32 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v16, v10, a2, left, top, 13369376, 0, 0), v34 = 0LL, v32) )
        {
          v45 = v44 - left;
          v47 = v46 - top;
          v35 = v15 - v16;
          v59 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          NtGdiBitBltInternal(a2, left, top, v16, v10, CompatibleDC, 0, v10, 13369376, 0, 0);
          for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
          {
            v39 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v59;
            if ( v39 > 0xFAu )
              break;
            v37 = v39;
            v38 = (int)((unsigned __int64)(274877907LL * (v45 * v39 + 125)) >> 32) >> 4;
            BugCheckParameter2a = left + (v38 >> 31) + v38;
            v56 = top + (v47 * v37 + 125) / 250;
            v52 = v16 + (v35 * v37 + 125) / 250;
            UserSleep(1LL);
            if ( v31 )
              SaveScreen(v57, 1u, v31, v50, v49, v48, v10);
            else
              NtGdiBitBltInternal(a2, v50, v49, v48, v10, CompatibleDC, 0, 0, 13369376, 0, 0);
            v50 = BugCheckParameter2a;
            v49 = v56;
            v48 = v52;
            if ( v31 )
              v31 = SaveScreen(v57, 0, 0LL, BugCheckParameter2a, v56, v52, v10);
            else
              NtGdiBitBltInternal(CompatibleDC, 0, 0, v52, v10, a2, BugCheckParameter2a, v56, 13369376, 0, 0);
            NtGdiBitBltInternal(a2, BugCheckParameter2a, v56, v52, v10, CompatibleDC, 0, v10, 13369376, 0, 0);
          }
          if ( v31 )
            SaveScreen(v57, 1u, v31, v50, v49, v48, v10);
          else
            NtGdiBitBltInternal(a2, v50, v49, v48, v10, CompatibleDC, 0, 0, 13369376, 0, 0);
        }
        LeaveRenderBlock(v33, v34);
        LeaveRenderCrit();
        UserSessionSwitchLeaveCrit(v40);
        EnterCrit(0LL, 1LL);
        ThreadUnlock1(v42, v41, v43);
        GreSelectBitmap(CompatibleDC, v60);
        GreDeleteObject(CompatibleBitmapInternal);
        GreDeleteDC(CompatibleDC);
      }
    }
  }
}
