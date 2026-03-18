/*
 * XREFs of ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C01FF2E4
 * Callers:
 *     xxxTooltipWndProc @ 0x1C01044C0 (xxxTooltipWndProc.c)
 * Callees:
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C001160C (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0013448 (GreSetBkColor.c)
 *     GetDPIMETRICSForDpi @ 0x1C0013D64 (GetDPIMETRICSForDpi.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C007793C (GreExtTextOutWInternal.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 *     CALL_LPK @ 0x1C0132C50 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C0132C8C (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall xxxTooltipRender(WCHAR **a1, HDC a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // r8
  int v6; // r9d
  int v7; // r9d
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 ThreadWin32Thread; // rax
  int v11; // eax
  WCHAR *SourceString; // r9
  __int64 v13; // rcx
  RECT v14; // [rsp+50h] [rbp-38h] BYREF

  if ( a1[6] )
  {
    GetDPIMETRICSForDpi();
    GreSelectFont(a2);
    GreSetTextColor(a2, *(_DWORD *)(gpsi + 4660LL));
    v14.left = 0;
    v4 = *(_DWORD *)(gpsi + 4664LL);
    v5 = (_DWORD *)*((_QWORD *)*a1 + 5);
    v6 = v5[27];
    v14.right = v5[28] - v5[26];
    v7 = -v6;
    v14.top = v7 + v5[27];
    v14.bottom = v7 + v5[29];
    if ( v4 == (unsigned int)GreGetNearestColor(a2, v4) )
    {
      GreSetBkColor(a2, v4);
      v9 = 2;
    }
    else
    {
      FillRect(a2, &v14, *(HBRUSH *)(gpsi + 4888LL));
      GreSetBkMode(a2, 1);
      v9 = 4;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
    v11 = CALL_LPK(ThreadWin32Thread);
    SourceString = a1[6];
    v13 = -1LL;
    do
      ++v13;
    while ( SourceString[v13] );
    if ( v11 )
      xxxClientExtTextOutW(a2, 2, 1, v9, &v14, SourceString, v13);
    else
      GreExtTextOutWInternal(a2, 2, 1, v9, &v14, SourceString, v13, 0LL, 0LL, 0);
  }
}
