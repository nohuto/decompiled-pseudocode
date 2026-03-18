/*
 * XREFs of GetNewMonitor @ 0x1C006B820
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C002D690 (NtUserUpdateLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006F578 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00CBC74 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00146C4 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetMonitorTransform @ 0x1C0034A54 (GetMonitorTransform.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     GetInheritedMonitor @ 0x1C006BA24 (GetInheritedMonitor.c)
 *     ?HasMaximizedState@@YA_NPEAUtagWND@@@Z @ 0x1C006BEEC (-HasMaximizedState@@YA_NPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01E5864 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01E59A0 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     TransformRectAroundPoint @ 0x1C01E7554 (TransformRectAroundPoint.c)
 *     TransformVector @ 0x1C02061C0 (TransformVector.c)
 */

__int64 __fastcall GetNewMonitor(struct tagWND *a1, struct tagRECT *a2, _OWORD *a3)
{
  __int64 InheritedMonitor; // rbx
  __int64 v6; // r14
  __int64 v7; // rdi
  int v8; // r12d
  bool v9; // r13
  int v10; // r11d
  int v11; // r8d
  int v12; // edx
  BOOL v13; // r10d
  __int64 v14; // r9
  __m128i v15; // xmm6
  BOOL v16; // r13d
  _OWORD *v17; // rax
  struct tagMONITOR *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  struct tagRECT v23; // xmm0
  int v24; // r9d
  __int64 v26; // r10
  int v27; // [rsp+28h] [rbp-89h]
  struct tagRECT v29; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v30; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v31[64]; // [rsp+68h] [rbp-49h] BYREF
  struct tagRECT v32; // [rsp+A8h] [rbp-9h] BYREF

  InheritedMonitor = 0LL;
  v6 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  v29 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 664LL);
  v8 = 1;
  v9 = HasMaximizedState(a1);
  if ( v7 && *(struct tagWND **)(v7 + 16) == a1 )
  {
    v10 = 1;
    if ( *(int *)(v7 + 196) >= 0 )
    {
      v11 = 1;
      goto LABEL_42;
    }
  }
  else
  {
    v10 = 0;
  }
  v11 = 0;
  if ( !v10 )
  {
LABEL_4:
    v12 = 0;
    goto LABEL_5;
  }
LABEL_42:
  if ( *(int *)(v7 + 196) >= 0 )
    goto LABEL_4;
  v12 = 1;
LABEL_5:
  v13 = v11 && (*(_DWORD *)(v7 + 196) & 8) != 0 && v9;
  v14 = *((_QWORD *)a1 + 5);
  v15 = *(__m128i *)(v14 + 88);
  v32 = (struct tagRECT)v15;
  if ( a2 )
  {
    if ( !v11 )
      goto LABEL_36;
    v21 = *(_QWORD *)(v7 + 24) - *(_QWORD *)(v14 + 88);
    if ( !v21 )
      v21 = *(_QWORD *)(v7 + 32) - *(_QWORD *)(v14 + 96);
    if ( v21 )
    {
LABEL_36:
      v15 = *(__m128i *)a2;
      v32 = *a2;
    }
  }
  if ( v13 || !v11 || (unsigned int)(*(_DWORD *)(v7 + 176) - 9) > 1 )
    v8 = 0;
  v16 = !v11 && !v9;
  if ( v10 && (v11 || a2) )
  {
    v22 = *(_QWORD *)(v7 + 24) - v15.m128i_i64[0];
    if ( !v22 )
      v22 = *(_QWORD *)(v7 + 32) - _mm_srli_si128(v15, 8).m128i_u64[0];
    if ( v22 )
    {
      *(_DWORD *)(v7 + 196) |= 0x20000000u;
    }
    else
    {
      InheritedMonitor = *(_QWORD *)(v7 + 208);
      v12 = (*(_DWORD *)(v7 + 196) >> 3) & 1;
    }
  }
  if ( v12 )
  {
    v23 = *(struct tagRECT *)(v7 + 24);
    v29 = v23;
    if ( a2 )
      *a2 = v23;
  }
  v17 = a3;
  if ( a3 )
    *a3 = v15;
  if ( !InheritedMonitor )
  {
    InheritedMonitor = GetInheritedMonitor(a1);
    if ( !InheritedMonitor )
    {
      v19 = _MonitorFromWindowInternal(a1, 0, 1);
      InheritedMonitor = (__int64)v19;
      if ( !v19 )
        goto LABEL_32;
      if ( v6 && v19 != (struct tagMONITOR *)v6 && v8 )
      {
        v30 = (struct tagRECT)v15;
        memset(v31, 0, sizeof(v31));
        if ( (unsigned int)GetMonitorTransform(v6, (__int64)a1, (__int64)v31) )
        {
          TransformVector((unsigned int)v31, (unsigned int)&v30, (unsigned int)&v30.top, 0, 0);
          TransformVector((unsigned int)v31, (unsigned int)&v30.right, (unsigned int)&v30.bottom, v24, v24 & v27);
        }
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)v7,
          &v30,
          *(_WORD *)(*(_QWORD *)(v6 + 40) + 64LL),
          a2,
          &v29,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 64LL));
        if ( !(unsigned int)IsNewMonitorRectMostOccupied(
                              &v29,
                              (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                              (const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 28LL)) )
        {
          InheritedMonitor = 0LL;
          v29 = (struct tagRECT)v15;
        }
      }
      if ( !InheritedMonitor )
      {
LABEL_32:
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        {
          v20 = MonitorFromRect(&v32, 2u, 0);
          v15 = (__m128i)v32;
        }
        else
        {
          v20 = (__int64)_MonitorFromWindowInternal(a1, 2, 1);
        }
        InheritedMonitor = v20;
      }
    }
    v17 = a3;
  }
  if ( v17 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
      && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 640LL) & 0x2000000) == 0 )
    {
      if ( v6 )
      {
        if ( v6 != InheritedMonitor )
        {
          if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
          {
            if ( IsRectEmptyInl(&v29) )
            {
              if ( v8 )
              {
                TransformRectAroundCursor(
                  (struct _MOVESIZEDATA *)v7,
                  &v32,
                  *(_WORD *)(*(_QWORD *)(v6 + 40) + 64LL),
                  a2,
                  &v29,
                  *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 64LL));
              }
              else if ( v16 )
              {
                TransformRectAroundPoint(
                  (unsigned int)&v32,
                  *(unsigned __int16 *)(*(_QWORD *)(v6 + 40) + 64LL),
                  (_DWORD)a2,
                  (unsigned int)&v29,
                  *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 64LL),
                  *(_QWORD *)(v26 + 88));
              }
              if ( !IsRectEmptyInl(&v29)
                && !(unsigned int)IsNewMonitorRectMostOccupied(
                                    &v29,
                                    (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                                    (const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 28LL)) )
              {
                InheritedMonitor = v6;
                v29 = (struct tagRECT)v15;
              }
            }
            if ( !IsRectEmptyInl(&v29) )
              *a3 = v29;
          }
        }
      }
    }
  }
  return InheritedMonitor;
}
