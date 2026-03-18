/*
 * XREFs of ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C02293C4
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C0023250 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C006A7A0 (NtUserSetWindowPos.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F520 (IsChildWindowDpiBoundary.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ScaleDpiValueWithSubpixel @ 0x1C01E7520 (ScaleDpiValueWithSubpixel.c)
 *     GetLogicalDpiFromMonitor @ 0x1C0229648 (GetLogicalDpiFromMonitor.c)
 */

void __fastcall TransformSWPCoords(struct tagWND *a1, int *a2, int *a3, int *a4, int *a5, char a6)
{
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned __int16 v17; // ax
  INT v18; // r14d
  unsigned __int16 v19; // r8
  unsigned __int16 v20; // r9
  float *v21; // r10
  INT v22; // eax
  INT v23; // r8d
  INT v24; // edx
  INT v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  INT v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdi
  INT LogicalDpiFromMonitor; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  INT v37; // edi
  unsigned __int16 v38; // [rsp+20h] [rbp-20h]
  unsigned __int16 v39; // [rsp+22h] [rbp-1Eh]
  INT c; // [rsp+28h] [rbp-18h] BYREF
  int v41; // [rsp+2Ch] [rbp-14h]
  int v42; // [rsp+30h] [rbp-10h]
  int v43; // [rsp+34h] [rbp-Ch]

  if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( !v10 )
    {
      v25 = *a3;
      c = *a2;
      v42 = *a4 + c;
      v26 = v25 + *a5;
      v41 = v25;
      v43 = v26;
      TransformRectBetweenCoordinateSpaces(&c, &c, a1, 0LL);
      v27 = v41;
      v28 = v42 - c;
      *a2 = c;
      *a3 = v27;
      *a4 = v28;
      v29 = v43 - v27;
LABEL_19:
      *a5 = v29;
      return;
    }
    if ( (a6 & 2) == 0 )
    {
      c = *a2;
      v41 = *a3;
      TransformPointBetweenCoordinateSpaces(&c, &c, a1, 0LL);
      *a2 = c;
      *a3 = v41;
      return;
    }
    if ( (a6 & 1) == 0 )
    {
      v30 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      v31 = v30;
      if ( v30 )
      {
        LogicalDpiFromMonitor = (unsigned __int16)GetLogicalDpiFromMonitor(
                                                    v30,
                                                    *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v34, v33, v35);
        v37 = (unsigned __int16)GetLogicalDpiFromMonitor(v31, CurrentThreadDpiAwarenessContext);
        v22 = EngMulDiv(*a4, LogicalDpiFromMonitor, v37);
        v23 = v37;
        v24 = LogicalDpiFromMonitor;
LABEL_18:
        *a4 = v22;
        v29 = EngMulDiv(*a5, v24, v23);
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
      v38 = GetLogicalDpiFromMonitor(v11, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
      v16 = W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15);
      v17 = GetLogicalDpiFromMonitor(v12, v16);
      v39 = v17;
      c = v17;
      if ( (a6 & 2) != 0 )
      {
        v18 = v17;
      }
      else
      {
        *a2 = EngMulDiv(*a2, v38, v17);
        v18 = c;
        *a3 = EngMulDiv(*a3, v38, c);
      }
      if ( (a6 & 1) == 0 )
      {
        if ( (unsigned int)IsChildWindowDpiBoundary(a1) )
        {
          *((_DWORD *)a1 + 58) = 0;
          *((_DWORD *)a1 + 59) = 0;
          ScaleDpiValueWithSubpixel(a4, (float *)a1 + 58, v38, v39);
          ScaleDpiValueWithSubpixel(a5, v21, v19, v20);
          return;
        }
        v22 = EngMulDiv(*a4, v38, v18);
        v23 = v18;
        v24 = v38;
        goto LABEL_18;
      }
    }
  }
}
