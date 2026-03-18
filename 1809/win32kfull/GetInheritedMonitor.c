/*
 * XREFs of GetInheritedMonitor @ 0x1C0042D58
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     GetNewMonitor @ 0x1C004259C (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01D1CDC (DetectNewMonitor.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     UnionRect @ 0x1C0079C20 (UnionRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C010E2B4 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     IsTitleWindow @ 0x1C010E410 (IsTitleWindow.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C010E464 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  unsigned int v1; // r15d
  __int64 v2; // rsi
  __int64 DesktopWindow; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 Prop; // rax
  unsigned int v10; // r10d
  __int64 v11; // r11
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // r14
  int v25; // eax
  int v26; // r12d
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r14
  int v31; // eax
  int v32; // r12d
  __int64 v33; // rcx
  int v34; // [rsp+20h] [rbp-50h]
  int v35; // [rsp+20h] [rbp-50h]
  _QWORD v36[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v37; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v38[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v39[2]; // [rsp+58h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( !*((_QWORD *)a1 + 10) )
    return v2;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v5 != DesktopWindow )
  {
    v6 = *(_QWORD *)(v5 + 40);
LABEL_4:
    v7 = *(_QWORD *)(v6 + 256);
    return ValidateHmonitorNoRip(v7);
  }
  Prop = GetProp(a1, (unsigned __int16)gatomMonitorInheritance, 1LL);
  if ( Prop )
  {
    if ( *(_QWORD *)a1 == Prop )
      return v2;
    v28 = ValidateHwnd(Prop);
    if ( !v28 )
      return v2;
    v6 = *(_QWORD *)(v28 + 40);
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
    || (unsigned int)IsTitleWindow(a1, 0LL)
    || (*(_BYTE *)(v11 + 20) & 0x40) != 0
    || (*(_DWORD *)(v11 + 232) & 0x8000) != 0 )
  {
    return v2;
  }
  v12 = *((_QWORD *)a1 + 12);
  if ( !v12 )
  {
LABEL_13:
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 8LL) + 6LL) & 1) != 0
      && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29C )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v36);
      if ( *(_QWORD *)v36[0] )
      {
        if ( v12 || (v12 = *(_QWORD *)(*(_QWORD *)v36[0] + 8LL)) != 0 )
          v12 &= -(__int64)((unsigned int)IntersectRect(
                                            &v37,
                                            (int *)(*((_QWORD *)a1 + 5) + 88LL),
                                            (int *)(*(_QWORD *)(v12 + 40) + 88LL)) != 0);
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v36, v29);
    }
    if ( v12 )
    {
      v2 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v12 + 40) + 256LL));
      if ( v2 )
        return v2;
    }
    v13 = *((_QWORD *)a1 + 9);
    v14 = *((_QWORD *)a1 + 8);
    v37 = v13;
    while ( 1 )
    {
      v36[0] = v14;
      do
      {
        if ( v13 )
        {
          v15 = *((_QWORD *)a1 + 5);
          v16 = *(_QWORD *)(v37 + 40);
          LOBYTE(v1) = ~*(_BYTE *)(v15 + 27);
          v34 = *(_BYTE *)(v15 + 27) & 8;
          v1 = (*(_BYTE *)(v15 + 26) >> 3) & (unsigned __int8)(v1 >> 5) & 1;
          if ( (*(_BYTE *)(v16 + 31) & 0x10) != 0
            && ((*(_BYTE *)(v16 + 16) & 8) != 0 || (*(_BYTE *)(v16 + 30) & 3) != 0)
            && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v16 + 104))
            && ((*(_BYTE *)(v16 + 26) & 8) == 0 || (*(_BYTE *)(v16 + 27) & 0x20) != 0)
            && (*(_QWORD *)(v18 + 432) == *(_QWORD *)(v19 + 432) || *(_QWORD *)(v18 + 424) == *(_QWORD *)(v19 + 424))
            && (((unsigned __int16)(*(_DWORD *)(v15 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v16 + 288) >> 8)) & 0x1FF) == 0 )
          {
            if ( !v20 && !v1 )
              goto LABEL_45;
            v30 = v15 + 88;
            v31 = IsAdjacentRect((const struct tagRECT *)v30, (const struct tagRECT *)(v16 + 88));
            v32 = v31;
            if ( !v34 || v31 || (unsigned int)IntersectRect(v38, (int *)v30, (int *)(v16 + 88)) )
            {
              if ( !v1 || v32 )
                goto LABEL_45;
              if ( (unsigned int)UnionRect(v38, v30, v16 + 88) )
              {
                v33 = v38[0] - *(_QWORD *)v30;
                if ( v38[0] == *(_QWORD *)v30 )
                  v33 = v38[1] - *(_QWORD *)(v30 + 8);
                if ( !v33 )
                  goto LABEL_45;
              }
            }
          }
          v14 = v36[0];
          v13 = *(_QWORD *)(v37 + 72);
          v37 = v13;
        }
        else if ( !v14 )
        {
          return v2;
        }
      }
      while ( !v14 );
      v17 = *((_QWORD *)a1 + 5);
      v16 = *(_QWORD *)(v14 + 40);
      LOBYTE(v1) = ~*(_BYTE *)(v17 + 27);
      v35 = *(_BYTE *)(v17 + 27) & 8;
      v1 = (*(_BYTE *)(v17 + 26) >> 3) & (unsigned __int8)(v1 >> 5) & 1;
      if ( (*(_BYTE *)(v16 + 31) & 0x10) != 0
        && ((*(_BYTE *)(v16 + 16) & 8) != 0 || (*(_BYTE *)(v16 + 30) & 3) != 0)
        && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v16 + 104))
        && ((*(_BYTE *)(v16 + 26) & 8) == 0 || (*(_BYTE *)(v16 + 27) & 0x20) != 0)
        && (*(_QWORD *)(v21 + 432) == *(_QWORD *)(v22 + 432) || *(_QWORD *)(v21 + 424) == *(_QWORD *)(v22 + 424))
        && (((unsigned __int16)(*(_DWORD *)(v16 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v17 + 288) >> 8)) & 0x1FF) == 0 )
      {
        if ( !v23 && !v1 )
          break;
        v24 = v17 + 88;
        v25 = IsAdjacentRect((const struct tagRECT *)v24, (const struct tagRECT *)(v16 + 88));
        v26 = v25;
        if ( !v35 || v25 || (unsigned int)IntersectRect(v39, (int *)v24, (int *)(v16 + 88)) )
        {
          if ( !v1 || v26 )
            break;
          if ( (unsigned int)UnionRect(v39, v24, v16 + 88) )
          {
            v27 = v39[0] - *(_QWORD *)v24;
            if ( v39[0] == *(_QWORD *)v24 )
              v27 = v39[1] - *(_QWORD *)(v24 + 8);
            if ( !v27 )
              break;
          }
        }
      }
      v13 = v37;
      v14 = *(_QWORD *)(v36[0] + 64LL);
    }
LABEL_45:
    v7 = *(_QWORD *)(v16 + 256);
    return ValidateHmonitorNoRip(v7);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL)
    || (((unsigned __int16)(v10 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL) >> 8)) & 0x1FF) == 0 )
  {
    do
    {
      if ( (unsigned int)IsCandidateTransformOwner((struct tagWND *)v12, a1) )
        break;
      v12 = *(_QWORD *)(v12 + 96);
    }
    while ( v12 );
    goto LABEL_13;
  }
  return 0LL;
}
