/*
 * XREFs of ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01EB9C0
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C00144C0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0034750 (NtUserSetWindowPos.c)
 * Callees:
 *     IsChildWindowDpiBoundary @ 0x1C002A5A8 (IsChildWindowDpiBoundary.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ScaleDpiValueWithSubpixel @ 0x1C01AFCB0 (ScaleDpiValueWithSubpixel.c)
 */

void __fastcall TransformSWPCoords(struct tagWND *a1, int *a2, int *a3, int *a4, int *a5, char a6)
{
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rcx
  unsigned __int16 v15; // di
  unsigned __int16 v16; // si
  INT v17; // r13d
  INT v18; // eax
  INT v19; // r8d
  unsigned __int16 v20; // r8
  unsigned __int16 v21; // r9
  float *v22; // r10
  int *v23; // rbx
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  INT v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rcx
  unsigned __int16 v33; // di
  unsigned __int16 v34; // ax
  INT v35; // ebx
  INT c; // [rsp+20h] [rbp-30h] BYREF
  int v37; // [rsp+24h] [rbp-2Ch]
  int *v38; // [rsp+28h] [rbp-28h]
  INT *v39; // [rsp+30h] [rbp-20h]
  int *v40; // [rsp+38h] [rbp-18h] BYREF
  int v41; // [rsp+40h] [rbp-10h]
  int v42; // [rsp+44h] [rbp-Ch]

  v40 = a3;
  v39 = a2;
  v38 = a5;
  if ( !(unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( v10 != 3 )
    {
      v11 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      v13 = v11;
      if ( v11 )
      {
        v14 = *((_QWORD *)a1 + 5);
        v15 = (*(_DWORD *)(v14 + 288) >> 8) & 0x1FF;
        if ( !v15 )
        {
          v14 = *(_QWORD *)(v11 + 40);
          v15 = *(_WORD *)(v14 + 64);
        }
        v16 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v14, v12) >> 8) & 0x1FF;
        if ( !v16 )
          v16 = *(_WORD *)(*(_QWORD *)(v13 + 40) + 64LL);
        v17 = v16;
        c = v16;
        if ( (a6 & 2) == 0 )
        {
          v18 = EngMulDiv(*v39, v15, v16);
          v19 = c;
          *v39 = v18;
          *v40 = EngMulDiv(*v40, v15, v19);
          v17 = c;
        }
        if ( (a6 & 1) == 0 )
        {
          if ( (unsigned int)IsChildWindowDpiBoundary(a1) )
          {
            *((_DWORD *)a1 + 54) = 0;
            *((_DWORD *)a1 + 55) = 0;
            ScaleDpiValueWithSubpixel(a4, (float *)a1 + 54, v15, v16);
            ScaleDpiValueWithSubpixel(v38, v22, v20, v21);
          }
          else
          {
            v23 = v38;
            *a4 = EngMulDiv(*a4, v15, v17);
            *v23 = EngMulDiv(*v23, v15, v17);
          }
        }
      }
    }
    return;
  }
  if ( !v10 )
  {
    v24 = *a3;
    LODWORD(v40) = *a2;
    v41 = *a4 + (_DWORD)v40;
    v25 = v24 + *a5;
    HIDWORD(v40) = v24;
    v42 = v25;
    TransformRectBetweenCoordinateSpaces(&v40, &v40, a1, 0LL);
    v26 = HIDWORD(v40);
    v27 = v41 - (_DWORD)v40;
    *a2 = (int)v40;
    *a3 = v26;
    *a4 = v27;
    v28 = v42 - v26;
LABEL_25:
    *a5 = v28;
    return;
  }
  if ( (a6 & 2) == 0 )
  {
    c = *a2;
    v37 = *a3;
    TransformPointBetweenCoordinateSpaces(&c, &c, a1, 0LL);
    *a2 = c;
    *a3 = v37;
    return;
  }
  if ( (a6 & 1) == 0 )
  {
    v29 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    v31 = v29;
    if ( v29 )
    {
      v32 = *((_QWORD *)a1 + 5);
      v33 = (*(_DWORD *)(v32 + 288) >> 8) & 0x1FF;
      if ( !v33 )
      {
        v32 = *(_QWORD *)(v29 + 40);
        v33 = *(_WORD *)(v32 + 64);
      }
      v34 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v32, v30) >> 8) & 0x1FF;
      if ( !v34 )
        v34 = *(_WORD *)(*(_QWORD *)(v31 + 40) + 64LL);
      v35 = v34;
      *a4 = EngMulDiv(*a4, v33, v34);
      v28 = EngMulDiv(*a5, v33, v35);
      goto LABEL_25;
    }
  }
}
