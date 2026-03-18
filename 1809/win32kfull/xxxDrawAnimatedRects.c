/*
 * XREFs of xxxDrawAnimatedRects @ 0x1C022426C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     NtUserDrawAnimatedRects @ 0x1C02131E0 (NtUserDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C02243EC (xxxMinimizeHungWindow.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00431A8 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     GetThreadDesktopWindow @ 0x1C0109EB8 (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0223BD4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 */

__int64 __fastcall xxxDrawAnimatedRects(struct tagWND *a1, int a2, struct tagRECT *a3, struct tagRECT *a4)
{
  struct tagRECT v5; // xmm1
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 DesktopWindow; // rax
  __int64 v9; // rbx
  __int64 DCEx; // rax
  _DWORD *v11; // rcx
  HDC v12; // r14
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // r10d
  __int64 ThreadDesktopWindow; // rbx
  __int64 v18; // rax
  __int128 v20; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v21; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v22; // [rsp+40h] [rbp-38h] BYREF

  v5 = *a4;
  v21 = *a3;
  v22 = v5;
  if ( a2 != 3 )
    return 1LL;
  v6 = 0LL;
  if ( !a1 || a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0LL;
  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    return 1LL;
  v7 = *((_QWORD *)a1 + 10);
  if ( !v7 )
    goto LABEL_12;
  DesktopWindow = GetDesktopWindow(*((_QWORD *)a1 + 10));
  v9 = 0LL;
  if ( v7 != DesktopWindow )
    v9 = v7;
  if ( v9 )
  {
    DCEx = _GetDCEx(v9, 1LL, 65665LL);
    v11 = *(_DWORD **)(v9 + 40);
    v12 = (HDC)DCEx;
    v13 = v11[22];
    v14 = v11[26];
    v15 = v11[23];
    v16 = v11[27];
    do
    {
      *(&v21.left + 2 * v6) += v14 - v13;
      *(&v21.top + 2 * v6++) += v16 - v15;
    }
    while ( v6 < 4 );
  }
  else
  {
LABEL_12:
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL, v7);
    v20 = *(_OWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 104LL);
    v18 = GreCreateRectRgnIndirect(&v20);
    if ( !v18 )
      v18 = 1LL;
    v12 = (HDC)_GetDCEx(ThreadDesktopWindow, v18, 1155LL);
  }
  xxxAnimateCaption(a1, v12, &v21, &v22);
  _ReleaseDC(v12);
  return 1LL;
}
