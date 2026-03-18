/*
 * XREFs of GetNewMonitor @ 0x1C002D640
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00274E8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00724D0 (NtUserUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E7FA8 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     GetInheritedMonitor @ 0x1C002D830 (GetInheritedMonitor.c)
 *     HasMaximizedState @ 0x1C002DC40 (HasMaximizedState.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetMonitorTransform @ 0x1C0073680 (GetMonitorTransform.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01ADDD4 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01ADEFC (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     TransformRectAroundPoint @ 0x1C01AFCE4 (TransformRectAroundPoint.c)
 *     TransformVector @ 0x1C01CBD34 (TransformVector.c)
 */

__int64 __fastcall GetNewMonitor(struct tagWND *a1, __m128i *a2, _OWORD *a3)
{
  __int64 InheritedMonitor; // rbx
  __int64 v6; // r14
  __int64 v7; // rdi
  int v8; // r12d
  int v9; // r13d
  int v10; // r11d
  int v11; // r8d
  int v12; // edx
  BOOL v13; // r10d
  __int64 v14; // r9
  __m128i v15; // xmm6
  BOOL v16; // r13d
  _OWORD *v17; // rax
  struct tagMONITOR *v19; // rax
  struct tagMONITOR *v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  struct tagRECT v23; // xmm0
  int v24; // r9d
  __int64 v25; // r10
  int v26; // [rsp+28h] [rbp-89h]
  struct tagRECT v28; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v29; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v30[64]; // [rsp+68h] [rbp-49h] BYREF
  struct tagRECT v31; // [rsp+A8h] [rbp-9h] BYREF

  InheritedMonitor = 0LL;
  v6 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  v28 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 664LL);
  v8 = 1;
  v9 = HasMaximizedState(a1);
  if ( v7 && *(struct tagWND **)(v7 + 16) == a1 )
  {
    v10 = 1;
    if ( *(int *)(v7 + 196) >= 0 )
    {
      v11 = 1;
      goto LABEL_40;
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
LABEL_40:
  if ( *(int *)(v7 + 196) >= 0 )
    goto LABEL_4;
  v12 = 1;
LABEL_5:
  v13 = v11 && (*(_DWORD *)(v7 + 196) & 8) != 0 && v9;
  v14 = *((_QWORD *)a1 + 5);
  v15 = *(__m128i *)(v14 + 88);
  v31 = (struct tagRECT)v15;
  if ( a2 )
  {
    if ( !v11 )
      goto LABEL_35;
    v21 = *(_QWORD *)(v7 + 24) - *(_QWORD *)(v14 + 88);
    if ( !v21 )
      v21 = *(_QWORD *)(v7 + 32) - *(_QWORD *)(v14 + 96);
    if ( v21 )
    {
LABEL_35:
      v15 = *a2;
      v31 = (struct tagRECT)*a2;
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
    v28 = v23;
    if ( a2 )
      *(struct tagRECT *)a2 = v23;
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
        goto LABEL_31;
      if ( v6 && v19 != (struct tagMONITOR *)v6 && v8 )
      {
        v29 = (struct tagRECT)v15;
        memset(v30, 0, sizeof(v30));
        if ( (unsigned int)GetMonitorTransform(v6, a1, v30) )
        {
          TransformVector((unsigned int)v30, (unsigned int)&v29, (unsigned int)&v29.top, 0, 0);
          TransformVector((unsigned int)v30, (unsigned int)&v29.right, (unsigned int)&v29.bottom, v24, v24 & v26);
        }
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)v7,
          &v29,
          *(_WORD *)(*(_QWORD *)(v6 + 40) + 64LL),
          (struct tagRECT *)a2,
          &v28,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 64LL));
        if ( !(unsigned int)IsNewMonitorRectMostOccupied(
                              &v28,
                              (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                              (const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 28LL)) )
        {
          InheritedMonitor = 0LL;
          v28 = (struct tagRECT)v15;
        }
      }
      if ( !InheritedMonitor )
      {
LABEL_31:
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        {
          v20 = (struct tagMONITOR *)MonitorFromRect(&v31);
          v15 = (__m128i)v31;
        }
        else
        {
          v20 = _MonitorFromWindowInternal(a1, 2u, 1);
        }
        InheritedMonitor = (__int64)v20;
      }
    }
    v17 = a3;
  }
  if ( v17
    && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
    && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 640LL) & 0x2000000) == 0
    && v6
    && v6 != InheritedMonitor
    && (unsigned int)IsTopLevelWindow(a1) )
  {
    if ( (unsigned int)IsRectEmptyInl(&v28) )
    {
      if ( v8 )
      {
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)v7,
          &v31,
          *(_WORD *)(*(_QWORD *)(v6 + 40) + 64LL),
          (struct tagRECT *)a2,
          &v28,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 64LL));
      }
      else if ( v16 )
      {
        TransformRectAroundPoint(
          (unsigned int)&v31,
          *(unsigned __int16 *)(*(_QWORD *)(v6 + 40) + 64LL),
          (_DWORD)a2,
          (unsigned int)&v28,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 64LL),
          *(_QWORD *)(v25 + 88));
      }
      if ( !(unsigned int)IsRectEmptyInl(&v28)
        && !(unsigned int)IsNewMonitorRectMostOccupied(
                            &v28,
                            (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                            (const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 28LL)) )
      {
        InheritedMonitor = v6;
        v28 = (struct tagRECT)v15;
      }
    }
    if ( !(unsigned int)IsRectEmptyInl(&v28) )
      *a3 = v28;
  }
  return InheritedMonitor;
}
