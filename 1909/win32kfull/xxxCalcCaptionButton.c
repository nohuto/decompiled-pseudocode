/*
 * XREFs of xxxCalcCaptionButton @ 0x1C0243AFC
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C0016514 (xxxGetTitleBarInfoEx.c)
 *     xxxTrackCaptionButton @ 0x1C0243DB0 (xxxTrackCaptionButton.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     xxxMNCanClose @ 0x1C004A180 (xxxMNCanClose.c)
 *     GetWindowBordersForDpi @ 0x1C012DCF8 (GetWindowBordersForDpi.c)
 */

__int64 __fastcall xxxCalcCaptionButton(__int64 a1, int a2, __int16 *a3, _DWORD *a4, int *a5, int a6)
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
  __int64 v19; // rdx
  int v20; // ebx
  __int64 v21; // r8
  __int16 v22; // ax
  __int64 v23; // rax
  int *v24; // rax
  int v25; // edx
  int v26; // eax
  int v27; // r9d
  unsigned __int16 v28; // r10
  int v29; // r8d
  __int64 v30; // rcx
  int v31; // eax
  int v33; // [rsp+68h] [rbp+10h]

  *a3 = 0;
  v10 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v10 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( (*(_DWORD *)(v10 + 288) & 0xF) == 0
         && (v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v12 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
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
    v10 = *(_QWORD *)(a1 + 40);
    v13 = -WindowBordersForDpi;
  }
  *a4 = *(_DWORD *)(v10 + 88) - v13;
  a4[2] = v13 + *(_DWORD *)(v10 + 96);
  a4[1] = *(_DWORD *)(v10 + 92) - v13;
  a4[3] = v13 + *(_DWORD *)(v10 + 100);
  v15 = *(_QWORD *)(a1 + 40);
  v33 = -*(_DWORD *)(v15 + 92);
  v16 = -*(_DWORD *)(v15 + 88);
  v17 = (*(char *)(v15 + 24) >> 7) & 0xB;
  DpiDependentMetric = GetDpiDependentMetric((unsigned int)(v17 + 12), WindowDpiLastNotify);
  v20 = GetDpiDependentMetric((unsigned int)(v17 + 13), WindowDpiLastNotify);
  if ( a2 != 5 )
  {
    v23 = *(_QWORD *)(a1 + 40);
    if ( a2 == 2 )
    {
      if ( (*(_BYTE *)(v23 + 30) & 2) == 0 && !a6 )
        goto LABEL_29;
      LOWORD(v16) = v16 + 2;
      a4[2] += -2 * DpiDependentMetric;
      v24 = a5;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) == 0 )
      {
        *a5 = 4;
        v22 = -4064;
        goto LABEL_21;
      }
    }
    else
    {
      if ( a2 != 3 )
      {
        if ( (*(_BYTE *)(v23 + 25) & 4) != 0 )
        {
          a4[2] -= DpiDependentMetric;
          *a5 = 11;
          *a3 = -3712;
        }
        goto LABEL_29;
      }
      if ( (*(_BYTE *)(v23 + 30) & 1) == 0 && !a6 )
        goto LABEL_29;
      a4[2] -= DpiDependentMetric;
      v24 = a5;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) == 0 )
      {
        *a5 = 14;
        v22 = -4048;
        goto LABEL_21;
      }
    }
    *v24 = 8;
    *a3 = -3808;
    goto LABEL_30;
  }
  if ( (unsigned int)xxxMNCanClose(a1, v19, v21) || a6 )
  {
    *a5 = (*(char *)(*(_QWORD *)(a1 + 40) + 24LL) >> 7) & 0x29;
    v22 = -4000;
LABEL_21:
    *a3 = v22;
  }
LABEL_29:
  if ( !*a3 )
  {
    v28 = v33;
    return (unsigned __int16)v16 | (v28 << 16);
  }
LABEL_30:
  v25 = a4[1];
  v26 = a4[2] - DpiDependentMetric;
  LOWORD(v16) = v26 + v16;
  v27 = a4[2] + 1;
  v28 = v25 + v33 + 2;
  v29 = v26 - 1;
  a4[2] = v27;
  *a4 = v26 - 1;
  a4[1] = v25 - 1;
  a4[3] = v20 + v25 + 1;
  v30 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v30 + 26) & 0x40) != 0 )
  {
    v31 = *(_DWORD *)(v30 + 88) + *(_DWORD *)(v30 + 96) - v29;
    a4[2] = v31;
    *a4 = v31 + v29 - v27;
  }
  return (unsigned __int16)v16 | (v28 << 16);
}
