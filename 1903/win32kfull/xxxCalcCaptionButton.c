/*
 * XREFs of xxxCalcCaptionButton @ 0x1C024423C
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C008616C (xxxGetTitleBarInfoEx.c)
 *     xxxTrackCaptionButton @ 0x1C02444F0 (xxxTrackCaptionButton.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x1C0092084 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     xxxMNCanClose @ 0x1C00A93A0 (xxxMNCanClose.c)
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
  __int64 v22; // r9
  __int16 v23; // ax
  __int64 v24; // rax
  int *v25; // rax
  int v26; // edx
  int v27; // eax
  int v28; // r9d
  unsigned __int16 v29; // r10
  int v30; // r8d
  __int64 v31; // rcx
  int v32; // eax
  int v34; // [rsp+68h] [rbp+10h]

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
                            *(unsigned int *)(v10 + 24),
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
  v34 = -*(_DWORD *)(v15 + 92);
  v16 = -*(_DWORD *)(v15 + 88);
  v17 = (*(char *)(v15 + 24) >> 7) & 0xB;
  DpiDependentMetric = GetDpiDependentMetric((unsigned int)(v17 + 12), WindowDpiLastNotify);
  v20 = GetDpiDependentMetric((unsigned int)(v17 + 13), WindowDpiLastNotify);
  if ( a2 != 5 )
  {
    v24 = *(_QWORD *)(a1 + 40);
    if ( a2 == 2 )
    {
      if ( (*(_BYTE *)(v24 + 30) & 2) == 0 && !a6 )
        goto LABEL_29;
      LOWORD(v16) = v16 + 2;
      a4[2] += -2 * DpiDependentMetric;
      v25 = a5;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) == 0 )
      {
        *a5 = 4;
        v23 = -4064;
        goto LABEL_21;
      }
    }
    else
    {
      if ( a2 != 3 )
      {
        if ( (*(_BYTE *)(v24 + 25) & 4) != 0 )
        {
          a4[2] -= DpiDependentMetric;
          *a5 = 11;
          *a3 = -3712;
        }
        goto LABEL_29;
      }
      if ( (*(_BYTE *)(v24 + 30) & 1) == 0 && !a6 )
        goto LABEL_29;
      a4[2] -= DpiDependentMetric;
      v25 = a5;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) == 0 )
      {
        *a5 = 14;
        v23 = -4048;
        goto LABEL_21;
      }
    }
    *v25 = 8;
    *a3 = -3808;
    goto LABEL_30;
  }
  if ( (unsigned int)xxxMNCanClose(a1, v19, v21, v22) || a6 )
  {
    *a5 = (*(char *)(*(_QWORD *)(a1 + 40) + 24LL) >> 7) & 0x29;
    v23 = -4000;
LABEL_21:
    *a3 = v23;
  }
LABEL_29:
  if ( !*a3 )
  {
    v29 = v34;
    return (unsigned __int16)v16 | (v29 << 16);
  }
LABEL_30:
  v26 = a4[1];
  v27 = a4[2] - DpiDependentMetric;
  LOWORD(v16) = v27 + v16;
  v28 = a4[2] + 1;
  v29 = v26 + v34 + 2;
  v30 = v27 - 1;
  a4[2] = v28;
  *a4 = v27 - 1;
  a4[1] = v26 - 1;
  a4[3] = v20 + v26 + 1;
  v31 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v31 + 26) & 0x40) != 0 )
  {
    v32 = *(_DWORD *)(v31 + 88) + *(_DWORD *)(v31 + 96) - v30;
    a4[2] = v32;
    *a4 = v32 + v30 - v28;
  }
  return (unsigned __int16)v16 | (v29 << 16);
}
