/*
 * XREFs of xxxCalcCaptionButton @ 0x1C0202828
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C0056FA4 (xxxGetTitleBarInfoEx.c)
 *     xxxTrackCaptionButton @ 0x1C0202AE0 (xxxTrackCaptionButton.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     xxxMNCanClose @ 0x1C00C3104 (xxxMNCanClose.c)
 *     GetWindowBordersForDpi @ 0x1C00C3A30 (GetWindowBordersForDpi.c)
 */

__int64 __fastcall xxxCalcCaptionButton(_QWORD *a1, int a2, __int16 *a3, _DWORD *a4, int *a5, int a6)
{
  __int64 v10; // r8
  unsigned int WindowDpiLastNotify; // ebp
  __int64 v12; // rax
  int v13; // r9d
  int WindowBordersForDpi; // eax
  __int64 v15; // rax
  int v16; // r15d
  int v17; // ebx
  int DpiDependentMetric; // r12d
  int v19; // ebx
  __int16 v20; // ax
  __int64 v21; // rax
  int *v22; // rax
  int v23; // edx
  int v24; // eax
  int v25; // r9d
  unsigned __int16 v26; // r10
  int v27; // r8d
  __int64 v28; // rcx
  int v29; // eax
  int v31; // [rsp+68h] [rbp+10h]

  *a3 = 0;
  v10 = a1[5];
  if ( (*(_DWORD *)(v10 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
  }
  else if ( (*(_DWORD *)(v10 + 288) & 0xF) == 0
         && (v12 = *(_QWORD *)(a1[2] + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v12 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 416LL) + 284LL);
  }
  if ( (*(_BYTE *)(v10 + 31) & 0x20) != 0 )
  {
    v13 = -3;
  }
  else
  {
    WindowBordersForDpi = GetWindowBordersForDpi(
                            *(_DWORD *)(v10 + 28),
                            *(_DWORD *)(v10 + 24),
                            v10,
                            (__int64)a4,
                            WindowDpiLastNotify);
    v10 = a1[5];
    v13 = -WindowBordersForDpi;
  }
  *a4 = *(_DWORD *)(v10 + 88) - v13;
  a4[2] = v13 + *(_DWORD *)(v10 + 96);
  a4[1] = *(_DWORD *)(v10 + 92) - v13;
  a4[3] = v13 + *(_DWORD *)(v10 + 100);
  v15 = a1[5];
  v31 = -*(_DWORD *)(v15 + 92);
  v16 = -*(_DWORD *)(v15 + 88);
  v17 = (*(char *)(v15 + 24) >> 7) & 0xB;
  DpiDependentMetric = GetDpiDependentMetric((unsigned int)(v17 + 12), WindowDpiLastNotify);
  v19 = GetDpiDependentMetric((unsigned int)(v17 + 13), WindowDpiLastNotify);
  if ( a2 != 5 )
  {
    v21 = a1[5];
    if ( a2 == 2 )
    {
      if ( (*(_BYTE *)(v21 + 30) & 2) == 0 && !a6 )
        goto LABEL_29;
      LOWORD(v16) = v16 + 2;
      a4[2] += -2 * DpiDependentMetric;
      v22 = a5;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 0x20) == 0 )
      {
        *a5 = 4;
        v20 = -4064;
        goto LABEL_15;
      }
    }
    else
    {
      if ( a2 != 3 )
      {
        if ( (*(_BYTE *)(v21 + 25) & 4) != 0 )
        {
          a4[2] -= DpiDependentMetric;
          *a5 = 11;
          *a3 = -3712;
        }
        goto LABEL_29;
      }
      if ( (*(_BYTE *)(v21 + 30) & 1) == 0 && !a6 )
        goto LABEL_29;
      a4[2] -= DpiDependentMetric;
      v22 = a5;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 1) == 0 )
      {
        *a5 = 14;
        v20 = -4048;
        goto LABEL_15;
      }
    }
    *v22 = 8;
    *a3 = -3808;
    goto LABEL_30;
  }
  if ( (unsigned int)xxxMNCanClose(a1) || a6 )
  {
    *a5 = (*(char *)(a1[5] + 24LL) >> 7) & 0x29;
    v20 = -4000;
LABEL_15:
    *a3 = v20;
  }
LABEL_29:
  if ( !*a3 )
  {
    v26 = v31;
    return (unsigned __int16)v16 | (v26 << 16);
  }
LABEL_30:
  v23 = a4[1];
  v24 = a4[2] - DpiDependentMetric;
  LOWORD(v16) = v24 + v16;
  v25 = a4[2] + 1;
  v26 = v23 + v31 + 2;
  v27 = v24 - 1;
  a4[2] = v25;
  *a4 = v24 - 1;
  a4[1] = v23 - 1;
  a4[3] = v19 + v23 + 1;
  v28 = a1[5];
  if ( (*(_BYTE *)(v28 + 26) & 0x40) != 0 )
  {
    v29 = *(_DWORD *)(v28 + 88) + *(_DWORD *)(v28 + 96) - v27;
    a4[2] = v29;
    *a4 = v29 + v27 - v25;
  }
  return (unsigned __int16)v16 | (v26 << 16);
}
