/*
 * XREFs of xxxDrawAnimatedRects @ 0x1C023C6E0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     NtUserDrawAnimatedRects @ 0x1C022B010 (NtUserDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C023C86C (xxxMinimizeHungWindow.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C0022D88 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     GetThreadDesktopWindow @ 0x1C010B1CC (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023C0B4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 */

__int64 __fastcall xxxDrawAnimatedRects(struct tagWND *a1, int a2, struct tagRECT *a3, struct tagRECT *a4)
{
  struct tagRECT v4; // xmm0
  struct tagRECT v6; // xmm1
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 DesktopWindow; // rax
  __int64 v10; // rbx
  __int64 DCEx; // rax
  _DWORD *v12; // rcx
  HDC v13; // r14
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // r10d
  __int64 ThreadDesktopWindow; // rbx
  __int64 v19; // rax
  __int128 v21; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v22; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v23; // [rsp+40h] [rbp-38h] BYREF

  v4 = *a3;
  v21 = 0uLL;
  v6 = *a4;
  v22 = v4;
  v23 = v6;
  if ( a2 != 3 )
    return 1LL;
  v7 = 0LL;
  if ( !a1 || a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0LL;
  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    return 1LL;
  v8 = *((_QWORD *)a1 + 13);
  if ( !v8 )
    goto LABEL_12;
  DesktopWindow = GetDesktopWindow(*((_QWORD *)a1 + 13));
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
      *(&v22.left + 2 * v7) += v15 - v14;
      *(&v22.top + 2 * v7++) += v17 - v16;
    }
    while ( v7 < 4 );
  }
  else
  {
LABEL_12:
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL, v8);
    v21 = *(_OWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 104LL);
    v19 = GreCreateRectRgnIndirect(&v21);
    if ( !v19 )
      v19 = 1LL;
    v13 = (HDC)_GetDCEx(ThreadDesktopWindow, v19, 1155LL);
  }
  xxxAnimateCaption(a1, v13, &v22, &v23);
  _ReleaseDC(v13);
  return 1LL;
}
