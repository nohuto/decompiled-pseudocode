/*
 * XREFs of ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C01516EC
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00B84F0 (xxxTooltipWndProc.c)
 * Callees:
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GreSetTextColor @ 0x1C006DDEC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C006DE74 (GreSetBkColor.c)
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 *     GreSetBkMode @ 0x1C007BDE4 (GreSetBkMode.c)
 *     GreExtTextOutWInternal @ 0x1C009B694 (GreExtTextOutWInternal.c)
 *     GetDPIMETRICSForDpi @ 0x1C00AB75C (GetDPIMETRICSForDpi.c)
 *     xxxClientExtTextOutW @ 0x1C0151824 (xxxClientExtTextOutW.c)
 *     CALL_LPK @ 0x1C0151E74 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall xxxTooltipRender(WCHAR **a1, HDC a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // r8
  __int64 v6; // rdx
  int v7; // edi
  __int64 ThreadWin32Thread; // rax
  int v9; // eax
  WCHAR *SourceString; // r9
  __int64 v11; // rcx
  RECT v12; // [rsp+50h] [rbp-38h] BYREF

  if ( a1[6] )
  {
    GetDPIMETRICSForDpi(*(unsigned __int16 *)(*((_QWORD *)*a1 + 5) + 284LL));
    GreSelectFont(a2);
    GreSetTextColor(a2, *(_DWORD *)(gpsi + 4660LL));
    *(_QWORD *)&v12.left = 0LL;
    v4 = *(_DWORD *)(gpsi + 4664LL);
    v5 = (_DWORD *)*((_QWORD *)*a1 + 5);
    v12.right = v5[28] - v5[26];
    v12.bottom = v5[29] - v5[27];
    if ( v4 == (unsigned int)GreGetNearestColor(a2, v4) )
    {
      GreSetBkColor(a2, v4);
      v7 = 2;
    }
    else
    {
      FillRect(a2, &v12, *(HBRUSH *)(gpsi + 4888LL));
      GreSetBkMode(a2, 1);
      v7 = 4;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
    v9 = CALL_LPK(ThreadWin32Thread);
    SourceString = a1[6];
    v11 = -1LL;
    do
      ++v11;
    while ( SourceString[v11] );
    if ( v9 )
      xxxClientExtTextOutW(a2, (__int64)&v12, SourceString, v11);
    else
      GreExtTextOutWInternal(a2, 2, 1, v7, &v12, SourceString, v11, 0LL, 0LL, 0);
  }
}
