/*
 * XREFs of DetectNewMonitor @ 0x1C01AEDC4
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01C6034 (xxxDrawDragRectEx.c)
 * Callees:
 *     GetInheritedMonitor @ 0x1C002D830 (GetInheritedMonitor.c)
 *     HasMaximizedState @ 0x1C002DC40 (HasMaximizedState.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     GetMonitorTransform @ 0x1C0073680 (GetMonitorTransform.c)
 *     GetMonitorRectForWindow @ 0x1C0073764 (GetMonitorRectForWindow.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01ADDD4 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01ADEFC (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     TransformVector @ 0x1C01CBD34 (TransformVector.c)
 */

__int64 __fastcall DetectNewMonitor(struct tagWND **a1, struct tagRECT *a2)
{
  __int64 InheritedMonitor; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r9
  int v8; // r9d
  int v9; // eax
  __int64 v10; // r8
  LONG left; // edx
  int top; // r8d
  struct tagRECT v13; // xmm6
  int v14; // r9d
  unsigned __int64 v15; // r14
  INT v16; // r8d
  INT v17; // r12d
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r15
  INT v20; // eax
  INT v21; // r8d
  INT v22; // r14d
  struct tagRECT *MonitorRectForWindow; // rax
  const struct tagWND *v24; // r8
  int v25; // ecx
  int v27; // [rsp+28h] [rbp-99h]
  struct tagRECT v28; // [rsp+38h] [rbp-89h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-79h] BYREF
  struct tagRECT v30; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-59h] BYREF
  _BYTE v32[64]; // [rsp+78h] [rbp-49h] BYREF
  struct tagRECT v33; // [rsp+B8h] [rbp-9h] BYREF

  InheritedMonitor = GetInheritedMonitor(a1[2]);
  v5 = (__int64)a1[26];
  v30 = *a2;
  v33 = v30;
  v6 = InheritedMonitor;
  memset(v32, 0, sizeof(v32));
  if ( (unsigned int)GetMonitorTransform(v5, (__int64)a1[2], (__int64)v32) )
  {
    TransformVector((unsigned int)v32, (unsigned int)&v33, (unsigned int)&v33.top, 0, 0);
    TransformVector((unsigned int)v32, (unsigned int)&v33.right, (unsigned int)&v33.bottom, v8, v8 & v27);
  }
  if ( !v6 )
  {
    v6 = MonitorFromRect(&v33, 0LL, 18LL, v7);
    v9 = *((_DWORD *)a1 + 49);
    if ( (v9 & 0x2000000) == 0
      && ((v9 & 8) == 0 || !(unsigned int)HasMaximizedState((__int64)a1[2]))
      && v5
      && v6
      && v5 != v6 )
    {
      if ( (unsigned int)(*((_DWORD *)a1 + 44) - 9) > 1 )
      {
        v13 = v33;
        v28 = v33;
        memset(v32, 0, sizeof(v32));
        if ( (unsigned int)GetMonitorTransform(v6, (__int64)a1[2], (__int64)v32) )
        {
          TransformVector((unsigned int)v32, (unsigned int)&v28, (unsigned int)&v28.top, 0, 1);
          TransformVector((unsigned int)v32, (unsigned int)&v28.right, (unsigned int)&v28.bottom, v14, 1);
          v13 = v28;
        }
        v15 = *(_QWORD *)(gpsi + 4960LL);
        v29 = HIDWORD(v15);
        v31 = HIDWORD(v15);
        v16 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 8)) - _mm_cvtsi128_si32((__m128i)v13);
        v17 = v16;
        if ( v16 <= *((_DWORD *)a1 + 26) )
          v17 = *((_DWORD *)a1 + 26);
        if ( v17 >= *((_DWORD *)a1 + 28) )
          v17 = *((_DWORD *)a1 + 28);
        v18 = HIDWORD(v15);
        v19 = HIDWORD(v15);
        if ( v17 != v16 )
        {
          v20 = EngMulDiv(v15 - v33.left, v17, v16);
          LODWORD(v18) = v31;
          LODWORD(v19) = v29;
          v28.left = v15 - v20;
          v28.right = v15 - v20 + v17;
          v13 = v28;
        }
        v21 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 12)) - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 4));
        v22 = v21;
        if ( v21 <= *((_DWORD *)a1 + 27) )
          v22 = *((_DWORD *)a1 + 27);
        if ( v22 >= *((_DWORD *)a1 + 29) )
          v22 = *((_DWORD *)a1 + 29);
        if ( v22 != v21 )
        {
          v28.top = v19 - EngMulDiv(v18 - v33.top, v22, v21);
          v28.bottom = v22 + v28.top;
          v13 = v28;
        }
        MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(&v30, v6, a1[2]);
        v24 = a1[2];
        v33 = *MonitorRectForWindow;
        v30 = (struct tagRECT)*GetMonitorRectForWindow(&v30, v5, v24);
        if ( IsNewMonitorRectMostOccupied(&v28, &v33, &v30) )
        {
          *a2 = v13;
          goto LABEL_35;
        }
      }
      else
      {
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)a1,
          &v33,
          *(_WORD *)(*(_QWORD *)(v5 + 40) + 64LL),
          0LL,
          &v28,
          *(_WORD *)(*(_QWORD *)(v6 + 40) + 64LL));
        if ( IsNewMonitorRectMostOccupied(
               &v28,
               (const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 28LL),
               (const struct tagRECT *)(*(_QWORD *)(v5 + 40) + 28LL)) )
        {
          memset(v32, 0, sizeof(v32));
          if ( (unsigned int)GetMonitorTransform(v6, (__int64)a1[2], (__int64)v32) )
            TransformVector((unsigned int)v32, (unsigned int)&v28, (unsigned int)&v28.top, 0, 1);
          v10 = *(unsigned int *)(*((_QWORD *)a1[2] + 5) + 288LL);
          if ( (*(_DWORD *)(*((_QWORD *)a1[2] + 5) + 288LL) & 0xF) == 2 )
          {
            top = v28.top;
            left = v28.left;
          }
          else
          {
            v31 = v6;
            PhysicalToLogicalDPIPoint(&v29, (char *)a1 + 308, v10, &v31);
            left = *((_DWORD *)a1 + 42) + v29;
            top = *((_DWORD *)a1 + 43) + HIDWORD(v29);
            v28.top = top;
            v28.left = left;
          }
          v28.right = left + v30.right - v30.left;
          v28.bottom = top + v30.bottom - v30.top;
          *a2 = v28;
          goto LABEL_35;
        }
      }
      v6 = v5;
    }
  }
LABEL_35:
  if ( (struct tagWND *)v6 == a1[26] || !v6 )
    return 0LL;
  v25 = *((_DWORD *)a1 + 49);
  a1[26] = (struct tagWND *)v6;
  if ( (v25 & 0x20) == 0 )
    *((_DWORD *)a1 + 49) = v25 | 0x10000000;
  return 1LL;
}
