/*
 * XREFs of DetectNewMonitor @ 0x1C01D1CDC
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01EAC18 (xxxDrawDragRectEx.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C001CCB8 (GetMonitorRectForWindow.c)
 *     GetInheritedMonitor @ 0x1C0042D58 (GetInheritedMonitor.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01D0E74 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01D0F9C (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 */

__int64 __fastcall DetectNewMonitor(struct tagWND **a1, struct tagRECT *a2)
{
  __int64 InheritedMonitor; // rax
  struct tagRECT v5; // xmm0
  struct tagWND *v6; // rax
  __int64 v7; // rdi
  struct tagWND *v8; // rax
  INT v9; // r8d
  INT v10; // r15d
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // esi
  INT v14; // eax
  INT v15; // r8d
  INT v16; // edi
  struct tagRECT *MonitorRectForWindow; // rax
  const struct tagWND *v18; // r8
  struct tagRECT v19; // xmm0
  __int64 v20; // r8
  LONG v21; // r8d
  int v22; // ecx
  __int64 v24[2]; // [rsp+30h] [rbp-59h] BYREF
  struct tagRECT v25; // [rsp+40h] [rbp-49h] BYREF
  struct tagWND *v26; // [rsp+50h] [rbp-39h] BYREF
  LONG left; // [rsp+58h] [rbp-31h] BYREF
  LONG top; // [rsp+5Ch] [rbp-2Dh]
  struct tagRECT v29; // [rsp+60h] [rbp-29h] BYREF
  _DWORD v30[4]; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v31; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v32; // [rsp+90h] [rbp+7h] BYREF

  InheritedMonitor = GetInheritedMonitor(a1[2]);
  v5 = *a2;
  v24[0] = InheritedMonitor;
  v26 = a1[26];
  v6 = a1[2];
  v32 = v5;
  v29 = v5;
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
      TransformRectAroundCursor(
        (struct _MOVESIZEDATA *)a1,
        &v32,
        *(_WORD *)(*((_QWORD *)v26 + 5) + 64LL),
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
          *(_QWORD *)&v31.left = v24[0];
          PhysicalToLogicalDPIPoint(v30, (char *)a1 + 308, v20, &v31);
          v21 = v30[1] + *((_DWORD *)a1 + 43);
          v25.left = v30[0] + *((_DWORD *)a1 + 42);
          v25.top = v21;
          v25.bottom = v29.bottom + v21 - v29.top;
          v25.right = v29.right + v25.left - v29.left;
        }
        v19 = v25;
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
      v11 = *(_QWORD *)(gpsi + 4960LL);
      if ( v31.right - v31.left <= *((_DWORD *)a1 + 26) )
        v10 = *((_DWORD *)a1 + 26);
      if ( v10 >= *((_DWORD *)a1 + 28) )
        v10 = *((_DWORD *)a1 + 28);
      v12 = HIDWORD(*(_QWORD *)(gpsi + 4960LL));
      v13 = v12;
      if ( v10 != v9 )
      {
        v14 = EngMulDiv(v11 - v32.left, v10, v9);
        LODWORD(v12) = HIDWORD(v11);
        v13 = HIDWORD(v11);
        v31.left = v11 - v14;
        v31.right = v11 - v14 + v10;
      }
      v15 = v31.bottom - v31.top;
      v16 = v31.bottom - v31.top;
      if ( v31.bottom - v31.top <= *((_DWORD *)a1 + 27) )
        v16 = *((_DWORD *)a1 + 27);
      if ( v16 >= *((_DWORD *)a1 + 29) )
        v16 = *((_DWORD *)a1 + 29);
      if ( v16 != v15 )
      {
        v31.top = v13 - EngMulDiv(v12 - v32.top, v16, v15);
        v31.bottom = v16 + v31.top;
      }
      MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(&v29, v24[0], a1[2]);
      v18 = a1[2];
      v25 = *MonitorRectForWindow;
      v29 = (struct tagRECT)*GetMonitorRectForWindow(&v29, (__int64)v26, v18);
      if ( IsNewMonitorRectMostOccupied(&v31, &v25, &v29) )
      {
        v19 = v31;
LABEL_26:
        v7 = v24[0];
        *a2 = v19;
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
