/*
 * XREFs of ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0146DC0
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C0146474 (xxxAddShadow.c)
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C002F248 (zzzUpdateLayeredWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     _GetLayeredWindowAttributes @ 0x1C0147068 (_GetLayeredWindowAttributes.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0147108 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzApplyShadow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // r8
  HDC CompatibleDC; // rax
  __int64 v8; // rdi
  HBITMAP WindowShadow; // r14
  __int64 v10; // rdx
  int v11; // r8d
  struct tagSIZE v13; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+38h] BYREF
  char v16; // [rsp+A8h] [rbp+40h] BYREF
  char v17; // [rsp+B0h] [rbp+48h] BYREF
  struct tagPOINT v18; // [rsp+B8h] [rbp+50h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0;
  v4 = *((_QWORD *)a2 + 5);
  v18 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  LODWORD(v15) = 0;
  *(_DWORD *)(v4 + 288) = *(_DWORD *)(v2 + 288);
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v8 = (__int64)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  WindowShadow = GenerateWindowShadow(a1, CompatibleDC);
  if ( !WindowShadow )
  {
    GreDeleteDC(v8);
    return 0LL;
  }
  v10 = *((_QWORD *)a1 + 5);
  v11 = *(_DWORD *)(v10 + 88);
  v18 = *(struct tagPOINT *)(v10 + 88);
  v13.cx = *(_DWORD *)(v10 + 96) - *(_DWORD *)(v10 + 88) + 5;
  v13.cy = *(_DWORD *)(v10 + 100) - *(_DWORD *)(v10 + 92) + 5;
  if ( (*(_BYTE *)(v10 + 26) & 0x40) != 0 )
    v18.x = v11 - 5;
  WORD1(v15) = 511;
  if ( !(unsigned int)GetLayeredWindowAttributes(a1, &v17, (char *)&v15 + 2, &v16) || (v16 & 2) == 0 )
    BYTE2(v15) = -1;
  ++gdwDeferWinEvent;
  LOBYTE(v3) = (int)zzzUpdateLayeredWindow(a2, 0LL, &v18, &v13, v8, (__int64)&v14, 0, (__int64)&v15, 2u, 0LL) >= 0;
  GreDeleteDC(v8);
  GreDeleteObject(WindowShadow);
  zzzEndDeferWinEventNotify();
  return v3;
}
