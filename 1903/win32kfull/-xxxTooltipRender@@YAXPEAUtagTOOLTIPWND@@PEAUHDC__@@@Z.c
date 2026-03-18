/*
 * XREFs of ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023FFEC
 * Callers:
 *     xxxTooltipWndProc @ 0x1C012F5F0 (xxxTooltipWndProc.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0021E08 (GetDPIMETRICSForDpi.c)
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C007F108 (GreExtTextOutWInternal.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C008CFF8 (GreSetBkMode.c)
 *     FillRect @ 0x1C008DA04 (FillRect.c)
 *     CALL_LPK @ 0x1C0157754 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C0157790 (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall xxxTooltipRender(WCHAR **a1, HDC a2)
{
  __int64 DPIMETRICSForDpi; // rax
  unsigned int v5; // edi
  _DWORD *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edi
  __int64 ThreadWin32Thread; // rax
  int v12; // eax
  WCHAR *SourceString; // r9
  __int64 v14; // rcx
  RECT v15; // [rsp+50h] [rbp-38h] BYREF

  if ( a1[6] )
  {
    DPIMETRICSForDpi = GetDPIMETRICSForDpi();
    GreSelectFont((__int64)a2, *(_QWORD *)(DPIMETRICSForDpi + 56));
    GreSetTextColor(a2, *(_DWORD *)(gpsi + 4660LL));
    *(_QWORD *)&v15.left = 0LL;
    v5 = *(_DWORD *)(gpsi + 4664LL);
    v6 = (_DWORD *)*((_QWORD *)*a1 + 5);
    v15.right = v6[28] - v6[26];
    v15.bottom = v6[29] - v6[27];
    if ( v5 == (unsigned int)GreGetNearestColor(a2, v5) )
    {
      GreSetBkColor(a2, v5);
      v10 = 2;
    }
    else
    {
      FillRect(a2, &v15, *(HBRUSH *)(gpsi + 4888LL));
      GreSetBkMode(a2, 1);
      v10 = 4;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9);
    v12 = CALL_LPK(ThreadWin32Thread);
    SourceString = a1[6];
    v14 = -1LL;
    do
      ++v14;
    while ( SourceString[v14] );
    if ( v12 )
      xxxClientExtTextOutW(a2, 2, 1, v10, &v15, SourceString, v14);
    else
      GreExtTextOutWInternal(a2, 2, 1, v10, &v15, SourceString, v14, 0LL, 0LL, 0);
  }
}
