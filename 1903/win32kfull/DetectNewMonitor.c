/*
 * XREFs of DetectNewMonitor @ 0x1C01E6900
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0200980 (xxxDrawDragRectEx.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     GetMonitorRectForWindow @ 0x1C0095B2C (GetMonitorRectForWindow.c)
 *     GetInheritedMonitor @ 0x1C00CA354 (GetInheritedMonitor.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01E59E4 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01E5B20 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 */

__int64 __fastcall DetectNewMonitor(struct tagWND **a1, struct tagRECT *a2)
{
  __int64 InheritedMonitor; // rax
  struct tagRECT v5; // xmm0
  struct tagWND *v6; // rax
  __int64 v7; // rbx
  struct tagWND *v8; // rax
  INT v9; // r8d
  INT v10; // esi
  INT v11; // eax
  __int64 v12; // rbx
  INT v13; // r8d
  INT v14; // esi
  int v15; // ebx
  struct tagRECT *MonitorRectForWindow; // rax
  const struct tagWND *v17; // r8
  struct tagRECT v18; // xmm0
  __int64 v19; // rcx
  __int64 v20; // r8
  LONG v21; // r8d
  int v22; // ecx
  __int64 v24[2]; // [rsp+30h] [rbp-39h] BYREF
  struct tagRECT v25; // [rsp+40h] [rbp-29h] BYREF
  struct tagWND *v26; // [rsp+50h] [rbp-19h] BYREF
  LONG left; // [rsp+58h] [rbp-11h] BYREF
  LONG top; // [rsp+5Ch] [rbp-Dh]
  __int64 v29; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v30; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v31; // [rsp+80h] [rbp+17h] BYREF
  struct tagRECT v32; // [rsp+90h] [rbp+27h] BYREF

  InheritedMonitor = GetInheritedMonitor(a1[2]);
  v5 = *a2;
  v24[0] = InheritedMonitor;
  v26 = a1[26];
  v6 = a1[2];
  v32 = v5;
  v30 = v5;
  LogicalToPhysicalDPIRect(&v32, &v32, *(unsigned int *)(*((_QWORD *)v6 + 5) + 288LL), &v26);
  v7 = v24[0];
  if ( !v24[0] )
  {
    v7 = MonitorFromRect(&v32, 0, 0x12u);
    v24[0] = v7;
  }
  if ( v26 && v7 && v26 != (struct tagWND *)v7 )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 44) - 9) <= 1 )
    {
      v19 = *((_QWORD *)v26 + 5);
      *(_QWORD *)&v25.left = 0LL;
      *(_QWORD *)&v25.right = 0LL;
      TransformRectAroundCursor(
        (struct _MOVESIZEDATA *)a1,
        &v32,
        *(_WORD *)(v19 + 64),
        0LL,
        &v25,
        *(_WORD *)(*(_QWORD *)(v7 + 40) + 64LL));
      v7 = (__int64)v26;
      if ( IsNewMonitorRectMostOccupied(
             &v25,
             (const struct tagRECT *)(*(_QWORD *)(v24[0] + 40) + 28LL),
             (const struct tagRECT *)(*((_QWORD *)v26 + 5) + 28LL)) )
      {
        left = v25.left;
        top = v25.top;
        PhysicalToLogicalDPIPoint(&left, &left, *(unsigned int *)(*((_QWORD *)a1[2] + 5) + 288LL), v24);
        v25.left = left;
        v25.top = top;
        v20 = *(unsigned int *)(*((_QWORD *)a1[2] + 5) + 288LL);
        if ( (*(_DWORD *)(*((_QWORD *)a1[2] + 5) + 288LL) & 0xF) != 2 )
        {
          v29 = 0LL;
          *(_QWORD *)&v31.left = v24[0];
          PhysicalToLogicalDPIPoint(&v29, (char *)a1 + 308, v20, &v31);
          v21 = HIDWORD(v29) + *((_DWORD *)a1 + 43);
          v25.left = v29 + *((_DWORD *)a1 + 42);
          v25.top = v21;
          v25.bottom = v30.bottom + v21 - v30.top;
          v25.right = v30.right + v25.left - v30.left;
        }
        v18 = v25;
        goto LABEL_26;
      }
    }
    else
    {
      v8 = a1[2];
      v31 = v32;
      PhysicalToLogicalDPIRect(&v31, &v31, *(unsigned int *)(*((_QWORD *)v8 + 5) + 288LL), v24);
      v9 = v31.right - v31.left;
      v10 = v31.right - v31.left;
      if ( v31.right - v31.left <= *((_DWORD *)a1 + 26) )
        v10 = *((_DWORD *)a1 + 26);
      v11 = *((_DWORD *)a1 + 28);
      v12 = *(_QWORD *)(gpsi + 4960LL);
      v29 = v12;
      if ( v10 >= v11 )
        v10 = v11;
      if ( v10 != v9 )
      {
        v31.left = v12 - EngMulDiv(v12 - v32.left, v10, v9);
        v31.right = v31.left + v10;
      }
      v13 = v31.bottom - v31.top;
      v14 = v31.bottom - v31.top;
      if ( v31.bottom - v31.top <= *((_DWORD *)a1 + 27) )
        v14 = *((_DWORD *)a1 + 27);
      if ( v14 >= *((_DWORD *)a1 + 29) )
        v14 = *((_DWORD *)a1 + 29);
      if ( v14 != v13 )
      {
        v15 = HIDWORD(v29);
        v31.top = v15 - EngMulDiv(HIDWORD(v29) - v32.top, v14, v13);
        v31.bottom = v31.top + v14;
      }
      MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(&v30, v24[0], a1[2]);
      v17 = a1[2];
      v25 = *MonitorRectForWindow;
      v30 = (struct tagRECT)*GetMonitorRectForWindow(&v30, (__int64)v26, v17);
      if ( IsNewMonitorRectMostOccupied(&v31, &v25, &v30) )
      {
        v18 = v31;
LABEL_26:
        v7 = v24[0];
        *a2 = v18;
        goto LABEL_27;
      }
      v7 = (__int64)v26;
    }
  }
LABEL_27:
  if ( (struct tagWND *)v7 == a1[26] || !v7 )
    return 0LL;
  v22 = *((_DWORD *)a1 + 49);
  a1[26] = (struct tagWND *)v7;
  if ( (v22 & 0x20) == 0 )
    *((_DWORD *)a1 + 49) = v22 | 0x10000000;
  return 1LL;
}
