/*
 * XREFs of ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023F9CC
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00E96D0 (xxxTooltipWndProc.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0022D4C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0022E5C (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C0125908 (GreExtTextOutWInternal.c)
 *     GetDPIMETRICSForDpi @ 0x1C012A5CC (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C012B54C (GreSetBkMode.c)
 *     FillRect @ 0x1C012BF54 (FillRect.c)
 *     CALL_LPK @ 0x1C0158514 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C0158550 (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall xxxTooltipRender(WCHAR **a1, HDC a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // edi
  __int64 ThreadWin32Thread; // rax
  int v10; // eax
  WCHAR *SourceString; // r9
  __int64 v12; // rcx
  RECT v13; // [rsp+50h] [rbp-38h] BYREF

  if ( a1[6] )
  {
    GetDPIMETRICSForDpi();
    GreSelectFont(a2);
    GreSetTextColor(a2, *(_DWORD *)(gpsi + 4660LL));
    *(_QWORD *)&v13.left = 0LL;
    v4 = *(_DWORD *)(gpsi + 4664LL);
    v5 = (_DWORD *)*((_QWORD *)*a1 + 5);
    v13.right = v5[28] - v5[26];
    v13.bottom = v5[29] - v5[27];
    if ( v4 == (unsigned int)GreGetNearestColor(a2, v4) )
    {
      GreSetBkColor(a2, v4);
      v8 = 2;
    }
    else
    {
      FillRect(a2, &v13, *(HBRUSH *)(gpsi + 4888LL));
      GreSetBkMode(a2, 1);
      v8 = 4;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7);
    v10 = CALL_LPK(ThreadWin32Thread);
    SourceString = a1[6];
    v12 = -1LL;
    do
      ++v12;
    while ( SourceString[v12] );
    if ( v10 )
      xxxClientExtTextOutW(a2, 2, 1, v8, &v13, SourceString, v12);
    else
      GreExtTextOutWInternal(a2, 2, 1, v8, &v13, SourceString, v12, 0LL, 0LL, 0);
  }
}
