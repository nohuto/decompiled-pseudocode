/*
 * XREFs of xxxDrawAnimatedRects @ 0x1C01FB950
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     NtUserDrawAnimatedRects @ 0x1C01ECE90 (NtUserDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C01FBAB4 (xxxMinimizeHungWindow.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     GetThreadDesktopWindow @ 0x1C00F06E0 (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C01FB318 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 */

__int64 __fastcall xxxDrawAnimatedRects(struct tagWND *a1, int a2, struct tagRECT *a3, struct tagRECT *a4)
{
  struct tagRECT v5; // xmm1
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 DesktopWindow; // rax
  __int64 v10; // rbx
  __int64 DCEx; // rax
  _DWORD *v12; // rdx
  HDC v13; // r14
  int v14; // r8d
  int v15; // r9d
  int v16; // r10d
  int v17; // edx
  __int64 ThreadDesktopWindow; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int128 v22; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v23; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v24; // [rsp+40h] [rbp-38h] BYREF

  v5 = *a4;
  v23 = *a3;
  v24 = v5;
  if ( a2 != 3 )
    return 1LL;
  v7 = 0LL;
  if ( !a1 || a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0LL;
  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    return 1LL;
  v8 = *((_QWORD *)a1 + 10);
  if ( !v8 )
    goto LABEL_13;
  DesktopWindow = GetDesktopWindow(*((_QWORD *)a1 + 10));
  v10 = 0LL;
  if ( v8 != DesktopWindow )
    v10 = v8;
  if ( v10 )
  {
    DCEx = _GetDCEx(v10, 1LL, 65665LL);
    v12 = *(_DWORD **)(v10 + 40);
    v13 = (HDC)DCEx;
    v14 = v12[22];
    v15 = v12[26];
    v16 = v12[23];
    v17 = v12[27];
    do
    {
      *(&v23.left + 2 * v7) += v15 - v14;
      *(&v23.top + 2 * v7++) += v17 - v16;
    }
    while ( v7 < 4 );
  }
  else
  {
LABEL_13:
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL, v8);
    v22 = *(_OWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 104LL);
    v21 = GreCreateRectRgnIndirect(&v22, v19, v20);
    if ( !v21 )
      v21 = 1LL;
    v13 = (HDC)_GetDCEx(ThreadDesktopWindow, v21, 1155LL);
  }
  xxxAnimateCaption(a1, v13, &v23, &v24);
  _ReleaseDC(v13);
  return 1LL;
}
