/*
 * XREFs of ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C02299E4
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C002DB30 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C00C90D0 (NtUserSetWindowPos.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C00CDE50 (IsChildWindowDpiBoundary.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ScaleDpiValueWithSubpixel @ 0x1C01E76A0 (ScaleDpiValueWithSubpixel.c)
 *     GetLogicalDpiFromMonitor @ 0x1C0229C68 (GetLogicalDpiFromMonitor.c)
 */

void __fastcall TransformSWPCoords(struct tagWND *a1, int *a2, int *a3, int *a4, int *a5, char a6)
{
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned __int16 v18; // ax
  INT v19; // r14d
  unsigned __int16 v20; // r8
  unsigned __int16 v21; // r9
  float *v22; // r10
  INT v23; // eax
  INT v24; // r8d
  INT v25; // edx
  INT v26; // edx
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  INT v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdi
  INT LogicalDpiFromMonitor; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  INT v39; // edi
  unsigned __int16 v40; // [rsp+20h] [rbp-20h]
  unsigned __int16 v41; // [rsp+22h] [rbp-1Eh]
  INT c; // [rsp+28h] [rbp-18h] BYREF
  int v43; // [rsp+2Ch] [rbp-14h]
  int v44; // [rsp+30h] [rbp-10h]
  int v45; // [rsp+34h] [rbp-Ch]

  if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( !v10 )
    {
      v26 = *a3;
      c = *a2;
      v44 = *a4 + c;
      v27 = v26 + *a5;
      v43 = v26;
      v45 = v27;
      TransformRectBetweenCoordinateSpaces(&c, &c, a1, 0LL);
      v28 = v43;
      v29 = v44 - c;
      *a2 = c;
      *a3 = v28;
      *a4 = v29;
      v30 = v45 - v28;
LABEL_19:
      *a5 = v30;
      return;
    }
    if ( (a6 & 2) == 0 )
    {
      c = *a2;
      v43 = *a3;
      TransformPointBetweenCoordinateSpaces(&c, &c, a1, 0LL);
      *a2 = c;
      *a3 = v43;
      return;
    }
    if ( (a6 & 1) == 0 )
    {
      v31 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      v32 = v31;
      if ( v31 )
      {
        LogicalDpiFromMonitor = (unsigned __int16)GetLogicalDpiFromMonitor(
                                                    v31,
                                                    *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v35, v34, v36, v37);
        v39 = (unsigned __int16)GetLogicalDpiFromMonitor(v32, CurrentThreadDpiAwarenessContext);
        v23 = EngMulDiv(*a4, LogicalDpiFromMonitor, v39);
        v24 = v39;
        v25 = LogicalDpiFromMonitor;
LABEL_18:
        *a4 = v23;
        v30 = EngMulDiv(*a5, v25, v24);
        goto LABEL_19;
      }
    }
  }
  else if ( v10 != 3 )
  {
    v11 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    v12 = v11;
    if ( v11 )
    {
      v40 = GetLogicalDpiFromMonitor(v11, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
      v17 = W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16);
      v18 = GetLogicalDpiFromMonitor(v12, v17);
      v41 = v18;
      c = v18;
      if ( (a6 & 2) != 0 )
      {
        v19 = v18;
      }
      else
      {
        *a2 = EngMulDiv(*a2, v40, v18);
        v19 = c;
        *a3 = EngMulDiv(*a3, v40, c);
      }
      if ( (a6 & 1) == 0 )
      {
        if ( (unsigned int)IsChildWindowDpiBoundary(a1) )
        {
          *((_DWORD *)a1 + 58) = 0;
          *((_DWORD *)a1 + 59) = 0;
          ScaleDpiValueWithSubpixel(a4, (float *)a1 + 58, v40, v41);
          ScaleDpiValueWithSubpixel(a5, v22, v20, v21);
          return;
        }
        v23 = EngMulDiv(*a4, v40, v19);
        v24 = v19;
        v25 = v40;
        goto LABEL_18;
      }
    }
  }
}
